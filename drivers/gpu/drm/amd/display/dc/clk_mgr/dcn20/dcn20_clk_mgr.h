/*
 * Copyright 2018 Advanced Micro Devices, Inc.
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
 *
 * Authors: AMD
 *
 */

#ifndef __DCN20_CLK_MGR_H__
#define __DCN20_CLK_MGR_H__

void dcn2_update_clocks(struct clk_mgr *dccg,
    struct dc_state *context,
    bool safe_to_lower);

void dcn2_update_clocks_fpga(struct clk_mgr *clk_mgr,
    struct dc_state *context,
    bool safe_to_lower);
void dcn20_update_clocks_update_dpp_dto(struct clk_mgr_internal *clk_mgr,
    struct dc_state *context, bool safe_to_lower);

void dcn2_init_clocks(struct clk_mgr *clk_mgr);

void dcn20_clk_mgr_construct(struct dc_context *ctx,
    struct clk_mgr_internal *clk_mgr,
    struct pp_smu_funcs *pp_smu,
    struct dccg *dccg);

uint32_t dentist_get_did_from_divider(int divider);

void dcn2_get_clock(struct clk_mgr *clk_mgr,
    struct dc_state *context,
    enum dc_clock_type clock_type,
    struct dc_clock_config *clock_cfg);

void dcn20_update_clocks_update_dentist(struct clk_mgr_internal *clk_mgr,
    struct dc_state *context);

void dcn2_read_clocks_from_hw_dentist(struct clk_mgr *clk_mgr_base);

#endif //__DCN20_CLK_MGR_H__
