/* SPDX-License-Identifier: MIT */
#ifndef __NVFW_LS_H__
#define __NVFW_LS_H__
#include <core/os.h>
struct nvkm_subdev;

struct nvfw_ls_desc_head {
  u32 descriptor_size;
  u32 image_size;
  u32 tools_version;
  u32 app_version;
  char date[64];
  u32 bootloader_start_offset;
  u32 bootloader_size;
  u32 bootloader_imem_offset;
  u32 bootloader_entry_point;
  u32 app_start_offset;
  u32 app_size;
  u32 app_imem_offset;
  u32 app_imem_entry;
  u32 app_dmem_offset;
  u32 app_resident_code_offset;
  u32 app_resident_code_size;
  u32 app_resident_data_offset;
  u32 app_resident_data_size;
};

struct nvfw_ls_desc {
  struct nvfw_ls_desc_head head;
  u32 nb_overlays;
  struct {
    u32 start;
    u32 size;
  } load_ovl[64];
  u32 compressed;
};

const struct nvfw_ls_desc *nvfw_ls_desc(struct nvkm_subdev *, const void *);

struct nvfw_ls_desc_v1 {
  struct nvfw_ls_desc_head head;
  u32 nb_imem_overlays;
  u32 nb_dmem_overlays;
  struct {
    u32 start;
    u32 size;
  } load_ovl[64];
  u32 compressed;
};

const struct nvfw_ls_desc_v1 *nvfw_ls_desc_v1(struct nvkm_subdev *,
    const void *);

struct nvfw_ls_desc_v2 {
  u32 descriptor_size;
  u32 image_size;
  u32 tools_version;
  u32 app_version;
  char date[64];
  u32 secure_bootloader;
  u32 bootloader_start_offset;
  u32 bootloader_size;
  u32 bootloader_imem_offset;
  u32 bootloader_entry_point;
  u32 app_start_offset;
  u32 app_size;
  u32 app_imem_offset;
  u32 app_imem_entry;
  u32 app_dmem_offset;
  u32 app_resident_code_offset;
  u32 app_resident_code_size;
  u32 app_resident_data_offset;
  u32 app_resident_data_size;
  u32 nb_imem_overlays;
  u32 nb_dmem_overlays;
  struct {
    u32 start;
    u32 size;
  } load_ovl[64];
};

const struct nvfw_ls_desc_v2 *nvfw_ls_desc_v2(struct nvkm_subdev *,
    const void *);

struct nvfw_ls_hsbl_bin_hdr {
  u32 bin_magic;
  u32 bin_ver;
  u32 bin_size;
  u32 header_offset;
};

const struct nvfw_ls_hsbl_bin_hdr *nvfw_ls_hsbl_bin_hdr(struct nvkm_subdev *,
    const void *);

struct nvfw_ls_hsbl_hdr {
  u32 sig_prod_offset;
  u32 sig_prod_size;
  u32 patch_loc;
  u32 patch_sig;
  u32 meta_data_offset;
  u32 meta_data_size;
  u32 num_sig;
};

const struct nvfw_ls_hsbl_hdr *nvfw_ls_hsbl_hdr(struct nvkm_subdev *,
    const void *);
#endif
