/*
 * Copyright 2019 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
#include "ctxgf100.h"

static void tu102_grctx_generate_r419c0c(struct gf100_gr *gr) {
  struct nvkm_device *device = gr->base.engine.subdev.device;
  nvkm_mask(device, 0x419c0c, 0x80000000, 0x80000000);
  nvkm_mask(device, 0x40584c, 0x00000008, 0x00000000);
  nvkm_mask(device, 0x400080, 0x00000000, 0x00000000);
}

static void tu102_grctx_generate_sm_id(struct gf100_gr *gr, int gpc, int tpc,
    int sm) {
  struct nvkm_device *device = gr->base.engine.subdev.device;
  tpc = gv100_gr_nonpes_aware_tpc(gr, gpc, tpc);
  nvkm_wr32(device, TPC_UNIT(gpc, tpc, 0x608), sm);
  nvkm_wr32(device, TPC_UNIT(gpc, tpc, 0x088), sm);
}

static const struct gf100_gr_init
    tu102_grctx_init_unknown_bundle_init_0[] = {
  { 0x00001000, 1, 0x00000001, 0x00000004 },
  { 0x00002020, 64, 0x00000001, 0x00000000 },
  { 0x0001e100, 1, 0x00000001, 0x00000001 },
  {}
};

static const struct gf100_gr_pack
    tu102_grctx_pack_sw_bundle64_init[] = {
  { tu102_grctx_init_unknown_bundle_init_0, .type = 64 },
  {}
};

void tu102_grctx_generate_unknown(struct gf100_gr_chan *chan, u64 addr,
    u32 size) {
  gf100_grctx_patch_wr32(chan, 0x408070, addr >> 8);
  gf100_grctx_patch_wr32(chan, 0x408074, size >> 8); /*XXX: guess */
  gf100_grctx_patch_wr32(chan, 0x419034, addr >> 8);
  gf100_grctx_patch_wr32(chan, 0x408078, 0x00000000);
}

const struct gf100_grctx_func
    tu102_grctx = {
  .main = gf100_grctx_generate_main,
  .unkn = gv100_grctx_generate_unkn,
  .sw_bundle64_init = tu102_grctx_pack_sw_bundle64_init,
  .bundle = gm107_grctx_generate_bundle,
  .bundle_size = 0x3000,
  .bundle_min_gpm_fifo_depth = 0x180,
  .bundle_token_limit = 0xa80,
  .pagepool = gp100_grctx_generate_pagepool,
  .pagepool_size = 0x20000,
  .attrib_cb_size = gp102_grctx_generate_attrib_cb_size,
  .attrib_cb = gv100_grctx_generate_attrib_cb,
  .attrib = gv100_grctx_generate_attrib,
  .attrib_nr_max = 0x800,
  .attrib_nr = 0x700,
  .unknown_size = 0x80000,
  .unknown = tu102_grctx_generate_unknown,
  .alpha_nr_max = 0xc00,
  .alpha_nr = 0x800,
  .gfxp_nr = 0xfa8,
  .sm_id = tu102_grctx_generate_sm_id,
  .skip_pd_num_tpc_per_gpc = true,
  .rop_mapping = gv100_grctx_generate_rop_mapping,
  .r406500 = gm200_grctx_generate_r406500,
  .r400088 = gv100_grctx_generate_r400088,
  .r419c0c = tu102_grctx_generate_r419c0c,
};
