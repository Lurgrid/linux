// SPDX-License-Identifier: GPL-2.0
#include <test_progs.h>

/* TODO: corrupts other tests uses connect() */
void serial_test_probe_user(void) {
  static const char * const prog_names[] = {
    "handle_sys_connect",
#if defined(__s390x__)
    "handle_sys_socketcall",
#endif
  };
  enum {
    prog_count = ARRAY_SIZE(prog_names)
  };
  const char *obj_file = "./test_probe_user.bpf.o";
  DECLARE_LIBBPF_OPTS(bpf_object_open_opts, opts, );
  int err, results_map_fd, sock_fd, duration = 0;
  struct sockaddr curr, orig, tmp;
  struct sockaddr_in *in = (struct sockaddr_in *) &curr;
  struct bpf_link *kprobe_links[prog_count] = {};
  struct bpf_program *kprobe_progs[prog_count];
  struct bpf_object *obj;
  static const int zero = 0;
  size_t i;
  obj = bpf_object__open_file(obj_file, &opts);
  if (!ASSERT_OK_PTR(obj, "obj_open_file")) {
    return;
  }
  for (i = 0; i < prog_count; i++) {
    kprobe_progs[i]
      = bpf_object__find_program_by_name(obj, prog_names[i]);
    if (CHECK(!kprobe_progs[i], "find_probe",
        "prog '%s' not found\n", prog_names[i])) {
      goto cleanup;
    }
  }
  err = bpf_object__load(obj);
  if (CHECK(err, "obj_load", "err %d\n", err)) {
    goto cleanup;
  }
  results_map_fd = bpf_find_map(__func__, obj, "test_pro.bss");
  if (CHECK(results_map_fd < 0, "find_bss_map",
      "err %d\n", results_map_fd)) {
    goto cleanup;
  }
  for (i = 0; i < prog_count; i++) {
    kprobe_links[i] = bpf_program__attach(kprobe_progs[i]);
    if (!ASSERT_OK_PTR(kprobe_links[i], "attach_kprobe")) {
      goto cleanup;
    }
  }
  memset(&curr, 0, sizeof(curr));
  in->sin_family = AF_INET;
  in->sin_port = htons(5555);
  in->sin_addr.s_addr = inet_addr("255.255.255.255");
  memcpy(&orig, &curr, sizeof(curr));
  sock_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (CHECK(sock_fd < 0, "create_sock_fd", "err %d\n", sock_fd)) {
    goto cleanup;
  }
  connect(sock_fd, &curr, sizeof(curr));
  close(sock_fd);
  err = bpf_map_lookup_elem(results_map_fd, &zero, &tmp);
  if (CHECK(err, "get_kprobe_res",
      "failed to get kprobe res: %d\n", err)) {
    goto cleanup;
  }
  in = (struct sockaddr_in *) &tmp;
  if (CHECK(memcmp(&tmp, &orig, sizeof(orig)), "check_kprobe_res",
      "wrong kprobe res from probe read: %s:%u\n",
      inet_ntoa(in->sin_addr), ntohs(in->sin_port))) {
    goto cleanup;
  }
  memset(&tmp, 0xab, sizeof(tmp));
  in = (struct sockaddr_in *) &curr;
  if (CHECK(memcmp(&curr, &tmp, sizeof(tmp)), "check_kprobe_res",
      "wrong kprobe res from probe write: %s:%u\n",
      inet_ntoa(in->sin_addr), ntohs(in->sin_port))) {
    goto cleanup;
  }
cleanup:
  for (i = 0; i < prog_count; i++) {
    bpf_link__destroy(kprobe_links[i]);
  }
  bpf_object__close(obj);
}
