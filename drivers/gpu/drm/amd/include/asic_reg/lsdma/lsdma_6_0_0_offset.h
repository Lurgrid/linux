/*
 * Copyright 2021 Advanced Micro Devices, Inc.
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
 */
#ifndef _lsdma_6_0_0_OFFSET_HEADER
#define _lsdma_6_0_0_OFFSET_HEADER

// addressBlock: lsdma0_lsdma0dec
// base address: 0x45000
#define regLSDMA_UCODE_ADDR                                                                             \
  0x0000
#define regLSDMA_UCODE_ADDR_BASE_IDX                                                                    \
  0
#define regLSDMA_UCODE_DATA                                                                             \
  0x0001
#define regLSDMA_UCODE_DATA_BASE_IDX                                                                    \
  0
#define regLSDMA_ERROR_INJECT_CNTL                                                                      \
  0x0004
#define regLSDMA_ERROR_INJECT_CNTL_BASE_IDX                                                             \
  0
#define regLSDMA_ERROR_INJECT_SELECT                                                                    \
  0x0005
#define regLSDMA_ERROR_INJECT_SELECT_BASE_IDX                                                           \
  0
#define regLSDMA_CONTEXT_GROUP_BOUNDARY                                                                 \
  0x001f
#define regLSDMA_CONTEXT_GROUP_BOUNDARY_BASE_IDX                                                        \
  0
#define regLSDMA_RB_RPTR_FETCH_HI                                                                       \
  0x0020
#define regLSDMA_RB_RPTR_FETCH_HI_BASE_IDX                                                              \
  0
#define regLSDMA_SEM_WAIT_FAIL_TIMER_CNTL                                                               \
  0x0021
#define regLSDMA_SEM_WAIT_FAIL_TIMER_CNTL_BASE_IDX                                                      \
  0
#define regLSDMA_RB_RPTR_FETCH                                                                          \
  0x0022
#define regLSDMA_RB_RPTR_FETCH_BASE_IDX                                                                 \
  0
#define regLSDMA_IB_OFFSET_FETCH                                                                        \
  0x0023
#define regLSDMA_IB_OFFSET_FETCH_BASE_IDX                                                               \
  0
#define regLSDMA_PROGRAM                                                                                \
  0x0024
#define regLSDMA_PROGRAM_BASE_IDX                                                                       \
  0
#define regLSDMA_STATUS_REG                                                                             \
  0x0025
#define regLSDMA_STATUS_REG_BASE_IDX                                                                    \
  0
#define regLSDMA_STATUS1_REG                                                                            \
  0x0026
#define regLSDMA_STATUS1_REG_BASE_IDX                                                                   \
  0
#define regLSDMA_RD_BURST_CNTL                                                                          \
  0x0027
#define regLSDMA_RD_BURST_CNTL_BASE_IDX                                                                 \
  0
#define regLSDMA_HBM_PAGE_CONFIG                                                                        \
  0x0028
#define regLSDMA_HBM_PAGE_CONFIG_BASE_IDX                                                               \
  0
#define regLSDMA_UCODE_CHECKSUM                                                                         \
  0x0029
#define regLSDMA_UCODE_CHECKSUM_BASE_IDX                                                                \
  0
#define regLSDMA_FREEZE                                                                                 \
  0x002b
#define regLSDMA_FREEZE_BASE_IDX                                                                        \
  0
#define regLSDMA_PF_PIO_STATUS                                                                          \
  0x002c
#define regLSDMA_PF_PIO_STATUS_BASE_IDX                                                                 \
  0
#define regLSDMA_VF_PIO_STATUS                                                                          \
  0x002d
#define regLSDMA_VF_PIO_STATUS_BASE_IDX                                                                 \
  0
#define regLSDMA_POWER_GATING                                                                           \
  0x002e
#define regLSDMA_POWER_GATING_BASE_IDX                                                                  \
  0
#define regLSDMA_PGFSM_CONFIG                                                                           \
  0x002f
#define regLSDMA_PGFSM_CONFIG_BASE_IDX                                                                  \
  0
#define regLSDMA_PGFSM_WRITE                                                                            \
  0x0030
