/*
 * Copyright (C) 2017  Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef _gc_9_0_DEFAULT_HEADER
#define _gc_9_0_DEFAULT_HEADER

// addressBlock: gc_grbmdec
#define mmGRBM_CNTL_DEFAULT                                                      \
  0x00000018
#define mmGRBM_SKEW_CNTL_DEFAULT                                                 \
  0x00000020
#define mmGRBM_STATUS2_DEFAULT                                                   \
  0x00000000
#define mmGRBM_PWR_CNTL_DEFAULT                                                  \
  0x00000000
#define mmGRBM_STATUS_DEFAULT                                                    \
  0x00000000
#define mmGRBM_STATUS_SE0_DEFAULT                                                \
  0x00000000
#define mmGRBM_STATUS_SE1_DEFAULT                                                \
  0x00000000
#define mmGRBM_SOFT_RESET_DEFAULT                                                \
  0x00000000
#define mmGRBM_CGTT_CLK_CNTL_DEFAULT                                             \
  0x00000100
#define mmGRBM_GFX_CLKEN_CNTL_DEFAULT                                            \
  0x00001008
#define mmGRBM_WAIT_IDLE_CLOCKS_DEFAULT                                          \
  0x00000030
#define mmGRBM_STATUS_SE2_DEFAULT                                                \
  0x00000000
#define mmGRBM_STATUS_SE3_DEFAULT                                                \
  0x00000000
#define mmGRBM_READ_ERROR_DEFAULT                                                \
  0x00000000
#define mmGRBM_READ_ERROR2_DEFAULT                                               \
  0x00000000
#define mmGRBM_INT_CNTL_DEFAULT                                                  \
  0x00000000
#define mmGRBM_TRAP_OP_DEFAULT                                                   \
  0x00000000
#define mmGRBM_TRAP_ADDR_DEFAULT                                                 \
  0x00000000
#define mmGRBM_TRAP_ADDR_MSK_DEFAULT                                             \
  0x0003ffff
#define mmGRBM_TRAP_WD_DEFAULT                                                   \
  0x00000000
#define mmGRBM_TRAP_WD_MSK_DEFAULT                                               \
  0xffffffff
#define mmGRBM_DSM_BYPASS_DEFAULT                                                \
  0x00000000
#define mmGRBM_WRITE_ERROR_DEFAULT                                               \
  0x00000000
#define mmGRBM_IOV_ERROR_DEFAULT                                                 \
  0x00000000
#define mmGRBM_CHIP_REVISION_DEFAULT                                             \
  0x00000000
#define mmGRBM_GFX_CNTL_DEFAULT                                                  \
  0x00000000
#define mmGRBM_RSMU_CFG_DEFAULT                                                  \
  0x00011000
#define mmGRBM_IH_CREDIT_DEFAULT                                                 \
  0x00010000
#define mmGRBM_PWR_CNTL2_DEFAULT                                                 \
  0x00010000
#define mmGRBM_UTCL2_INVAL_RANGE_START_DEFAULT                                   \
  0x00002891
#define mmGRBM_UTCL2_INVAL_RANGE_END_DEFAULT                                     \
  0x000028ea
#define mmGRBM_RSMU_READ_ERROR_DEFAULT                                           \
  0x00000000
#define mmGRBM_CHICKEN_BITS_DEFAULT                                              \
  0x00000000
#define mmGRBM_NOWHERE_DEFAULT                                                   \
  0x00000000
#define mmGRBM_SCRATCH_REG0_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG1_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG2_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG3_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG4_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG5_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG6_DEFAULT                                              \
  0x00000000
#define mmGRBM_SCRATCH_REG7_DEFAULT                                              \
  0x00000000

// addressBlock: gc_cpdec
#define mmCP_CPC_STATUS_DEFAULT                                                  \
  0x00000000
#define mmCP_CPC_BUSY_STAT_DEFAULT                                               \
  0x00000000
#define mmCP_CPC_STALLED_STAT1_DEFAULT                                           \
  0x00000000
#define mmCP_CPF_STATUS_DEFAULT                                                  \
  0x00000000
#define mmCP_CPF_BUSY_STAT_DEFAULT                                               \
  0x00000000
#define mmCP_CPF_STALLED_STAT1_DEFAULT                                           \
  0x00000000
#define mmCP_CPC_GRBM_FREE_COUNT_DEFAULT                                         \
  0x00000008
#define mmCP_MEC_CNTL_DEFAULT                                                    \
  0x50000000
#define mmCP_MEC_ME1_HEADER_DUMP_DEFAULT                                         \
  0x00000000
#define mmCP_MEC_ME2_HEADER_DUMP_DEFAULT                                         \
  0x00000000
#define mmCP_CPC_SCRATCH_INDEX_DEFAULT                                           \
  0x00000000
#define mmCP_CPC_SCRATCH_DATA_DEFAULT                                            \
  0x00000000
#define mmCP_CPF_GRBM_FREE_COUNT_DEFAULT                                         \
  0x00000004
#define mmCP_CPC_HALT_HYST_COUNT_DEFAULT                                         \
  0x00000002
#define mmCP_PRT_LOD_STATS_CNTL0_DEFAULT                                         \
  0x00000000
#define mmCP_PRT_LOD_STATS_CNTL1_DEFAULT                                         \
  0x00000000
#define mmCP_PRT_LOD_STATS_CNTL2_DEFAULT                                         \
  0x00000000
#define mmCP_PRT_LOD_STATS_CNTL3_DEFAULT                                         \
  0x00000000
#define mmCP_CE_COMPARE_COUNT_DEFAULT                                            \
  0x00000000
#define mmCP_CE_DE_COUNT_DEFAULT                                                 \
  0x00000000
#define mmCP_DE_CE_COUNT_DEFAULT                                                 \
  0x00000000
#define mmCP_DE_LAST_INVAL_COUNT_DEFAULT                                         \
  0x00000000
#define mmCP_DE_DE_COUNT_DEFAULT                                                 \
  0x00000000
#define mmCP_STALLED_STAT3_DEFAULT                                               \
  0x00000000
#define mmCP_STALLED_STAT1_DEFAULT                                               \
  0x00000000
#define mmCP_STALLED_STAT2_DEFAULT                                               \
  0x00000000
#define mmCP_BUSY_STAT_DEFAULT                                                   \
  0x00000000
#define mmCP_STAT_DEFAULT                                                        \
  0x00000000
#define mmCP_ME_HEADER_DUMP_DEFAULT                                              \
  0x00000000
#define mmCP_PFP_HEADER_DUMP_DEFAULT                                             \
  0x00000000
#define mmCP_GRBM_FREE_COUNT_DEFAULT                                             \
  0x00080808
#define mmCP_CE_HEADER_DUMP_DEFAULT                                              \
  0x00000000
#define mmCP_PFP_INSTR_PNTR_DEFAULT                                              \
  0x00000000
#define mmCP_ME_INSTR_PNTR_DEFAULT                                               \
  0x00000000
#define mmCP_CE_INSTR_PNTR_DEFAULT                                               \
  0x00000000
#define mmCP_MEC1_INSTR_PNTR_DEFAULT                                             \
  0x00000000
#define mmCP_MEC2_INSTR_PNTR_DEFAULT                                             \
  0x00000000
#define mmCP_CSF_STAT_DEFAULT                                                    \
  0x00000000
#define mmCP_ME_CNTL_DEFAULT                                                     \
  0x15000000
#define mmCP_CNTX_STAT_DEFAULT                                                   \
  0x00000000
#define mmCP_ME_PREEMPTION_DEFAULT                                               \
  0x00000000
#define mmCP_ROQ_THRESHOLDS_DEFAULT                                              \
  0x00003010
#define mmCP_MEQ_STQ_THRESHOLD_DEFAULT                                           \
  0x00000010
#define mmCP_RB2_RPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB1_RPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB0_RPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB_RPTR_DEFAULT                                                     \
  0x00000000
#define mmCP_RB_WPTR_DELAY_DEFAULT                                               \
  0x00000000
#define mmCP_RB_WPTR_POLL_CNTL_DEFAULT                                           \
  0x00400100
#define mmCP_ROQ1_THRESHOLDS_DEFAULT                                             \
  0x30101010
#define mmCP_ROQ2_THRESHOLDS_DEFAULT                                             \
  0x40403030
#define mmCP_STQ_THRESHOLDS_DEFAULT                                              \
  0x00804000
#define mmCP_QUEUE_THRESHOLDS_DEFAULT                                            \
  0x00002b16
#define mmCP_MEQ_THRESHOLDS_DEFAULT                                              \
  0x00008040
#define mmCP_ROQ_AVAIL_DEFAULT                                                   \
  0x00000000
#define mmCP_STQ_AVAIL_DEFAULT                                                   \
  0x00000000
#define mmCP_ROQ2_AVAIL_DEFAULT                                                  \
  0x00000000
#define mmCP_MEQ_AVAIL_DEFAULT                                                   \
  0x00000000
#define mmCP_CMD_INDEX_DEFAULT                                                   \
  0x00000000
#define mmCP_CMD_DATA_DEFAULT                                                    \
  0x00000000
#define mmCP_ROQ_RB_STAT_DEFAULT                                                 \
  0x00000000
#define mmCP_ROQ_IB1_STAT_DEFAULT                                                \
  0x00000000
#define mmCP_ROQ_IB2_STAT_DEFAULT                                                \
  0x00000000
#define mmCP_STQ_STAT_DEFAULT                                                    \
  0x00000000
#define mmCP_STQ_WR_STAT_DEFAULT                                                 \
  0x00000000
#define mmCP_MEQ_STAT_DEFAULT                                                    \
  0x00000000
#define mmCP_CEQ1_AVAIL_DEFAULT                                                  \
  0x00000000
#define mmCP_CEQ2_AVAIL_DEFAULT                                                  \
  0x00000000
#define mmCP_CE_ROQ_RB_STAT_DEFAULT                                              \
  0x00000000
#define mmCP_CE_ROQ_IB1_STAT_DEFAULT                                             \
  0x00000000
#define mmCP_CE_ROQ_IB2_STAT_DEFAULT                                             \
  0x00000000
#define mmCP_INT_STAT_DEBUG_DEFAULT                                              \
  0x00000000

// addressBlock: gc_padec
#define mmVGT_VTX_VECT_EJECT_REG_DEFAULT                                         \
  0x0000007d
#define mmVGT_DMA_DATA_FIFO_DEPTH_DEFAULT                                        \
  0x00040180
#define mmVGT_DMA_REQ_FIFO_DEPTH_DEFAULT                                         \
  0x00000020
#define mmVGT_DRAW_INIT_FIFO_DEPTH_DEFAULT                                       \
  0x00000020
#define mmVGT_LAST_COPY_STATE_DEFAULT                                            \
  0x00000000
#define mmVGT_CACHE_INVALIDATION_DEFAULT                                         \
  0x09000000
#define mmVGT_RESET_DEBUG_DEFAULT                                                \
  0x00000000
#define mmVGT_STRMOUT_DELAY_DEFAULT                                              \
  0x00092420
#define mmVGT_FIFO_DEPTHS_DEFAULT                                                \
  0x08000040
#define mmVGT_GS_VERTEX_REUSE_DEFAULT                                            \
  0x00000010
#define mmVGT_MC_LAT_CNTL_DEFAULT                                                \
  0x000000fe
#define mmIA_CNTL_STATUS_DEFAULT                                                 \
  0x00000000
#define mmVGT_CNTL_STATUS_DEFAULT                                                \
  0x00000000
#define mmWD_CNTL_STATUS_DEFAULT                                                 \
  0x00000000
#define mmCC_GC_PRIM_CONFIG_DEFAULT                                              \
  0x00000000
#define mmGC_USER_PRIM_CONFIG_DEFAULT                                            \
  0x00000000
#define mmWD_QOS_DEFAULT                                                         \
  0x00000000
#define mmWD_UTCL1_CNTL_DEFAULT                                                  \
  0x00000080
#define mmWD_UTCL1_STATUS_DEFAULT                                                \
  0x00000000
#define mmIA_UTCL1_CNTL_DEFAULT                                                  \
  0x00000080
#define mmIA_UTCL1_STATUS_DEFAULT                                                \
  0x00000000
#define mmVGT_SYS_CONFIG_DEFAULT                                                 \
  0x00000011
#define mmVGT_VS_MAX_WAVE_ID_DEFAULT                                             \
  0x000001ff
#define mmVGT_GS_MAX_WAVE_ID_DEFAULT                                             \
  0x000003ff
#define mmGFX_PIPE_CONTROL_DEFAULT                                               \
  0x00000000
#define mmCC_GC_SHADER_ARRAY_CONFIG_DEFAULT                                      \
  0x00000000
#define mmGC_USER_SHADER_ARRAY_CONFIG_DEFAULT                                    \
  0x00000000
#define mmVGT_DMA_PRIMITIVE_TYPE_DEFAULT                                         \
  0x00000000
#define mmVGT_DMA_CONTROL_DEFAULT                                                \
  0x000000ff
#define mmVGT_DMA_LS_HS_CONFIG_DEFAULT                                           \
  0x00000000
#define mmWD_BUF_RESOURCE_1_DEFAULT                                              \
  0x00000000
#define mmWD_BUF_RESOURCE_2_DEFAULT                                              \
  0x00000000
#define mmPA_CL_CNTL_STATUS_DEFAULT                                              \
  0x00000000
#define mmPA_CL_ENHANCE_DEFAULT                                                  \
  0x00000007
#define mmPA_CL_RESET_DEBUG_DEFAULT                                              \
  0x00000000
#define mmPA_SU_CNTL_STATUS_DEFAULT                                              \
  0x00000000
#define mmPA_SC_FIFO_DEPTH_CNTL_DEFAULT                                          \
  0x00000100
#define mmPA_SC_P3D_TRAP_SCREEN_HV_LOCK_DEFAULT                                  \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_HV_LOCK_DEFAULT                                 \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_HV_LOCK_DEFAULT                                      \
  0x00000000
#define mmPA_SC_FORCE_EOV_MAX_CNTS_DEFAULT                                       \
  0x00ffffff
#define mmPA_SC_BINNER_EVENT_CNTL_0_DEFAULT                                      \
  0x842a4402
#define mmPA_SC_BINNER_EVENT_CNTL_1_DEFAULT                                      \
  0x8a000008
#define mmPA_SC_BINNER_EVENT_CNTL_2_DEFAULT                                      \
  0x9118aaa8
#define mmPA_SC_BINNER_EVENT_CNTL_3_DEFAULT                                      \
  0x82400025
#define mmPA_SC_BINNER_TIMEOUT_COUNTER_DEFAULT                                   \
  0x00000000
#define mmPA_SC_BINNER_PERF_CNTL_0_DEFAULT                                       \
  0x00000000
#define mmPA_SC_BINNER_PERF_CNTL_1_DEFAULT                                       \
  0x00000000
#define mmPA_SC_BINNER_PERF_CNTL_2_DEFAULT                                       \
  0x00000000
#define mmPA_SC_BINNER_PERF_CNTL_3_DEFAULT                                       \
  0x00000000
#define mmPA_SC_FIFO_SIZE_DEFAULT                                                \
  0x00000000
#define mmPA_SC_IF_FIFO_SIZE_DEFAULT                                             \
  0x00000000
#define mmPA_SC_PKR_WAVE_TABLE_CNTL_DEFAULT                                      \
  0x00000000
#define mmPA_UTCL1_CNTL1_DEFAULT                                                 \
  0x00000600
#define mmPA_UTCL1_CNTL2_DEFAULT                                                 \
  0x00000000
#define mmPA_SIDEBAND_REQUEST_DELAYS_DEFAULT                                     \
  0x08000020
#define mmPA_SC_ENHANCE_DEFAULT                                                  \
  0x00000001
#define mmPA_SC_ENHANCE_1_DEFAULT                                                \
  0x00040000
#define mmPA_SC_DSM_CNTL_DEFAULT                                                 \
  0x00000000
#define mmPA_SC_TILE_STEERING_CREST_OVERRIDE_DEFAULT                             \
  0x00000000

// addressBlock: gc_sqdec
#define mmSQ_CONFIG_DEFAULT                                                      \
  0x01180000
#define mmSQC_CONFIG_DEFAULT                                                     \
  0x010a2000
#define mmLDS_CONFIG_DEFAULT                                                     \
  0x00000000
#define mmSQ_RANDOM_WAVE_PRI_DEFAULT                                             \
  0x0000007f
#define mmSQ_REG_CREDITS_DEFAULT                                                 \
  0x00000820
#define mmSQ_FIFO_SIZES_DEFAULT                                                  \
  0x00000f01
#define mmSQ_DSM_CNTL_DEFAULT                                                    \
  0x00000000
#define mmSQ_DSM_CNTL2_DEFAULT                                                   \
  0x00000000
#define mmSQ_RUNTIME_CONFIG_DEFAULT                                              \
  0x00000000
#define mmSH_MEM_BASES_DEFAULT                                                   \
  0x00000000
#define mmSH_MEM_CONFIG_DEFAULT                                                  \
  0x00000000
#define mmCC_GC_SHADER_RATE_CONFIG_DEFAULT                                       \
  0x00000000
#define mmGC_USER_SHADER_RATE_CONFIG_DEFAULT                                     \
  0x00000000
#define mmSQ_INTERRUPT_AUTO_MASK_DEFAULT                                         \
  0x00ffffff
#define mmSQ_INTERRUPT_MSG_CTRL_DEFAULT                                          \
  0x00000000
#define mmSQ_UTCL1_CNTL1_DEFAULT                                                 \
  0x00000580
#define mmSQ_UTCL1_CNTL2_DEFAULT                                                 \
  0x00000000
#define mmSQ_UTCL1_STATUS_DEFAULT                                                \
  0x00000000
#define mmSQ_SHADER_TBA_LO_DEFAULT                                               \
  0x00000000
#define mmSQ_SHADER_TBA_HI_DEFAULT                                               \
  0x00000000
#define mmSQ_SHADER_TMA_LO_DEFAULT                                               \
  0x00000000
#define mmSQ_SHADER_TMA_HI_DEFAULT                                               \
  0x00000000
#define mmSQC_DSM_CNTL_DEFAULT                                                   \
  0x00000000
#define mmSQC_DSM_CNTLA_DEFAULT                                                  \
  0x00000000
#define mmSQC_DSM_CNTLB_DEFAULT                                                  \
  0x00000000
#define mmSQC_DSM_CNTL2_DEFAULT                                                  \
  0x00000000
#define mmSQC_DSM_CNTL2A_DEFAULT                                                 \
  0x00000000
#define mmSQC_DSM_CNTL2B_DEFAULT                                                 \
  0x00000000
#define mmSQC_EDC_FUE_CNTL_DEFAULT                                               \
  0x00000000
#define mmSQC_EDC_CNT2_DEFAULT                                                   \
  0x00000000
#define mmSQC_EDC_CNT3_DEFAULT                                                   \
  0x00000000
#define mmSQ_REG_TIMESTAMP_DEFAULT                                               \
  0x00000000
#define mmSQ_CMD_TIMESTAMP_DEFAULT                                               \
  0x00000000
#define mmSQ_IND_INDEX_DEFAULT                                                   \
  0x00000000
#define mmSQ_IND_DATA_DEFAULT                                                    \
  0x00000000
#define mmSQ_CMD_DEFAULT                                                         \
  0x00000000
#define mmSQ_TIME_HI_DEFAULT                                                     \
  0x00000000
#define mmSQ_TIME_LO_DEFAULT                                                     \
  0x00000000
#define mmSQ_DS_0_DEFAULT                                                        \
  0x00000000
#define mmSQ_DS_1_DEFAULT                                                        \
  0x00000000
#define mmSQ_EXP_0_DEFAULT                                                       \
  0x00000000
#define mmSQ_EXP_1_DEFAULT                                                       \
  0x00000000
#define mmSQ_FLAT_0_DEFAULT                                                      \
  0x00000000
#define mmSQ_FLAT_1_DEFAULT                                                      \
  0x00000000
#define mmSQ_GLBL_0_DEFAULT                                                      \
  0x00000000
#define mmSQ_GLBL_1_DEFAULT                                                      \
  0x00000000
#define mmSQ_INST_DEFAULT                                                        \
  0x00000000
#define mmSQ_MIMG_0_DEFAULT                                                      \
  0x00000000
#define mmSQ_MIMG_1_DEFAULT                                                      \
  0x00000000
#define mmSQ_MTBUF_0_DEFAULT                                                     \
  0x00000000
#define mmSQ_MTBUF_1_DEFAULT                                                     \
  0x00000000
#define mmSQ_MUBUF_0_DEFAULT                                                     \
  0x00000000
#define mmSQ_MUBUF_1_DEFAULT                                                     \
  0x00000000
#define mmSQ_SCRATCH_0_DEFAULT                                                   \
  0x00000000
#define mmSQ_SCRATCH_1_DEFAULT                                                   \
  0x00000000
#define mmSQ_SMEM_0_DEFAULT                                                      \
  0x00000000
#define mmSQ_SMEM_1_DEFAULT                                                      \
  0x00000000
#define mmSQ_SOP1_DEFAULT                                                        \
  0x00000000
#define mmSQ_SOP2_DEFAULT                                                        \
  0x00000000
#define mmSQ_SOPC_DEFAULT                                                        \
  0x00000000
#define mmSQ_SOPK_DEFAULT                                                        \
  0x00000000
#define mmSQ_SOPP_DEFAULT                                                        \
  0x00000000
#define mmSQ_VINTRP_DEFAULT                                                      \
  0x00000000
#define mmSQ_VOP1_DEFAULT                                                        \
  0x00000000
#define mmSQ_VOP2_DEFAULT                                                        \
  0x00000000
#define mmSQ_VOP3P_0_DEFAULT                                                     \
  0x00000000
#define mmSQ_VOP3P_1_DEFAULT                                                     \
  0x00000000
#define mmSQ_VOP3_0_DEFAULT                                                      \
  0x00000000
#define mmSQ_VOP3_0_SDST_ENC_DEFAULT                                             \
  0x00000000
#define mmSQ_VOP3_1_DEFAULT                                                      \
  0x00000000
#define mmSQ_VOPC_DEFAULT                                                        \
  0x00000000
#define mmSQ_VOP_DPP_DEFAULT                                                     \
  0x00000000
#define mmSQ_VOP_SDWA_DEFAULT                                                    \
  0x00000000
#define mmSQ_VOP_SDWA_SDST_ENC_DEFAULT                                           \
  0x00000000
#define mmSQ_LB_CTR_CTRL_DEFAULT                                                 \
  0x00000000
#define mmSQ_LB_DATA0_DEFAULT                                                    \
  0x00000000
#define mmSQ_LB_DATA1_DEFAULT                                                    \
  0x00000000
#define mmSQ_LB_DATA2_DEFAULT                                                    \
  0x00000000
#define mmSQ_LB_DATA3_DEFAULT                                                    \
  0x00000000
#define mmSQ_LB_CTR_SEL_DEFAULT                                                  \
  0x00000000
#define mmSQ_LB_CTR0_CU_DEFAULT                                                  \
  0xffffffff
#define mmSQ_LB_CTR1_CU_DEFAULT                                                  \
  0xffffffff
#define mmSQ_LB_CTR2_CU_DEFAULT                                                  \
  0xffffffff
#define mmSQ_LB_CTR3_CU_DEFAULT                                                  \
  0xffffffff
#define mmSQC_EDC_CNT_DEFAULT                                                    \
  0x00000000
#define mmSQ_EDC_SEC_CNT_DEFAULT                                                 \
  0x00000000
#define mmSQ_EDC_DED_CNT_DEFAULT                                                 \
  0x00000000
#define mmSQ_EDC_INFO_DEFAULT                                                    \
  0x00000000
#define mmSQ_EDC_CNT_DEFAULT                                                     \
  0x00000000
#define mmSQ_EDC_FUE_CNTL_DEFAULT                                                \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_CMN_DEFAULT                                       \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_EVENT_DEFAULT                                     \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_INST_DEFAULT                                      \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_INST_PC_1_OF_2_DEFAULT                            \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_INST_USERDATA_1_OF_2_DEFAULT                      \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_ISSUE_DEFAULT                                     \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_MISC_DEFAULT                                      \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_PERF_1_OF_2_DEFAULT                               \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_REG_1_OF_2_DEFAULT                                \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_REG_2_OF_2_DEFAULT                                \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_REG_CS_1_OF_2_DEFAULT                             \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_REG_CS_2_OF_2_DEFAULT                             \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_TIMESTAMP_1_OF_2_DEFAULT                          \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_WAVE_DEFAULT                                      \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_WAVE_START_DEFAULT                                \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_INST_PC_2_OF_2_DEFAULT                            \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_INST_USERDATA_2_OF_2_DEFAULT                      \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_PERF_2_OF_2_DEFAULT                               \
  0x00000000
#define mmSQ_THREAD_TRACE_WORD_TIMESTAMP_2_OF_2_DEFAULT                          \
  0x00000000
#define mmSQ_WREXEC_EXEC_HI_DEFAULT                                              \
  0x00000000
#define mmSQ_WREXEC_EXEC_LO_DEFAULT                                              \
  0x00000000
#define mmSQ_BUF_RSRC_WORD0_DEFAULT                                              \
  0x00000000
#define mmSQ_BUF_RSRC_WORD1_DEFAULT                                              \
  0x00000000
#define mmSQ_BUF_RSRC_WORD2_DEFAULT                                              \
  0x00000000
#define mmSQ_BUF_RSRC_WORD3_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD0_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD1_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD2_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD3_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD4_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD5_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD6_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_RSRC_WORD7_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_SAMP_WORD0_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_SAMP_WORD1_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_SAMP_WORD2_DEFAULT                                              \
  0x00000000
#define mmSQ_IMG_SAMP_WORD3_DEFAULT                                              \
  0x00000000
#define mmSQ_FLAT_SCRATCH_WORD0_DEFAULT                                          \
  0x00000000
#define mmSQ_FLAT_SCRATCH_WORD1_DEFAULT                                          \
  0x00000000
#define mmSQ_M0_GPR_IDX_WORD_DEFAULT                                             \
  0x00000000
#define mmSQC_ICACHE_UTCL1_CNTL1_DEFAULT                                         \
  0x00000480
#define mmSQC_ICACHE_UTCL1_CNTL2_DEFAULT                                         \
  0x00000000
#define mmSQC_DCACHE_UTCL1_CNTL1_DEFAULT                                         \
  0x00000500
#define mmSQC_DCACHE_UTCL1_CNTL2_DEFAULT                                         \
  0x00000000
#define mmSQC_ICACHE_UTCL1_STATUS_DEFAULT                                        \
  0x00000000
#define mmSQC_DCACHE_UTCL1_STATUS_DEFAULT                                        \
  0x00000000

// addressBlock: gc_shsdec
#define mmSX_DEBUG_BUSY_DEFAULT                                                  \
  0x00000000
#define mmSX_DEBUG_BUSY_2_DEFAULT                                                \
  0x00000000
#define mmSX_DEBUG_BUSY_3_DEFAULT                                                \
  0x00000000
#define mmSX_DEBUG_BUSY_4_DEFAULT                                                \
  0x00000000
#define mmSX_DEBUG_BUSY_5_DEFAULT                                                \
  0x00000000
#define mmSX_DEBUG_1_DEFAULT                                                     \
  0x00000020
#define mmSPI_PS_MAX_WAVE_ID_DEFAULT                                             \
  0x0200017f
#define mmSPI_START_PHASE_DEFAULT                                                \
  0x00000000
#define mmSPI_GFX_CNTL_DEFAULT                                                   \
  0x00000000
#define mmSPI_DEBUG_READ_DEFAULT                                                 \
  0x00000000
#define mmSPI_DSM_CNTL_DEFAULT                                                   \
  0x00000000
#define mmSPI_DSM_CNTL2_DEFAULT                                                  \
  0x00000000
#define mmSPI_EDC_CNT_DEFAULT                                                    \
  0x00000000
#define mmSPI_DEBUG_BUSY_DEFAULT                                                 \
  0x00000000
#define mmSPI_CONFIG_PS_CU_EN_DEFAULT                                            \
  0x00000000
#define mmSPI_WF_LIFETIME_CNTL_DEFAULT                                           \
  0x00000000
#define mmSPI_WF_LIFETIME_LIMIT_0_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_1_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_2_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_3_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_4_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_5_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_6_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_7_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_8_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_LIMIT_9_DEFAULT                                        \
  0x00000100
#define mmSPI_WF_LIFETIME_STATUS_0_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_1_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_2_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_3_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_4_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_5_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_6_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_7_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_8_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_9_DEFAULT                                       \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_10_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_11_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_12_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_13_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_14_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_15_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_16_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_17_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_18_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_19_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_STATUS_20_DEFAULT                                      \
  0x00000000
#define mmSPI_WF_LIFETIME_DEBUG_DEFAULT                                          \
  0x00000000
#define mmSPI_LB_CTR_CTRL_DEFAULT                                                \
  0x00000000
#define mmSPI_LB_CU_MASK_DEFAULT                                                 \
  0x0000ffff
#define mmSPI_LB_DATA_REG_DEFAULT                                                \
  0x00000000
#define mmSPI_PG_ENABLE_STATIC_CU_MASK_DEFAULT                                   \
  0x0000ffff
#define mmSPI_GDS_CREDITS_DEFAULT                                                \
  0x00001080
#define mmSPI_SX_EXPORT_BUFFER_SIZES_DEFAULT                                     \
  0x08000400
#define mmSPI_SX_SCOREBOARD_BUFFER_SIZES_DEFAULT                                 \
  0x00200040
#define mmSPI_CSQ_WF_ACTIVE_STATUS_DEFAULT                                       \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_0_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_1_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_2_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_3_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_4_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_5_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_6_DEFAULT                                      \
  0x00000000
#define mmSPI_CSQ_WF_ACTIVE_COUNT_7_DEFAULT                                      \
  0x00000000
#define mmSPI_LB_DATA_WAVES_DEFAULT                                              \
  0x00000000
#define mmSPI_LB_DATA_PERCU_WAVE_HSGS_DEFAULT                                    \
  0x00000000
#define mmSPI_LB_DATA_PERCU_WAVE_VSPS_DEFAULT                                    \
  0x00000000
#define mmSPI_LB_DATA_PERCU_WAVE_CS_DEFAULT                                      \
  0x00000000
#define mmSPIS_DEBUG_READ_DEFAULT                                                \
  0x00000000
#define mmBCI_DEBUG_READ_DEFAULT                                                 \
  0x00000000
#define mmSPI_P0_TRAP_SCREEN_PSBA_LO_DEFAULT                                     \
  0x00000000
#define mmSPI_P0_TRAP_SCREEN_PSBA_HI_DEFAULT                                     \
  0x00000000
#define mmSPI_P0_TRAP_SCREEN_PSMA_LO_DEFAULT                                     \
  0x00000000
#define mmSPI_P0_TRAP_SCREEN_PSMA_HI_DEFAULT                                     \
  0x00000000
#define mmSPI_P0_TRAP_SCREEN_GPR_MIN_DEFAULT                                     \
  0x00000000
#define mmSPI_P1_TRAP_SCREEN_PSBA_LO_DEFAULT                                     \
  0x00000000
#define mmSPI_P1_TRAP_SCREEN_PSBA_HI_DEFAULT                                     \
  0x00000000
#define mmSPI_P1_TRAP_SCREEN_PSMA_LO_DEFAULT                                     \
  0x00000000
#define mmSPI_P1_TRAP_SCREEN_PSMA_HI_DEFAULT                                     \
  0x00000000
#define mmSPI_P1_TRAP_SCREEN_GPR_MIN_DEFAULT                                     \
  0x00000000

// addressBlock: gc_tpdec
#define mmTD_CNTL_DEFAULT                                                        \
  0x00000000
#define mmTD_STATUS_DEFAULT                                                      \
  0x00000000
#define mmTD_DSM_CNTL_DEFAULT                                                    \
  0x00000000
#define mmTD_DSM_CNTL2_DEFAULT                                                   \
  0x00000000
#define mmTD_SCRATCH_DEFAULT                                                     \
  0x00000000
#define mmTA_CNTL_DEFAULT                                                        \
  0x8004d850
#define mmTA_CNTL_AUX_DEFAULT                                                    \
  0x00000000
#define mmTA_RESERVED_010C_DEFAULT                                               \
  0x00000000
#define mmTA_STATUS_DEFAULT                                                      \
  0x00000000
#define mmTA_SCRATCH_DEFAULT                                                     \
  0x00000000

// addressBlock: gc_gdsdec
#define mmGDS_CONFIG_DEFAULT                                                     \
  0x00000000
#define mmGDS_CNTL_STATUS_DEFAULT                                                \
  0x00000000
#define mmGDS_ENHANCE2_DEFAULT                                                   \
  0x00000000
#define mmGDS_PROTECTION_FAULT_DEFAULT                                           \
  0x00000000
#define mmGDS_VM_PROTECTION_FAULT_DEFAULT                                        \
  0x00000000
#define mmGDS_EDC_CNT_DEFAULT                                                    \
  0x00000000
#define mmGDS_EDC_GRBM_CNT_DEFAULT                                               \
  0x00000000
#define mmGDS_EDC_OA_DED_DEFAULT                                                 \
  0x00000000
#define mmGDS_DSM_CNTL_DEFAULT                                                   \
  0x00000000
#define mmGDS_EDC_OA_PHY_CNT_DEFAULT                                             \
  0x00000000
#define mmGDS_EDC_OA_PIPE_CNT_DEFAULT                                            \
  0x00000000
#define mmGDS_DSM_CNTL2_DEFAULT                                                  \
  0x00000000
#define mmGDS_WD_GDS_CSB_DEFAULT                                                 \
  0x00000000

// addressBlock: gc_rbdec
#define mmDB_DEBUG_DEFAULT                                                       \
  0x00000000
#define mmDB_DEBUG2_DEFAULT                                                      \
  0x00000000
#define mmDB_DEBUG3_DEFAULT                                                      \
  0x00000000
#define mmDB_DEBUG4_DEFAULT                                                      \
  0x00000000
#define mmDB_CREDIT_LIMIT_DEFAULT                                                \
  0x00000000
#define mmDB_WATERMARKS_DEFAULT                                                  \
  0x01020204
#define mmDB_SUBTILE_CONTROL_DEFAULT                                             \
  0x00000000
#define mmDB_FREE_CACHELINES_DEFAULT                                             \
  0x00000000
#define mmDB_FIFO_DEPTH1_DEFAULT                                                 \
  0x00000000
#define mmDB_FIFO_DEPTH2_DEFAULT                                                 \
  0x00000000
#define mmDB_EXCEPTION_CONTROL_DEFAULT                                           \
  0x00000000
#define mmDB_RING_CONTROL_DEFAULT                                                \
  0x00000001
#define mmDB_MEM_ARB_WATERMARKS_DEFAULT                                          \
  0x04040404
#define mmDB_RMI_CACHE_POLICY_DEFAULT                                            \
  0x0f0f0f07
#define mmDB_DFSM_CONFIG_DEFAULT                                                 \
  0x00007f00
#define mmDB_DFSM_WATERMARK_DEFAULT                                              \
  0x00640064
#define mmDB_DFSM_TILES_IN_FLIGHT_DEFAULT                                        \
  0x05dc03e8
#define mmDB_DFSM_PRIMS_IN_FLIGHT_DEFAULT                                        \
  0x00fa00c8
#define mmDB_DFSM_WATCHDOG_DEFAULT                                               \
  0x000f4240
#define mmDB_DFSM_FLUSH_ENABLE_DEFAULT                                           \
  0x000003ff
#define mmDB_DFSM_FLUSH_AUX_EVENT_DEFAULT                                        \
  0x00000000
#define mmCC_RB_REDUNDANCY_DEFAULT                                               \
  0x00000000
#define mmCC_RB_BACKEND_DISABLE_DEFAULT                                          \
  0x00000000
#define mmGB_ADDR_CONFIG_DEFAULT                                                 \
  0x2a110012
#define mmGB_BACKEND_MAP_DEFAULT                                                 \
  0x76541032
#define mmGB_GPU_ID_DEFAULT                                                      \
  0x00000000
#define mmCC_RB_DAISY_CHAIN_DEFAULT                                              \
  0x76543210
#define mmGB_ADDR_CONFIG_READ_DEFAULT                                            \
  0x2a110012
#define mmGB_TILE_MODE0_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE1_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE2_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE3_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE4_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE5_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE6_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE7_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE8_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE9_DEFAULT                                                  \
  0x00000000
#define mmGB_TILE_MODE10_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE11_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE12_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE13_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE14_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE15_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE16_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE17_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE18_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE19_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE20_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE21_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE22_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE23_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE24_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE25_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE26_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE27_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE28_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE29_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE30_DEFAULT                                                 \
  0x00000000
#define mmGB_TILE_MODE31_DEFAULT                                                 \
  0x00000000
#define mmGB_MACROTILE_MODE0_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE1_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE2_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE3_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE4_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE5_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE6_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE7_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE8_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE9_DEFAULT                                             \
  0x00000000
#define mmGB_MACROTILE_MODE10_DEFAULT                                            \
  0x00000000
#define mmGB_MACROTILE_MODE11_DEFAULT                                            \
  0x00000000
#define mmGB_MACROTILE_MODE12_DEFAULT                                            \
  0x00000000
#define mmGB_MACROTILE_MODE13_DEFAULT                                            \
  0x00000000
#define mmGB_MACROTILE_MODE14_DEFAULT                                            \
  0x00000000
#define mmGB_MACROTILE_MODE15_DEFAULT                                            \
  0x00000000
#define mmCB_HW_CONTROL_DEFAULT                                                  \
  0x00014107
#define mmCB_HW_CONTROL_1_DEFAULT                                                \
  0x10000000
#define mmCB_HW_CONTROL_2_DEFAULT                                                \
  0x00000000
#define mmCB_HW_CONTROL_3_DEFAULT                                                \
  0x00000000
#define mmCB_HW_MEM_ARBITER_RD_DEFAULT                                           \
  0x00029000
#define mmCB_HW_MEM_ARBITER_WR_DEFAULT                                           \
  0x00029000
#define mmCB_DCC_CONFIG_DEFAULT                                                  \
  0x04000000
#define mmGC_USER_RB_REDUNDANCY_DEFAULT                                          \
  0x00000000
#define mmGC_USER_RB_BACKEND_DISABLE_DEFAULT                                     \
  0x00000000

// addressBlock: gc_rmi_rmidec
#define mmRMI_GENERAL_CNTL_DEFAULT                                               \
  0x00000000
#define mmRMI_GENERAL_CNTL1_DEFAULT                                              \
  0x00001a03
#define mmRMI_GENERAL_STATUS_DEFAULT                                             \
  0x00000000
#define mmRMI_SUBBLOCK_STATUS0_DEFAULT                                           \
  0x00000000
#define mmRMI_SUBBLOCK_STATUS1_DEFAULT                                           \
  0x00000000
#define mmRMI_SUBBLOCK_STATUS2_DEFAULT                                           \
  0x00000000
#define mmRMI_SUBBLOCK_STATUS3_DEFAULT                                           \
  0x00000000
#define mmRMI_XBAR_CONFIG_DEFAULT                                                \
  0x00000f00
#define mmRMI_PROBE_POP_LOGIC_CNTL_DEFAULT                                       \
  0x000340d0
#define mmRMI_UTC_XNACK_N_MISC_CNTL_DEFAULT                                      \
  0x00000564
#define mmRMI_DEMUX_CNTL_DEFAULT                                                 \
  0x02000200
#define mmRMI_UTCL1_CNTL1_DEFAULT                                                \
  0x00020000
#define mmRMI_UTCL1_CNTL2_DEFAULT                                                \
  0x00010000
#define mmRMI_UTC_UNIT_CONFIG_DEFAULT                                            \
  0x00000000
#define mmRMI_TCIW_FORMATTER0_CNTL_DEFAULT                                       \
  0x4404001e
#define mmRMI_TCIW_FORMATTER1_CNTL_DEFAULT                                       \
  0x4404001e
#define mmRMI_SCOREBOARD_CNTL_DEFAULT                                            \
  0x001ffe00
#define mmRMI_SCOREBOARD_STATUS0_DEFAULT                                         \
  0x00000000
#define mmRMI_SCOREBOARD_STATUS1_DEFAULT                                         \
  0x00000000
#define mmRMI_SCOREBOARD_STATUS2_DEFAULT                                         \
  0x00000000
#define mmRMI_XBAR_ARBITER_CONFIG_DEFAULT                                        \
  0x08000800
#define mmRMI_XBAR_ARBITER_CONFIG_1_DEFAULT                                      \
  0xffffffff
#define mmRMI_CLOCK_CNTRL_DEFAULT                                                \
  0x04208822
#define mmRMI_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmRMI_XNACK_DEBUG_DEFAULT                                                \
  0x00000000
#define mmRMI_SPARE_DEFAULT                                                      \
  0x00000001
#define mmRMI_SPARE_1_DEFAULT                                                    \
  0x00000000
#define mmRMI_SPARE_2_DEFAULT                                                    \
  0x00000000

// addressBlock: gc_utcl2_atcl2dec
#define mmATC_L2_CNTL_DEFAULT                                                    \
  0x000001c9
#define mmATC_L2_CNTL2_DEFAULT                                                   \
  0x00000100
#define mmATC_L2_CACHE_DATA0_DEFAULT                                             \
  0x00000000
#define mmATC_L2_CACHE_DATA1_DEFAULT                                             \
  0x00000000
#define mmATC_L2_CACHE_DATA2_DEFAULT                                             \
  0x00000000
#define mmATC_L2_CNTL3_DEFAULT                                                   \
  0x000001f8
#define mmATC_L2_STATUS_DEFAULT                                                  \
  0x00000000
#define mmATC_L2_STATUS2_DEFAULT                                                 \
  0x00000000
#define mmATC_L2_MISC_CG_DEFAULT                                                 \
  0x00000200
#define mmATC_L2_MEM_POWER_LS_DEFAULT                                            \
  0x00000208
#define mmATC_L2_CGTT_CLK_CTRL_DEFAULT                                           \
  0x00000080

// addressBlock: gc_utcl2_vml2pfdec
#define mmVM_L2_CNTL_DEFAULT                                                     \
  0x00080602
#define mmVM_L2_CNTL2_DEFAULT                                                    \
  0x00000000
#define mmVM_L2_CNTL3_DEFAULT                                                    \
  0x80100007
#define mmVM_L2_STATUS_DEFAULT                                                   \
  0x00000000
#define mmVM_DUMMY_PAGE_FAULT_CNTL_DEFAULT                                       \
  0x00000090
#define mmVM_DUMMY_PAGE_FAULT_ADDR_LO32_DEFAULT                                  \
  0x00000000
#define mmVM_DUMMY_PAGE_FAULT_ADDR_HI32_DEFAULT                                  \
  0x00000000
#define mmVM_L2_PROTECTION_FAULT_CNTL_DEFAULT                                    \
  0x3ffffffc
#define mmVM_L2_PROTECTION_FAULT_CNTL2_DEFAULT                                   \
  0x000a0000
#define mmVM_L2_PROTECTION_FAULT_MM_CNTL3_DEFAULT                                \
  0xffffffff
#define mmVM_L2_PROTECTION_FAULT_MM_CNTL4_DEFAULT                                \
  0xffffffff
#define mmVM_L2_PROTECTION_FAULT_STATUS_DEFAULT                                  \
  0x00000000
#define mmVM_L2_PROTECTION_FAULT_ADDR_LO32_DEFAULT                               \
  0x00000000
#define mmVM_L2_PROTECTION_FAULT_ADDR_HI32_DEFAULT                               \
  0x00000000
#define mmVM_L2_PROTECTION_FAULT_DEFAULT_ADDR_LO32_DEFAULT                       \
  0x00000000
#define mmVM_L2_PROTECTION_FAULT_DEFAULT_ADDR_HI32_DEFAULT                       \
  0x00000000
#define mmVM_L2_CONTEXT1_IDENTITY_APERTURE_LOW_ADDR_LO32_DEFAULT                 \
  0x00000000
#define mmVM_L2_CONTEXT1_IDENTITY_APERTURE_LOW_ADDR_HI32_DEFAULT                 \
  0x00000000
#define mmVM_L2_CONTEXT1_IDENTITY_APERTURE_HIGH_ADDR_LO32_DEFAULT                \
  0x00000000
#define mmVM_L2_CONTEXT1_IDENTITY_APERTURE_HIGH_ADDR_HI32_DEFAULT                \
  0x00000000
#define mmVM_L2_CONTEXT_IDENTITY_PHYSICAL_OFFSET_LO32_DEFAULT                    \
  0x00000000
#define mmVM_L2_CONTEXT_IDENTITY_PHYSICAL_OFFSET_HI32_DEFAULT                    \
  0x00000000
#define mmVM_L2_CNTL4_DEFAULT                                                    \
  0x000000c1
#define mmVM_L2_MM_GROUP_RT_CLASSES_DEFAULT                                      \
  0x00000000
#define mmVM_L2_BANK_SELECT_RESERVED_CID_DEFAULT                                 \
  0x00000000
#define mmVM_L2_BANK_SELECT_RESERVED_CID2_DEFAULT                                \
  0x00000000
#define mmVM_L2_CACHE_PARITY_CNTL_DEFAULT                                        \
  0x00000000
#define mmVM_L2_CGTT_CLK_CTRL_DEFAULT                                            \
  0x00000080

// addressBlock: gc_utcl2_vml2vcdec
#define mmVM_CONTEXT0_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT1_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT2_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT3_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT4_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT5_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT6_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT7_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT8_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT9_CNTL_DEFAULT                                               \
  0x007ffe80
#define mmVM_CONTEXT10_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXT11_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXT12_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXT13_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXT14_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXT15_CNTL_DEFAULT                                              \
  0x007ffe80
#define mmVM_CONTEXTS_DISABLE_DEFAULT                                            \
  0x00000000
#define mmVM_INVALIDATE_ENG0_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG1_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG2_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG3_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG4_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG5_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG6_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG7_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG8_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG9_SEM_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG10_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG11_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG12_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG13_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG14_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG15_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG16_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG17_SEM_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG0_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG1_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG2_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG3_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG4_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG5_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG6_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG7_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG8_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG9_REQ_DEFAULT                                         \
  0x017c0000
#define mmVM_INVALIDATE_ENG10_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG11_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG12_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG13_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG14_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG15_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG16_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG17_REQ_DEFAULT                                        \
  0x017c0000
#define mmVM_INVALIDATE_ENG0_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG1_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG2_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG3_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG4_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG5_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG6_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG7_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG8_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG9_ACK_DEFAULT                                         \
  0x00000000
#define mmVM_INVALIDATE_ENG10_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG11_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG12_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG13_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG14_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG15_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG16_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG17_ACK_DEFAULT                                        \
  0x00000000
#define mmVM_INVALIDATE_ENG0_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG0_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG1_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG1_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG2_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG2_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG3_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG3_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG4_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG4_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG5_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG5_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG6_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG6_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG7_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG7_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG8_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG8_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG9_ADDR_RANGE_LO32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG9_ADDR_RANGE_HI32_DEFAULT                             \
  0x00000000
#define mmVM_INVALIDATE_ENG10_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG10_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG11_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG11_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG12_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG12_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG13_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG13_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG14_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG14_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG15_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG15_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG16_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG16_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG17_ADDR_RANGE_LO32_DEFAULT                            \
  0x00000000
#define mmVM_INVALIDATE_ENG17_ADDR_RANGE_HI32_DEFAULT                            \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_BASE_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_BASE_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_START_ADDR_LO32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_START_ADDR_HI32_DEFAULT                         \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_START_ADDR_LO32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_START_ADDR_HI32_DEFAULT                        \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT0_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT1_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT2_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT3_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT4_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT5_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT6_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT7_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT8_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_END_ADDR_LO32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT9_PAGE_TABLE_END_ADDR_HI32_DEFAULT                           \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT10_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT11_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT12_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT13_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT14_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_END_ADDR_LO32_DEFAULT                          \
  0x00000000
#define mmVM_CONTEXT15_PAGE_TABLE_END_ADDR_HI32_DEFAULT                          \
  0x00000000

// addressBlock: gc_utcl2_vmsharedpfdec
#define mmMC_VM_NB_MMIOBASE_DEFAULT                                              \
  0x00000000
#define mmMC_VM_NB_MMIOLIMIT_DEFAULT                                             \
  0x00000000
#define mmMC_VM_NB_PCI_CTRL_DEFAULT                                              \
  0x00000000
#define mmMC_VM_NB_PCI_ARB_DEFAULT                                               \
  0x00000008
#define mmMC_VM_NB_TOP_OF_DRAM_SLOT1_DEFAULT                                     \
  0x00000000
#define mmMC_VM_NB_LOWER_TOP_OF_DRAM2_DEFAULT                                    \
  0x00000000
#define mmMC_VM_NB_UPPER_TOP_OF_DRAM2_DEFAULT                                    \
  0x00000000
#define mmMC_VM_FB_OFFSET_DEFAULT                                                \
  0x00000000
#define mmMC_VM_SYSTEM_APERTURE_DEFAULT_ADDR_LSB_DEFAULT                         \
  0x00000000
#define mmMC_VM_SYSTEM_APERTURE_DEFAULT_ADDR_MSB_DEFAULT                         \
  0x00000000
#define mmMC_VM_STEERING_DEFAULT                                                 \
  0x00000001
#define mmMC_SHARED_VIRT_RESET_REQ_DEFAULT                                       \
  0x00000000
#define mmMC_MEM_POWER_LS_DEFAULT                                                \
  0x00000208
#define mmMC_VM_CACHEABLE_DRAM_ADDRESS_START_DEFAULT                             \
  0x00000000
#define mmMC_VM_CACHEABLE_DRAM_ADDRESS_END_DEFAULT                               \
  0x00000000
#define mmMC_VM_APT_CNTL_DEFAULT                                                 \
  0x00000000
#define mmMC_VM_LOCAL_HBM_ADDRESS_START_DEFAULT                                  \
  0x00000000
#define mmMC_VM_LOCAL_HBM_ADDRESS_END_DEFAULT                                    \
  0x000fffff
#define mmMC_VM_LOCAL_HBM_ADDRESS_LOCK_CNTL_DEFAULT                              \
  0x00000000

// addressBlock: gc_utcl2_vmsharedvcdec
#define mmMC_VM_FB_LOCATION_BASE_DEFAULT                                         \
  0x00000000
#define mmMC_VM_FB_LOCATION_TOP_DEFAULT                                          \
  0x00000000
#define mmMC_VM_AGP_TOP_DEFAULT                                                  \
  0x00000000
#define mmMC_VM_AGP_BOT_DEFAULT                                                  \
  0x00000000
#define mmMC_VM_AGP_BASE_DEFAULT                                                 \
  0x00000000
#define mmMC_VM_SYSTEM_APERTURE_LOW_ADDR_DEFAULT                                 \
  0x00000000
#define mmMC_VM_SYSTEM_APERTURE_HIGH_ADDR_DEFAULT                                \
  0x00000000
#define mmMC_VM_MX_L1_TLB_CNTL_DEFAULT                                           \
  0x00002501

// addressBlock: gc_tcdec
#define mmTCP_INVALIDATE_DEFAULT                                                 \
  0x00000000
#define mmTCP_STATUS_DEFAULT                                                     \
  0x00000000
#define mmTCP_CNTL_DEFAULT                                                       \
  0x2f9c0000
#define mmTCP_CHAN_STEER_LO_DEFAULT                                              \
  0x76543210
#define mmTCP_CHAN_STEER_HI_DEFAULT                                              \
  0xfedcba98
#define mmTCP_ADDR_CONFIG_DEFAULT                                                \
  0x000000ff
#define mmTCP_CREDIT_DEFAULT                                                     \
  0x804001c0
#define mmTCP_BUFFER_ADDR_HASH_CNTL_DEFAULT                                      \
  0x00000000
#define mmTCP_EDC_CNT_DEFAULT                                                    \
  0x00000000
#define mmTC_CFG_L1_LOAD_POLICY0_DEFAULT                                         \
  0x00000000
#define mmTC_CFG_L1_LOAD_POLICY1_DEFAULT                                         \
  0x00000000
#define mmTC_CFG_L1_STORE_POLICY_DEFAULT                                         \
  0x00000000
#define mmTC_CFG_L2_LOAD_POLICY0_DEFAULT                                         \
  0x00000000
#define mmTC_CFG_L2_LOAD_POLICY1_DEFAULT                                         \
  0x00000000
#define mmTC_CFG_L2_STORE_POLICY0_DEFAULT                                        \
  0x00000000
#define mmTC_CFG_L2_STORE_POLICY1_DEFAULT                                        \
  0x00000000
#define mmTC_CFG_L2_ATOMIC_POLICY_DEFAULT                                        \
  0x00000000
#define mmTC_CFG_L1_VOLATILE_DEFAULT                                             \
  0x00000000
#define mmTC_CFG_L2_VOLATILE_DEFAULT                                             \
  0x00000000
#define mmTCI_STATUS_DEFAULT                                                     \
  0x00000000
#define mmTCI_CNTL_1_DEFAULT                                                     \
  0x40080022
#define mmTCI_CNTL_2_DEFAULT                                                     \
  0x00000041
#define mmTCC_CTRL_DEFAULT                                                       \
  0xf30fff7f
#define mmTCC_CTRL2_DEFAULT                                                      \
  0x0000000f
#define mmTCC_EDC_CNT_DEFAULT                                                    \
  0x00000000
#define mmTCC_EDC_CNT2_DEFAULT                                                   \
  0x00000000
#define mmTCC_REDUNDANCY_DEFAULT                                                 \
  0x00000000
#define mmTCC_EXE_DISABLE_DEFAULT                                                \
  0x00000000
#define mmTCC_DSM_CNTL_DEFAULT                                                   \
  0x00000000
#define mmTCC_DSM_CNTLA_DEFAULT                                                  \
  0x00000000
#define mmTCC_DSM_CNTL2_DEFAULT                                                  \
  0x00000000
#define mmTCC_DSM_CNTL2A_DEFAULT                                                 \
  0x00000000
#define mmTCC_DSM_CNTL2B_DEFAULT                                                 \
  0x00000000
#define mmTCC_WBINVL2_DEFAULT                                                    \
  0x00000010
#define mmTCC_SOFT_RESET_DEFAULT                                                 \
  0x00000000
#define mmTCA_CTRL_DEFAULT                                                       \
  0x00000088
#define mmTCA_BURST_MASK_DEFAULT                                                 \
  0xffffffff
#define mmTCA_BURST_CTRL_DEFAULT                                                 \
  0x00000007
#define mmTCA_DSM_CNTL_DEFAULT                                                   \
  0x00000000
#define mmTCA_DSM_CNTL2_DEFAULT                                                  \
  0x00000000
#define mmTCA_EDC_CNT_DEFAULT                                                    \
  0x00000000

// addressBlock: gc_shdec
#define mmSPI_SHADER_PGM_RSRC3_PS_DEFAULT                                        \
  0x0000ffff
#define mmSPI_SHADER_PGM_LO_PS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_PS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC1_PS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC2_PS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_0_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_1_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_2_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_3_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_4_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_5_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_6_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_7_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_8_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_9_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_10_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_11_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_12_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_13_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_14_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_15_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_16_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_17_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_18_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_19_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_20_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_21_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_22_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_23_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_24_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_25_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_26_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_27_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_28_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_29_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_30_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_PS_31_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC3_VS_DEFAULT                                        \
  0x0000ffff
#define mmSPI_SHADER_LATE_ALLOC_VS_DEFAULT                                       \
  0x00000000
#define mmSPI_SHADER_PGM_LO_VS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_VS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC1_VS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC2_VS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_0_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_1_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_2_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_3_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_4_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_5_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_6_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_7_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_8_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_9_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_10_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_11_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_12_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_13_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_14_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_15_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_16_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_17_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_18_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_19_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_20_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_21_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_22_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_23_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_24_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_25_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_26_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_27_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_28_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_29_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_30_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_VS_31_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC2_GS_VS_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC4_GS_DEFAULT                                        \
  0x00000800
#define mmSPI_SHADER_USER_DATA_ADDR_LO_GS_DEFAULT                                \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ADDR_HI_GS_DEFAULT                                \
  0x00000000
#define mmSPI_SHADER_PGM_LO_ES_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_ES_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC3_GS_DEFAULT                                        \
  0x0000fffe
#define mmSPI_SHADER_PGM_LO_GS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_GS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC1_GS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC2_GS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_0_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_1_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_2_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_3_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_4_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_5_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_6_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_7_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_8_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_9_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_10_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_11_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_12_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_13_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_14_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_15_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_16_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_17_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_18_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_19_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_20_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_21_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_22_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_23_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_24_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_25_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_26_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_27_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_28_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_29_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_30_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ES_31_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC4_HS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ADDR_LO_HS_DEFAULT                                \
  0x00000000
#define mmSPI_SHADER_USER_DATA_ADDR_HI_HS_DEFAULT                                \
  0x00000000
#define mmSPI_SHADER_PGM_LO_LS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_LS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC3_HS_DEFAULT                                        \
  0xffff0000
#define mmSPI_SHADER_PGM_LO_HS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_HI_HS_DEFAULT                                           \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC1_HS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_PGM_RSRC2_HS_DEFAULT                                        \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_0_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_1_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_2_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_3_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_4_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_5_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_6_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_7_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_8_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_9_DEFAULT                                      \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_10_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_11_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_12_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_13_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_14_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_15_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_16_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_17_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_18_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_19_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_20_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_21_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_22_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_23_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_24_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_25_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_26_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_27_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_28_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_29_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_30_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_LS_31_DEFAULT                                     \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_0_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_1_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_2_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_3_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_4_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_5_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_6_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_7_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_8_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_9_DEFAULT                                  \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_10_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_11_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_12_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_13_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_14_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_15_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_16_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_17_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_18_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_19_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_20_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_21_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_22_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_23_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_24_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_25_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_26_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_27_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_28_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_29_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_30_DEFAULT                                 \
  0x00000000
#define mmSPI_SHADER_USER_DATA_COMMON_31_DEFAULT                                 \
  0x00000000
#define mmCOMPUTE_DISPATCH_INITIATOR_DEFAULT                                     \
  0x00000000
#define mmCOMPUTE_DIM_X_DEFAULT                                                  \
  0x00000000
#define mmCOMPUTE_DIM_Y_DEFAULT                                                  \
  0x00000000
#define mmCOMPUTE_DIM_Z_DEFAULT                                                  \
  0x00000000
#define mmCOMPUTE_START_X_DEFAULT                                                \
  0x00000000
#define mmCOMPUTE_START_Y_DEFAULT                                                \
  0x00000000
#define mmCOMPUTE_START_Z_DEFAULT                                                \
  0x00000000
#define mmCOMPUTE_NUM_THREAD_X_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_NUM_THREAD_Y_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_NUM_THREAD_Z_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_PIPELINESTAT_ENABLE_DEFAULT                                    \
  0x00000001
#define mmCOMPUTE_PERFCOUNT_ENABLE_DEFAULT                                       \
  0x00000000
#define mmCOMPUTE_PGM_LO_DEFAULT                                                 \
  0x00000000
#define mmCOMPUTE_PGM_HI_DEFAULT                                                 \
  0x00000000
#define mmCOMPUTE_DISPATCH_PKT_ADDR_LO_DEFAULT                                   \
  0x00000000
#define mmCOMPUTE_DISPATCH_PKT_ADDR_HI_DEFAULT                                   \
  0x00000000
#define mmCOMPUTE_DISPATCH_SCRATCH_BASE_LO_DEFAULT                               \
  0x00000000
#define mmCOMPUTE_DISPATCH_SCRATCH_BASE_HI_DEFAULT                               \
  0x00000000
#define mmCOMPUTE_PGM_RSRC1_DEFAULT                                              \
  0x00000000
#define mmCOMPUTE_PGM_RSRC2_DEFAULT                                              \
  0x00000000
#define mmCOMPUTE_VMID_DEFAULT                                                   \
  0x00000000
#define mmCOMPUTE_RESOURCE_LIMITS_DEFAULT                                        \
  0x00000000
#define mmCOMPUTE_STATIC_THREAD_MGMT_SE0_DEFAULT                                 \
  0xffffffff
#define mmCOMPUTE_STATIC_THREAD_MGMT_SE1_DEFAULT                                 \
  0xffffffff
#define mmCOMPUTE_TMPRING_SIZE_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_STATIC_THREAD_MGMT_SE2_DEFAULT                                 \
  0xffffffff
#define mmCOMPUTE_STATIC_THREAD_MGMT_SE3_DEFAULT                                 \
  0xffffffff
#define mmCOMPUTE_RESTART_X_DEFAULT                                              \
  0x00000000
#define mmCOMPUTE_RESTART_Y_DEFAULT                                              \
  0x00000000
#define mmCOMPUTE_RESTART_Z_DEFAULT                                              \
  0x00000000
#define mmCOMPUTE_THREAD_TRACE_ENABLE_DEFAULT                                    \
  0x00000000
#define mmCOMPUTE_MISC_RESERVED_DEFAULT                                          \
  0x00000002
#define mmCOMPUTE_DISPATCH_ID_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_THREADGROUP_ID_DEFAULT                                         \
  0x00000000
#define mmCOMPUTE_RELAUNCH_DEFAULT                                               \
  0x00000000
#define mmCOMPUTE_WAVE_RESTORE_ADDR_LO_DEFAULT                                   \
  0x00000000
#define mmCOMPUTE_WAVE_RESTORE_ADDR_HI_DEFAULT                                   \
  0x00000000
#define mmCOMPUTE_USER_DATA_0_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_1_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_2_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_3_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_4_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_5_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_6_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_7_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_8_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_9_DEFAULT                                            \
  0x00000000
#define mmCOMPUTE_USER_DATA_10_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_USER_DATA_11_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_USER_DATA_12_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_USER_DATA_13_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_USER_DATA_14_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_USER_DATA_15_DEFAULT                                           \
  0x00000000
#define mmCOMPUTE_NOWHERE_DEFAULT                                                \
  0x00000000

// addressBlock: gc_cppdec
#define mmCP_DFY_CNTL_DEFAULT                                                    \
  0x00000000
#define mmCP_DFY_STAT_DEFAULT                                                    \
  0x00000000
#define mmCP_DFY_ADDR_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_ADDR_LO_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_0_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_1_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_2_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_3_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_4_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_5_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_6_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_7_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_8_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_9_DEFAULT                                                  \
  0x00000000
#define mmCP_DFY_DATA_10_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_11_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_12_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_13_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_14_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_DATA_15_DEFAULT                                                 \
  0x00000000
#define mmCP_DFY_CMD_DEFAULT                                                     \
  0x00000000
#define mmCP_EOPQ_WAIT_TIME_DEFAULT                                              \
  0x0000052c
#define mmCP_CPC_MGCG_SYNC_CNTL_DEFAULT                                          \
  0x00001020
#define mmCPC_INT_INFO_DEFAULT                                                   \
  0x00000000
#define mmCP_VIRT_STATUS_DEFAULT                                                 \
  0x00000000
#define mmCPC_INT_ADDR_DEFAULT                                                   \
  0x00000000
#define mmCPC_INT_PASID_DEFAULT                                                  \
  0x00000000
#define mmCP_GFX_ERROR_DEFAULT                                                   \
  0x00000000
#define mmCPG_UTCL1_CNTL_DEFAULT                                                 \
  0x00000080
#define mmCPC_UTCL1_CNTL_DEFAULT                                                 \
  0x00000080
#define mmCPF_UTCL1_CNTL_DEFAULT                                                 \
  0x00000080
#define mmCP_AQL_SMM_STATUS_DEFAULT                                              \
  0x00000000
#define mmCP_RB0_BASE_DEFAULT                                                    \
  0x00000000
#define mmCP_RB_BASE_DEFAULT                                                     \
  0x00000000
#define mmCP_RB0_CNTL_DEFAULT                                                    \
  0x00400000
#define mmCP_RB_CNTL_DEFAULT                                                     \
  0x00400000
#define mmCP_RB_RPTR_WR_DEFAULT                                                  \
  0x00000000
#define mmCP_RB0_RPTR_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_RB_RPTR_ADDR_DEFAULT                                                \
  0x00000000
#define mmCP_RB0_RPTR_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_RB_RPTR_ADDR_HI_DEFAULT                                             \
  0x00000000
#define mmCP_RB0_BUFSZ_MASK_DEFAULT                                              \
  0x00000000
#define mmCP_RB_BUFSZ_MASK_DEFAULT                                               \
  0x00000000
#define mmCP_RB_WPTR_POLL_ADDR_LO_DEFAULT                                        \
  0x00000000
#define mmCP_RB_WPTR_POLL_ADDR_HI_DEFAULT                                        \
  0x00000000
#define mmGC_PRIV_MODE_DEFAULT                                                   \
  0x00000000
#define mmCP_INT_CNTL_DEFAULT                                                    \
  0x00000000
#define mmCP_INT_STATUS_DEFAULT                                                  \
  0x00000000
#define mmCP_DEVICE_ID_DEFAULT                                                   \
  0x00000000
#define mmCP_ME0_PIPE_PRIORITY_CNTS_DEFAULT                                      \
  0x08081020
#define mmCP_RING_PRIORITY_CNTS_DEFAULT                                          \
  0x08081020
#define mmCP_ME0_PIPE0_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_RING0_PRIORITY_DEFAULT                                              \
  0x00000002
#define mmCP_ME0_PIPE1_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_RING1_PRIORITY_DEFAULT                                              \
  0x00000002
#define mmCP_ME0_PIPE2_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_RING2_PRIORITY_DEFAULT                                              \
  0x00000002
#define mmCP_FATAL_ERROR_DEFAULT                                                 \
  0x00000000
#define mmCP_RB_VMID_DEFAULT                                                     \
  0x00000000
#define mmCP_ME0_PIPE0_VMID_DEFAULT                                              \
  0x00000000
#define mmCP_ME0_PIPE1_VMID_DEFAULT                                              \
  0x00000000
#define mmCP_RB0_WPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB_WPTR_DEFAULT                                                     \
  0x00000000
#define mmCP_RB0_WPTR_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_RB_WPTR_HI_DEFAULT                                                  \
  0x00000000
#define mmCP_RB1_WPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB1_WPTR_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_RB2_WPTR_DEFAULT                                                    \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_DEFAULT                                         \
  0x00000000
#define mmCP_RB_DOORBELL_RANGE_LOWER_DEFAULT                                     \
  0x00000000
#define mmCP_RB_DOORBELL_RANGE_UPPER_DEFAULT                                     \
  0x00000044
#define mmCP_MEC_DOORBELL_RANGE_LOWER_DEFAULT                                    \
  0x00000048
#define mmCP_MEC_DOORBELL_RANGE_UPPER_DEFAULT                                    \
  0x0ffffffc
#define mmCPG_UTCL1_ERROR_DEFAULT                                                \
  0x00000000
#define mmCPC_UTCL1_ERROR_DEFAULT                                                \
  0x00000000
#define mmCP_RB1_BASE_DEFAULT                                                    \
  0x00000000
#define mmCP_RB1_CNTL_DEFAULT                                                    \
  0x00400000
#define mmCP_RB1_RPTR_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_RB1_RPTR_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_RB2_BASE_DEFAULT                                                    \
  0x00000000
#define mmCP_RB2_CNTL_DEFAULT                                                    \
  0x00400000
#define mmCP_RB2_RPTR_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_RB2_RPTR_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_RB0_ACTIVE_DEFAULT                                                  \
  0x00000001
#define mmCP_RB_ACTIVE_DEFAULT                                                   \
  0x00000001
#define mmCP_INT_CNTL_RING0_DEFAULT                                              \
  0x00000000
#define mmCP_INT_CNTL_RING1_DEFAULT                                              \
  0x00000000
#define mmCP_INT_CNTL_RING2_DEFAULT                                              \
  0x00000000
#define mmCP_INT_STATUS_RING0_DEFAULT                                            \
  0x00000000
#define mmCP_INT_STATUS_RING1_DEFAULT                                            \
  0x00000000
#define mmCP_INT_STATUS_RING2_DEFAULT                                            \
  0x00000000
#define mmCP_PWR_CNTL_DEFAULT                                                    \
  0x00000000
#define mmCP_MEM_SLP_CNTL_DEFAULT                                                \
  0x00020200
#define mmCP_ECC_FIRSTOCCURRENCE_DEFAULT                                         \
  0x00000000
#define mmCP_ECC_FIRSTOCCURRENCE_RING0_DEFAULT                                   \
  0x00000000
#define mmCP_ECC_FIRSTOCCURRENCE_RING1_DEFAULT                                   \
  0x00000000
#define mmCP_ECC_FIRSTOCCURRENCE_RING2_DEFAULT                                   \
  0x00000000
#define mmGB_EDC_MODE_DEFAULT                                                    \
  0x00000000
#define mmCP_PQ_WPTR_POLL_CNTL_DEFAULT                                           \
  0x00000001
#define mmCP_PQ_WPTR_POLL_CNTL1_DEFAULT                                          \
  0x00000000
#define mmCP_ME1_PIPE0_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME1_PIPE1_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME1_PIPE2_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME1_PIPE3_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME2_PIPE0_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME2_PIPE1_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME2_PIPE2_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME2_PIPE3_INT_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_ME1_PIPE0_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME1_PIPE1_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME1_PIPE2_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME1_PIPE3_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME2_PIPE0_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME2_PIPE1_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME2_PIPE2_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME2_PIPE3_INT_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_ME1_INT_STAT_DEBUG_DEFAULT                                          \
  0x00000000
#define mmCP_ME2_INT_STAT_DEBUG_DEFAULT                                          \
  0x00000000
#define mmCC_GC_EDC_CONFIG_DEFAULT                                               \
  0x00000000
#define mmCP_ME1_PIPE_PRIORITY_CNTS_DEFAULT                                      \
  0x08081020
#define mmCP_ME1_PIPE0_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME1_PIPE1_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME1_PIPE2_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME1_PIPE3_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME2_PIPE_PRIORITY_CNTS_DEFAULT                                      \
  0x08081020
#define mmCP_ME2_PIPE0_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME2_PIPE1_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME2_PIPE2_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_ME2_PIPE3_PRIORITY_DEFAULT                                          \
  0x00000002
#define mmCP_CE_PRGRM_CNTR_START_DEFAULT                                         \
  0x00000000
#define mmCP_PFP_PRGRM_CNTR_START_DEFAULT                                        \
  0x00000000
#define mmCP_ME_PRGRM_CNTR_START_DEFAULT                                         \
  0x00000000
#define mmCP_MEC1_PRGRM_CNTR_START_DEFAULT                                       \
  0x00000000
#define mmCP_MEC2_PRGRM_CNTR_START_DEFAULT                                       \
  0x00000000
#define mmCP_CE_INTR_ROUTINE_START_DEFAULT                                       \
  0x00000002
#define mmCP_PFP_INTR_ROUTINE_START_DEFAULT                                      \
  0x00000002
#define mmCP_ME_INTR_ROUTINE_START_DEFAULT                                       \
  0x00000002
#define mmCP_MEC1_INTR_ROUTINE_START_DEFAULT                                     \
  0x00000002
#define mmCP_MEC2_INTR_ROUTINE_START_DEFAULT                                     \
  0x00000002
#define mmCP_CONTEXT_CNTL_DEFAULT                                                \
  0x00750075
#define mmCP_MAX_CONTEXT_DEFAULT                                                 \
  0x00000007
#define mmCP_IQ_WAIT_TIME1_DEFAULT                                               \
  0x40404040
#define mmCP_IQ_WAIT_TIME2_DEFAULT                                               \
  0x40404040
#define mmCP_RB0_BASE_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_RB1_BASE_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_VMID_RESET_DEFAULT                                                  \
  0x00000000
#define mmCPC_INT_CNTL_DEFAULT                                                   \
  0x00000000
#define mmCPC_INT_STATUS_DEFAULT                                                 \
  0x00000000
#define mmCP_VMID_PREEMPT_DEFAULT                                                \
  0x00000000
#define mmCPC_INT_CNTX_ID_DEFAULT                                                \
  0x00000000
#define mmCP_PQ_STATUS_DEFAULT                                                   \
  0x00000000
#define mmCP_CPC_IC_BASE_LO_DEFAULT                                              \
  0x00000000
#define mmCP_CPC_IC_BASE_HI_DEFAULT                                              \
  0x00000000
#define mmCP_CPC_IC_BASE_CNTL_DEFAULT                                            \
  0x00000000
#define mmCP_CPC_IC_OP_CNTL_DEFAULT                                              \
  0x00000000
#define mmCP_MEC1_F32_INT_DIS_DEFAULT                                            \
  0x00000000
#define mmCP_MEC2_F32_INT_DIS_DEFAULT                                            \
  0x00000000
#define mmCP_VMID_STATUS_DEFAULT                                                 \
  0x00000000

// addressBlock: gc_cppdec2
#define mmCP_RB_DOORBELL_CONTROL_SCH_0_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_1_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_2_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_3_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_4_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_5_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_6_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CONTROL_SCH_7_DEFAULT                                   \
  0x00000000
#define mmCP_RB_DOORBELL_CLEAR_DEFAULT                                           \
  0x00000000
#define mmCP_GFX_MQD_CONTROL_DEFAULT                                             \
  0x00000100
#define mmCP_GFX_MQD_BASE_ADDR_DEFAULT                                           \
  0x00000000
#define mmCP_GFX_MQD_BASE_ADDR_HI_DEFAULT                                        \
  0x00000000
#define mmCP_RB_STATUS_DEFAULT                                                   \
  0x00000000
#define mmCPG_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmCPC_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmCPF_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmCP_SD_CNTL_DEFAULT                                                     \
  0x0000001f
#define mmCP_SOFT_RESET_CNTL_DEFAULT                                             \
  0x00000000
#define mmCP_CPC_GFX_CNTL_DEFAULT                                                \
  0x00000000

// addressBlock: gc_spipdec
#define mmSPI_ARB_PRIORITY_DEFAULT                                               \
  0x00000000
#define mmSPI_ARB_CYCLES_0_DEFAULT                                               \
  0x00000000
#define mmSPI_ARB_CYCLES_1_DEFAULT                                               \
  0x00000000
#define mmSPI_CDBG_SYS_GFX_DEFAULT                                               \
  0x00000000
#define mmSPI_CDBG_SYS_HP3D_DEFAULT                                              \
  0x00000000
#define mmSPI_CDBG_SYS_CS0_DEFAULT                                               \
  0x00000000
#define mmSPI_CDBG_SYS_CS1_DEFAULT                                               \
  0x00000000
#define mmSPI_WCL_PIPE_PERCENT_GFX_DEFAULT                                       \
  0x07ffffff
#define mmSPI_WCL_PIPE_PERCENT_HP3D_DEFAULT                                      \
  0x07c1f07f
#define mmSPI_WCL_PIPE_PERCENT_CS0_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS1_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS2_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS3_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS4_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS5_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS6_DEFAULT                                       \
  0x0000007f
#define mmSPI_WCL_PIPE_PERCENT_CS7_DEFAULT                                       \
  0x0000007f
#define mmSPI_GDBG_WAVE_CNTL_DEFAULT                                             \
  0x00000000
#define mmSPI_GDBG_TRAP_CONFIG_DEFAULT                                           \
  0x00000000
#define mmSPI_GDBG_TRAP_MASK_DEFAULT                                             \
  0x00000000
#define mmSPI_GDBG_WAVE_CNTL2_DEFAULT                                            \
  0x00000000
#define mmSPI_GDBG_WAVE_CNTL3_DEFAULT                                            \
  0x00000000
#define mmSPI_GDBG_TRAP_DATA0_DEFAULT                                            \
  0x00000000
#define mmSPI_GDBG_TRAP_DATA1_DEFAULT                                            \
  0x00000000
#define mmSPI_RESET_DEBUG_DEFAULT                                                \
  0x00000000
#define mmSPI_COMPUTE_QUEUE_RESET_DEFAULT                                        \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_0_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_1_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_2_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_3_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_4_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_5_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_6_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_7_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_8_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_9_DEFAULT                                      \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_0_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_1_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_2_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_3_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_4_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_5_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_6_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_7_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_8_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_9_DEFAULT                                   \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_10_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_11_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_10_DEFAULT                                  \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_11_DEFAULT                                  \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_12_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_13_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_14_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_CU_15_DEFAULT                                     \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_12_DEFAULT                                  \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_13_DEFAULT                                  \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_14_DEFAULT                                  \
  0x00000000
#define mmSPI_RESOURCE_RESERVE_EN_CU_15_DEFAULT                                  \
  0x00000000
#define mmSPI_COMPUTE_WF_CTX_SAVE_DEFAULT                                        \
  0x00000000
#define mmSPI_ARB_CNTL_0_DEFAULT                                                 \
  0x00000000

// addressBlock: gc_cpphqddec
#define mmCP_HQD_GFX_CONTROL_DEFAULT                                             \
  0x00000000
#define mmCP_HQD_GFX_STATUS_DEFAULT                                              \
  0x00000000
#define mmCP_HPD_ROQ_OFFSETS_DEFAULT                                             \
  0x00200604
#define mmCP_HPD_STATUS0_DEFAULT                                                 \
  0x01000000
#define mmCP_HPD_UTCL1_CNTL_DEFAULT                                              \
  0x00000000
#define mmCP_HPD_UTCL1_ERROR_DEFAULT                                             \
  0x00000000
#define mmCP_HPD_UTCL1_ERROR_ADDR_DEFAULT                                        \
  0x00000000
#define mmCP_MQD_BASE_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_MQD_BASE_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_HQD_ACTIVE_DEFAULT                                                  \
  0x00000000
#define mmCP_HQD_VMID_DEFAULT                                                    \
  0x00000000
#define mmCP_HQD_PERSISTENT_STATE_DEFAULT                                        \
  0x0be05301
#define mmCP_HQD_PIPE_PRIORITY_DEFAULT                                           \
  0x00000000
#define mmCP_HQD_QUEUE_PRIORITY_DEFAULT                                          \
  0x00000000
#define mmCP_HQD_QUANTUM_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_PQ_BASE_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_PQ_BASE_HI_DEFAULT                                              \
  0x00000000
#define mmCP_HQD_PQ_RPTR_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_PQ_RPTR_REPORT_ADDR_DEFAULT                                     \
  0x00000000
#define mmCP_HQD_PQ_RPTR_REPORT_ADDR_HI_DEFAULT                                  \
  0x00000000
#define mmCP_HQD_PQ_WPTR_POLL_ADDR_DEFAULT                                       \
  0x00000000
#define mmCP_HQD_PQ_WPTR_POLL_ADDR_HI_DEFAULT                                    \
  0x00000000
#define mmCP_HQD_PQ_DOORBELL_CONTROL_DEFAULT                                     \
  0x00000000
#define mmCP_HQD_PQ_CONTROL_DEFAULT                                              \
  0x00308509
#define mmCP_HQD_IB_BASE_ADDR_DEFAULT                                            \
  0x00000000
#define mmCP_HQD_IB_BASE_ADDR_HI_DEFAULT                                         \
  0x00000000
#define mmCP_HQD_IB_RPTR_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_IB_CONTROL_DEFAULT                                              \
  0x00300000
#define mmCP_HQD_IQ_TIMER_DEFAULT                                                \
  0x00000000
#define mmCP_HQD_IQ_RPTR_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_DEQUEUE_REQUEST_DEFAULT                                         \
  0x00000000
#define mmCP_HQD_DMA_OFFLOAD_DEFAULT                                             \
  0x00000000
#define mmCP_HQD_OFFLOAD_DEFAULT                                                 \
  0x00000000
#define mmCP_HQD_SEMA_CMD_DEFAULT                                                \
  0x00000000
#define mmCP_HQD_MSG_TYPE_DEFAULT                                                \
  0x00000000
#define mmCP_HQD_ATOMIC0_PREOP_LO_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_ATOMIC0_PREOP_HI_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_ATOMIC1_PREOP_LO_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_ATOMIC1_PREOP_HI_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_HQ_SCHEDULER0_DEFAULT                                           \
  0x00000000
#define mmCP_HQD_HQ_STATUS0_DEFAULT                                              \
  0x40000000
#define mmCP_HQD_HQ_CONTROL0_DEFAULT                                             \
  0x00000000
#define mmCP_HQD_HQ_SCHEDULER1_DEFAULT                                           \
  0x00000000
#define mmCP_MQD_CONTROL_DEFAULT                                                 \
  0x00000100
#define mmCP_HQD_HQ_STATUS1_DEFAULT                                              \
  0x00000000
#define mmCP_HQD_HQ_CONTROL1_DEFAULT                                             \
  0x00000000
#define mmCP_HQD_EOP_BASE_ADDR_DEFAULT                                           \
  0x00000000
#define mmCP_HQD_EOP_BASE_ADDR_HI_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_EOP_CONTROL_DEFAULT                                             \
  0x00000006
#define mmCP_HQD_EOP_RPTR_DEFAULT                                                \
  0x40000000
#define mmCP_HQD_EOP_WPTR_DEFAULT                                                \
  0x007f8000
#define mmCP_HQD_EOP_EVENTS_DEFAULT                                              \
  0x00000000
#define mmCP_HQD_CTX_SAVE_BASE_ADDR_LO_DEFAULT                                   \
  0x00000000
#define mmCP_HQD_CTX_SAVE_BASE_ADDR_HI_DEFAULT                                   \
  0x00000000
#define mmCP_HQD_CTX_SAVE_CONTROL_DEFAULT                                        \
  0x00000000
#define mmCP_HQD_CNTL_STACK_OFFSET_DEFAULT                                       \
  0x00000000
#define mmCP_HQD_CNTL_STACK_SIZE_DEFAULT                                         \
  0x00000000
#define mmCP_HQD_WG_STATE_OFFSET_DEFAULT                                         \
  0x00000000
#define mmCP_HQD_CTX_SAVE_SIZE_DEFAULT                                           \
  0x00000000
#define mmCP_HQD_GDS_RESOURCE_STATE_DEFAULT                                      \
  0x00000000
#define mmCP_HQD_ERROR_DEFAULT                                                   \
  0x00000000
#define mmCP_HQD_EOP_WPTR_MEM_DEFAULT                                            \
  0x00000000
#define mmCP_HQD_AQL_CONTROL_DEFAULT                                             \
  0x00000000
#define mmCP_HQD_PQ_WPTR_LO_DEFAULT                                              \
  0x00000000
#define mmCP_HQD_PQ_WPTR_HI_DEFAULT                                              \
  0x00000000

// addressBlock: gc_didtdec
#define mmDIDT_IND_INDEX_DEFAULT                                                 \
  0x00000000
#define mmDIDT_IND_DATA_DEFAULT                                                  \
  0x00000000

// addressBlock: gc_gccacdec
#define mmGC_CAC_CTRL_1_DEFAULT                                                  \
  0x01000000
#define mmGC_CAC_CTRL_2_DEFAULT                                                  \
  0x00000000
#define mmGC_CAC_CGTT_CLK_CTRL_DEFAULT                                           \
  0x00000100
#define mmGC_CAC_AGGR_LOWER_DEFAULT                                              \
  0x00000000
#define mmGC_CAC_AGGR_UPPER_DEFAULT                                              \
  0x00000000
#define mmGC_CAC_SOFT_CTRL_DEFAULT                                               \
  0x00000000
#define mmGC_DIDT_CTRL0_DEFAULT                                                  \
  0x00000000
#define mmGC_DIDT_CTRL1_DEFAULT                                                  \
  0xffff0000
#define mmGC_DIDT_CTRL2_DEFAULT                                                  \
  0x1880000f
#define mmGC_DIDT_WEIGHT_DEFAULT                                                 \
  0x00000000
#define mmGC_DIDT_WEIGHT_1_DEFAULT                                               \
  0x00000000
#define mmGC_EDC_CTRL_DEFAULT                                                    \
  0x00000000
#define mmGC_EDC_THRESHOLD_DEFAULT                                               \
  0x00000000
#define mmGC_EDC_STATUS_DEFAULT                                                  \
  0x00000000
#define mmGC_EDC_OVERFLOW_DEFAULT                                                \
  0x00000000
#define mmGC_EDC_ROLLING_POWER_DELTA_DEFAULT                                     \
  0x00000000
#define mmGC_DIDT_DROOP_CTRL_DEFAULT                                             \
  0x00000000
#define mmGC_EDC_DROOP_CTRL_DEFAULT                                              \
  0x00100000
#define mmGC_CAC_IND_INDEX_DEFAULT                                               \
  0x00000000
#define mmGC_CAC_IND_DATA_DEFAULT                                                \
  0x00000000
#define mmSE_CAC_CGTT_CLK_CTRL_DEFAULT                                           \
  0x00000100
#define mmSE_CAC_IND_INDEX_DEFAULT                                               \
  0x00000000
#define mmSE_CAC_IND_DATA_DEFAULT                                                \
  0x00000000

// addressBlock: gc_tcpdec
#define mmTCP_WATCH0_ADDR_H_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH0_ADDR_L_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH0_CNTL_DEFAULT                                                \
  0x00000000
#define mmTCP_WATCH1_ADDR_H_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH1_ADDR_L_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH1_CNTL_DEFAULT                                                \
  0x00000000
#define mmTCP_WATCH2_ADDR_H_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH2_ADDR_L_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH2_CNTL_DEFAULT                                                \
  0x00000000
#define mmTCP_WATCH3_ADDR_H_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH3_ADDR_L_DEFAULT                                              \
  0x00000000
#define mmTCP_WATCH3_CNTL_DEFAULT                                                \
  0x00000000
#define mmTCP_GATCL1_CNTL_DEFAULT                                                \
  0x00000000
#define mmTCP_ATC_EDC_GATCL1_CNT_DEFAULT                                         \
  0x00000000
#define mmTCP_GATCL1_DSM_CNTL_DEFAULT                                            \
  0x00000000
#define mmTCP_CNTL2_DEFAULT                                                      \
  0x0000000a
#define mmTCP_UTCL1_CNTL1_DEFAULT                                                \
  0x00800400
#define mmTCP_UTCL1_CNTL2_DEFAULT                                                \
  0x00000000
#define mmTCP_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmTCP_PERFCOUNTER_FILTER_DEFAULT                                         \
  0x00000000
#define mmTCP_PERFCOUNTER_FILTER_EN_DEFAULT                                      \
  0x00000000

// addressBlock: gc_gdspdec
#define mmGDS_VMID0_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID0_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID1_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID1_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID2_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID2_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID3_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID3_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID4_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID4_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID5_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID5_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID6_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID6_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID7_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID7_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID8_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID8_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID9_BASE_DEFAULT                                                 \
  0x00000000
#define mmGDS_VMID9_SIZE_DEFAULT                                                 \
  0x00010000
#define mmGDS_VMID10_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID10_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_VMID11_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID11_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_VMID12_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID12_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_VMID13_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID13_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_VMID14_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID14_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_VMID15_BASE_DEFAULT                                                \
  0x00000000
#define mmGDS_VMID15_SIZE_DEFAULT                                                \
  0x00010000
#define mmGDS_GWS_VMID0_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID1_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID2_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID3_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID4_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID5_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID6_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID7_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID8_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID9_DEFAULT                                                  \
  0x00400000
#define mmGDS_GWS_VMID10_DEFAULT                                                 \
  0x00400000
#define mmGDS_GWS_VMID11_DEFAULT                                                 \
  0x00400000
#define mmGDS_GWS_VMID12_DEFAULT                                                 \
  0x00400000
#define mmGDS_GWS_VMID13_DEFAULT                                                 \
  0x00400000
#define mmGDS_GWS_VMID14_DEFAULT                                                 \
  0x00400000
#define mmGDS_GWS_VMID15_DEFAULT                                                 \
  0x00400000
#define mmGDS_OA_VMID0_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID1_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID2_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID3_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID4_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID5_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID6_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID7_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID8_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID9_DEFAULT                                                   \
  0x00000000
#define mmGDS_OA_VMID10_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_VMID11_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_VMID12_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_VMID13_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_VMID14_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_VMID15_DEFAULT                                                  \
  0x00000000
#define mmGDS_GWS_RESET0_DEFAULT                                                 \
  0x00000000
#define mmGDS_GWS_RESET1_DEFAULT                                                 \
  0x00000000
#define mmGDS_GWS_RESOURCE_RESET_DEFAULT                                         \
  0x00000000
#define mmGDS_COMPUTE_MAX_WAVE_ID_DEFAULT                                        \
  0x000007ff
#define mmGDS_OA_RESET_MASK_DEFAULT                                              \
  0x00000000
#define mmGDS_OA_RESET_DEFAULT                                                   \
  0x00000000
#define mmGDS_ENHANCE_DEFAULT                                                    \
  0x00000000
#define mmGDS_OA_CGPG_RESTORE_DEFAULT                                            \
  0x00000000
#define mmGDS_CS_CTXSW_STATUS_DEFAULT                                            \
  0x00000000
#define mmGDS_CS_CTXSW_CNT0_DEFAULT                                              \
  0x00000000
#define mmGDS_CS_CTXSW_CNT1_DEFAULT                                              \
  0x00000000
#define mmGDS_CS_CTXSW_CNT2_DEFAULT                                              \
  0x00000000
#define mmGDS_CS_CTXSW_CNT3_DEFAULT                                              \
  0x00000000
#define mmGDS_GFX_CTXSW_STATUS_DEFAULT                                           \
  0x00000000
#define mmGDS_VS_CTXSW_CNT0_DEFAULT                                              \
  0x00000000
#define mmGDS_VS_CTXSW_CNT1_DEFAULT                                              \
  0x00000000
#define mmGDS_VS_CTXSW_CNT2_DEFAULT                                              \
  0x00000000
#define mmGDS_VS_CTXSW_CNT3_DEFAULT                                              \
  0x00000000
#define mmGDS_PS0_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS0_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS0_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS0_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS1_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS1_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS1_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS1_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS2_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS2_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS2_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS2_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS3_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS3_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS3_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS3_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS4_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS4_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS4_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS4_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS5_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS5_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS5_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS5_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS6_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS6_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS6_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS6_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_PS7_CTXSW_CNT0_DEFAULT                                             \
  0x00000000
#define mmGDS_PS7_CTXSW_CNT1_DEFAULT                                             \
  0x00000000
#define mmGDS_PS7_CTXSW_CNT2_DEFAULT                                             \
  0x00000000
#define mmGDS_PS7_CTXSW_CNT3_DEFAULT                                             \
  0x00000000
#define mmGDS_GS_CTXSW_CNT0_DEFAULT                                              \
  0x00000000
#define mmGDS_GS_CTXSW_CNT1_DEFAULT                                              \
  0x00000000
#define mmGDS_GS_CTXSW_CNT2_DEFAULT                                              \
  0x00000000
#define mmGDS_GS_CTXSW_CNT3_DEFAULT                                              \
  0x00000000

// addressBlock: gc_rasdec
#define mmRAS_SIGNATURE_CONTROL_DEFAULT                                          \
  0x00000000
#define mmRAS_SIGNATURE_MASK_DEFAULT                                             \
  0x00000000
#define mmRAS_SX_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_SX_SIGNATURE1_DEFAULT                                              \
  0x00000000
#define mmRAS_SX_SIGNATURE2_DEFAULT                                              \
  0x00000000
#define mmRAS_SX_SIGNATURE3_DEFAULT                                              \
  0x00000000
#define mmRAS_DB_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_PA_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_VGT_SIGNATURE0_DEFAULT                                             \
  0x00000000
#define mmRAS_SQ_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE1_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE2_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE3_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE4_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE5_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE6_DEFAULT                                              \
  0x00000000
#define mmRAS_SC_SIGNATURE7_DEFAULT                                              \
  0x00000000
#define mmRAS_IA_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_IA_SIGNATURE1_DEFAULT                                              \
  0x00000000
#define mmRAS_SPI_SIGNATURE0_DEFAULT                                             \
  0x00000000
#define mmRAS_SPI_SIGNATURE1_DEFAULT                                             \
  0x00000000
#define mmRAS_TA_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_TD_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_CB_SIGNATURE0_DEFAULT                                              \
  0x00000000
#define mmRAS_BCI_SIGNATURE0_DEFAULT                                             \
  0x00000000
#define mmRAS_BCI_SIGNATURE1_DEFAULT                                             \
  0x00000000
#define mmRAS_TA_SIGNATURE1_DEFAULT                                              \
  0x00000000

// addressBlock: gc_gfxdec0
#define mmDB_RENDER_CONTROL_DEFAULT                                              \
  0x00000000
#define mmDB_COUNT_CONTROL_DEFAULT                                               \
  0x00000000
#define mmDB_DEPTH_VIEW_DEFAULT                                                  \
  0x00000000
#define mmDB_RENDER_OVERRIDE_DEFAULT                                             \
  0x00000000
#define mmDB_RENDER_OVERRIDE2_DEFAULT                                            \
  0x00000000
#define mmDB_HTILE_DATA_BASE_DEFAULT                                             \
  0x00000000
#define mmDB_HTILE_DATA_BASE_HI_DEFAULT                                          \
  0x00000000
#define mmDB_DEPTH_SIZE_DEFAULT                                                  \
  0x00000000
#define mmDB_DEPTH_BOUNDS_MIN_DEFAULT                                            \
  0x00000000
#define mmDB_DEPTH_BOUNDS_MAX_DEFAULT                                            \
  0x00000000
#define mmDB_STENCIL_CLEAR_DEFAULT                                               \
  0x00000000
#define mmDB_DEPTH_CLEAR_DEFAULT                                                 \
  0x00000000
#define mmPA_SC_SCREEN_SCISSOR_TL_DEFAULT                                        \
  0x00000000
#define mmPA_SC_SCREEN_SCISSOR_BR_DEFAULT                                        \
  0x00000000
#define mmDB_Z_INFO_DEFAULT                                                      \
  0x00000000
#define mmDB_STENCIL_INFO_DEFAULT                                                \
  0x00000000
#define mmDB_Z_READ_BASE_DEFAULT                                                 \
  0x00000000
#define mmDB_Z_READ_BASE_HI_DEFAULT                                              \
  0x00000000
#define mmDB_STENCIL_READ_BASE_DEFAULT                                           \
  0x00000000
#define mmDB_STENCIL_READ_BASE_HI_DEFAULT                                        \
  0x00000000
#define mmDB_Z_WRITE_BASE_DEFAULT                                                \
  0x00000000
#define mmDB_Z_WRITE_BASE_HI_DEFAULT                                             \
  0x00000000
#define mmDB_STENCIL_WRITE_BASE_DEFAULT                                          \
  0x00000000
#define mmDB_STENCIL_WRITE_BASE_HI_DEFAULT                                       \
  0x00000000
#define mmDB_DFSM_CONTROL_DEFAULT                                                \
  0x00000000
#define mmDB_Z_INFO2_DEFAULT                                                     \
  0x00000000
#define mmDB_STENCIL_INFO2_DEFAULT                                               \
  0x00000000
#define mmTA_BC_BASE_ADDR_DEFAULT                                                \
  0x00000000
#define mmTA_BC_BASE_ADDR_HI_DEFAULT                                             \
  0x00000000
#define mmCOHER_DEST_BASE_HI_0_DEFAULT                                           \
  0x00000000
#define mmCOHER_DEST_BASE_HI_1_DEFAULT                                           \
  0x00000000
#define mmCOHER_DEST_BASE_HI_2_DEFAULT                                           \
  0x00000000
#define mmCOHER_DEST_BASE_HI_3_DEFAULT                                           \
  0x00000000
#define mmCOHER_DEST_BASE_2_DEFAULT                                              \
  0x00000000
#define mmCOHER_DEST_BASE_3_DEFAULT                                              \
  0x00000000
#define mmPA_SC_WINDOW_OFFSET_DEFAULT                                            \
  0x00000000
#define mmPA_SC_WINDOW_SCISSOR_TL_DEFAULT                                        \
  0x00000000
#define mmPA_SC_WINDOW_SCISSOR_BR_DEFAULT                                        \
  0x00000000
#define mmPA_SC_CLIPRECT_RULE_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_0_TL_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_0_BR_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_1_TL_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_1_BR_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_2_TL_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_2_BR_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_3_TL_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CLIPRECT_3_BR_DEFAULT                                            \
  0x00000000
#define mmPA_SC_EDGERULE_DEFAULT                                                 \
  0x00000000
#define mmPA_SU_HARDWARE_SCREEN_OFFSET_DEFAULT                                   \
  0x00000000
#define mmCB_TARGET_MASK_DEFAULT                                                 \
  0x00000000
#define mmCB_SHADER_MASK_DEFAULT                                                 \
  0x00000000
#define mmPA_SC_GENERIC_SCISSOR_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_GENERIC_SCISSOR_BR_DEFAULT                                       \
  0x00000000
#define mmCOHER_DEST_BASE_0_DEFAULT                                              \
  0x00000000
#define mmCOHER_DEST_BASE_1_DEFAULT                                              \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_0_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_0_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_1_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_1_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_2_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_2_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_3_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_3_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_4_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_4_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_5_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_5_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_6_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_6_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_7_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_7_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_8_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_8_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_9_TL_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_9_BR_DEFAULT                                       \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_10_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_10_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_11_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_11_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_12_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_12_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_13_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_13_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_14_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_14_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_15_TL_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_SCISSOR_15_BR_DEFAULT                                      \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_0_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_0_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_1_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_1_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_2_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_2_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_3_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_3_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_4_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_4_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_5_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_5_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_6_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_6_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_7_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_7_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_8_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_8_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_9_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_9_DEFAULT                                             \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_10_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_10_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_11_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_11_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_12_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_12_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_13_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_13_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_14_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_14_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMIN_15_DEFAULT                                            \
  0x00000000
#define mmPA_SC_VPORT_ZMAX_15_DEFAULT                                            \
  0x00000000
#define mmPA_SC_RASTER_CONFIG_DEFAULT                                            \
  0x00000000
#define mmPA_SC_RASTER_CONFIG_1_DEFAULT                                          \
  0x00000000
#define mmPA_SC_SCREEN_EXTENT_CONTROL_DEFAULT                                    \
  0x00000000
#define mmPA_SC_TILE_STEERING_OVERRIDE_DEFAULT                                   \
  0x00000000
#define mmCP_PERFMON_CNTX_CNTL_DEFAULT                                           \
  0x00000000
#define mmCP_PIPEID_DEFAULT                                                      \
  0x00000000
#define mmCP_RINGID_DEFAULT                                                      \
  0x00000000
#define mmCP_VMID_DEFAULT                                                        \
  0x00000000
#define mmPA_SC_RIGHT_VERT_GRID_DEFAULT                                          \
  0x00000000
#define mmPA_SC_LEFT_VERT_GRID_DEFAULT                                           \
  0x00000000
#define mmPA_SC_HORIZ_GRID_DEFAULT                                               \
  0x00000000
#define mmVGT_MULTI_PRIM_IB_RESET_INDX_DEFAULT                                   \
  0x00000000
#define mmCB_BLEND_RED_DEFAULT                                                   \
  0x00000000
#define mmCB_BLEND_GREEN_DEFAULT                                                 \
  0x00000000
#define mmCB_BLEND_BLUE_DEFAULT                                                  \
  0x00000000
#define mmCB_BLEND_ALPHA_DEFAULT                                                 \
  0x00000000
#define mmCB_DCC_CONTROL_DEFAULT                                                 \
  0x00000000
#define mmDB_STENCIL_CONTROL_DEFAULT                                             \
  0x00000000
#define mmDB_STENCILREFMASK_DEFAULT                                              \
  0x00000000
#define mmDB_STENCILREFMASK_BF_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_DEFAULT                                             \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_DEFAULT                                            \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_DEFAULT                                             \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_DEFAULT                                            \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_DEFAULT                                             \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_DEFAULT                                            \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_1_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_1_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_1_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_1_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_1_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_1_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_2_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_2_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_2_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_2_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_2_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_2_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_3_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_3_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_3_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_3_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_3_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_3_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_4_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_4_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_4_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_4_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_4_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_4_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_5_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_5_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_5_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_5_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_5_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_5_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_6_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_6_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_6_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_6_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_6_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_6_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_7_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_7_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_7_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_7_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_7_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_7_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_8_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_8_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_8_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_8_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_8_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_8_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_9_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_9_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_9_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_9_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_9_DEFAULT                                           \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_9_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_10_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_10_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_10_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_10_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_10_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_10_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_11_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_11_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_11_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_11_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_11_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_11_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_12_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_12_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_12_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_12_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_12_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_12_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_13_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_13_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_13_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_13_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_13_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_13_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_14_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_14_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_14_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_14_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_14_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_14_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_XSCALE_15_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_XOFFSET_15_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_YSCALE_15_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_YOFFSET_15_DEFAULT                                         \
  0x00000000
#define mmPA_CL_VPORT_ZSCALE_15_DEFAULT                                          \
  0x00000000
#define mmPA_CL_VPORT_ZOFFSET_15_DEFAULT                                         \
  0x00000000
#define mmPA_CL_UCP_0_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_0_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_0_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_0_W_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_1_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_1_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_1_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_1_W_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_2_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_2_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_2_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_2_W_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_3_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_3_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_3_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_3_W_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_4_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_4_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_4_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_4_W_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_5_X_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_5_Y_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_5_Z_DEFAULT                                                  \
  0x00000000
#define mmPA_CL_UCP_5_W_DEFAULT                                                  \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_0_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_1_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_2_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_3_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_4_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_5_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_6_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_7_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_8_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_9_DEFAULT                                            \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_10_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_11_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_12_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_13_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_14_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_15_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_16_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_17_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_18_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_19_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_20_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_21_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_22_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_23_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_24_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_25_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_26_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_27_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_28_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_29_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_30_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_INPUT_CNTL_31_DEFAULT                                           \
  0x00000000
#define mmSPI_VS_OUT_CONFIG_DEFAULT                                              \
  0x00000000
#define mmSPI_PS_INPUT_ENA_DEFAULT                                               \
  0x00000000
#define mmSPI_PS_INPUT_ADDR_DEFAULT                                              \
  0x00000000
#define mmSPI_INTERP_CONTROL_0_DEFAULT                                           \
  0x00000000
#define mmSPI_PS_IN_CONTROL_DEFAULT                                              \
  0x00000000
#define mmSPI_BARYC_CNTL_DEFAULT                                                 \
  0x00000000
#define mmSPI_TMPRING_SIZE_DEFAULT                                               \
  0x00000000
#define mmSPI_SHADER_POS_FORMAT_DEFAULT                                          \
  0x00000000
#define mmSPI_SHADER_Z_FORMAT_DEFAULT                                            \
  0x00000000
#define mmSPI_SHADER_COL_FORMAT_DEFAULT                                          \
  0x00000000
#define mmSX_PS_DOWNCONVERT_DEFAULT                                              \
  0x00000000
#define mmSX_BLEND_OPT_EPSILON_DEFAULT                                           \
  0x00000000
#define mmSX_BLEND_OPT_CONTROL_DEFAULT                                           \
  0x00000000
#define mmSX_MRT0_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT1_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT2_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT3_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT4_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT5_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT6_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmSX_MRT7_BLEND_OPT_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND0_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND1_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND2_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND3_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND4_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND5_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND6_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_BLEND7_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCB_MRT0_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT1_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT2_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT3_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT4_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT5_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT6_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCB_MRT7_EPITCH_DEFAULT                                                 \
  0x00000000
#define mmCS_COPY_STATE_DEFAULT                                                  \
  0x00000000
#define mmGFX_COPY_STATE_DEFAULT                                                 \
  0x00000000
#define mmPA_CL_POINT_X_RAD_DEFAULT                                              \
  0x00000000
#define mmPA_CL_POINT_Y_RAD_DEFAULT                                              \
  0x00000000
#define mmPA_CL_POINT_SIZE_DEFAULT                                               \
  0x00000000
#define mmPA_CL_POINT_CULL_RAD_DEFAULT                                           \
  0x00000000
#define mmVGT_DMA_BASE_HI_DEFAULT                                                \
  0x00000000
#define mmVGT_DMA_BASE_DEFAULT                                                   \
  0x00000000
#define mmVGT_DRAW_INITIATOR_DEFAULT                                             \
  0x00000000
#define mmVGT_IMMED_DATA_DEFAULT                                                 \
  0x00000000
#define mmVGT_EVENT_ADDRESS_REG_DEFAULT                                          \
  0x00000000
#define mmDB_DEPTH_CONTROL_DEFAULT                                               \
  0x00000000
#define mmDB_EQAA_DEFAULT                                                        \
  0x00000000
#define mmCB_COLOR_CONTROL_DEFAULT                                               \
  0x00000000
#define mmDB_SHADER_CONTROL_DEFAULT                                              \
  0x00000000
#define mmPA_CL_CLIP_CNTL_DEFAULT                                                \
  0x00000000
#define mmPA_SU_SC_MODE_CNTL_DEFAULT                                             \
  0x00000000
#define mmPA_CL_VTE_CNTL_DEFAULT                                                 \
  0x00000000
#define mmPA_CL_VS_OUT_CNTL_DEFAULT                                              \
  0x00000000
#define mmPA_CL_NANINF_CNTL_DEFAULT                                              \
  0x00000000
#define mmPA_SU_LINE_STIPPLE_CNTL_DEFAULT                                        \
  0x00000000
#define mmPA_SU_LINE_STIPPLE_SCALE_DEFAULT                                       \
  0x00000000
#define mmPA_SU_PRIM_FILTER_CNTL_DEFAULT                                         \
  0x00000000
#define mmPA_SU_SMALL_PRIM_FILTER_CNTL_DEFAULT                                   \
  0x00000000
#define mmPA_CL_OBJPRIM_ID_CNTL_DEFAULT                                          \
  0x00000000
#define mmPA_CL_NGG_CNTL_DEFAULT                                                 \
  0x00000000
#define mmPA_SU_OVER_RASTERIZATION_CNTL_DEFAULT                                  \
  0x00000000
#define mmPA_SU_POINT_SIZE_DEFAULT                                               \
  0x00000000
#define mmPA_SU_POINT_MINMAX_DEFAULT                                             \
  0x00000000
#define mmPA_SU_LINE_CNTL_DEFAULT                                                \
  0x00000000
#define mmPA_SC_LINE_STIPPLE_DEFAULT                                             \
  0x00000000
#define mmVGT_OUTPUT_PATH_CNTL_DEFAULT                                           \
  0x00000000
#define mmVGT_HOS_CNTL_DEFAULT                                                   \
  0x00000000
#define mmVGT_HOS_MAX_TESS_LEVEL_DEFAULT                                         \
  0x00000000
#define mmVGT_HOS_MIN_TESS_LEVEL_DEFAULT                                         \
  0x00000000
#define mmVGT_HOS_REUSE_DEPTH_DEFAULT                                            \
  0x00000000
#define mmVGT_GROUP_PRIM_TYPE_DEFAULT                                            \
  0x00000000
#define mmVGT_GROUP_FIRST_DECR_DEFAULT                                           \
  0x00000000
#define mmVGT_GROUP_DECR_DEFAULT                                                 \
  0x00000000
#define mmVGT_GROUP_VECT_0_CNTL_DEFAULT                                          \
  0x00000000
#define mmVGT_GROUP_VECT_1_CNTL_DEFAULT                                          \
  0x00000000
#define mmVGT_GROUP_VECT_0_FMT_CNTL_DEFAULT                                      \
  0x00000000
#define mmVGT_GROUP_VECT_1_FMT_CNTL_DEFAULT                                      \
  0x00000000
#define mmVGT_GS_MODE_DEFAULT                                                    \
  0x00000000
#define mmVGT_GS_ONCHIP_CNTL_DEFAULT                                             \
  0x00000000
#define mmPA_SC_MODE_CNTL_0_DEFAULT                                              \
  0x00000000
#define mmPA_SC_MODE_CNTL_1_DEFAULT                                              \
  0x06000000
#define mmVGT_ENHANCE_DEFAULT                                                    \
  0x00000000
#define mmVGT_GS_PER_ES_DEFAULT                                                  \
  0x00000000
#define mmVGT_ES_PER_GS_DEFAULT                                                  \
  0x00000000
#define mmVGT_GS_PER_VS_DEFAULT                                                  \
  0x00000000
#define mmVGT_GSVS_RING_OFFSET_1_DEFAULT                                         \
  0x00000000
#define mmVGT_GSVS_RING_OFFSET_2_DEFAULT                                         \
  0x00000000
#define mmVGT_GSVS_RING_OFFSET_3_DEFAULT                                         \
  0x00000000
#define mmVGT_GS_OUT_PRIM_TYPE_DEFAULT                                           \
  0x00000000
#define mmIA_ENHANCE_DEFAULT                                                     \
  0x00000000
#define mmVGT_DMA_SIZE_DEFAULT                                                   \
  0x00000000
#define mmVGT_DMA_MAX_SIZE_DEFAULT                                               \
  0x00000000
#define mmVGT_DMA_INDEX_TYPE_DEFAULT                                             \
  0x00000000
#define mmWD_ENHANCE_DEFAULT                                                     \
  0x00000000
#define mmVGT_PRIMITIVEID_EN_DEFAULT                                             \
  0x00000000
#define mmVGT_DMA_NUM_INSTANCES_DEFAULT                                          \
  0x00000000
#define mmVGT_PRIMITIVEID_RESET_DEFAULT                                          \
  0x00000000
#define mmVGT_EVENT_INITIATOR_DEFAULT                                            \
  0x00000000
#define mmVGT_GS_MAX_PRIMS_PER_SUBGROUP_DEFAULT                                  \
  0x00000000
#define mmVGT_DRAW_PAYLOAD_CNTL_DEFAULT                                          \
  0x00000000
#define mmVGT_INSTANCE_STEP_RATE_0_DEFAULT                                       \
  0x00000000
#define mmVGT_INSTANCE_STEP_RATE_1_DEFAULT                                       \
  0x00000000
#define mmVGT_ESGS_RING_ITEMSIZE_DEFAULT                                         \
  0x00000000
#define mmVGT_GSVS_RING_ITEMSIZE_DEFAULT                                         \
  0x00000000
#define mmVGT_REUSE_OFF_DEFAULT                                                  \
  0x00000000
#define mmVGT_VTX_CNT_EN_DEFAULT                                                 \
  0x00000000
#define mmDB_HTILE_SURFACE_DEFAULT                                               \
  0x00000000
#define mmDB_SRESULTS_COMPARE_STATE0_DEFAULT                                     \
  0x00000000
#define mmDB_SRESULTS_COMPARE_STATE1_DEFAULT                                     \
  0x00000000
#define mmDB_PRELOAD_CONTROL_DEFAULT                                             \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_SIZE_0_DEFAULT                                      \
  0x00000000
#define mmVGT_STRMOUT_VTX_STRIDE_0_DEFAULT                                       \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_OFFSET_0_DEFAULT                                    \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_SIZE_1_DEFAULT                                      \
  0x00000000
#define mmVGT_STRMOUT_VTX_STRIDE_1_DEFAULT                                       \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_OFFSET_1_DEFAULT                                    \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_SIZE_2_DEFAULT                                      \
  0x00000000
#define mmVGT_STRMOUT_VTX_STRIDE_2_DEFAULT                                       \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_OFFSET_2_DEFAULT                                    \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_SIZE_3_DEFAULT                                      \
  0x00000000
#define mmVGT_STRMOUT_VTX_STRIDE_3_DEFAULT                                       \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_OFFSET_3_DEFAULT                                    \
  0x00000000
#define mmVGT_STRMOUT_DRAW_OPAQUE_OFFSET_DEFAULT                                 \
  0x00000000
#define mmVGT_STRMOUT_DRAW_OPAQUE_BUFFER_FILLED_SIZE_DEFAULT                     \
  0x00000000
#define mmVGT_STRMOUT_DRAW_OPAQUE_VERTEX_STRIDE_DEFAULT                          \
  0x00000000
#define mmVGT_GS_MAX_VERT_OUT_DEFAULT                                            \
  0x00000000
#define mmVGT_TESS_DISTRIBUTION_DEFAULT                                          \
  0x00000000
#define mmVGT_SHADER_STAGES_EN_DEFAULT                                           \
  0x00000000
#define mmVGT_LS_HS_CONFIG_DEFAULT                                               \
  0x00000000
#define mmVGT_GS_VERT_ITEMSIZE_DEFAULT                                           \
  0x00000000
#define mmVGT_GS_VERT_ITEMSIZE_1_DEFAULT                                         \
  0x00000000
#define mmVGT_GS_VERT_ITEMSIZE_2_DEFAULT                                         \
  0x00000000
#define mmVGT_GS_VERT_ITEMSIZE_3_DEFAULT                                         \
  0x00000000
#define mmVGT_TF_PARAM_DEFAULT                                                   \
  0x00000000
#define mmDB_ALPHA_TO_MASK_DEFAULT                                               \
  0x00000000
#define mmVGT_DISPATCH_DRAW_INDEX_DEFAULT                                        \
  0x00000000
#define mmPA_SU_POLY_OFFSET_DB_FMT_CNTL_DEFAULT                                  \
  0x00000000
#define mmPA_SU_POLY_OFFSET_CLAMP_DEFAULT                                        \
  0x00000000
#define mmPA_SU_POLY_OFFSET_FRONT_SCALE_DEFAULT                                  \
  0x00000000
#define mmPA_SU_POLY_OFFSET_FRONT_OFFSET_DEFAULT                                 \
  0x00000000
#define mmPA_SU_POLY_OFFSET_BACK_SCALE_DEFAULT                                   \
  0x00000000
#define mmPA_SU_POLY_OFFSET_BACK_OFFSET_DEFAULT                                  \
  0x00000000
#define mmVGT_GS_INSTANCE_CNT_DEFAULT                                            \
  0x00000000
#define mmVGT_STRMOUT_CONFIG_DEFAULT                                             \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_CONFIG_DEFAULT                                      \
  0x00000000
#define mmVGT_DMA_EVENT_INITIATOR_DEFAULT                                        \
  0x00000000
#define mmPA_SC_CENTROID_PRIORITY_0_DEFAULT                                      \
  0x00000000
#define mmPA_SC_CENTROID_PRIORITY_1_DEFAULT                                      \
  0x00000000
#define mmPA_SC_LINE_CNTL_DEFAULT                                                \
  0x00000000
#define mmPA_SC_AA_CONFIG_DEFAULT                                                \
  0x00000000
#define mmPA_SU_VTX_CNTL_DEFAULT                                                 \
  0x00000000
#define mmPA_CL_GB_VERT_CLIP_ADJ_DEFAULT                                         \
  0x00000000
#define mmPA_CL_GB_VERT_DISC_ADJ_DEFAULT                                         \
  0x00000000
#define mmPA_CL_GB_HORZ_CLIP_ADJ_DEFAULT                                         \
  0x00000000
#define mmPA_CL_GB_HORZ_DISC_ADJ_DEFAULT                                         \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_0_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_1_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_2_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_0_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_1_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_2_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_3_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_0_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_1_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_2_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_3_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_0_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_1_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_2_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3_DEFAULT                              \
  0x00000000
#define mmPA_SC_AA_MASK_X0Y0_X1Y0_DEFAULT                                        \
  0x00000000
#define mmPA_SC_AA_MASK_X0Y1_X1Y1_DEFAULT                                        \
  0x00000000
#define mmPA_SC_SHADER_CONTROL_DEFAULT                                           \
  0x00000000
#define mmPA_SC_BINNER_CNTL_0_DEFAULT                                            \
  0x00000000
#define mmPA_SC_BINNER_CNTL_1_DEFAULT                                            \
  0x00000000
#define mmPA_SC_CONSERVATIVE_RASTERIZATION_CNTL_DEFAULT                          \
  0x00000000
#define mmPA_SC_NGG_MODE_CNTL_DEFAULT                                            \
  0x00000000
#define mmVGT_VERTEX_REUSE_BLOCK_CNTL_DEFAULT                                    \
  0x00000000
#define mmVGT_OUT_DEALLOC_CNTL_DEFAULT                                           \
  0x00000000
#define mmCB_COLOR0_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR0_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR0_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR0_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR0_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR0_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR0_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR0_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR0_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR0_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR0_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR0_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR0_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR0_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR0_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR1_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR1_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR1_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR1_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR1_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR1_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR1_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR1_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR1_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR1_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR1_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR1_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR1_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR1_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR1_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR2_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR2_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR2_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR2_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR2_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR2_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR2_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR2_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR2_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR2_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR2_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR2_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR2_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR2_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR2_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR3_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR3_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR3_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR3_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR3_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR3_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR3_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR3_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR3_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR3_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR3_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR3_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR3_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR3_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR3_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR4_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR4_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR4_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR4_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR4_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR4_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR4_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR4_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR4_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR4_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR4_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR4_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR4_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR4_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR4_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR5_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR5_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR5_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR5_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR5_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR5_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR5_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR5_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR5_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR5_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR5_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR5_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR5_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR5_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR5_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR6_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR6_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR6_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR6_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR6_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR6_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR6_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR6_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR6_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR6_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR6_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR6_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR6_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR6_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR6_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000
#define mmCB_COLOR7_BASE_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR7_BASE_EXT_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR7_ATTRIB2_DEFAULT                                              \
  0x00000000
#define mmCB_COLOR7_VIEW_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR7_INFO_DEFAULT                                                 \
  0x00000000
#define mmCB_COLOR7_ATTRIB_DEFAULT                                               \
  0x00000000
#define mmCB_COLOR7_DCC_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR7_CMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR7_CMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR7_FMASK_DEFAULT                                                \
  0x00000000
#define mmCB_COLOR7_FMASK_BASE_EXT_DEFAULT                                       \
  0x00000000
#define mmCB_COLOR7_CLEAR_WORD0_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR7_CLEAR_WORD1_DEFAULT                                          \
  0x00000000
#define mmCB_COLOR7_DCC_BASE_DEFAULT                                             \
  0x00000000
#define mmCB_COLOR7_DCC_BASE_EXT_DEFAULT                                         \
  0x00000000

// addressBlock: gc_gfxudec
#define mmCP_EOP_DONE_ADDR_LO_DEFAULT                                            \
  0x00000000
#define mmCP_EOP_DONE_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_EOP_DONE_DATA_LO_DEFAULT                                            \
  0x00000000
#define mmCP_EOP_DONE_DATA_HI_DEFAULT                                            \
  0x00000000
#define mmCP_EOP_LAST_FENCE_LO_DEFAULT                                           \
  0x00000000
#define mmCP_EOP_LAST_FENCE_HI_DEFAULT                                           \
  0x00000000
#define mmCP_STREAM_OUT_ADDR_LO_DEFAULT                                          \
  0x00000000
#define mmCP_STREAM_OUT_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT0_LO_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT0_HI_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT0_LO_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT0_HI_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT1_LO_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT1_HI_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT1_LO_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT1_HI_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT2_LO_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT2_HI_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT2_LO_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT2_HI_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT3_LO_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_WRITTEN_COUNT3_HI_DEFAULT                                  \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT3_LO_DEFAULT                                   \
  0x00000000
#define mmCP_NUM_PRIM_NEEDED_COUNT3_HI_DEFAULT                                   \
  0x00000000
#define mmCP_PIPE_STATS_ADDR_LO_DEFAULT                                          \
  0x00000000
#define mmCP_PIPE_STATS_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmCP_VGT_IAVERT_COUNT_LO_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_IAVERT_COUNT_HI_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_IAPRIM_COUNT_LO_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_IAPRIM_COUNT_HI_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_GSPRIM_COUNT_LO_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_GSPRIM_COUNT_HI_DEFAULT                                         \
  0x00000000
#define mmCP_VGT_VSINVOC_COUNT_LO_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_VSINVOC_COUNT_HI_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_GSINVOC_COUNT_LO_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_GSINVOC_COUNT_HI_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_HSINVOC_COUNT_LO_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_HSINVOC_COUNT_HI_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_DSINVOC_COUNT_LO_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_DSINVOC_COUNT_HI_DEFAULT                                        \
  0x00000000
#define mmCP_PA_CINVOC_COUNT_LO_DEFAULT                                          \
  0x00000000
#define mmCP_PA_CINVOC_COUNT_HI_DEFAULT                                          \
  0x00000000
#define mmCP_PA_CPRIM_COUNT_LO_DEFAULT                                           \
  0x00000000
#define mmCP_PA_CPRIM_COUNT_HI_DEFAULT                                           \
  0x00000000
#define mmCP_SC_PSINVOC_COUNT0_LO_DEFAULT                                        \
  0x00000000
#define mmCP_SC_PSINVOC_COUNT0_HI_DEFAULT                                        \
  0x00000000
#define mmCP_SC_PSINVOC_COUNT1_LO_DEFAULT                                        \
  0x00000000
#define mmCP_SC_PSINVOC_COUNT1_HI_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_CSINVOC_COUNT_LO_DEFAULT                                        \
  0x00000000
#define mmCP_VGT_CSINVOC_COUNT_HI_DEFAULT                                        \
  0x00000000
#define mmCP_PIPE_STATS_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCP_STREAM_OUT_CONTROL_DEFAULT                                          \
  0x00000000
#define mmCP_STRMOUT_CNTL_DEFAULT                                                \
  0x00000000
#define mmSCRATCH_REG0_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG1_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG2_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG3_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG4_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG5_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG6_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_REG7_DEFAULT                                                   \
  0x00000000
#define mmCP_APPEND_DATA_HI_DEFAULT                                              \
  0x00000000
#define mmCP_APPEND_LAST_CS_FENCE_HI_DEFAULT                                     \
  0x00000000
#define mmCP_APPEND_LAST_PS_FENCE_HI_DEFAULT                                     \
  0x00000000
#define mmSCRATCH_UMSK_DEFAULT                                                   \
  0x00000000
#define mmSCRATCH_ADDR_DEFAULT                                                   \
  0x00000000
#define mmCP_PFP_ATOMIC_PREOP_LO_DEFAULT                                         \
  0x00000000
#define mmCP_PFP_ATOMIC_PREOP_HI_DEFAULT                                         \
  0x00000000
#define mmCP_PFP_GDS_ATOMIC0_PREOP_LO_DEFAULT                                    \
  0x00000000
#define mmCP_PFP_GDS_ATOMIC0_PREOP_HI_DEFAULT                                    \
  0x00000000
#define mmCP_PFP_GDS_ATOMIC1_PREOP_LO_DEFAULT                                    \
  0x00000000
#define mmCP_PFP_GDS_ATOMIC1_PREOP_HI_DEFAULT                                    \
  0x00000000
#define mmCP_APPEND_ADDR_LO_DEFAULT                                              \
  0x00000000
#define mmCP_APPEND_ADDR_HI_DEFAULT                                              \
  0x00000000
#define mmCP_APPEND_DATA_LO_DEFAULT                                              \
  0x00000000
#define mmCP_APPEND_LAST_CS_FENCE_LO_DEFAULT                                     \
  0x00000000
#define mmCP_APPEND_LAST_PS_FENCE_LO_DEFAULT                                     \
  0x00000000
#define mmCP_ATOMIC_PREOP_LO_DEFAULT                                             \
  0x00000000
#define mmCP_ME_ATOMIC_PREOP_LO_DEFAULT                                          \
  0x00000000
#define mmCP_ATOMIC_PREOP_HI_DEFAULT                                             \
  0x00000000
#define mmCP_ME_ATOMIC_PREOP_HI_DEFAULT                                          \
  0x00000000
#define mmCP_GDS_ATOMIC0_PREOP_LO_DEFAULT                                        \
  0x00000000
#define mmCP_ME_GDS_ATOMIC0_PREOP_LO_DEFAULT                                     \
  0x00000000
#define mmCP_GDS_ATOMIC0_PREOP_HI_DEFAULT                                        \
  0x00000000
#define mmCP_ME_GDS_ATOMIC0_PREOP_HI_DEFAULT                                     \
  0x00000000
#define mmCP_GDS_ATOMIC1_PREOP_LO_DEFAULT                                        \
  0x00000000
#define mmCP_ME_GDS_ATOMIC1_PREOP_LO_DEFAULT                                     \
  0x00000000
#define mmCP_GDS_ATOMIC1_PREOP_HI_DEFAULT                                        \
  0x00000000
#define mmCP_ME_GDS_ATOMIC1_PREOP_HI_DEFAULT                                     \
  0x00000000
#define mmCP_ME_MC_WADDR_LO_DEFAULT                                              \
  0x00000000
#define mmCP_ME_MC_WADDR_HI_DEFAULT                                              \
  0x00000000
#define mmCP_ME_MC_WDATA_LO_DEFAULT                                              \
  0x00000000
#define mmCP_ME_MC_WDATA_HI_DEFAULT                                              \
  0x00000000
#define mmCP_ME_MC_RADDR_LO_DEFAULT                                              \
  0x00000000
#define mmCP_ME_MC_RADDR_HI_DEFAULT                                              \
  0x00000000
#define mmCP_SEM_WAIT_TIMER_DEFAULT                                              \
  0x00000000
#define mmCP_SIG_SEM_ADDR_LO_DEFAULT                                             \
  0x00000000
#define mmCP_SIG_SEM_ADDR_HI_DEFAULT                                             \
  0x00000000
#define mmCP_WAIT_REG_MEM_TIMEOUT_DEFAULT                                        \
  0x00000000
#define mmCP_WAIT_SEM_ADDR_LO_DEFAULT                                            \
  0x00000000
#define mmCP_WAIT_SEM_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_DMA_PFP_CONTROL_DEFAULT                                             \
  0x00000000
#define mmCP_DMA_ME_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCP_COHER_BASE_HI_DEFAULT                                               \
  0x00000000
#define mmCP_COHER_START_DELAY_DEFAULT                                           \
  0x00000020
#define mmCP_COHER_CNTL_DEFAULT                                                  \
  0x00000000
#define mmCP_COHER_SIZE_DEFAULT                                                  \
  0x00000000
#define mmCP_COHER_BASE_DEFAULT                                                  \
  0x00000000
#define mmCP_COHER_STATUS_DEFAULT                                                \
  0x00000000
#define mmCP_DMA_ME_SRC_ADDR_DEFAULT                                             \
  0x00000000
#define mmCP_DMA_ME_SRC_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmCP_DMA_ME_DST_ADDR_DEFAULT                                             \
  0x00000000
#define mmCP_DMA_ME_DST_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmCP_DMA_ME_COMMAND_DEFAULT                                              \
  0x00000000
#define mmCP_DMA_PFP_SRC_ADDR_DEFAULT                                            \
  0x00000000
#define mmCP_DMA_PFP_SRC_ADDR_HI_DEFAULT                                         \
  0x00000000
#define mmCP_DMA_PFP_DST_ADDR_DEFAULT                                            \
  0x00000000
#define mmCP_DMA_PFP_DST_ADDR_HI_DEFAULT                                         \
  0x00000000
#define mmCP_DMA_PFP_COMMAND_DEFAULT                                             \
  0x00000000
#define mmCP_DMA_CNTL_DEFAULT                                                    \
  0x00080030
#define mmCP_DMA_READ_TAGS_DEFAULT                                               \
  0x00000000
#define mmCP_COHER_SIZE_HI_DEFAULT                                               \
  0x00000000
#define mmCP_PFP_IB_CONTROL_DEFAULT                                              \
  0x00000000
#define mmCP_PFP_LOAD_CONTROL_DEFAULT                                            \
  0x00000000
#define mmCP_SCRATCH_INDEX_DEFAULT                                               \
  0x00000000
#define mmCP_SCRATCH_DATA_DEFAULT                                                \
  0x00000000
#define mmCP_RB_OFFSET_DEFAULT                                                   \
  0x00000000
#define mmCP_IB1_OFFSET_DEFAULT                                                  \
  0x00000000
#define mmCP_IB2_OFFSET_DEFAULT                                                  \
  0x00000000
#define mmCP_IB1_PREAMBLE_BEGIN_DEFAULT                                          \
  0x00000000
#define mmCP_IB1_PREAMBLE_END_DEFAULT                                            \
  0x00000000
#define mmCP_IB2_PREAMBLE_BEGIN_DEFAULT                                          \
  0x00000000
#define mmCP_IB2_PREAMBLE_END_DEFAULT                                            \
  0x00000000
#define mmCP_CE_IB1_OFFSET_DEFAULT                                               \
  0x00000000
#define mmCP_CE_IB2_OFFSET_DEFAULT                                               \
  0x00000000
#define mmCP_CE_COUNTER_DEFAULT                                                  \
  0x00000000
#define mmCP_CE_RB_OFFSET_DEFAULT                                                \
  0x00000000
#define mmCP_CE_INIT_CMD_BUFSZ_DEFAULT                                           \
  0x00000000
#define mmCP_CE_IB1_CMD_BUFSZ_DEFAULT                                            \
  0x00000000
#define mmCP_CE_IB2_CMD_BUFSZ_DEFAULT                                            \
  0x00000000
#define mmCP_IB1_CMD_BUFSZ_DEFAULT                                               \
  0x00000000
#define mmCP_IB2_CMD_BUFSZ_DEFAULT                                               \
  0x00000000
#define mmCP_ST_CMD_BUFSZ_DEFAULT                                                \
  0x00000000
#define mmCP_CE_INIT_BASE_LO_DEFAULT                                             \
  0x00000000
#define mmCP_CE_INIT_BASE_HI_DEFAULT                                             \
  0x00000000
#define mmCP_CE_INIT_BUFSZ_DEFAULT                                               \
  0x00000000
#define mmCP_CE_IB1_BASE_LO_DEFAULT                                              \
  0x00000000
#define mmCP_CE_IB1_BASE_HI_DEFAULT                                              \
  0x00000000
#define mmCP_CE_IB1_BUFSZ_DEFAULT                                                \
  0x00000000
#define mmCP_CE_IB2_BASE_LO_DEFAULT                                              \
  0x00000000
#define mmCP_CE_IB2_BASE_HI_DEFAULT                                              \
  0x00000000
#define mmCP_CE_IB2_BUFSZ_DEFAULT                                                \
  0x00000000
#define mmCP_IB1_BASE_LO_DEFAULT                                                 \
  0x00000000
#define mmCP_IB1_BASE_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_IB1_BUFSZ_DEFAULT                                                   \
  0x00000000
#define mmCP_IB2_BASE_LO_DEFAULT                                                 \
  0x00000000
#define mmCP_IB2_BASE_HI_DEFAULT                                                 \
  0x00000000
#define mmCP_IB2_BUFSZ_DEFAULT                                                   \
  0x00000000
#define mmCP_ST_BASE_LO_DEFAULT                                                  \
  0x00000000
#define mmCP_ST_BASE_HI_DEFAULT                                                  \
  0x00000000
#define mmCP_ST_BUFSZ_DEFAULT                                                    \
  0x00000000
#define mmCP_EOP_DONE_EVENT_CNTL_DEFAULT                                         \
  0x00000000
#define mmCP_EOP_DONE_DATA_CNTL_DEFAULT                                          \
  0x00000000
#define mmCP_EOP_DONE_CNTX_ID_DEFAULT                                            \
  0x00000000
#define mmCP_PFP_COMPLETION_STATUS_DEFAULT                                       \
  0x00000000
#define mmCP_CE_COMPLETION_STATUS_DEFAULT                                        \
  0x00000000
#define mmCP_PRED_NOT_VISIBLE_DEFAULT                                            \
  0x00000000
#define mmCP_PFP_METADATA_BASE_ADDR_DEFAULT                                      \
  0x00000000
#define mmCP_PFP_METADATA_BASE_ADDR_HI_DEFAULT                                   \
  0x00000000
#define mmCP_CE_METADATA_BASE_ADDR_DEFAULT                                       \
  0x00000000
#define mmCP_CE_METADATA_BASE_ADDR_HI_DEFAULT                                    \
  0x00000000
#define mmCP_DRAW_INDX_INDR_ADDR_DEFAULT                                         \
  0x00000000
#define mmCP_DRAW_INDX_INDR_ADDR_HI_DEFAULT                                      \
  0x00000000
#define mmCP_DISPATCH_INDR_ADDR_DEFAULT                                          \
  0x00000000
#define mmCP_DISPATCH_INDR_ADDR_HI_DEFAULT                                       \
  0x00000000
#define mmCP_INDEX_BASE_ADDR_DEFAULT                                             \
  0x00000000
#define mmCP_INDEX_BASE_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmCP_INDEX_TYPE_DEFAULT                                                  \
  0x00000000
#define mmCP_GDS_BKUP_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_GDS_BKUP_ADDR_HI_DEFAULT                                            \
  0x00000000
#define mmCP_SAMPLE_STATUS_DEFAULT                                               \
  0x00000000
#define mmCP_ME_COHER_CNTL_DEFAULT                                               \
  0x00000000
#define mmCP_ME_COHER_SIZE_DEFAULT                                               \
  0x00000000
#define mmCP_ME_COHER_SIZE_HI_DEFAULT                                            \
  0x00000000
#define mmCP_ME_COHER_BASE_DEFAULT                                               \
  0x00000000
#define mmCP_ME_COHER_BASE_HI_DEFAULT                                            \
  0x00000000
#define mmCP_ME_COHER_STATUS_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_PERF_COUNT_0_DEFAULT                                           \
  0x00000000
#define mmRLC_GPM_PERF_COUNT_1_DEFAULT                                           \
  0x00000000
#define mmGRBM_GFX_INDEX_DEFAULT                                                 \
  0xe0000000
#define mmVGT_GSVS_RING_SIZE_DEFAULT                                             \
  0x00000000
#define mmVGT_PRIMITIVE_TYPE_DEFAULT                                             \
  0x00000000
#define mmVGT_INDEX_TYPE_DEFAULT                                                 \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_FILLED_SIZE_0_DEFAULT                               \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_FILLED_SIZE_1_DEFAULT                               \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_FILLED_SIZE_2_DEFAULT                               \
  0x00000000
#define mmVGT_STRMOUT_BUFFER_FILLED_SIZE_3_DEFAULT                               \
  0x00000000
#define mmVGT_MAX_VTX_INDX_DEFAULT                                               \
  0x00000000
#define mmVGT_MIN_VTX_INDX_DEFAULT                                               \
  0x00000000
#define mmVGT_INDX_OFFSET_DEFAULT                                                \
  0x00000000
#define mmVGT_MULTI_PRIM_IB_RESET_EN_DEFAULT                                     \
  0x00000000
#define mmVGT_NUM_INDICES_DEFAULT                                                \
  0x00000000
#define mmVGT_NUM_INSTANCES_DEFAULT                                              \
  0x00000000
#define mmVGT_TF_RING_SIZE_DEFAULT                                               \
  0x00002000
#define mmVGT_HS_OFFCHIP_PARAM_DEFAULT                                           \
  0x00000000
#define mmVGT_TF_MEMORY_BASE_DEFAULT                                             \
  0x00000000
#define mmVGT_TF_MEMORY_BASE_HI_DEFAULT                                          \
  0x00000000
#define mmWD_POS_BUF_BASE_DEFAULT                                                \
  0x00000000
#define mmWD_POS_BUF_BASE_HI_DEFAULT                                             \
  0x00000000
#define mmWD_CNTL_SB_BUF_BASE_DEFAULT                                            \
  0x00000000
#define mmWD_CNTL_SB_BUF_BASE_HI_DEFAULT                                         \
  0x00000000
#define mmWD_INDEX_BUF_BASE_DEFAULT                                              \
  0x00000000
#define mmWD_INDEX_BUF_BASE_HI_DEFAULT                                           \
  0x00000000
#define mmIA_MULTI_VGT_PARAM_DEFAULT                                             \
  0x006000ff
#define mmVGT_INSTANCE_BASE_ID_DEFAULT                                           \
  0x00000000
#define mmPA_SU_LINE_STIPPLE_VALUE_DEFAULT                                       \
  0x00000000
#define mmPA_SC_LINE_STIPPLE_STATE_DEFAULT                                       \
  0x00000000
#define mmPA_SC_SCREEN_EXTENT_MIN_0_DEFAULT                                      \
  0x7fff7fff
#define mmPA_SC_SCREEN_EXTENT_MAX_0_DEFAULT                                      \
  0x80008000
#define mmPA_SC_SCREEN_EXTENT_MIN_1_DEFAULT                                      \
  0x7fff7fff
#define mmPA_SC_SCREEN_EXTENT_MAX_1_DEFAULT                                      \
  0x80008000
#define mmPA_SC_P3D_TRAP_SCREEN_HV_EN_DEFAULT                                    \
  0x00000000
#define mmPA_SC_P3D_TRAP_SCREEN_H_DEFAULT                                        \
  0x00000000
#define mmPA_SC_P3D_TRAP_SCREEN_V_DEFAULT                                        \
  0x00000000
#define mmPA_SC_P3D_TRAP_SCREEN_OCCURRENCE_DEFAULT                               \
  0x00000000
#define mmPA_SC_P3D_TRAP_SCREEN_COUNT_DEFAULT                                    \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_HV_EN_DEFAULT                                   \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_H_DEFAULT                                       \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_V_DEFAULT                                       \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_OCCURRENCE_DEFAULT                              \
  0x00000000
#define mmPA_SC_HP3D_TRAP_SCREEN_COUNT_DEFAULT                                   \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_HV_EN_DEFAULT                                        \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_H_DEFAULT                                            \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_V_DEFAULT                                            \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_OCCURRENCE_DEFAULT                                   \
  0x00000000
#define mmPA_SC_TRAP_SCREEN_COUNT_DEFAULT                                        \
  0x00000000
#define mmSQ_THREAD_TRACE_BASE_DEFAULT                                           \
  0x00000000
#define mmSQ_THREAD_TRACE_SIZE_DEFAULT                                           \
  0x00000000
#define mmSQ_THREAD_TRACE_MASK_DEFAULT                                           \
  0x0000cf80
#define mmSQ_THREAD_TRACE_TOKEN_MASK_DEFAULT                                     \
  0x00ffffff
#define mmSQ_THREAD_TRACE_PERF_MASK_DEFAULT                                      \
  0xffffffff
#define mmSQ_THREAD_TRACE_CTRL_DEFAULT                                           \
  0x00000000
#define mmSQ_THREAD_TRACE_MODE_DEFAULT                                           \
  0x02049249
#define mmSQ_THREAD_TRACE_BASE2_DEFAULT                                          \
  0x00000000
#define mmSQ_THREAD_TRACE_TOKEN_MASK2_DEFAULT                                    \
  0xffffffff
#define mmSQ_THREAD_TRACE_WPTR_DEFAULT                                           \
  0x00000000
#define mmSQ_THREAD_TRACE_STATUS_DEFAULT                                         \
  0x00000000
#define mmSQ_THREAD_TRACE_HIWATER_DEFAULT                                        \
  0x00000000
#define mmSQ_THREAD_TRACE_CNTR_DEFAULT                                           \
  0x00000000
#define mmSQ_THREAD_TRACE_USERDATA_0_DEFAULT                                     \
  0x00000000
#define mmSQ_THREAD_TRACE_USERDATA_1_DEFAULT                                     \
  0x00000000
#define mmSQ_THREAD_TRACE_USERDATA_2_DEFAULT                                     \
  0x00000000
#define mmSQ_THREAD_TRACE_USERDATA_3_DEFAULT                                     \
  0x00000000
#define mmSQC_CACHES_DEFAULT                                                     \
  0x00000000
#define mmSQC_WRITEBACK_DEFAULT                                                  \
  0x00000000
#define mmTA_CS_BC_BASE_ADDR_DEFAULT                                             \
  0x00000000
#define mmTA_CS_BC_BASE_ADDR_HI_DEFAULT                                          \
  0x00000000
#define mmDB_OCCLUSION_COUNT0_LOW_DEFAULT                                        \
  0x00000000
#define mmDB_OCCLUSION_COUNT0_HI_DEFAULT                                         \
  0x00000000
#define mmDB_OCCLUSION_COUNT1_LOW_DEFAULT                                        \
  0x00000000
#define mmDB_OCCLUSION_COUNT1_HI_DEFAULT                                         \
  0x00000000
#define mmDB_OCCLUSION_COUNT2_LOW_DEFAULT                                        \
  0x00000000
#define mmDB_OCCLUSION_COUNT2_HI_DEFAULT                                         \
  0x00000000
#define mmDB_OCCLUSION_COUNT3_LOW_DEFAULT                                        \
  0x00000000
#define mmDB_OCCLUSION_COUNT3_HI_DEFAULT                                         \
  0x00000000
#define mmDB_ZPASS_COUNT_LOW_DEFAULT                                             \
  0x00000000
#define mmDB_ZPASS_COUNT_HI_DEFAULT                                              \
  0x00000000
#define mmGDS_RD_ADDR_DEFAULT                                                    \
  0x00000000
#define mmGDS_RD_DATA_DEFAULT                                                    \
  0x00000000
#define mmGDS_RD_BURST_ADDR_DEFAULT                                              \
  0x00000000
#define mmGDS_RD_BURST_COUNT_DEFAULT                                             \
  0x00000000
#define mmGDS_RD_BURST_DATA_DEFAULT                                              \
  0x00000000
#define mmGDS_WR_ADDR_DEFAULT                                                    \
  0x00000000
#define mmGDS_WR_DATA_DEFAULT                                                    \
  0x00000000
#define mmGDS_WR_BURST_ADDR_DEFAULT                                              \
  0x00000000
#define mmGDS_WR_BURST_DATA_DEFAULT                                              \
  0x00000000
#define mmGDS_WRITE_COMPLETE_DEFAULT                                             \
  0x00000000
#define mmGDS_ATOM_CNTL_DEFAULT                                                  \
  0x00000000
#define mmGDS_ATOM_COMPLETE_DEFAULT                                              \
  0x00000001
#define mmGDS_ATOM_BASE_DEFAULT                                                  \
  0x00000000
#define mmGDS_ATOM_SIZE_DEFAULT                                                  \
  0x00000000
#define mmGDS_ATOM_OFFSET0_DEFAULT                                               \
  0x00000000
#define mmGDS_ATOM_OFFSET1_DEFAULT                                               \
  0x00000000
#define mmGDS_ATOM_DST_DEFAULT                                                   \
  0x00000000
#define mmGDS_ATOM_OP_DEFAULT                                                    \
  0x00000000
#define mmGDS_ATOM_SRC0_DEFAULT                                                  \
  0x00000000
#define mmGDS_ATOM_SRC0_U_DEFAULT                                                \
  0x00000000
#define mmGDS_ATOM_SRC1_DEFAULT                                                  \
  0x00000000
#define mmGDS_ATOM_SRC1_U_DEFAULT                                                \
  0x00000000
#define mmGDS_ATOM_READ0_DEFAULT                                                 \
  0x00000000
#define mmGDS_ATOM_READ0_U_DEFAULT                                               \
  0x00000000
#define mmGDS_ATOM_READ1_DEFAULT                                                 \
  0x00000000
#define mmGDS_ATOM_READ1_U_DEFAULT                                               \
  0x00000000
#define mmGDS_GWS_RESOURCE_CNTL_DEFAULT                                          \
  0x00000000
#define mmGDS_GWS_RESOURCE_DEFAULT                                               \
  0x00000000
#define mmGDS_GWS_RESOURCE_CNT_DEFAULT                                           \
  0x00000000
#define mmGDS_OA_CNTL_DEFAULT                                                    \
  0x00000000
#define mmGDS_OA_COUNTER_DEFAULT                                                 \
  0x00000000
#define mmGDS_OA_ADDRESS_DEFAULT                                                 \
  0x00000000
#define mmGDS_OA_INCDEC_DEFAULT                                                  \
  0x00000000
#define mmGDS_OA_RING_SIZE_DEFAULT                                               \
  0x00000000
#define mmSPI_CONFIG_CNTL_DEFAULT                                                \
  0x0062c688
#define mmSPI_CONFIG_CNTL_1_DEFAULT                                              \
  0x01000106
#define mmSPI_CONFIG_CNTL_2_DEFAULT                                              \
  0x00000011

// addressBlock: gc_perfddec
#define mmCPG_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmCPG_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmCPG_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmCPG_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmCPC_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmCPC_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmCPC_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmCPC_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmCPF_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmCPF_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmCPF_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmCPF_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmCPF_LATENCY_STATS_DATA_DEFAULT                                         \
  0x00000000
#define mmCPG_LATENCY_STATS_DATA_DEFAULT                                         \
  0x00000000
#define mmCPC_LATENCY_STATS_DATA_DEFAULT                                         \
  0x00000000
#define mmGRBM_PERFCOUNTER0_LO_DEFAULT                                           \
  0x00000000
#define mmGRBM_PERFCOUNTER0_HI_DEFAULT                                           \
  0x00000000
#define mmGRBM_PERFCOUNTER1_LO_DEFAULT                                           \
  0x00000000
#define mmGRBM_PERFCOUNTER1_HI_DEFAULT                                           \
  0x00000000
#define mmGRBM_SE0_PERFCOUNTER_LO_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE0_PERFCOUNTER_HI_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE1_PERFCOUNTER_LO_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE1_PERFCOUNTER_HI_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE2_PERFCOUNTER_LO_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE2_PERFCOUNTER_HI_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE3_PERFCOUNTER_LO_DEFAULT                                        \
  0x00000000
#define mmGRBM_SE3_PERFCOUNTER_HI_DEFAULT                                        \
  0x00000000
#define mmWD_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmWD_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmIA_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmVGT_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmVGT_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmPA_SU_PERFCOUNTER0_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER0_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER1_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER1_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER2_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER2_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER3_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SU_PERFCOUNTER3_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER0_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER0_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER1_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER1_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER2_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER2_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER3_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER3_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER4_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER4_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER5_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER5_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER6_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER6_HI_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER7_LO_DEFAULT                                          \
  0x00000000
#define mmPA_SC_PERFCOUNTER7_HI_DEFAULT                                          \
  0x00000000
#define mmSPI_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER4_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER4_LO_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER5_HI_DEFAULT                                            \
  0x00000000
#define mmSPI_PERFCOUNTER5_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER4_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER4_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER5_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER5_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER6_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER6_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER7_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER7_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER8_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER8_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER9_LO_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER9_HI_DEFAULT                                             \
  0x00000000
#define mmSQ_PERFCOUNTER10_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER10_HI_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER11_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER11_HI_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER12_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER12_HI_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER13_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER13_HI_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER14_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER14_HI_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER15_LO_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER15_HI_DEFAULT                                            \
  0x00000000
#define mmSX_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmSX_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmGDS_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmGDS_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmTA_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmTA_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmTA_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmTA_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmTD_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmTD_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmTD_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmTD_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmTCP_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmTCP_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmTCC_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmTCA_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000
#define mmCB_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmCB_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER0_LO_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER0_HI_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER1_LO_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER1_HI_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER2_LO_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER2_HI_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER3_LO_DEFAULT                                             \
  0x00000000
#define mmDB_PERFCOUNTER3_HI_DEFAULT                                             \
  0x00000000
#define mmRLC_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmRLC_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmRLC_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmRLC_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER0_LO_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER0_HI_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER1_LO_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER1_HI_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER2_LO_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER2_HI_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER3_LO_DEFAULT                                            \
  0x00000000
#define mmRMI_PERFCOUNTER3_HI_DEFAULT                                            \
  0x00000000

// addressBlock: gc_utcl2_atcl2pfcntrdec
#define mmATC_L2_PERFCOUNTER_LO_DEFAULT                                          \
  0x00000000
#define mmATC_L2_PERFCOUNTER_HI_DEFAULT                                          \
  0x00000000

// addressBlock: gc_utcl2_vml2prdec
#define mmMC_VM_L2_PERFCOUNTER_LO_DEFAULT                                        \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER_HI_DEFAULT                                        \
  0x00000000

// addressBlock: gc_perfsdec
#define mmCPG_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x11000401
#define mmCPG_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x11000401
#define mmCPG_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x11000401
#define mmCPC_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x11000401
#define mmCPC_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x11000401
#define mmCPF_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x11000401
#define mmCPF_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x11000401
#define mmCPF_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x11000401
#define mmCP_PERFMON_CNTL_DEFAULT                                                \
  0x00000000
#define mmCPC_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x11000401
#define mmCPF_TC_PERF_COUNTER_WINDOW_SELECT_DEFAULT                              \
  0x00000000
#define mmCPG_TC_PERF_COUNTER_WINDOW_SELECT_DEFAULT                              \
  0x00000000
#define mmCPF_LATENCY_STATS_SELECT_DEFAULT                                       \
  0x00000000
#define mmCPG_LATENCY_STATS_SELECT_DEFAULT                                       \
  0x00000000
#define mmCPC_LATENCY_STATS_SELECT_DEFAULT                                       \
  0x00000000
#define mmCP_DRAW_OBJECT_DEFAULT                                                 \
  0x00000000
#define mmCP_DRAW_OBJECT_COUNTER_DEFAULT                                         \
  0x00000000
#define mmCP_DRAW_WINDOW_MASK_HI_DEFAULT                                         \
  0x00000000
#define mmCP_DRAW_WINDOW_HI_DEFAULT                                              \
  0x00000000
#define mmCP_DRAW_WINDOW_LO_DEFAULT                                              \
  0x00000000
#define mmCP_DRAW_WINDOW_CNTL_DEFAULT                                            \
  0x00000007
#define mmGRBM_PERFCOUNTER0_SELECT_DEFAULT                                       \
  0x00000000
#define mmGRBM_PERFCOUNTER1_SELECT_DEFAULT                                       \
  0x00000000
#define mmGRBM_SE0_PERFCOUNTER_SELECT_DEFAULT                                    \
  0x00000000
#define mmGRBM_SE1_PERFCOUNTER_SELECT_DEFAULT                                    \
  0x00000000
#define mmGRBM_SE2_PERFCOUNTER_SELECT_DEFAULT                                    \
  0x00000000
#define mmGRBM_SE3_PERFCOUNTER_SELECT_DEFAULT                                    \
  0x00000000
#define mmWD_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmWD_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmWD_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x00000000
#define mmWD_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x00000000
#define mmIA_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmIA_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmIA_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x00000000
#define mmIA_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x00000000
#define mmIA_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmVGT_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x00000000
#define mmVGT_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x00000000
#define mmVGT_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x00000000
#define mmVGT_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x00000000
#define mmVGT_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x00000000
#define mmVGT_PERFCOUNTER1_SELECT1_DEFAULT                                       \
  0x00000000
#define mmVGT_PERFCOUNTER_SEID_MASK_DEFAULT                                      \
  0x00000000
#define mmPA_SU_PERFCOUNTER0_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SU_PERFCOUNTER0_SELECT1_DEFAULT                                     \
  0x00000000
#define mmPA_SU_PERFCOUNTER1_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SU_PERFCOUNTER1_SELECT1_DEFAULT                                     \
  0x00000000
#define mmPA_SU_PERFCOUNTER2_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SU_PERFCOUNTER3_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER0_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER0_SELECT1_DEFAULT                                     \
  0x00000000
#define mmPA_SC_PERFCOUNTER1_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER2_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER3_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER4_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER5_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER6_SELECT_DEFAULT                                      \
  0x00000000
#define mmPA_SC_PERFCOUNTER7_SELECT_DEFAULT                                      \
  0x00000000
#define mmSPI_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x000fffff
#define mmSPI_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x000fffff
#define mmSPI_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x000fffff
#define mmSPI_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x000fffff
#define mmSPI_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmSPI_PERFCOUNTER1_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmSPI_PERFCOUNTER2_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmSPI_PERFCOUNTER3_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmSPI_PERFCOUNTER4_SELECT_DEFAULT                                        \
  0x000000ff
#define mmSPI_PERFCOUNTER5_SELECT_DEFAULT                                        \
  0x000000ff
#define mmSPI_PERFCOUNTER_BINS_DEFAULT                                           \
  0xfcb87430
#define mmSQ_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER4_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER5_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER6_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER7_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER8_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER9_SELECT_DEFAULT                                         \
  0x0f0ff000
#define mmSQ_PERFCOUNTER10_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER11_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER12_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER13_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER14_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER15_SELECT_DEFAULT                                        \
  0x0f0ff000
#define mmSQ_PERFCOUNTER_CTRL_DEFAULT                                            \
  0x00000000
#define mmSQ_PERFCOUNTER_MASK_DEFAULT                                            \
  0xffffffff
#define mmSQ_PERFCOUNTER_CTRL2_DEFAULT                                           \
  0x00000000
#define mmSX_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmSX_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmSX_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x00000000
#define mmSX_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x00000000
#define mmSX_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmSX_PERFCOUNTER1_SELECT1_DEFAULT                                        \
  0x00000000
#define mmGDS_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x00000000
#define mmGDS_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x00000000
#define mmGDS_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x00000000
#define mmGDS_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x00000000
#define mmGDS_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x00000000
#define mmTA_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmTA_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmTA_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmTD_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmTD_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmTD_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmTCP_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCP_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCP_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCP_PERFCOUNTER1_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCP_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x000003ff
#define mmTCP_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x000003ff
#define mmTCC_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCC_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCC_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCC_PERFCOUNTER1_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCC_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x000003ff
#define mmTCC_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x000003ff
#define mmTCA_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCA_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCA_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x000fffff
#define mmTCA_PERFCOUNTER1_SELECT1_DEFAULT                                       \
  0x000fffff
#define mmTCA_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x000003ff
#define mmTCA_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x000003ff
#define mmCB_PERFCOUNTER_FILTER_DEFAULT                                          \
  0x00000000
#define mmCB_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmCB_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmCB_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmCB_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x00000000
#define mmCB_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x00000000
#define mmDB_PERFCOUNTER0_SELECT_DEFAULT                                         \
  0x00000000
#define mmDB_PERFCOUNTER0_SELECT1_DEFAULT                                        \
  0x00000000
#define mmDB_PERFCOUNTER1_SELECT_DEFAULT                                         \
  0x00000000
#define mmDB_PERFCOUNTER1_SELECT1_DEFAULT                                        \
  0x00000000
#define mmDB_PERFCOUNTER2_SELECT_DEFAULT                                         \
  0x00000000
#define mmDB_PERFCOUNTER3_SELECT_DEFAULT                                         \
  0x00000000
#define mmRLC_SPM_PERFMON_CNTL_DEFAULT                                           \
  0x00000000
#define mmRLC_SPM_PERFMON_RING_BASE_LO_DEFAULT                                   \
  0x00000000
#define mmRLC_SPM_PERFMON_RING_BASE_HI_DEFAULT                                   \
  0x00000000
#define mmRLC_SPM_PERFMON_RING_SIZE_DEFAULT                                      \
  0x00000000
#define mmRLC_SPM_PERFMON_SEGMENT_SIZE_DEFAULT                                   \
  0x00000000
#define mmRLC_SPM_SE_MUXSEL_ADDR_DEFAULT                                         \
  0x00000000
#define mmRLC_SPM_SE_MUXSEL_DATA_DEFAULT                                         \
  0x00000000
#define mmRLC_SPM_CPG_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_CPC_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_CPF_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_CB_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_DB_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_PA_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_GDS_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_IA_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_SC_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_TCC_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_TCA_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_TCP_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_TA_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_TD_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_VGT_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_SPI_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_SQG_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_SPM_SX_PERFMON_SAMPLE_DELAY_DEFAULT                                \
  0x00000000
#define mmRLC_SPM_GLOBAL_MUXSEL_ADDR_DEFAULT                                     \
  0x00000000
#define mmRLC_SPM_GLOBAL_MUXSEL_DATA_DEFAULT                                     \
  0x00000000
#define mmRLC_SPM_RING_RDPTR_DEFAULT                                             \
  0x00000000
#define mmRLC_SPM_SEGMENT_THRESHOLD_DEFAULT                                      \
  0x00000000
#define mmRLC_SPM_DBR0_PERFMON_SAMPLE_DELAY_DEFAULT                              \
  0x00000000
#define mmRLC_SPM_DBR1_PERFMON_SAMPLE_DELAY_DEFAULT                              \
  0x00000000
#define mmRLC_SPM_CBR0_PERFMON_SAMPLE_DELAY_DEFAULT                              \
  0x00000000
#define mmRLC_SPM_CBR1_PERFMON_SAMPLE_DELAY_DEFAULT                              \
  0x00000000
#define mmRLC_SPM_RMI_PERFMON_SAMPLE_DELAY_DEFAULT                               \
  0x00000000
#define mmRLC_PERFMON_CLK_CNTL_DEFAULT                                           \
  0x00000001
#define mmRLC_PERFMON_CNTL_DEFAULT                                               \
  0x00000000
#define mmRLC_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x00000000
#define mmRLC_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x00000000
#define mmRLC_GPU_IOV_PERF_CNT_CNTL_DEFAULT                                      \
  0x00000000
#define mmRLC_GPU_IOV_PERF_CNT_WR_ADDR_DEFAULT                                   \
  0x00000000
#define mmRLC_GPU_IOV_PERF_CNT_WR_DATA_DEFAULT                                   \
  0x00000000
#define mmRLC_GPU_IOV_PERF_CNT_RD_ADDR_DEFAULT                                   \
  0x00000000
#define mmRLC_GPU_IOV_PERF_CNT_RD_DATA_DEFAULT                                   \
  0x00000000
#define mmRMI_PERFCOUNTER0_SELECT_DEFAULT                                        \
  0x00000000
#define mmRMI_PERFCOUNTER0_SELECT1_DEFAULT                                       \
  0x00000000
#define mmRMI_PERFCOUNTER1_SELECT_DEFAULT                                        \
  0x00000000
#define mmRMI_PERFCOUNTER2_SELECT_DEFAULT                                        \
  0x00000000
#define mmRMI_PERFCOUNTER2_SELECT1_DEFAULT                                       \
  0x00000000
#define mmRMI_PERFCOUNTER3_SELECT_DEFAULT                                        \
  0x00000000
#define mmRMI_PERF_COUNTER_CNTL_DEFAULT                                          \
  0x00080240

// addressBlock: gc_utcl2_atcl2pfcntldec
#define mmATC_L2_PERFCOUNTER0_CFG_DEFAULT                                        \
  0x00000000
#define mmATC_L2_PERFCOUNTER1_CFG_DEFAULT                                        \
  0x00000000
#define mmATC_L2_PERFCOUNTER_RSLT_CNTL_DEFAULT                                   \
  0x04000000

// addressBlock: gc_utcl2_vml2pldec
#define mmMC_VM_L2_PERFCOUNTER0_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER1_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER2_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER3_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER4_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER5_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER6_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER7_CFG_DEFAULT                                      \
  0x00000000
#define mmMC_VM_L2_PERFCOUNTER_RSLT_CNTL_DEFAULT                                 \
  0x04000000

// addressBlock: gc_rlcpdec
#define mmRLC_CNTL_DEFAULT                                                       \
  0x00000001
#define mmRLC_STAT_DEFAULT                                                       \
  0x00000000
#define mmRLC_SAFE_MODE_DEFAULT                                                  \
  0x00000000
#define mmRLC_MEM_SLP_CNTL_DEFAULT                                               \
  0x00020200
#define mmSMU_RLC_RESPONSE_DEFAULT                                               \
  0x00000000
#define mmRLC_RLCV_SAFE_MODE_DEFAULT                                             \
  0x00000000
#define mmRLC_SMU_SAFE_MODE_DEFAULT                                              \
  0x00000000
#define mmRLC_RLCV_COMMAND_DEFAULT                                               \
  0x00000000
#define mmRLC_REFCLOCK_TIMESTAMP_LSB_DEFAULT                                     \
  0x00000000
#define mmRLC_REFCLOCK_TIMESTAMP_MSB_DEFAULT                                     \
  0x00000000
#define mmRLC_GPM_TIMER_INT_0_DEFAULT                                            \
  0x00000000
#define mmRLC_GPM_TIMER_INT_1_DEFAULT                                            \
  0x00000000
#define mmRLC_GPM_TIMER_INT_2_DEFAULT                                            \
  0x00000000
#define mmRLC_GPM_TIMER_CTRL_DEFAULT                                             \
  0x00000000
#define mmRLC_LB_CNTR_MAX_DEFAULT                                                \
  0xffffffff
#define mmRLC_GPM_TIMER_STAT_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_TIMER_INT_3_DEFAULT                                            \
  0x00000000
#define mmRLC_SERDES_WR_NONCU_MASTER_MASK_1_DEFAULT                              \
  0x00000000
#define mmRLC_SERDES_NONCU_MASTER_BUSY_1_DEFAULT                                 \
  0x00000000
#define mmRLC_INT_STAT_DEFAULT                                                   \
  0x00000000
#define mmRLC_LB_CNTL_DEFAULT                                                    \
  0x00000010
#define mmRLC_MGCG_CTRL_DEFAULT                                                  \
  0x00018800
#define mmRLC_LB_CNTR_INIT_DEFAULT                                               \
  0x00000000
#define mmRLC_LOAD_BALANCE_CNTR_DEFAULT                                          \
  0x00000000
#define mmRLC_JUMP_TABLE_RESTORE_DEFAULT                                         \
  0x00000000
#define mmRLC_PG_DELAY_2_DEFAULT                                                 \
  0x00000004
#define mmRLC_GPU_CLOCK_COUNT_LSB_DEFAULT                                        \
  0x00000000
#define mmRLC_GPU_CLOCK_COUNT_MSB_DEFAULT                                        \
  0x00000000
#define mmRLC_CAPTURE_GPU_CLOCK_COUNT_DEFAULT                                    \
  0x00000000
#define mmRLC_UCODE_CNTL_DEFAULT                                                 \
  0x00000000
#define mmRLC_GPM_THREAD_RESET_DEFAULT                                           \
  0x0000000f
#define mmRLC_GPM_CP_DMA_COMPLETE_T0_DEFAULT                                     \
  0x00000000
#define mmRLC_GPM_CP_DMA_COMPLETE_T1_DEFAULT                                     \
  0x00000000
#define mmRLC_FIREWALL_VIOLATION_DEFAULT                                         \
  0x00000000
#define mmRLC_GPM_STAT_DEFAULT                                                   \
  0x00100016
#define mmRLC_GPU_CLOCK_32_RES_SEL_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_CLOCK_32_DEFAULT                                               \
  0x00000000
#define mmRLC_PG_CNTL_DEFAULT                                                    \
  0x00000000
#define mmRLC_GPM_THREAD_PRIORITY_DEFAULT                                        \
  0x08080808
#define mmRLC_GPM_THREAD_ENABLE_DEFAULT                                          \
  0x00000001
#define mmRLC_CGTT_MGCG_OVERRIDE_DEFAULT                                         \
  0xffffffff
#define mmRLC_CGCG_CGLS_CTRL_DEFAULT                                             \
  0x0001003c
#define mmRLC_CGCG_RAMP_CTRL_DEFAULT                                             \
  0x00021711
#define mmRLC_DYN_PG_STATUS_DEFAULT                                              \
  0xffffffff
#define mmRLC_DYN_PG_REQUEST_DEFAULT                                             \
  0xffffffff
#define mmRLC_PG_DELAY_DEFAULT                                                   \
  0x00101010
#define mmRLC_CU_STATUS_DEFAULT                                                  \
  0x00000000
#define mmRLC_LB_INIT_CU_MASK_DEFAULT                                            \
  0xffffffff
#define mmRLC_LB_ALWAYS_ACTIVE_CU_MASK_DEFAULT                                   \
  0x00000001
#define mmRLC_LB_PARAMS_DEFAULT                                                  \
  0x00601008
#define mmRLC_THREAD1_DELAY_DEFAULT                                              \
  0x00400401
#define mmRLC_PG_ALWAYS_ON_CU_MASK_DEFAULT                                       \
  0x00000003
#define mmRLC_MAX_PG_CU_DEFAULT                                                  \
  0x00000010
#define mmRLC_AUTO_PG_CTRL_DEFAULT                                               \
  0x00000000
#define mmRLC_SMU_GRBM_REG_SAVE_CTRL_DEFAULT                                     \
  0x00000000
#define mmRLC_SERDES_RD_MASTER_INDEX_DEFAULT                                     \
  0x00000000
#define mmRLC_SERDES_RD_DATA_0_DEFAULT                                           \
  0x00000000
#define mmRLC_SERDES_RD_DATA_1_DEFAULT                                           \
  0x00000000
#define mmRLC_SERDES_RD_DATA_2_DEFAULT                                           \
  0x00000000
#define mmRLC_SERDES_WR_CU_MASTER_MASK_DEFAULT                                   \
  0x00000000
#define mmRLC_SERDES_WR_NONCU_MASTER_MASK_DEFAULT                                \
  0x00000000
#define mmRLC_SERDES_WR_CTRL_DEFAULT                                             \
  0x00000000
#define mmRLC_SERDES_WR_DATA_DEFAULT                                             \
  0x00000000
#define mmRLC_SERDES_CU_MASTER_BUSY_DEFAULT                                      \
  0x00000000
#define mmRLC_SERDES_NONCU_MASTER_BUSY_DEFAULT                                   \
  0x00000000
#define mmRLC_GPM_GENERAL_0_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_1_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_2_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_3_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_4_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_5_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_6_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_7_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_SCRATCH_ADDR_DEFAULT                                           \
  0x00000000
#define mmRLC_GPM_SCRATCH_DATA_DEFAULT                                           \
  0x00000000
#define mmRLC_STATIC_PG_STATUS_DEFAULT                                           \
  0xffffffff
#define mmRLC_SPM_MC_CNTL_DEFAULT                                                \
  0x00000000
#define mmRLC_SPM_INT_CNTL_DEFAULT                                               \
  0x00000000
#define mmRLC_SPM_INT_STATUS_DEFAULT                                             \
  0x00000000
#define mmRLC_SMU_MESSAGE_DEFAULT                                                \
  0x00000000
#define mmRLC_GPM_LOG_SIZE_DEFAULT                                               \
  0x00000000
#define mmRLC_PG_DELAY_3_DEFAULT                                                 \
  0x00000000
#define mmRLC_GPR_REG1_DEFAULT                                                   \
  0x00000000
#define mmRLC_GPR_REG2_DEFAULT                                                   \
  0x00000000
#define mmRLC_GPM_LOG_CONT_DEFAULT                                               \
  0x00000000
#define mmRLC_GPM_INT_DISABLE_TH0_DEFAULT                                        \
  0x00000000
#define mmRLC_GPM_INT_DISABLE_TH1_DEFAULT                                        \
  0x00000000
#define mmRLC_GPM_INT_FORCE_TH0_DEFAULT                                          \
  0x00000000
#define mmRLC_GPM_INT_FORCE_TH1_DEFAULT                                          \
  0x00000000
#define mmRLC_SRM_CNTL_DEFAULT                                                   \
  0x00000002
#define mmRLC_SRM_ARAM_ADDR_DEFAULT                                              \
  0x00000000
#define mmRLC_SRM_ARAM_DATA_DEFAULT                                              \
  0x00000000
#define mmRLC_SRM_DRAM_ADDR_DEFAULT                                              \
  0x00000000
#define mmRLC_SRM_DRAM_DATA_DEFAULT                                              \
  0x00000000
#define mmRLC_SRM_GPM_COMMAND_DEFAULT                                            \
  0x00000000
#define mmRLC_SRM_GPM_COMMAND_STATUS_DEFAULT                                     \
  0x00000000
#define mmRLC_SRM_RLCV_COMMAND_DEFAULT                                           \
  0x00000000
#define mmRLC_SRM_RLCV_COMMAND_STATUS_DEFAULT                                    \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_0_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_1_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_2_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_3_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_4_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_5_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_6_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_ADDR_7_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_0_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_1_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_2_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_3_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_4_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_5_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_6_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_INDEX_CNTL_DATA_7_DEFAULT                                      \
  0x00000000
#define mmRLC_SRM_STAT_DEFAULT                                                   \
  0x00000000
#define mmRLC_SRM_GPM_ABORT_DEFAULT                                              \
  0x00000000
#define mmRLC_CSIB_ADDR_LO_DEFAULT                                               \
  0x00000000
#define mmRLC_CSIB_ADDR_HI_DEFAULT                                               \
  0x00000000
#define mmRLC_CSIB_LENGTH_DEFAULT                                                \
  0x00000000
#define mmRLC_SMU_COMMAND_DEFAULT                                                \
  0x00000000
#define mmRLC_CP_SCHEDULERS_DEFAULT                                              \
  0x58504840
#define mmRLC_SMU_ARGUMENT_1_DEFAULT                                             \
  0x00000000
#define mmRLC_SMU_ARGUMENT_2_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_GENERAL_8_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_9_DEFAULT                                              \
  0x00000000
#define mmRLC_GPM_GENERAL_10_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_GENERAL_11_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_GENERAL_12_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_UTCL1_CNTL_0_DEFAULT                                           \
  0x00000080
#define mmRLC_GPM_UTCL1_CNTL_1_DEFAULT                                           \
  0x00000080
#define mmRLC_GPM_UTCL1_CNTL_2_DEFAULT                                           \
  0x00000080
#define mmRLC_SPM_UTCL1_CNTL_DEFAULT                                             \
  0x00000080
#define mmRLC_UTCL1_STATUS_2_DEFAULT                                             \
  0x00000000
#define mmRLC_LB_THR_CONFIG_2_DEFAULT                                            \
  0x00000000
#define mmRLC_LB_THR_CONFIG_3_DEFAULT                                            \
  0x00000000
#define mmRLC_LB_THR_CONFIG_4_DEFAULT                                            \
  0x00000000
#define mmRLC_SPM_UTCL1_ERROR_1_DEFAULT                                          \
  0x00000000
#define mmRLC_SPM_UTCL1_ERROR_2_DEFAULT                                          \
  0x00000000
#define mmRLC_GPM_UTCL1_TH0_ERROR_1_DEFAULT                                      \
  0x00000000
#define mmRLC_LB_THR_CONFIG_1_DEFAULT                                            \
  0x00000000
#define mmRLC_GPM_UTCL1_TH0_ERROR_2_DEFAULT                                      \
  0x00000000
#define mmRLC_GPM_UTCL1_TH1_ERROR_1_DEFAULT                                      \
  0x00000000
#define mmRLC_GPM_UTCL1_TH1_ERROR_2_DEFAULT                                      \
  0x00000000
#define mmRLC_GPM_UTCL1_TH2_ERROR_1_DEFAULT                                      \
  0x00000000
#define mmRLC_GPM_UTCL1_TH2_ERROR_2_DEFAULT                                      \
  0x00000000
#define mmRLC_CGCG_CGLS_CTRL_3D_DEFAULT                                          \
  0x0001003c
#define mmRLC_CGCG_RAMP_CTRL_3D_DEFAULT                                          \
  0x00021711
#define mmRLC_SEMAPHORE_0_DEFAULT                                                \
  0x00000000
#define mmRLC_SEMAPHORE_1_DEFAULT                                                \
  0x00000000
#define mmRLC_CP_EOF_INT_DEFAULT                                                 \
  0x00000000
#define mmRLC_CP_EOF_INT_CNT_DEFAULT                                             \
  0x00000000
#define mmRLC_SPARE_INT_DEFAULT                                                  \
  0x00000000
#define mmRLC_PREWALKER_UTCL1_CNTL_DEFAULT                                       \
  0x00000080
#define mmRLC_PREWALKER_UTCL1_TRIG_DEFAULT                                       \
  0x00000000
#define mmRLC_PREWALKER_UTCL1_ADDR_LSB_DEFAULT                                   \
  0x00000000
#define mmRLC_PREWALKER_UTCL1_ADDR_MSB_DEFAULT                                   \
  0x00000000
#define mmRLC_PREWALKER_UTCL1_SIZE_LSB_DEFAULT                                   \
  0x00000000
#define mmRLC_PREWALKER_UTCL1_SIZE_MSB_DEFAULT                                   \
  0x00000000
#define mmRLC_DSM_TRIG_DEFAULT                                                   \
  0x00000000
#define mmRLC_UTCL1_STATUS_DEFAULT                                               \
  0x00000000
#define mmRLC_R2I_CNTL_0_DEFAULT                                                 \
  0x00000000
#define mmRLC_R2I_CNTL_1_DEFAULT                                                 \
  0x00000000
#define mmRLC_R2I_CNTL_2_DEFAULT                                                 \
  0x00000000
#define mmRLC_R2I_CNTL_3_DEFAULT                                                 \
  0x00000000
#define mmRLC_UTCL2_CNTL_DEFAULT                                                 \
  0x00000000
#define mmRLC_LBPW_CU_STAT_DEFAULT                                               \
  0x00000000
#define mmRLC_DS_CNTL_DEFAULT                                                    \
  0x00030003
#define mmRLC_RLCV_SPARE_INT_DEFAULT                                             \
  0x00000000

// addressBlock: gc_pwrdec
#define mmCGTS_SM_CTRL_REG_DEFAULT                                               \
  0x00600200
#define mmCGTS_RD_CTRL_REG_DEFAULT                                               \
  0x00000000
#define mmCGTS_RD_REG_DEFAULT                                                    \
  0x00000000
#define mmCGTS_TCC_DISABLE_DEFAULT                                               \
  0x00000000
#define mmCGTS_USER_TCC_DISABLE_DEFAULT                                          \
  0x00000000
#define mmCGTS_CU0_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU0_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU0_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00040007
#define mmCGTS_CU0_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU0_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU1_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU1_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU1_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU1_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU1_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU2_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU2_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU2_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU2_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU2_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU3_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU3_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU3_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00040007
#define mmCGTS_CU3_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU3_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU4_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU4_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU4_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU4_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU4_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU5_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU5_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU5_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU5_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU5_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU6_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU6_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU6_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00040007
#define mmCGTS_CU6_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU6_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU7_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU7_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU7_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU7_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU7_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU8_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU8_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU8_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00000007
#define mmCGTS_CU8_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU8_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU9_SP0_CTRL_REG_DEFAULT                                          \
  0x00010000
#define mmCGTS_CU9_LDS_SQ_CTRL_REG_DEFAULT                                       \
  0x00030002
#define mmCGTS_CU9_TA_SQC_CTRL_REG_DEFAULT                                       \
  0x00040007
#define mmCGTS_CU9_SP1_CTRL_REG_DEFAULT                                          \
  0x00060005
#define mmCGTS_CU9_TD_TCP_CTRL_REG_DEFAULT                                       \
  0x00090008
#define mmCGTS_CU10_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU10_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU10_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00000007
#define mmCGTS_CU10_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU10_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU11_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU11_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU11_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00000007
#define mmCGTS_CU11_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU11_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU12_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU12_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU12_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00040007
#define mmCGTS_CU12_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU12_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU13_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU13_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU13_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00000007
#define mmCGTS_CU13_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU13_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU14_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU14_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU14_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00000007
#define mmCGTS_CU14_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU14_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU15_SP0_CTRL_REG_DEFAULT                                         \
  0x00010000
#define mmCGTS_CU15_LDS_SQ_CTRL_REG_DEFAULT                                      \
  0x00030002
#define mmCGTS_CU15_TA_SQC_CTRL_REG_DEFAULT                                      \
  0x00040007
#define mmCGTS_CU15_SP1_CTRL_REG_DEFAULT                                         \
  0x00060005
#define mmCGTS_CU15_TD_TCP_CTRL_REG_DEFAULT                                      \
  0x00090008
#define mmCGTS_CU0_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU1_TCPI_CTRL_REG_DEFAULT                                         \
  0x00000001
#define mmCGTS_CU2_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU3_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU4_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU5_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU6_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU7_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU8_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU9_TCPI_CTRL_REG_DEFAULT                                         \
  0x0000000a
#define mmCGTS_CU10_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTS_CU11_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTS_CU12_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTS_CU13_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTS_CU14_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTS_CU15_TCPI_CTRL_REG_DEFAULT                                        \
  0x0000000a
#define mmCGTT_SPI_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmCGTT_PC_CLK_CTRL_DEFAULT                                               \
  0x00000100
#define mmCGTT_BCI_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmCGTT_VGT_CLK_CTRL_DEFAULT                                              \
  0x00018100
#define mmCGTT_IA_CLK_CTRL_DEFAULT                                               \
  0x06000100
#define mmCGTT_WD_CLK_CTRL_DEFAULT                                               \
  0x00018100
#define mmCGTT_PA_CLK_CTRL_DEFAULT                                               \
  0x00000100
#define mmCGTT_SC_CLK_CTRL0_DEFAULT                                              \
  0x00000100
#define mmCGTT_SC_CLK_CTRL1_DEFAULT                                              \
  0x00000100
#define mmCGTT_SQ_CLK_CTRL_DEFAULT                                               \
  0x00000100
#define mmCGTT_SQG_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmSQ_ALU_CLK_CTRL_DEFAULT                                                \
  0x00000000
#define mmSQ_TEX_CLK_CTRL_DEFAULT                                                \
  0x00000000
#define mmSQ_LDS_CLK_CTRL_DEFAULT                                                \
  0x00000000
#define mmSQ_POWER_THROTTLE_DEFAULT                                              \
  0x3fff3fff
#define mmSQ_POWER_THROTTLE2_DEFAULT                                             \
  0x18800004
#define mmCGTT_SX_CLK_CTRL0_DEFAULT                                              \
  0x00000100
#define mmCGTT_SX_CLK_CTRL1_DEFAULT                                              \
  0x00000100
#define mmCGTT_SX_CLK_CTRL2_DEFAULT                                              \
  0x00000100
#define mmCGTT_SX_CLK_CTRL3_DEFAULT                                              \
  0x00000100
#define mmCGTT_SX_CLK_CTRL4_DEFAULT                                              \
  0x00000100
#define mmTD_CGTT_CTRL_DEFAULT                                                   \
  0x00000100
#define mmTA_CGTT_CTRL_DEFAULT                                                   \
  0x00000100
#define mmCGTT_TCPI_CLK_CTRL_DEFAULT                                             \
  0x00000100
#define mmCGTT_TCI_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmCGTT_GDS_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmDB_CGTT_CLK_CTRL_0_DEFAULT                                             \
  0x00000100
#define mmCB_CGTT_SCLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmTCC_CGTT_SCLK_CTRL_DEFAULT                                             \
  0x00000100
#define mmTCA_CGTT_SCLK_CTRL_DEFAULT                                             \
  0x00000100
#define mmCGTT_CP_CLK_CTRL_DEFAULT                                               \
  0x00000100
#define mmCGTT_CPF_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmCGTT_CPC_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmCGTT_RLC_CLK_CTRL_DEFAULT                                              \
  0x00000100
#define mmRLC_GFX_RM_CNTL_DEFAULT                                                \
  0x00000000
#define mmRMI_CGTT_SCLK_CTRL_DEFAULT                                             \
  0x00000100
#define mmCGTT_TCPF_CLK_CTRL_DEFAULT                                             \
  0x00000100

// addressBlock: gc_ea_pwrdec
#define mmGCEA_CGTT_CLK_CTRL_DEFAULT                                             \
  0x00000100

// addressBlock: gc_utcl2_vmsharedhvdec
#define mmMC_VM_FB_SIZE_OFFSET_VF0_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF1_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF2_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF3_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF4_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF5_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF6_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF7_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF8_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF9_DEFAULT                                       \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF10_DEFAULT                                      \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF11_DEFAULT                                      \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF12_DEFAULT                                      \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF13_DEFAULT                                      \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF14_DEFAULT                                      \
  0x00000000
#define mmMC_VM_FB_SIZE_OFFSET_VF15_DEFAULT                                      \
  0x00000000
#define mmVM_IOMMU_MMIO_CNTRL_1_DEFAULT                                          \
  0x00000100
#define mmMC_VM_MARC_BASE_LO_0_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_LO_1_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_LO_2_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_LO_3_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_HI_0_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_HI_1_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_HI_2_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_BASE_HI_3_DEFAULT                                           \
  0x00000000
#define mmMC_VM_MARC_RELOC_LO_0_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_LO_1_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_LO_2_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_LO_3_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_HI_0_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_HI_1_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_HI_2_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_RELOC_HI_3_DEFAULT                                          \
  0x00000000
#define mmMC_VM_MARC_LEN_LO_0_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_LO_1_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_LO_2_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_LO_3_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_HI_0_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_HI_1_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_HI_2_DEFAULT                                            \
  0x00000000
#define mmMC_VM_MARC_LEN_HI_3_DEFAULT                                            \
  0x00000000
#define mmVM_IOMMU_CONTROL_REGISTER_DEFAULT                                      \
  0x00000000
#define mmVM_IOMMU_PERFORMANCE_OPTIMIZATION_CONTROL_REGISTER_DEFAULT             \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_DEFAULT                                               \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_0_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_1_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_2_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_3_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_4_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_5_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_6_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_7_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_8_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_9_DEFAULT                                          \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_10_DEFAULT                                         \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_11_DEFAULT                                         \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_12_DEFAULT                                         \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_13_DEFAULT                                         \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_14_DEFAULT                                         \
  0x00000000
#define mmVM_PCIE_ATS_CNTL_VF_15_DEFAULT                                         \
  0x00000000
#define mmUTCL2_CGTT_CLK_CTRL_DEFAULT                                            \
  0x00000080

// addressBlock: gc_hypdec
#define mmCP_HYP_PFP_UCODE_ADDR_DEFAULT                                          \
  0x00000000
#define mmCP_PFP_UCODE_ADDR_DEFAULT                                              \
  0x00000000
#define mmCP_HYP_PFP_UCODE_DATA_DEFAULT                                          \
  0x00000000
#define mmCP_PFP_UCODE_DATA_DEFAULT                                              \
  0x00000000
#define mmCP_HYP_ME_UCODE_ADDR_DEFAULT                                           \
  0x00000000
#define mmCP_ME_RAM_RADDR_DEFAULT                                                \
  0x00000000
#define mmCP_ME_RAM_WADDR_DEFAULT                                                \
  0x00000000
#define mmCP_HYP_ME_UCODE_DATA_DEFAULT                                           \
  0x00000000
#define mmCP_ME_RAM_DATA_DEFAULT                                                 \
  0x00000000
#define mmCP_CE_UCODE_ADDR_DEFAULT                                               \
  0x00000000
#define mmCP_HYP_CE_UCODE_ADDR_DEFAULT                                           \
  0x00000000
#define mmCP_CE_UCODE_DATA_DEFAULT                                               \
  0x00000000
#define mmCP_HYP_CE_UCODE_DATA_DEFAULT                                           \
  0x00000000
#define mmCP_HYP_MEC1_UCODE_ADDR_DEFAULT                                         \
  0x00000000
#define mmCP_MEC_ME1_UCODE_ADDR_DEFAULT                                          \
  0x00000000
#define mmCP_HYP_MEC1_UCODE_DATA_DEFAULT                                         \
  0x00000000
#define mmCP_MEC_ME1_UCODE_DATA_DEFAULT                                          \
  0x00000000
#define mmCP_HYP_MEC2_UCODE_ADDR_DEFAULT                                         \
  0x00000000
#define mmCP_MEC_ME2_UCODE_ADDR_DEFAULT                                          \
  0x00000000
#define mmCP_HYP_MEC2_UCODE_DATA_DEFAULT                                         \
  0x00000000
#define mmCP_MEC_ME2_UCODE_DATA_DEFAULT                                          \
  0x00000000
#define mmRLC_GPM_UCODE_ADDR_DEFAULT                                             \
  0x00000000
#define mmRLC_GPM_UCODE_DATA_DEFAULT                                             \
  0x00000000
#define mmGRBM_GFX_INDEX_SR_SELECT_DEFAULT                                       \
  0x00000000
#define mmGRBM_GFX_INDEX_SR_DATA_DEFAULT                                         \
  0xe0000000
#define mmGRBM_GFX_CNTL_SR_SELECT_DEFAULT                                        \
  0x00000000
#define mmGRBM_GFX_CNTL_SR_DATA_DEFAULT                                          \
  0x00000000
#define mmGRBM_CAM_INDEX_DEFAULT                                                 \
  0x00000000
#define mmGRBM_HYP_CAM_INDEX_DEFAULT                                             \
  0x00000000
#define mmGRBM_CAM_DATA_DEFAULT                                                  \
  0x00000000
#define mmGRBM_HYP_CAM_DATA_DEFAULT                                              \
  0x00000000
#define mmRLC_GPU_IOV_VF_ENABLE_DEFAULT                                          \
  0x00000000
#define mmRLC_GPU_IOV_CFG_REG6_DEFAULT                                           \
  0x00000000
#define mmRLC_GPU_IOV_CFG_REG8_DEFAULT                                           \
  0x00000000
#define mmRLC_RLCV_TIMER_INT_0_DEFAULT                                           \
  0x00000000
#define mmRLC_RLCV_TIMER_CTRL_DEFAULT                                            \
  0x00000000
#define mmRLC_RLCV_TIMER_STAT_DEFAULT                                            \
  0x00000000
#define mmRLC_GPU_IOV_VF_DOORBELL_STATUS_DEFAULT                                 \
  0x0000ffff
#define mmRLC_GPU_IOV_VF_DOORBELL_STATUS_SET_DEFAULT                             \
  0x00000000
#define mmRLC_GPU_IOV_VF_DOORBELL_STATUS_CLR_DEFAULT                             \
  0x00000000
#define mmRLC_GPU_IOV_VF_MASK_DEFAULT                                            \
  0x00010001
#define mmRLC_HYP_SEMAPHORE_2_DEFAULT                                            \
  0x00000000
#define mmRLC_HYP_SEMAPHORE_3_DEFAULT                                            \
  0x00000000
#define mmRLC_CLK_CNTL_DEFAULT                                                   \
  0x00000003
#define mmRLC_GPU_IOV_SCH_BLOCK_DEFAULT                                          \
  0x00000000
#define mmRLC_GPU_IOV_CFG_REG1_DEFAULT                                           \
  0x00000000
#define mmRLC_GPU_IOV_CFG_REG2_DEFAULT                                           \
  0x00000000
#define mmRLC_GPU_IOV_VM_BUSY_STATUS_DEFAULT                                     \
  0x00000000
#define mmRLC_GPU_IOV_SCH_0_DEFAULT                                              \
  0x00000000
#define mmRLC_GPU_IOV_ACTIVE_FCN_ID_DEFAULT                                      \
  0x00000000
#define mmRLC_GPU_IOV_SCH_3_DEFAULT                                              \
  0x00000000
#define mmRLC_GPU_IOV_SCH_1_DEFAULT                                              \
  0x00000000
#define mmRLC_GPU_IOV_SCH_2_DEFAULT                                              \
  0x00000000
#define mmRLC_GPU_IOV_UCODE_ADDR_DEFAULT                                         \
  0x00000000
#define mmRLC_GPU_IOV_UCODE_DATA_DEFAULT                                         \
  0x00000000
#define mmRLC_GPU_IOV_SCRATCH_ADDR_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_SCRATCH_DATA_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_F32_CNTL_DEFAULT                                           \
  0x00000000
#define mmRLC_GPU_IOV_F32_RESET_DEFAULT                                          \
  0x00000000
#define mmRLC_GPU_IOV_SDMA0_STATUS_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_SDMA1_STATUS_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_SMU_RESPONSE_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_VIRT_RESET_REQ_DEFAULT                                     \
  0x00000000
#define mmRLC_GPU_IOV_RLC_RESPONSE_DEFAULT                                       \
  0x00000000
#define mmRLC_GPU_IOV_INT_DISABLE_DEFAULT                                        \
  0x00000000
#define mmRLC_GPU_IOV_INT_FORCE_DEFAULT                                          \
  0x00000000
#define mmRLC_GPU_IOV_SDMA0_BUSY_STATUS_DEFAULT                                  \
  0x00000000
#define mmRLC_GPU_IOV_SDMA1_BUSY_STATUS_DEFAULT                                  \
  0x00000000

// addressBlock: gccacind
#define ixGC_CAC_CNTL_DEFAULT                                                    \
  0x000001fe
#define ixGC_CAC_OVR_SEL_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVR_VAL_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_WEIGHT_BCI_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_CB_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CB_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CBR_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_CBR_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_CP_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CP_1_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_DB_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_DB_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_DBR_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_DBR_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_GDS_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_GDS_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_IA_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_LDS_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_LDS_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_PA_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_PC_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_SC_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_SPI_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_SPI_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_SPI_2_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_SQ_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_SQ_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_SQ_2_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_SQ_3_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_SQ_4_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_SX_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_SXRB_0_DEFAULT                                           \
  0x00010001
#define ixGC_CAC_WEIGHT_TA_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_TCC_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_TCC_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_TCC_2_DEFAULT                                            \
  0x00000001
#define ixGC_CAC_WEIGHT_TCP_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_TCP_1_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_TCP_2_DEFAULT                                            \
  0x00000001
#define ixGC_CAC_WEIGHT_TD_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_TD_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_TD_2_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_VGT_0_DEFAULT                                            \
  0x00010001
#define ixGC_CAC_WEIGHT_VGT_1_DEFAULT                                            \
  0x00000001
#define ixGC_CAC_WEIGHT_WD_0_DEFAULT                                             \
  0x00000001
#define ixGC_CAC_WEIGHT_CU_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_2_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_3_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_4_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_5_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_6_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_CU_7_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_ACC_BCI0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CB0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CB1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CB2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CB3_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CBR0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CBR1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CBR2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CBR3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CP0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CP1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CP2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_DB0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_DB1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_DB2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_DB3_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_DBR0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_DBR1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_DBR2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_DBR3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_GDS0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_GDS1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_GDS2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_GDS3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_IA0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_LDS0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_LDS1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_LDS2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_LDS3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_PA0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_PA1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_PC0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_SC0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_SPI0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_SPI1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_SPI2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_SPI3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_SPI4_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_SPI5_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_WEIGHT_UTCL2_ATCL2_0_DEFAULT                                    \
  0x00010001
#define ixGC_CAC_ACC_EA0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_EA1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_EA2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_EA3_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ATCL20_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_OVRD_EA_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_UTCL2_ATCL2_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_WEIGHT_EA_0_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_EA_1_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_WEIGHT_RMI_0_DEFAULT                                            \
  0x00000001
#define ixGC_CAC_ACC_RMI0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_RMI_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_WEIGHT_UTCL2_ATCL2_1_DEFAULT                                    \
  0x00010001
#define ixGC_CAC_ACC_UTCL2_ATCL21_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ATCL22_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ATCL23_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_ACC_EA4_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_EA5_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_WEIGHT_EA_2_DEFAULT                                             \
  0x00010001
#define ixGC_CAC_ACC_SQ0_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ0_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ1_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ1_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ2_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ2_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ3_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ3_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ4_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ4_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ5_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ5_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ6_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ6_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ7_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ7_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ8_LOWER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SQ8_UPPER_DEFAULT                                           \
  0x00000000
#define ixGC_CAC_ACC_SX0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_SXRB0_DEFAULT                                               \
  0x00000000
#define ixGC_CAC_ACC_SXRB1_DEFAULT                                               \
  0x00000000
#define ixGC_CAC_ACC_TA0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TCC0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCC1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCC2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCC3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCC4_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCP0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCP1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCP2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCP3_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TCP4_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_TD0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TD1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TD2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TD3_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TD4_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_TD5_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_VGT0_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_VGT1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_VGT2_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_WD0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU0_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU1_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU2_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU3_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU4_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU5_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU6_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU7_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU8_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU9_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_CU10_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CU11_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CU12_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CU13_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CU14_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_ACC_CU15_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_BCI_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_CB_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_CBR_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_CP_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_DB_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_DBR_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_GDS_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_IA_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_LDS_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_PA_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_PC_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_SC_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_SPI_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_CU_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_SQ_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_SX_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_SXRB_DEFAULT                                               \
  0x00000000
#define ixGC_CAC_OVRD_TA_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_TCC_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_TCP_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_TD_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_OVRD_VGT_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_OVRD_WD_DEFAULT                                                 \
  0x00000000
#define ixGC_CAC_ACC_BCI1_DEFAULT                                                \
  0x00000000
#define ixGC_CAC_WEIGHT_UTCL2_ATCL2_2_DEFAULT                                    \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_ROUTER_0_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_ROUTER_1_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_ROUTER_2_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_ROUTER_3_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_ROUTER_4_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_VML2_0_DEFAULT                                     \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_VML2_1_DEFAULT                                     \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_VML2_2_DEFAULT                                     \
  0x00010001
#define ixGC_CAC_ACC_UTCL2_ATCL24_DEFAULT                                        \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER0_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER1_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER2_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER3_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER4_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER5_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER6_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER7_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER8_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_ROUTER9_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_VML20_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_VML21_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_VML22_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_VML23_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_VML24_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_OVRD_UTCL2_ROUTER_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_OVRD_UTCL2_VML2_DEFAULT                                         \
  0x00000000
#define ixGC_CAC_WEIGHT_UTCL2_WALKER_0_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_WALKER_1_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_WEIGHT_UTCL2_WALKER_2_DEFAULT                                   \
  0x00010001
#define ixGC_CAC_ACC_UTCL2_WALKER0_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_WALKER1_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_WALKER2_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_WALKER3_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_ACC_UTCL2_WALKER4_DEFAULT                                       \
  0x00000000
#define ixGC_CAC_OVRD_UTCL2_WALKER_DEFAULT                                       \
  0x00000000

// addressBlock: secacind
#define ixSE_CAC_CNTL_DEFAULT                                                    \
  0x000001fe
#define ixSE_CAC_OVR_SEL_DEFAULT                                                 \
  0x00000000
#define ixSE_CAC_OVR_VAL_DEFAULT                                                 \
  0x00000000

// addressBlock: sqind
#define ixSQ_WAVE_MODE_DEFAULT                                                   \
  0x00000000
#define ixSQ_WAVE_STATUS_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TRAPSTS_DEFAULT                                                \
  0x00000000
#define ixSQ_WAVE_HW_ID_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_GPR_ALLOC_DEFAULT                                              \
  0x00000000
#define ixSQ_WAVE_LDS_ALLOC_DEFAULT                                              \
  0x00000000
#define ixSQ_WAVE_IB_STS_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_PC_LO_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_PC_HI_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_INST_DW0_DEFAULT                                               \
  0x00000000
#define ixSQ_WAVE_INST_DW1_DEFAULT                                               \
  0x00000000
#define ixSQ_WAVE_IB_DBG0_DEFAULT                                                \
  0x00000000
#define ixSQ_WAVE_IB_DBG1_DEFAULT                                                \
  0x00000000
#define ixSQ_WAVE_FLUSH_IB_DEFAULT                                               \
  0x00000000
#define ixSQ_WAVE_TTMP0_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP1_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP2_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP3_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP4_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP5_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP6_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP7_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP8_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP9_DEFAULT                                                  \
  0x00000000
#define ixSQ_WAVE_TTMP10_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TTMP11_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TTMP12_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TTMP13_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TTMP14_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_TTMP15_DEFAULT                                                 \
  0x00000000
#define ixSQ_WAVE_M0_DEFAULT                                                     \
  0x00000000
#define ixSQ_WAVE_EXEC_LO_DEFAULT                                                \
  0x00000000
#define ixSQ_WAVE_EXEC_HI_DEFAULT                                                \
  0x00000000
#define ixSQ_INTERRUPT_WORD_AUTO_CTXID_DEFAULT                                   \
  0x00000000
#define ixSQ_INTERRUPT_WORD_AUTO_HI_DEFAULT                                      \
  0x00000000
#define ixSQ_INTERRUPT_WORD_AUTO_LO_DEFAULT                                      \
  0x00000000
#define ixSQ_INTERRUPT_WORD_CMN_CTXID_DEFAULT                                    \
  0x00000000
#define ixSQ_INTERRUPT_WORD_CMN_HI_DEFAULT                                       \
  0x00000000
#define ixSQ_INTERRUPT_WORD_WAVE_CTXID_DEFAULT                                   \
  0x00000000
#define ixSQ_INTERRUPT_WORD_WAVE_HI_DEFAULT                                      \
  0x00000000
#define ixSQ_INTERRUPT_WORD_WAVE_LO_DEFAULT                                      \
  0x00000000

// addressBlock: didtind
#define ixDIDT_SQ_CTRL0_DEFAULT                                                  \
  0x0000ff00
#define ixDIDT_SQ_CTRL1_DEFAULT                                                  \
  0x00ff00ff
#define ixDIDT_SQ_CTRL2_DEFAULT                                                  \
  0x18800004
#define ixDIDT_SQ_STALL_CTRL_DEFAULT                                             \
  0x00fff000
#define ixDIDT_SQ_TUNING_CTRL_DEFAULT                                            \
  0x00010004
#define ixDIDT_SQ_STALL_AUTO_RELEASE_CTRL_DEFAULT                                \
  0x00ffffff
#define ixDIDT_SQ_CTRL3_DEFAULT                                                  \
  0x00038000
#define ixDIDT_SQ_STALL_PATTERN_1_2_DEFAULT                                      \
  0x01010001
#define ixDIDT_SQ_STALL_PATTERN_3_4_DEFAULT                                      \
  0x11110421
#define ixDIDT_SQ_STALL_PATTERN_5_6_DEFAULT                                      \
  0x25291249
#define ixDIDT_SQ_STALL_PATTERN_7_DEFAULT                                        \
  0x00002aaa
#define ixDIDT_SQ_WEIGHT0_3_DEFAULT                                              \
  0x00000000
#define ixDIDT_SQ_WEIGHT4_7_DEFAULT                                              \
  0x00000000
#define ixDIDT_SQ_WEIGHT8_11_DEFAULT                                             \
  0x00000000
#define ixDIDT_SQ_EDC_CTRL_DEFAULT                                               \
  0x00001c00
#define ixDIDT_SQ_EDC_THRESHOLD_DEFAULT                                          \
  0x00000000
#define ixDIDT_SQ_EDC_STALL_PATTERN_1_2_DEFAULT                                  \
  0x01010001
#define ixDIDT_SQ_EDC_STALL_PATTERN_3_4_DEFAULT                                  \
  0x11110421
#define ixDIDT_SQ_EDC_STALL_PATTERN_5_6_DEFAULT                                  \
  0x25291249
#define ixDIDT_SQ_EDC_STALL_PATTERN_7_DEFAULT                                    \
  0x00002aaa
#define ixDIDT_SQ_EDC_STATUS_DEFAULT                                             \
  0x00000000
#define ixDIDT_SQ_EDC_STALL_DELAY_1_DEFAULT                                      \
  0x00000000
#define ixDIDT_SQ_EDC_STALL_DELAY_2_DEFAULT                                      \
  0x00000000
#define ixDIDT_SQ_EDC_STALL_DELAY_3_DEFAULT                                      \
  0x00000000
#define ixDIDT_SQ_EDC_STALL_DELAY_4_DEFAULT                                      \
  0x00000000
#define ixDIDT_SQ_EDC_OVERFLOW_DEFAULT                                           \
  0x00000000
#define ixDIDT_SQ_EDC_ROLLING_POWER_DELTA_DEFAULT                                \
  0x00000000
#define ixDIDT_DB_CTRL0_DEFAULT                                                  \
  0x0000ff00
#define ixDIDT_DB_CTRL1_DEFAULT                                                  \
  0x00ff00ff
#define ixDIDT_DB_CTRL2_DEFAULT                                                  \
  0x18800004
#define ixDIDT_DB_STALL_CTRL_DEFAULT                                             \
  0x00fff000
#define ixDIDT_DB_TUNING_CTRL_DEFAULT                                            \
  0x00010004
#define ixDIDT_DB_STALL_AUTO_RELEASE_CTRL_DEFAULT                                \
  0x00ffffff
#define ixDIDT_DB_CTRL3_DEFAULT                                                  \
  0x00038000
#define ixDIDT_DB_STALL_PATTERN_1_2_DEFAULT                                      \
  0x01010001
#define ixDIDT_DB_STALL_PATTERN_3_4_DEFAULT                                      \
  0x11110421
#define ixDIDT_DB_STALL_PATTERN_5_6_DEFAULT                                      \
  0x25291249
#define ixDIDT_DB_STALL_PATTERN_7_DEFAULT                                        \
  0x00002aaa
#define ixDIDT_DB_WEIGHT0_3_DEFAULT                                              \
  0x00000000
#define ixDIDT_DB_WEIGHT4_7_DEFAULT                                              \
  0x00000000
#define ixDIDT_DB_WEIGHT8_11_DEFAULT                                             \
  0x00000000
#define ixDIDT_DB_EDC_CTRL_DEFAULT                                               \
  0x00001c00
#define ixDIDT_DB_EDC_THRESHOLD_DEFAULT                                          \
  0x00000000
#define ixDIDT_DB_EDC_STALL_PATTERN_1_2_DEFAULT                                  \
  0x01010001
#define ixDIDT_DB_EDC_STALL_PATTERN_3_4_DEFAULT                                  \
  0x11110421
#define ixDIDT_DB_EDC_STALL_PATTERN_5_6_DEFAULT                                  \
  0x25291249
#define ixDIDT_DB_EDC_STALL_PATTERN_7_DEFAULT                                    \
  0x00002aaa
#define ixDIDT_DB_EDC_STATUS_DEFAULT                                             \
  0x00000000
#define ixDIDT_DB_EDC_STALL_DELAY_1_DEFAULT                                      \
  0x00000000
#define ixDIDT_DB_EDC_OVERFLOW_DEFAULT                                           \
  0x00000000
#define ixDIDT_DB_EDC_ROLLING_POWER_DELTA_DEFAULT                                \
  0x00000000
#define ixDIDT_TD_CTRL0_DEFAULT                                                  \
  0x0000ff00
#define ixDIDT_TD_CTRL1_DEFAULT                                                  \
  0x00ff00ff
#define ixDIDT_TD_CTRL2_DEFAULT                                                  \
  0x18800004
#define ixDIDT_TD_STALL_CTRL_DEFAULT                                             \
  0x00fff000
#define ixDIDT_TD_TUNING_CTRL_DEFAULT                                            \
  0x00010004
#define ixDIDT_TD_STALL_AUTO_RELEASE_CTRL_DEFAULT                                \
  0x00ffffff
#define ixDIDT_TD_CTRL3_DEFAULT                                                  \
  0x00038000
#define ixDIDT_TD_STALL_PATTERN_1_2_DEFAULT                                      \
  0x01010001
#define ixDIDT_TD_STALL_PATTERN_3_4_DEFAULT                                      \
  0x11110421
#define ixDIDT_TD_STALL_PATTERN_5_6_DEFAULT                                      \
  0x25291249
#define ixDIDT_TD_STALL_PATTERN_7_DEFAULT                                        \
  0x00002aaa
#define ixDIDT_TD_WEIGHT0_3_DEFAULT                                              \
  0x00000000
#define ixDIDT_TD_WEIGHT4_7_DEFAULT                                              \
  0x00000000
#define ixDIDT_TD_WEIGHT8_11_DEFAULT                                             \
  0x00000000
#define ixDIDT_TD_EDC_CTRL_DEFAULT                                               \
  0x00001c00
#define ixDIDT_TD_EDC_THRESHOLD_DEFAULT                                          \
  0x00000000
#define ixDIDT_TD_EDC_STALL_PATTERN_1_2_DEFAULT                                  \
  0x01010001
#define ixDIDT_TD_EDC_STALL_PATTERN_3_4_DEFAULT                                  \
  0x11110421
#define ixDIDT_TD_EDC_STALL_PATTERN_5_6_DEFAULT                                  \
  0x25291249
#define ixDIDT_TD_EDC_STALL_PATTERN_7_DEFAULT                                    \
  0x00002aaa
#define ixDIDT_TD_EDC_STATUS_DEFAULT                                             \
  0x00000000
#define ixDIDT_TD_EDC_STALL_DELAY_1_DEFAULT                                      \
  0x00000000
#define ixDIDT_TD_EDC_STALL_DELAY_2_DEFAULT                                      \
  0x00000000
#define ixDIDT_TD_EDC_STALL_DELAY_3_DEFAULT                                      \
  0x00000000
#define ixDIDT_TD_EDC_STALL_DELAY_4_DEFAULT                                      \
  0x00000000
#define ixDIDT_TD_EDC_OVERFLOW_DEFAULT                                           \
  0x00000000
#define ixDIDT_TD_EDC_ROLLING_POWER_DELTA_DEFAULT                                \
  0x00000000
#define ixDIDT_TCP_CTRL0_DEFAULT                                                 \
  0x0000ff00
#define ixDIDT_TCP_CTRL1_DEFAULT                                                 \
  0x00ff00ff
#define ixDIDT_TCP_CTRL2_DEFAULT                                                 \
  0x18800004
#define ixDIDT_TCP_STALL_CTRL_DEFAULT                                            \
  0x00fff000
#define ixDIDT_TCP_TUNING_CTRL_DEFAULT                                           \
  0x00010004
#define ixDIDT_TCP_STALL_AUTO_RELEASE_CTRL_DEFAULT                               \
  0x00ffffff
#define ixDIDT_TCP_CTRL3_DEFAULT                                                 \
  0x00038000
#define ixDIDT_TCP_STALL_PATTERN_1_2_DEFAULT                                     \
  0x01010001
#define ixDIDT_TCP_STALL_PATTERN_3_4_DEFAULT                                     \
  0x11110421
#define ixDIDT_TCP_STALL_PATTERN_5_6_DEFAULT                                     \
  0x25291249
#define ixDIDT_TCP_STALL_PATTERN_7_DEFAULT                                       \
  0x00002aaa
#define ixDIDT_TCP_WEIGHT0_3_DEFAULT                                             \
  0x00000000
#define ixDIDT_TCP_WEIGHT4_7_DEFAULT                                             \
  0x00000000
#define ixDIDT_TCP_WEIGHT8_11_DEFAULT                                            \
  0x00000000
#define ixDIDT_TCP_EDC_CTRL_DEFAULT                                              \
  0x00001c00
#define ixDIDT_TCP_EDC_THRESHOLD_DEFAULT                                         \
  0x00000000
#define ixDIDT_TCP_EDC_STALL_PATTERN_1_2_DEFAULT                                 \
  0x01010001
#define ixDIDT_TCP_EDC_STALL_PATTERN_3_4_DEFAULT                                 \
  0x11110421
#define ixDIDT_TCP_EDC_STALL_PATTERN_5_6_DEFAULT                                 \
  0x25291249
#define ixDIDT_TCP_EDC_STALL_PATTERN_7_DEFAULT                                   \
  0x00002aaa
#define ixDIDT_TCP_EDC_STATUS_DEFAULT                                            \
  0x00000000
#define ixDIDT_TCP_EDC_STALL_DELAY_1_DEFAULT                                     \
  0x00000000
#define ixDIDT_TCP_EDC_STALL_DELAY_2_DEFAULT                                     \
  0x00000000
#define ixDIDT_TCP_EDC_STALL_DELAY_3_DEFAULT                                     \
  0x00000000
#define ixDIDT_TCP_EDC_STALL_DELAY_4_DEFAULT                                     \
  0x00000000
#define ixDIDT_TCP_EDC_OVERFLOW_DEFAULT                                          \
  0x00000000
#define ixDIDT_TCP_EDC_ROLLING_POWER_DELTA_DEFAULT                               \
  0x00000000
#define ixDIDT_DBR_CTRL0_DEFAULT                                                 \
  0x0000ff00
#define ixDIDT_DBR_CTRL1_DEFAULT                                                 \
  0x00ff00ff
#define ixDIDT_DBR_CTRL2_DEFAULT                                                 \
  0x18800004
#define ixDIDT_DBR_STALL_CTRL_DEFAULT                                            \
  0x00fff000
#define ixDIDT_DBR_TUNING_CTRL_DEFAULT                                           \
  0x00010004
#define ixDIDT_DBR_STALL_AUTO_RELEASE_CTRL_DEFAULT                               \
  0x00ffffff
#define ixDIDT_DBR_CTRL3_DEFAULT                                                 \
  0x00038000
#define ixDIDT_DBR_STALL_PATTERN_1_2_DEFAULT                                     \
  0x01010001
#define ixDIDT_DBR_STALL_PATTERN_3_4_DEFAULT                                     \
  0x11110421
#define ixDIDT_DBR_STALL_PATTERN_5_6_DEFAULT                                     \
  0x25291249
#define ixDIDT_DBR_STALL_PATTERN_7_DEFAULT                                       \
  0x00002aaa
#define ixDIDT_DBR_WEIGHT0_3_DEFAULT                                             \
  0x00000000
#define ixDIDT_DBR_WEIGHT4_7_DEFAULT                                             \
  0x00000000
#define ixDIDT_DBR_WEIGHT8_11_DEFAULT                                            \
  0x00000000
#define ixDIDT_DBR_EDC_CTRL_DEFAULT                                              \
  0x00001c00
#define ixDIDT_DBR_EDC_THRESHOLD_DEFAULT                                         \
  0x00000000
#define ixDIDT_DBR_EDC_STALL_PATTERN_1_2_DEFAULT                                 \
  0x01010001
#define ixDIDT_DBR_EDC_STALL_PATTERN_3_4_DEFAULT                                 \
  0x11110421
#define ixDIDT_DBR_EDC_STALL_PATTERN_5_6_DEFAULT                                 \
  0x25291249
#define ixDIDT_DBR_EDC_STALL_PATTERN_7_DEFAULT                                   \
  0x00002aaa
#define ixDIDT_DBR_EDC_STATUS_DEFAULT                                            \
  0x00000000
#define ixDIDT_DBR_EDC_STALL_DELAY_1_DEFAULT                                     \
  0x00000000
#define ixDIDT_DBR_EDC_OVERFLOW_DEFAULT                                          \
  0x00000000
#define ixDIDT_DBR_EDC_ROLLING_POWER_DELTA_DEFAULT                               \
  0x00000000
#define ixDIDT_SQ_STALL_EVENT_COUNTER_DEFAULT                                    \
  0x00000000
#define ixDIDT_DB_STALL_EVENT_COUNTER_DEFAULT                                    \
  0x00000000
#define ixDIDT_TD_STALL_EVENT_COUNTER_DEFAULT                                    \
  0x00000000
#define ixDIDT_TCP_STALL_EVENT_COUNTER_DEFAULT                                   \
  0x00000000
#define ixDIDT_DBR_STALL_EVENT_COUNTER_DEFAULT                                   \
  0x00000000

#endif