#define regLSDMA_PGFSM_WRITE_BASE_IDX                                                                   \
  0
#define regLSDMA_PGFSM_READ                                                                             \
  0x0031
#define regLSDMA_PGFSM_READ_BASE_IDX                                                                    \
  0
#define regLSDMA_PIO_STATUS                                                                             \
  0x0032
#define regLSDMA_PIO_STATUS_BASE_IDX                                                                    \
  0
#define regLSDMA_BA_THRESHOLD                                                                           \
  0x0033
#define regLSDMA_BA_THRESHOLD_BASE_IDX                                                                  \
  0
#define regLSDMA_ID                                                                                     \
  0x0034
#define regLSDMA_ID_BASE_IDX                                                                            \
  0
#define regLSDMA_VERSION                                                                                \
  0x0035
#define regLSDMA_VERSION_BASE_IDX                                                                       \
  0
#define regLSDMA_EDC_COUNTER                                                                            \
  0x0036
#define regLSDMA_EDC_COUNTER_BASE_IDX                                                                   \
  0
#define regLSDMA_EDC_COUNTER2                                                                           \
  0x0037
#define regLSDMA_EDC_COUNTER2_BASE_IDX                                                                  \
  0
#define regLSDMA_STATUS2_REG                                                                            \
  0x0038
#define regLSDMA_STATUS2_REG_BASE_IDX                                                                   \
  0
#define regLSDMA_ATOMIC_CNTL                                                                            \
  0x0039
#define regLSDMA_ATOMIC_CNTL_BASE_IDX                                                                   \
  0
#define regLSDMA_ATOMIC_PREOP_LO                                                                        \
  0x003a
#define regLSDMA_ATOMIC_PREOP_LO_BASE_IDX                                                               \
  0
#define regLSDMA_ATOMIC_PREOP_HI                                                                        \
  0x003b
#define regLSDMA_ATOMIC_PREOP_HI_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_CNTL                                                                             \
  0x003c
#define regLSDMA_UTCL1_CNTL_BASE_IDX                                                                    \
  0
#define regLSDMA_UTCL1_WATERMK                                                                          \
  0x003d
#define regLSDMA_UTCL1_WATERMK_BASE_IDX                                                                 \
  0
#define regLSDMA_UTCL1_RD_STATUS                                                                        \
  0x003e
#define regLSDMA_UTCL1_RD_STATUS_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_WR_STATUS                                                                        \
  0x003f
#define regLSDMA_UTCL1_WR_STATUS_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_INV0                                                                             \
  0x0040
#define regLSDMA_UTCL1_INV0_BASE_IDX                                                                    \
  0
#define regLSDMA_UTCL1_INV1                                                                             \
  0x0041
#define regLSDMA_UTCL1_INV1_BASE_IDX                                                                    \
  0
#define regLSDMA_UTCL1_INV2                                                                             \
  0x0042
#define regLSDMA_UTCL1_INV2_BASE_IDX                                                                    \
  0
#define regLSDMA_UTCL1_RD_XNACK0                                                                        \
  0x0043
#define regLSDMA_UTCL1_RD_XNACK0_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_RD_XNACK1                                                                        \
  0x0044
#define regLSDMA_UTCL1_RD_XNACK1_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_WR_XNACK0                                                                        \
  0x0045
#define regLSDMA_UTCL1_WR_XNACK0_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_WR_XNACK1                                                                        \
  0x0046
#define regLSDMA_UTCL1_WR_XNACK1_BASE_IDX                                                               \
  0
#define regLSDMA_UTCL1_TIMEOUT                                                                          \
  0x0047
#define regLSDMA_UTCL1_TIMEOUT_BASE_IDX                                                                 \
  0
#define regLSDMA_UTCL1_PAGE                                                                             \
  0x0048
#define regLSDMA_UTCL1_PAGE_BASE_IDX                                                                    \
  0
#define regLSDMA_RELAX_ORDERING_LUT                                                                     \
  0x004a
#define regLSDMA_RELAX_ORDERING_LUT_BASE_IDX                                                            \
  0
#define regLSDMA_CHICKEN_BITS_2                                                                         \
  0x004b
#define regLSDMA_CHICKEN_BITS_2_BASE_IDX                                                                \
  0
#define regLSDMA_STATUS3_REG                                                                            \
  0x004c
#define regLSDMA_STATUS3_REG_BASE_IDX                                                                   \
  0
#define regLSDMA_PHYSICAL_ADDR_LO                                                                       \
  0x004d
#define regLSDMA_PHYSICAL_ADDR_LO_BASE_IDX                                                              \
  0
#define regLSDMA_PHYSICAL_ADDR_HI                                                                       \
  0x004e
#define regLSDMA_PHYSICAL_ADDR_HI_BASE_IDX                                                              \
  0
#define regLSDMA_ECC_CNTL                                                                               \
  0x004f
#define regLSDMA_ECC_CNTL_BASE_IDX                                                                      \
  0
#define regLSDMA_ERROR_LOG                                                                              \
  0x0050
#define regLSDMA_ERROR_LOG_BASE_IDX                                                                     \
  0
#define regLSDMA_PUB_DUMMY0                                                                             \
  0x0051
#define regLSDMA_PUB_DUMMY0_BASE_IDX                                                                    \
  0
#define regLSDMA_PUB_DUMMY1                                                                             \
  0x0052
#define regLSDMA_PUB_DUMMY1_BASE_IDX                                                                    \
  0
#define regLSDMA_PUB_DUMMY2                                                                             \
  0x0053
#define regLSDMA_PUB_DUMMY2_BASE_IDX                                                                    \
  0
#define regLSDMA_PUB_DUMMY3                                                                             \
  0x0054
#define regLSDMA_PUB_DUMMY3_BASE_IDX                                                                    \
  0
#define regLSDMA_F32_COUNTER                                                                            \
  0x0055
#define regLSDMA_F32_COUNTER_BASE_IDX                                                                   \
  0
#define regLSDMA_PERFCNT_PERFCOUNTER0_CFG                                                               \
  0x0057
#define regLSDMA_PERFCNT_PERFCOUNTER0_CFG_BASE_IDX                                                      \
  0
#define regLSDMA_PERFCNT_PERFCOUNTER1_CFG                                                               \
  0x0058
#define regLSDMA_PERFCNT_PERFCOUNTER1_CFG_BASE_IDX                                                      \
  0
#define regLSDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL                                                          \
  0x0059
#define regLSDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL_BASE_IDX                                                 \
  0
#define regLSDMA_PERFCNT_MISC_CNTL                                                                      \
  0x005a
#define regLSDMA_PERFCNT_MISC_CNTL_BASE_IDX                                                             \
  0
#define regLSDMA_PERFCNT_PERFCOUNTER_LO                                                                 \
  0x005b
#define regLSDMA_PERFCNT_PERFCOUNTER_LO_BASE_IDX                                                        \
  0
#define regLSDMA_PERFCNT_PERFCOUNTER_HI                                                                 \
  0x005c
#define regLSDMA_PERFCNT_PERFCOUNTER_HI_BASE_IDX                                                        \
  0
#define regLSDMA_CRD_CNTL                                                                               \
  0x005d
#define regLSDMA_CRD_CNTL_BASE_IDX                                                                      \
  0
#define regLSDMA_ULV_CNTL                                                                               \
  0x005f
#define regLSDMA_ULV_CNTL_BASE_IDX                                                                      \
  0
#define regLSDMA_EA_DBIT_ADDR_DATA                                                                      \
  0x0060
#define regLSDMA_EA_DBIT_ADDR_DATA_BASE_IDX                                                             \
  0
#define regLSDMA_EA_DBIT_ADDR_INDEX                                                                     \
  0x0061
#define regLSDMA_EA_DBIT_ADDR_INDEX_BASE_IDX                                                            \
  0
#define regLSDMA_STATUS4_REG                                                                            \
  0x0063
#define regLSDMA_STATUS4_REG_BASE_IDX                                                                   \
  0
#define regLSDMA_CE_CTRL                                                                                \
  0x0066
#define regLSDMA_CE_CTRL_BASE_IDX                                                                       \
  0
#define regLSDMA_EXCEPTION_STATUS                                                                       \
  0x0067
#define regLSDMA_EXCEPTION_STATUS_BASE_IDX                                                              \
  0
#define regLSDMA_PIO_SRC_ADDR_LO                                                                        \
  0x0069
#define regLSDMA_PIO_SRC_ADDR_LO_BASE_IDX                                                               \
  0
#define regLSDMA_PIO_SRC_ADDR_HI                                                                        \
  0x006a
#define regLSDMA_PIO_SRC_ADDR_HI_BASE_IDX                                                               \
  0
#define regLSDMA_PIO_DST_ADDR_LO                                                                        \
  0x006b
#define regLSDMA_PIO_DST_ADDR_LO_BASE_IDX                                                               \
  0
#define regLSDMA_PIO_DST_ADDR_HI                                                                        \
  0x006c
#define regLSDMA_PIO_DST_ADDR_HI_BASE_IDX                                                               \
  0
#define regLSDMA_PIO_COMMAND                                                                            \
  0x006d
#define regLSDMA_PIO_COMMAND_BASE_IDX                                                                   \
  0
#define regLSDMA_PIO_CONSTFILL_DATA                                                                     \
  0x006e
#define regLSDMA_PIO_CONSTFILL_DATA_BASE_IDX                                                            \
  0
#define regLSDMA_PIO_CONTROL                                                                            \
  0x006f
#define regLSDMA_PIO_CONTROL_BASE_IDX                                                                   \
  0
#define regLSDMA_INT_CNTL                                                                               \
  0x0070
#define regLSDMA_INT_CNTL_BASE_IDX                                                                      \
  0
#define regLSDMA_MEM_POWER_CTRL                                                                         \
  0x0071
#define regLSDMA_MEM_POWER_CTRL_BASE_IDX                                                                \
  0
#define regLSDMA_CLK_CTRL                                                                               \
  0x0072
#define regLSDMA_CLK_CTRL_BASE_IDX                                                                      \
  0
#define regLSDMA_CNTL                                                                                   \
  0x0073
#define regLSDMA_CNTL_BASE_IDX                                                                          \
  0
#define regLSDMA_CHICKEN_BITS                                                                           \
  0x0074
#define regLSDMA_CHICKEN_BITS_BASE_IDX                                                                  \
  0
#define regLSDMA_GB_ADDR_CONFIG                                                                         \
  0x0075
#define regLSDMA_GB_ADDR_CONFIG_BASE_IDX                                                                \
  0
#define regLSDMA_GB_ADDR_CONFIG_READ                                                                    \
  0x0076
#define regLSDMA_GB_ADDR_CONFIG_READ_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_RB_CNTL                                                                         \
  0x0080
#define regLSDMA_QUEUE0_RB_CNTL_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_RB_BASE                                                                         \
  0x0081
#define regLSDMA_QUEUE0_RB_BASE_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_RB_BASE_HI                                                                      \
  0x0082
#define regLSDMA_QUEUE0_RB_BASE_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_RB_RPTR                                                                         \
  0x0083
#define regLSDMA_QUEUE0_RB_RPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_RB_RPTR_HI                                                                      \
  0x0084
#define regLSDMA_QUEUE0_RB_RPTR_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_RB_WPTR                                                                         \
  0x0085
#define regLSDMA_QUEUE0_RB_WPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_RB_WPTR_HI                                                                      \
  0x0086
#define regLSDMA_QUEUE0_RB_WPTR_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_RB_WPTR_POLL_CNTL                                                               \
  0x0087
#define regLSDMA_QUEUE0_RB_WPTR_POLL_CNTL_BASE_IDX                                                      \
  0
#define regLSDMA_QUEUE0_RB_RPTR_ADDR_HI                                                                 \
  0x0088
#define regLSDMA_QUEUE0_RB_RPTR_ADDR_HI_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE0_RB_RPTR_ADDR_LO                                                                 \
  0x0089
#define regLSDMA_QUEUE0_RB_RPTR_ADDR_LO_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE0_IB_CNTL                                                                         \
  0x008a
#define regLSDMA_QUEUE0_IB_CNTL_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_IB_RPTR                                                                         \
  0x008b
#define regLSDMA_QUEUE0_IB_RPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_IB_OFFSET                                                                       \
  0x008c
#define regLSDMA_QUEUE0_IB_OFFSET_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE0_IB_BASE_LO                                                                      \
  0x008d
#define regLSDMA_QUEUE0_IB_BASE_LO_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_IB_BASE_HI                                                                      \
  0x008e
#define regLSDMA_QUEUE0_IB_BASE_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_IB_SIZE                                                                         \
  0x008f
#define regLSDMA_QUEUE0_IB_SIZE_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_SKIP_CNTL                                                                       \
  0x0090
#define regLSDMA_QUEUE0_SKIP_CNTL_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE0_CONTEXT_STATUS                                                                  \
  0x0091
#define regLSDMA_QUEUE0_CONTEXT_STATUS_BASE_IDX                                                         \
  0
#define regLSDMA_QUEUE0_DOORBELL                                                                        \
  0x0092
#define regLSDMA_QUEUE0_DOORBELL_BASE_IDX                                                               \
  0
#define regLSDMA_QUEUE0_STATUS                                                                          \
  0x00a8
#define regLSDMA_QUEUE0_STATUS_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE0_DOORBELL_LOG                                                                    \
  0x00a9
#define regLSDMA_QUEUE0_DOORBELL_LOG_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_WATERMARK                                                                       \
  0x00aa
#define regLSDMA_QUEUE0_WATERMARK_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE0_DOORBELL_OFFSET                                                                 \
  0x00ab
#define regLSDMA_QUEUE0_DOORBELL_OFFSET_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE0_CSA_ADDR_LO                                                                     \
  0x00ac
#define regLSDMA_QUEUE0_CSA_ADDR_LO_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE0_CSA_ADDR_HI                                                                     \
  0x00ad
#define regLSDMA_QUEUE0_CSA_ADDR_HI_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE0_RB_PREEMPT                                                                      \
  0x00ae
#define regLSDMA_QUEUE0_RB_PREEMPT_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE0_IB_SUB_REMAIN                                                                   \
  0x00af
#define regLSDMA_QUEUE0_IB_SUB_REMAIN_BASE_IDX                                                          \
  0
#define regLSDMA_QUEUE0_PREEMPT                                                                         \
  0x00b0
#define regLSDMA_QUEUE0_PREEMPT_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE0_DUMMY0                                                                          \
  0x00b1
#define regLSDMA_QUEUE0_DUMMY0_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE0_RB_WPTR_POLL_ADDR_HI                                                            \
  0x00b2
#define regLSDMA_QUEUE0_RB_WPTR_POLL_ADDR_HI_BASE_IDX                                                   \
  0
#define regLSDMA_QUEUE0_RB_WPTR_POLL_ADDR_LO                                                            \
  0x00b3
#define regLSDMA_QUEUE0_RB_WPTR_POLL_ADDR_LO_BASE_IDX                                                   \
  0
#define regLSDMA_QUEUE0_RB_AQL_CNTL                                                                     \
  0x00b4
#define regLSDMA_QUEUE0_RB_AQL_CNTL_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE0_MINOR_PTR_UPDATE                                                                \
  0x00b5
#define regLSDMA_QUEUE0_MINOR_PTR_UPDATE_BASE_IDX                                                       \
  0
#define regLSDMA_QUEUE0_CNTL                                                                            \
  0x00b6
#define regLSDMA_QUEUE0_CNTL_BASE_IDX                                                                   \
  0
#define regLSDMA_QUEUE0_DUMMY1                                                                          \
  0x00b8
#define regLSDMA_QUEUE0_DUMMY1_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE0_DUMMY2                                                                          \
  0x00b9
#define regLSDMA_QUEUE0_DUMMY2_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA0                                                                    \
  0x00c0
#define regLSDMA_QUEUE0_MIDCMD_DATA0_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA1                                                                    \
  0x00c1
#define regLSDMA_QUEUE0_MIDCMD_DATA1_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA2                                                                    \
  0x00c2
#define regLSDMA_QUEUE0_MIDCMD_DATA2_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA3                                                                    \
  0x00c3
#define regLSDMA_QUEUE0_MIDCMD_DATA3_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA4                                                                    \
  0x00c4
#define regLSDMA_QUEUE0_MIDCMD_DATA4_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA5                                                                    \
  0x00c5
#define regLSDMA_QUEUE0_MIDCMD_DATA5_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA6                                                                    \
  0x00c6
#define regLSDMA_QUEUE0_MIDCMD_DATA6_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA7                                                                    \
  0x00c7
#define regLSDMA_QUEUE0_MIDCMD_DATA7_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA8                                                                    \
  0x00c8
#define regLSDMA_QUEUE0_MIDCMD_DATA8_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA9                                                                    \
  0x00c9
#define regLSDMA_QUEUE0_MIDCMD_DATA9_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE0_MIDCMD_DATA10                                                                   \
  0x00ca
#define regLSDMA_QUEUE0_MIDCMD_DATA10_BASE_IDX                                                          \
  0
#define regLSDMA_QUEUE0_MIDCMD_CNTL                                                                     \
  0x00cb
#define regLSDMA_QUEUE0_MIDCMD_CNTL_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE1_RB_CNTL                                                                         \
  0x00d8
#define regLSDMA_QUEUE1_RB_CNTL_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_RB_BASE                                                                         \
  0x00d9
#define regLSDMA_QUEUE1_RB_BASE_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_RB_BASE_HI                                                                      \
  0x00da
#define regLSDMA_QUEUE1_RB_BASE_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_RB_RPTR                                                                         \
  0x00db
#define regLSDMA_QUEUE1_RB_RPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_RB_RPTR_HI                                                                      \
  0x00dc
#define regLSDMA_QUEUE1_RB_RPTR_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_RB_WPTR                                                                         \
  0x00dd
#define regLSDMA_QUEUE1_RB_WPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_RB_WPTR_HI                                                                      \
  0x00de
#define regLSDMA_QUEUE1_RB_WPTR_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_RB_WPTR_POLL_CNTL                                                               \
  0x00df
#define regLSDMA_QUEUE1_RB_WPTR_POLL_CNTL_BASE_IDX                                                      \
  0
#define regLSDMA_QUEUE1_RB_RPTR_ADDR_HI                                                                 \
  0x00e0
#define regLSDMA_QUEUE1_RB_RPTR_ADDR_HI_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE1_RB_RPTR_ADDR_LO                                                                 \
  0x00e1
#define regLSDMA_QUEUE1_RB_RPTR_ADDR_LO_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE1_IB_CNTL                                                                         \
  0x00e2
#define regLSDMA_QUEUE1_IB_CNTL_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_IB_RPTR                                                                         \
  0x00e3
#define regLSDMA_QUEUE1_IB_RPTR_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_IB_OFFSET                                                                       \
  0x00e4
#define regLSDMA_QUEUE1_IB_OFFSET_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE1_IB_BASE_LO                                                                      \
  0x00e5
#define regLSDMA_QUEUE1_IB_BASE_LO_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_IB_BASE_HI                                                                      \
  0x00e6
#define regLSDMA_QUEUE1_IB_BASE_HI_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_IB_SIZE                                                                         \
  0x00e7
#define regLSDMA_QUEUE1_IB_SIZE_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_SKIP_CNTL                                                                       \
  0x00e8
#define regLSDMA_QUEUE1_SKIP_CNTL_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE1_CONTEXT_STATUS                                                                  \
  0x00e9
#define regLSDMA_QUEUE1_CONTEXT_STATUS_BASE_IDX                                                         \
  0
#define regLSDMA_QUEUE1_DOORBELL                                                                        \
  0x00ea
#define regLSDMA_QUEUE1_DOORBELL_BASE_IDX                                                               \
  0
#define regLSDMA_QUEUE1_STATUS                                                                          \
  0x0100
#define regLSDMA_QUEUE1_STATUS_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE1_DOORBELL_LOG                                                                    \
  0x0101
#define regLSDMA_QUEUE1_DOORBELL_LOG_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_WATERMARK                                                                       \
  0x0102
#define regLSDMA_QUEUE1_WATERMARK_BASE_IDX                                                              \
  0
#define regLSDMA_QUEUE1_DOORBELL_OFFSET                                                                 \
  0x0103
#define regLSDMA_QUEUE1_DOORBELL_OFFSET_BASE_IDX                                                        \
  0
#define regLSDMA_QUEUE1_CSA_ADDR_LO                                                                     \
  0x0104
#define regLSDMA_QUEUE1_CSA_ADDR_LO_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE1_CSA_ADDR_HI                                                                     \
  0x0105
#define regLSDMA_QUEUE1_CSA_ADDR_HI_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE1_RB_PREEMPT                                                                      \
  0x0106
#define regLSDMA_QUEUE1_RB_PREEMPT_BASE_IDX                                                             \
  0
#define regLSDMA_QUEUE1_IB_SUB_REMAIN                                                                   \
  0x0107
#define regLSDMA_QUEUE1_IB_SUB_REMAIN_BASE_IDX                                                          \
  0
#define regLSDMA_QUEUE1_PREEMPT                                                                         \
  0x0108
#define regLSDMA_QUEUE1_PREEMPT_BASE_IDX                                                                \
  0
#define regLSDMA_QUEUE1_DUMMY0                                                                          \
  0x0109
#define regLSDMA_QUEUE1_DUMMY0_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE1_RB_WPTR_POLL_ADDR_HI                                                            \
  0x010a
#define regLSDMA_QUEUE1_RB_WPTR_POLL_ADDR_HI_BASE_IDX                                                   \
  0
#define regLSDMA_QUEUE1_RB_WPTR_POLL_ADDR_LO                                                            \
  0x010b
#define regLSDMA_QUEUE1_RB_WPTR_POLL_ADDR_LO_BASE_IDX                                                   \
  0
#define regLSDMA_QUEUE1_RB_AQL_CNTL                                                                     \
  0x010c
#define regLSDMA_QUEUE1_RB_AQL_CNTL_BASE_IDX                                                            \
  0
#define regLSDMA_QUEUE1_MINOR_PTR_UPDATE                                                                \
  0x010d
#define regLSDMA_QUEUE1_MINOR_PTR_UPDATE_BASE_IDX                                                       \
  0
#define regLSDMA_QUEUE1_CNTL                                                                            \
  0x010e
#define regLSDMA_QUEUE1_CNTL_BASE_IDX                                                                   \
  0
#define regLSDMA_QUEUE1_DUMMY1                                                                          \
  0x0110
#define regLSDMA_QUEUE1_DUMMY1_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE1_DUMMY2                                                                          \
  0x0111
#define regLSDMA_QUEUE1_DUMMY2_BASE_IDX                                                                 \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA0                                                                    \
  0x0118
#define regLSDMA_QUEUE1_MIDCMD_DATA0_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA1                                                                    \
  0x0119
#define regLSDMA_QUEUE1_MIDCMD_DATA1_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA2                                                                    \
  0x011a
#define regLSDMA_QUEUE1_MIDCMD_DATA2_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA3                                                                    \
  0x011b
#define regLSDMA_QUEUE1_MIDCMD_DATA3_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA4                                                                    \
  0x011c
#define regLSDMA_QUEUE1_MIDCMD_DATA4_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA5                                                                    \
  0x011d
#define regLSDMA_QUEUE1_MIDCMD_DATA5_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA6                                                                    \
  0x011e
#define regLSDMA_QUEUE1_MIDCMD_DATA6_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA7                                                                    \
  0x011f
#define regLSDMA_QUEUE1_MIDCMD_DATA7_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA8                                                                    \
  0x0120
#define regLSDMA_QUEUE1_MIDCMD_DATA8_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA9                                                                    \
  0x0121
#define regLSDMA_QUEUE1_MIDCMD_DATA9_BASE_IDX                                                           \
  0
#define regLSDMA_QUEUE1_MIDCMD_DATA10                                                                   \
  0x0122
#define regLSDMA_QUEUE1_MIDCMD_DATA10_BASE_IDX                                                          \
  0
#define regLSDMA_QUEUE1_MIDCMD_CNTL                                                                     \
  0x0123
#define regLSDMA_QUEUE1_MIDCMD_CNTL_BASE_IDX                                                            \
  0

#endif
