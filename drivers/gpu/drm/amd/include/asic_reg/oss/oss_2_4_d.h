/*
 * OSS_2_4 Register documentation
 *
 * Copyright (C) 2014  Advanced Micro Devices, Inc.
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

#ifndef OSS_2_4_D_H
#define OSS_2_4_D_H

#define mmIH_VMID_0_LUT                                                         \
  0xe00
#define mmIH_VMID_1_LUT                                                         \
  0xe01
#define mmIH_VMID_2_LUT                                                         \
  0xe02
#define mmIH_VMID_3_LUT                                                         \
  0xe03
#define mmIH_VMID_4_LUT                                                         \
  0xe04
#define mmIH_VMID_5_LUT                                                         \
  0xe05
#define mmIH_VMID_6_LUT                                                         \
  0xe06
#define mmIH_VMID_7_LUT                                                         \
  0xe07
#define mmIH_VMID_8_LUT                                                         \
  0xe08
#define mmIH_VMID_9_LUT                                                         \
  0xe09
#define mmIH_VMID_10_LUT                                                        \
  0xe0a
#define mmIH_VMID_11_LUT                                                        \
  0xe0b
#define mmIH_VMID_12_LUT                                                        \
  0xe0c
#define mmIH_VMID_13_LUT                                                        \
  0xe0d
#define mmIH_VMID_14_LUT                                                        \
  0xe0e
#define mmIH_VMID_15_LUT                                                        \
  0xe0f
#define mmIH_RB_CNTL                                                            \
  0xe30
#define mmIH_RB_BASE                                                            \
  0xe31
#define mmIH_RB_RPTR                                                            \
  0xe32
#define mmIH_RB_WPTR                                                            \
  0xe33
#define mmIH_RB_WPTR_ADDR_HI                                                    \
  0xe34
#define mmIH_RB_WPTR_ADDR_LO                                                    \
  0xe35
#define mmIH_CNTL                                                               \
  0xe36
#define mmIH_LEVEL_STATUS                                                       \
  0xe37
#define mmIH_STATUS                                                             \
  0xe38
#define mmIH_PERFMON_CNTL                                                       \
  0xe39
#define mmIH_PERFCOUNTER0_RESULT                                                \
  0xe3a
#define mmIH_PERFCOUNTER1_RESULT                                                \
  0xe3b
#define mmIH_DSM_MATCH_VALUE_BIT_31_0                                           \
  0xe3d
#define mmIH_DSM_MATCH_VALUE_BIT_63_32                                          \
  0xe3e
#define mmIH_DSM_MATCH_VALUE_BIT_95_64                                          \
  0xe3f
#define mmIH_DSM_MATCH_FIELD_CONTROL                                            \
  0xe40
#define mmIH_DSM_MATCH_DATA_CONTROL                                             \
  0xe41
#define mmIH_VERSION                                                            \
  0xe42
#define mmSEM_MCIF_CONFIG                                                       \
  0xf90
#define mmSDMA_CONFIG                                                           \
  0xf91
#define mmSDMA1_CONFIG                                                          \
  0xf92
#define mmUVD_CONFIG                                                            \
  0xf93
#define mmVCE_CONFIG                                                            \
  0xf94
#define mmACP_CONFIG                                                            \
  0xf95
#define mmCPG_CONFIG                                                            \
  0xf96
#define mmCPC1_CONFIG                                                           \
  0xf97
#define mmCPC2_CONFIG                                                           \
  0xf98
#define mmSEM_STATUS                                                            \
  0xf99
#define mmSEM_EDC_CONFIG                                                        \
  0xf9a
#define mmSEM_MAILBOX_CLIENTCONFIG                                              \
  0xf9b
#define mmSEM_MAILBOX                                                           \
  0xf9c
#define mmSEM_MAILBOX_CONTROL                                                   \
  0xf9d
#define mmSEM_CHICKEN_BITS                                                      \
  0xf9e
#define mmSEM_MAILBOX_CLIENTCONFIG_EXTRA                                        \
  0xf9f
#define mmSRBM_CNTL                                                             \
  0x390
#define mmSRBM_GFX_CNTL                                                         \
  0x391
#define mmSRBM_READ_CNTL                                                        \
  0x392
#define mmSRBM_STATUS2                                                          \
  0x393
#define mmSRBM_STATUS                                                           \
  0x394
#define mmSRBM_STATUS3                                                          \
  0x395
#define mmSRBM_SOFT_RESET                                                       \
  0x398
#define mmSRBM_DEBUG_CNTL                                                       \
  0x399
#define mmSRBM_DEBUG_DATA                                                       \
  0x39a
#define mmSRBM_CHIP_REVISION                                                    \
  0x39b
#define mmCC_SYS_RB_REDUNDANCY                                                  \
  0x39f
#define mmCC_SYS_RB_BACKEND_DISABLE                                             \
  0x3a0
#define mmGC_USER_SYS_RB_BACKEND_DISABLE                                        \
  0x3a1
#define mmSRBM_MC_CLKEN_CNTL                                                    \
  0x3b3
#define mmSRBM_SYS_CLKEN_CNTL                                                   \
  0x3b4
#define mmSRBM_VCE_CLKEN_CNTL                                                   \
  0x3b5
#define mmSRBM_UVD_CLKEN_CNTL                                                   \
  0x3b6
#define mmSRBM_SDMA_CLKEN_CNTL                                                  \
  0x3b7
#define mmSRBM_SAM_CLKEN_CNTL                                                   \
  0x3b8
#define mmSRBM_ISP_CLKEN_CNTL                                                   \
  0x3b9
#define mmSRBM_DEBUG                                                            \
  0x3a4
#define mmSRBM_DEBUG_SNAPSHOT                                                   \
  0x3a5
#define mmSRBM_DEBUG_SNAPSHOT2                                                  \
  0x3ad
#define mmSRBM_READ_ERROR                                                       \
  0x3a6
#define mmSRBM_READ_ERROR2                                                      \
  0x3ae
#define mmSRBM_INT_CNTL                                                         \
  0x3a8
#define mmSRBM_INT_STATUS                                                       \
  0x3a9
#define mmSRBM_INT_ACK                                                          \
  0x3aa
#define mmSRBM_FIREWALL_ERROR_SRC                                               \
  0x3ab
#define mmSRBM_FIREWALL_ERROR_ADDR                                              \
  0x3ac
#define mmSRBM_DSM_TRIG_CNTL0                                                   \
  0x3af
#define mmSRBM_DSM_TRIG_CNTL1                                                   \
  0x3b0
#define mmSRBM_DSM_TRIG_MASK0                                                   \
  0x3b1
#define mmSRBM_DSM_TRIG_MASK1                                                   \
  0x3b2
#define mmSRBM_PERFMON_CNTL                                                     \
  0x7c00
#define mmSRBM_PERFCOUNTER0_SELECT                                              \
  0x7c01
#define mmSRBM_PERFCOUNTER1_SELECT                                              \
  0x7c02
#define mmSRBM_PERFCOUNTER0_LO                                                  \
  0x7c03
#define mmSRBM_PERFCOUNTER0_HI                                                  \
  0x7c04
#define mmSRBM_PERFCOUNTER1_LO                                                  \
  0x7c05
#define mmSRBM_PERFCOUNTER1_HI                                                  \
  0x7c06
#define mmSRBM_CAM_INDEX                                                        \
  0xfe34
#define mmSRBM_CAM_DATA                                                         \
  0xfe35
#define mmSRBM_MC_DOMAIN_ADDR0                                                  \
  0xfa00
#define mmSRBM_MC_DOMAIN_ADDR1                                                  \
  0xfa01
#define mmSRBM_MC_DOMAIN_ADDR2                                                  \
  0xfa02
#define mmSRBM_MC_DOMAIN_ADDR3                                                  \
  0xfa03
#define mmSRBM_MC_DOMAIN_ADDR4                                                  \
  0xfa04
#define mmSRBM_MC_DOMAIN_ADDR5                                                  \
  0xfa05
#define mmSRBM_MC_DOMAIN_ADDR6                                                  \
  0xfa06
#define mmSRBM_SYS_DOMAIN_ADDR0                                                 \
  0xfa08
#define mmSRBM_SYS_DOMAIN_ADDR1                                                 \
  0xfa09
#define mmSRBM_SYS_DOMAIN_ADDR2                                                 \
  0xfa0a
#define mmSRBM_SYS_DOMAIN_ADDR3                                                 \
  0xfa0b
#define mmSRBM_SYS_DOMAIN_ADDR4                                                 \
  0xfa0c
#define mmSRBM_SYS_DOMAIN_ADDR5                                                 \
  0xfa0d
#define mmSRBM_SYS_DOMAIN_ADDR6                                                 \
  0xfa0e
#define mmSRBM_SDMA_DOMAIN_ADDR0                                                \
  0xfa10
#define mmSRBM_SDMA_DOMAIN_ADDR1                                                \
  0xfa11
#define mmSRBM_SDMA_DOMAIN_ADDR2                                                \
  0xfa12
#define mmSRBM_SDMA_DOMAIN_ADDR3                                                \
  0xfa13
#define mmSRBM_UVD_DOMAIN_ADDR0                                                 \
  0xfa14
#define mmSRBM_UVD_DOMAIN_ADDR1                                                 \
  0xfa15
#define mmSRBM_UVD_DOMAIN_ADDR2                                                 \
  0xfa16
#define mmSRBM_VCE_DOMAIN_ADDR0                                                 \
  0xfa18
#define mmSRBM_VCE_DOMAIN_ADDR1                                                 \
  0xfa19
#define mmSRBM_VCE_DOMAIN_ADDR2                                                 \
  0xfa1a
#define mmSRBM_SAM_DOMAIN_ADDR0                                                 \
  0xfa1c
#define mmSRBM_SAM_DOMAIN_ADDR1                                                 \
  0xfa1d
#define mmSRBM_SAM_DOMAIN_ADDR2                                                 \
  0xfa1e
#define mmSRBM_ISP_DOMAIN_ADDR0                                                 \
  0xfa20
#define mmSRBM_ISP_DOMAIN_ADDR1                                                 \
  0xfa21
#define mmSRBM_ISP_DOMAIN_ADDR2                                                 \
  0xfa22
#define mmSYS_GRBM_GFX_INDEX_SELECT                                             \
  0xfa2c
#define mmSYS_GRBM_GFX_INDEX_DATA                                               \
  0xfa2d
#define mmSRBM_GFX_CNTL_SELECT                                                  \
  0xfa2e
#define mmSRBM_GFX_CNTL_DATA                                                    \
  0xfa2f
#define mmSRBM_VF_ENABLE                                                        \
  0xfa30
#define mmSRBM_VIRT_CNTL                                                        \
  0xfa31
#define mmSRBM_VIRT_RESET_REQ                                                   \
  0xfa32
#define mmSDMA0_UCODE_ADDR                                                      \
  0x3400
#define mmSDMA0_UCODE_DATA                                                      \
  0x3401
#define mmSDMA0_POWER_CNTL                                                      \
  0x3402
#define mmSDMA0_CLK_CTRL                                                        \
  0x3403
#define mmSDMA0_CNTL                                                            \
  0x3404
#define mmSDMA0_CHICKEN_BITS                                                    \
  0x3405
#define mmSDMA0_TILING_CONFIG                                                   \
  0x3406
#define mmSDMA0_HASH                                                            \
  0x3407
#define mmSDMA0_SEM_WAIT_FAIL_TIMER_CNTL                                        \
  0x3409
#define mmSDMA0_RB_RPTR_FETCH                                                   \
  0x340a
#define mmSDMA0_IB_OFFSET_FETCH                                                 \
  0x340b
#define mmSDMA0_PROGRAM                                                         \
  0x340c
#define mmSDMA0_STATUS_REG                                                      \
  0x340d
#define mmSDMA0_STATUS1_REG                                                     \
  0x340e
#define mmSDMA0_PERFMON_CNTL                                                    \
  0x9000
#define mmSDMA0_PERFCOUNTER0_RESULT                                             \
  0x9001
#define mmSDMA0_PERFCOUNTER1_RESULT                                             \
  0x9002
#define mmSDMA0_F32_CNTL                                                        \
  0x3412
#define mmSDMA0_FREEZE                                                          \
  0x3413
#define mmSDMA0_PHASE0_QUANTUM                                                  \
  0x3414
#define mmSDMA0_PHASE1_QUANTUM                                                  \
  0x3415
#define mmSDMA_POWER_GATING                                                     \
  0x3416
#define mmSDMA_PGFSM_CONFIG                                                     \
  0x3417
#define mmSDMA_PGFSM_WRITE                                                      \
  0x3418
#define mmSDMA_PGFSM_READ                                                       \
  0x3419
#define mmSDMA0_EDC_CONFIG                                                      \
  0x341a
#define mmSDMA0_BA_THRESHOLD                                                    \
  0x341b
#define mmSDMA0_ID                                                              \
  0x341c
#define mmSDMA0_VERSION                                                         \
  0x341d
#define mmSDMA0_STATUS2_REG                                                     \
  0x341e
#define mmSDMA0_GFX_RB_CNTL                                                     \
  0x3480
#define mmSDMA0_GFX_RB_BASE                                                     \
  0x3481
#define mmSDMA0_GFX_RB_BASE_HI                                                  \
  0x3482
#define mmSDMA0_GFX_RB_RPTR                                                     \
  0x3483
#define mmSDMA0_GFX_RB_WPTR                                                     \
  0x3484
#define mmSDMA0_GFX_RB_WPTR_POLL_CNTL                                           \
  0x3485
#define mmSDMA0_GFX_RB_WPTR_POLL_ADDR_HI                                        \
  0x3486
#define mmSDMA0_GFX_RB_WPTR_POLL_ADDR_LO                                        \
  0x3487
#define mmSDMA0_GFX_RB_RPTR_ADDR_HI                                             \
  0x3488
#define mmSDMA0_GFX_RB_RPTR_ADDR_LO                                             \
  0x3489
#define mmSDMA0_GFX_IB_CNTL                                                     \
  0x348a
#define mmSDMA0_GFX_IB_RPTR                                                     \
  0x348b
#define mmSDMA0_GFX_IB_OFFSET                                                   \
  0x348c
#define mmSDMA0_GFX_IB_BASE_LO                                                  \
  0x348d
#define mmSDMA0_GFX_IB_BASE_HI                                                  \
  0x348e
#define mmSDMA0_GFX_IB_SIZE                                                     \
  0x348f
#define mmSDMA0_GFX_SKIP_CNTL                                                   \
  0x3490
#define mmSDMA0_GFX_CONTEXT_STATUS                                              \
  0x3491
#define mmSDMA0_GFX_CONTEXT_CNTL                                                \
  0x3493
#define mmSDMA0_GFX_VIRTUAL_ADDR                                                \
  0x34a7
#define mmSDMA0_GFX_APE1_CNTL                                                   \
  0x34a8
#define mmSDMA0_GFX_WATERMARK                                                   \
  0x34aa
#define mmSDMA0_GFX_CSA_ADDR_LO                                                 \
  0x34ac
#define mmSDMA0_GFX_CSA_ADDR_HI                                                 \
  0x34ad
#define mmSDMA0_GFX_DUMMY_REG                                                   \
  0x34ae
#define mmSDMA0_GFX_IB_SUB_REMAIN                                               \
  0x34af
#define mmSDMA0_GFX_PREEMPT                                                     \
  0x34b0
#define mmSDMA0_RLC0_RB_CNTL                                                    \
  0x3500
#define mmSDMA0_RLC0_RB_BASE                                                    \
  0x3501
#define mmSDMA0_RLC0_RB_BASE_HI                                                 \
  0x3502
#define mmSDMA0_RLC0_RB_RPTR                                                    \
  0x3503
#define mmSDMA0_RLC0_RB_WPTR                                                    \
  0x3504
#define mmSDMA0_RLC0_RB_WPTR_POLL_CNTL                                          \
  0x3505
#define mmSDMA0_RLC0_RB_WPTR_POLL_ADDR_HI                                       \
  0x3506
#define mmSDMA0_RLC0_RB_WPTR_POLL_ADDR_LO                                       \
  0x3507
#define mmSDMA0_RLC0_RB_RPTR_ADDR_HI                                            \
  0x3508
#define mmSDMA0_RLC0_RB_RPTR_ADDR_LO                                            \
  0x3509
#define mmSDMA0_RLC0_IB_CNTL                                                    \
  0x350a
#define mmSDMA0_RLC0_IB_RPTR                                                    \
  0x350b
#define mmSDMA0_RLC0_IB_OFFSET                                                  \
  0x350c
#define mmSDMA0_RLC0_IB_BASE_LO                                                 \
  0x350d
#define mmSDMA0_RLC0_IB_BASE_HI                                                 \
  0x350e
#define mmSDMA0_RLC0_IB_SIZE                                                    \
  0x350f
#define mmSDMA0_RLC0_SKIP_CNTL                                                  \
  0x3510
#define mmSDMA0_RLC0_CONTEXT_STATUS                                             \
  0x3511
#define mmSDMA0_RLC0_DOORBELL                                                   \
  0x3512
#define mmSDMA0_RLC0_VIRTUAL_ADDR                                               \
  0x3527
#define mmSDMA0_RLC0_APE1_CNTL                                                  \
  0x3528
#define mmSDMA0_RLC0_DOORBELL_LOG                                               \
  0x3529
#define mmSDMA0_RLC0_WATERMARK                                                  \
  0x352a
#define mmSDMA0_RLC0_CSA_ADDR_LO                                                \
  0x352c
#define mmSDMA0_RLC0_CSA_ADDR_HI                                                \
  0x352d
#define mmSDMA0_RLC0_DUMMY_REG                                                  \
  0x352e
#define mmSDMA0_RLC0_IB_SUB_REMAIN                                              \
  0x352f
#define mmSDMA0_RLC0_PREEMPT                                                    \
  0x3530
#define mmSDMA0_RLC1_RB_CNTL                                                    \
  0x3580
#define mmSDMA0_RLC1_RB_BASE                                                    \
  0x3581
#define mmSDMA0_RLC1_RB_BASE_HI                                                 \
  0x3582
#define mmSDMA0_RLC1_RB_RPTR                                                    \
  0x3583
#define mmSDMA0_RLC1_RB_WPTR                                                    \
  0x3584
#define mmSDMA0_RLC1_RB_WPTR_POLL_CNTL                                          \
  0x3585
#define mmSDMA0_RLC1_RB_WPTR_POLL_ADDR_HI                                       \
  0x3586
#define mmSDMA0_RLC1_RB_WPTR_POLL_ADDR_LO                                       \
  0x3587
#define mmSDMA0_RLC1_RB_RPTR_ADDR_HI                                            \
  0x3588
#define mmSDMA0_RLC1_RB_RPTR_ADDR_LO                                            \
  0x3589
#define mmSDMA0_RLC1_IB_CNTL                                                    \
  0x358a
#define mmSDMA0_RLC1_IB_RPTR                                                    \
  0x358b
#define mmSDMA0_RLC1_IB_OFFSET                                                  \
  0x358c
#define mmSDMA0_RLC1_IB_BASE_LO                                                 \
  0x358d
#define mmSDMA0_RLC1_IB_BASE_HI                                                 \
  0x358e
#define mmSDMA0_RLC1_IB_SIZE                                                    \
  0x358f
#define mmSDMA0_RLC1_SKIP_CNTL                                                  \
  0x3590
#define mmSDMA0_RLC1_CONTEXT_STATUS                                             \
  0x3591
#define mmSDMA0_RLC1_DOORBELL                                                   \
  0x3592
#define mmSDMA0_RLC1_VIRTUAL_ADDR                                               \
  0x35a7
#define mmSDMA0_RLC1_APE1_CNTL                                                  \
  0x35a8
#define mmSDMA0_RLC1_DOORBELL_LOG                                               \
  0x35a9
#define mmSDMA0_RLC1_WATERMARK                                                  \
  0x35aa
#define mmSDMA0_RLC1_CSA_ADDR_LO                                                \
  0x35ac
#define mmSDMA0_RLC1_CSA_ADDR_HI                                                \
  0x35ad
#define mmSDMA0_RLC1_DUMMY_REG                                                  \
  0x35ae
#define mmSDMA0_RLC1_IB_SUB_REMAIN                                              \
  0x35af
#define mmSDMA0_RLC1_PREEMPT                                                    \
  0x35b0
#define mmSDMA1_UCODE_ADDR                                                      \
  0x3600
#define mmSDMA1_UCODE_DATA                                                      \
  0x3601
#define mmSDMA1_POWER_CNTL                                                      \
  0x3602
#define mmSDMA1_CLK_CTRL                                                        \
  0x3603
#define mmSDMA1_CNTL                                                            \
  0x3604
#define mmSDMA1_CHICKEN_BITS                                                    \
  0x3605
#define mmSDMA1_TILING_CONFIG                                                   \
  0x3606
#define mmSDMA1_HASH                                                            \
  0x3607
#define mmSDMA1_SEM_WAIT_FAIL_TIMER_CNTL                                        \
  0x3609
#define mmSDMA1_RB_RPTR_FETCH                                                   \
  0x360a
#define mmSDMA1_IB_OFFSET_FETCH                                                 \
  0x360b
#define mmSDMA1_PROGRAM                                                         \
  0x360c
#define mmSDMA1_STATUS_REG                                                      \
  0x360d
#define mmSDMA1_STATUS1_REG                                                     \
  0x360e
#define mmSDMA1_PERFMON_CNTL                                                    \
  0x9010
#define mmSDMA1_PERFCOUNTER0_RESULT                                             \
  0x9011
#define mmSDMA1_PERFCOUNTER1_RESULT                                             \
  0x9012
#define mmSDMA1_F32_CNTL                                                        \
  0x3612
#define mmSDMA1_FREEZE                                                          \
  0x3613
#define mmSDMA1_PHASE0_QUANTUM                                                  \
  0x3614
#define mmSDMA1_PHASE1_QUANTUM                                                  \
  0x3615
#define mmSDMA1_EDC_CONFIG                                                      \
  0x361a
#define mmSDMA1_BA_THRESHOLD                                                    \
  0x361b
#define mmSDMA1_ID                                                              \
  0x361c
#define mmSDMA1_VERSION                                                         \
  0x361d
#define mmSDMA1_STATUS2_REG                                                     \
  0x361e
#define mmSDMA1_GFX_RB_CNTL                                                     \
  0x3680
#define mmSDMA1_GFX_RB_BASE                                                     \
  0x3681
#define mmSDMA1_GFX_RB_BASE_HI                                                  \
  0x3682
#define mmSDMA1_GFX_RB_RPTR                                                     \
  0x3683
#define mmSDMA1_GFX_RB_WPTR                                                     \
  0x3684
#define mmSDMA1_GFX_RB_WPTR_POLL_CNTL                                           \
  0x3685
#define mmSDMA1_GFX_RB_WPTR_POLL_ADDR_HI                                        \
  0x3686
#define mmSDMA1_GFX_RB_WPTR_POLL_ADDR_LO                                        \
  0x3687
#define mmSDMA1_GFX_RB_RPTR_ADDR_HI                                             \
  0x3688
#define mmSDMA1_GFX_RB_RPTR_ADDR_LO                                             \
  0x3689
#define mmSDMA1_GFX_IB_CNTL                                                     \
  0x368a
#define mmSDMA1_GFX_IB_RPTR                                                     \
  0x368b
#define mmSDMA1_GFX_IB_OFFSET                                                   \
  0x368c
#define mmSDMA1_GFX_IB_BASE_LO                                                  \
  0x368d
#define mmSDMA1_GFX_IB_BASE_HI                                                  \
  0x368e
#define mmSDMA1_GFX_IB_SIZE                                                     \
  0x368f
#define mmSDMA1_GFX_SKIP_CNTL                                                   \
  0x3690
#define mmSDMA1_GFX_CONTEXT_STATUS                                              \
  0x3691
#define mmSDMA1_GFX_CONTEXT_CNTL                                                \
  0x3693
#define mmSDMA1_GFX_VIRTUAL_ADDR                                                \
  0x36a7
#define mmSDMA1_GFX_APE1_CNTL                                                   \
  0x36a8
#define mmSDMA1_GFX_WATERMARK                                                   \
  0x36aa
#define mmSDMA1_GFX_CSA_ADDR_LO                                                 \
  0x36ac
#define mmSDMA1_GFX_CSA_ADDR_HI                                                 \
  0x36ad
#define mmSDMA1_GFX_DUMMY_REG                                                   \
  0x36ae
#define mmSDMA1_GFX_IB_SUB_REMAIN                                               \
  0x36af
#define mmSDMA1_GFX_PREEMPT                                                     \
  0x36b0
#define mmSDMA1_RLC0_RB_CNTL                                                    \
  0x3700
#define mmSDMA1_RLC0_RB_BASE                                                    \
  0x3701
#define mmSDMA1_RLC0_RB_BASE_HI                                                 \
  0x3702
#define mmSDMA1_RLC0_RB_RPTR                                                    \
  0x3703
#define mmSDMA1_RLC0_RB_WPTR                                                    \
  0x3704
#define mmSDMA1_RLC0_RB_WPTR_POLL_CNTL                                          \
  0x3705
#define mmSDMA1_RLC0_RB_WPTR_POLL_ADDR_HI                                       \
  0x3706
#define mmSDMA1_RLC0_RB_WPTR_POLL_ADDR_LO                                       \
  0x3707
#define mmSDMA1_RLC0_RB_RPTR_ADDR_HI                                            \
  0x3708
#define mmSDMA1_RLC0_RB_RPTR_ADDR_LO                                            \
  0x3709
#define mmSDMA1_RLC0_IB_CNTL                                                    \
  0x370a
#define mmSDMA1_RLC0_IB_RPTR                                                    \
  0x370b
#define mmSDMA1_RLC0_IB_OFFSET                                                  \
  0x370c
#define mmSDMA1_RLC0_IB_BASE_LO                                                 \
  0x370d
#define mmSDMA1_RLC0_IB_BASE_HI                                                 \
  0x370e
#define mmSDMA1_RLC0_IB_SIZE                                                    \
  0x370f
#define mmSDMA1_RLC0_SKIP_CNTL                                                  \
  0x3710
#define mmSDMA1_RLC0_CONTEXT_STATUS                                             \
  0x3711
#define mmSDMA1_RLC0_DOORBELL                                                   \
  0x3712
#define mmSDMA1_RLC0_VIRTUAL_ADDR                                               \
  0x3727
#define mmSDMA1_RLC0_APE1_CNTL                                                  \
  0x3728
#define mmSDMA1_RLC0_DOORBELL_LOG                                               \
  0x3729
#define mmSDMA1_RLC0_WATERMARK                                                  \
  0x372a
#define mmSDMA1_RLC0_CSA_ADDR_LO                                                \
  0x372c
#define mmSDMA1_RLC0_CSA_ADDR_HI                                                \
  0x372d
#define mmSDMA1_RLC0_DUMMY_REG                                                  \
  0x372e
#define mmSDMA1_RLC0_IB_SUB_REMAIN                                              \
  0x372f
#define mmSDMA1_RLC0_PREEMPT                                                    \
  0x3730
#define mmSDMA1_RLC1_RB_CNTL                                                    \
  0x3780
#define mmSDMA1_RLC1_RB_BASE                                                    \
  0x3781
#define mmSDMA1_RLC1_RB_BASE_HI                                                 \
  0x3782
#define mmSDMA1_RLC1_RB_RPTR                                                    \
  0x3783
#define mmSDMA1_RLC1_RB_WPTR                                                    \
  0x3784
#define mmSDMA1_RLC1_RB_WPTR_POLL_CNTL                                          \
  0x3785
#define mmSDMA1_RLC1_RB_WPTR_POLL_ADDR_HI                                       \
  0x3786
#define mmSDMA1_RLC1_RB_WPTR_POLL_ADDR_LO                                       \
  0x3787
#define mmSDMA1_RLC1_RB_RPTR_ADDR_HI                                            \
  0x3788
#define mmSDMA1_RLC1_RB_RPTR_ADDR_LO                                            \
  0x3789
#define mmSDMA1_RLC1_IB_CNTL                                                    \
  0x378a
#define mmSDMA1_RLC1_IB_RPTR                                                    \
  0x378b
#define mmSDMA1_RLC1_IB_OFFSET                                                  \
  0x378c
#define mmSDMA1_RLC1_IB_BASE_LO                                                 \
  0x378d
#define mmSDMA1_RLC1_IB_BASE_HI                                                 \
  0x378e
#define mmSDMA1_RLC1_IB_SIZE                                                    \
  0x378f
#define mmSDMA1_RLC1_SKIP_CNTL                                                  \
  0x3790
#define mmSDMA1_RLC1_CONTEXT_STATUS                                             \
  0x3791
#define mmSDMA1_RLC1_DOORBELL                                                   \
  0x3792
#define mmSDMA1_RLC1_VIRTUAL_ADDR                                               \
  0x37a7
#define mmSDMA1_RLC1_APE1_CNTL                                                  \
  0x37a8
#define mmSDMA1_RLC1_DOORBELL_LOG                                               \
  0x37a9
#define mmSDMA1_RLC1_WATERMARK                                                  \
  0x37aa
#define mmSDMA1_RLC1_CSA_ADDR_LO                                                \
  0x37ac
#define mmSDMA1_RLC1_CSA_ADDR_HI                                                \
  0x37ad
#define mmSDMA1_RLC1_DUMMY_REG                                                  \
  0x37ae
#define mmSDMA1_RLC1_IB_SUB_REMAIN                                              \
  0x37af
#define mmSDMA1_RLC1_PREEMPT                                                    \
  0x37b0
#define mmHDP_HOST_PATH_CNTL                                                    \
  0xb00
#define mmHDP_NONSURFACE_BASE                                                   \
  0xb01
#define mmHDP_NONSURFACE_INFO                                                   \
  0xb02
#define mmHDP_NONSURFACE_SIZE                                                   \
  0xb03
#define mmHDP_NONSURF_FLAGS                                                     \
  0xbc9
#define mmHDP_NONSURF_FLAGS_CLR                                                 \
  0xbca
#define mmHDP_SW_SEMAPHORE                                                      \
  0xbcb
#define mmHDP_DEBUG0                                                            \
  0xbcc
#define mmHDP_DEBUG1                                                            \
  0xbcd
#define mmHDP_LAST_SURFACE_HIT                                                  \
  0xbce
#define mmHDP_TILING_CONFIG                                                     \
  0xbcf
#define mmHDP_SC_MULTI_CHIP_CNTL                                                \
  0xbd0
#define mmHDP_OUTSTANDING_REQ                                                   \
  0xbd1
#define mmHDP_ADDR_CONFIG                                                       \
  0xbd2
#define mmHDP_MISC_CNTL                                                         \
  0xbd3
#define mmHDP_MEM_POWER_LS                                                      \
  0xbd4
#define mmHDP_NONSURFACE_PREFETCH                                               \
  0xbd5
#define mmHDP_MEMIO_CNTL                                                        \
  0xbf6
#define mmHDP_MEMIO_ADDR                                                        \
  0xbf7
#define mmHDP_MEMIO_STATUS                                                      \
  0xbf8
#define mmHDP_MEMIO_WR_DATA                                                     \
  0xbf9
#define mmHDP_MEMIO_RD_DATA                                                     \
  0xbfa
#define mmHDP_XDP_DIRECT2HDP_FIRST                                              \
  0xc00
#define mmHDP_XDP_D2H_FLUSH                                                     \
  0xc01
#define mmHDP_XDP_D2H_BAR_UPDATE                                                \
  0xc02
#define mmHDP_XDP_D2H_RSVD_3                                                    \
  0xc03
#define mmHDP_XDP_D2H_RSVD_4                                                    \
  0xc04
#define mmHDP_XDP_D2H_RSVD_5                                                    \
  0xc05
#define mmHDP_XDP_D2H_RSVD_6                                                    \
  0xc06
#define mmHDP_XDP_D2H_RSVD_7                                                    \
  0xc07
#define mmHDP_XDP_D2H_RSVD_8                                                    \
  0xc08
#define mmHDP_XDP_D2H_RSVD_9                                                    \
  0xc09
#define mmHDP_XDP_D2H_RSVD_10                                                   \
  0xc0a
#define mmHDP_XDP_D2H_RSVD_11                                                   \
  0xc0b
#define mmHDP_XDP_D2H_RSVD_12                                                   \
  0xc0c
#define mmHDP_XDP_D2H_RSVD_13                                                   \
  0xc0d
#define mmHDP_XDP_D2H_RSVD_14                                                   \
  0xc0e
#define mmHDP_XDP_D2H_RSVD_15                                                   \
  0xc0f
#define mmHDP_XDP_D2H_RSVD_16                                                   \
  0xc10
#define mmHDP_XDP_D2H_RSVD_17                                                   \
  0xc11
#define mmHDP_XDP_D2H_RSVD_18                                                   \
  0xc12
#define mmHDP_XDP_D2H_RSVD_19                                                   \
  0xc13
#define mmHDP_XDP_D2H_RSVD_20                                                   \
  0xc14
#define mmHDP_XDP_D2H_RSVD_21                                                   \
  0xc15
#define mmHDP_XDP_D2H_RSVD_22                                                   \
  0xc16
#define mmHDP_XDP_D2H_RSVD_23                                                   \
  0xc17
#define mmHDP_XDP_D2H_RSVD_24                                                   \
  0xc18
#define mmHDP_XDP_D2H_RSVD_25                                                   \
  0xc19
#define mmHDP_XDP_D2H_RSVD_26                                                   \
  0xc1a
#define mmHDP_XDP_D2H_RSVD_27                                                   \
  0xc1b
#define mmHDP_XDP_D2H_RSVD_28                                                   \
  0xc1c
#define mmHDP_XDP_D2H_RSVD_29                                                   \
  0xc1d
#define mmHDP_XDP_D2H_RSVD_30                                                   \
  0xc1e
#define mmHDP_XDP_D2H_RSVD_31                                                   \
  0xc1f
#define mmHDP_XDP_D2H_RSVD_32                                                   \
  0xc20
#define mmHDP_XDP_D2H_RSVD_33                                                   \
  0xc21
#define mmHDP_XDP_D2H_RSVD_34                                                   \
  0xc22
#define mmHDP_XDP_DIRECT2HDP_LAST                                               \
  0xc23
#define mmHDP_XDP_P2P_BAR_CFG                                                   \
  0xc24
#define mmHDP_XDP_P2P_MBX_OFFSET                                                \
  0xc25
#define mmHDP_XDP_P2P_MBX_ADDR0                                                 \
  0xc26
#define mmHDP_XDP_P2P_MBX_ADDR1                                                 \
  0xc27
#define mmHDP_XDP_P2P_MBX_ADDR2                                                 \
  0xc28
#define mmHDP_XDP_P2P_MBX_ADDR3                                                 \
  0xc29
#define mmHDP_XDP_P2P_MBX_ADDR4                                                 \
  0xc2a
#define mmHDP_XDP_P2P_MBX_ADDR5                                                 \
  0xc2b
#define mmHDP_XDP_P2P_MBX_ADDR6                                                 \
  0xc2c
#define mmHDP_XDP_HDP_MBX_MC_CFG                                                \
  0xc2d
#define mmHDP_XDP_HDP_MC_CFG                                                    \
  0xc2e
#define mmHDP_XDP_HST_CFG                                                       \
  0xc2f
#define mmHDP_XDP_SID_CFG                                                       \
  0xc30
#define mmHDP_XDP_HDP_IPH_CFG                                                   \
  0xc31
#define mmHDP_XDP_SRBM_CFG                                                      \
  0xc32
#define mmHDP_XDP_CGTT_BLK_CTRL                                                 \
  0xc33
#define mmHDP_XDP_P2P_BAR0                                                      \
  0xc34
#define mmHDP_XDP_P2P_BAR1                                                      \
  0xc35
#define mmHDP_XDP_P2P_BAR2                                                      \
  0xc36
#define mmHDP_XDP_P2P_BAR3                                                      \
  0xc37
#define mmHDP_XDP_P2P_BAR4                                                      \
  0xc38
#define mmHDP_XDP_P2P_BAR5                                                      \
  0xc39
#define mmHDP_XDP_P2P_BAR6                                                      \
  0xc3a
#define mmHDP_XDP_P2P_BAR7                                                      \
  0xc3b
#define mmHDP_XDP_FLUSH_ARMED_STS                                               \
  0xc3c
#define mmHDP_XDP_FLUSH_CNTR0_STS                                               \
  0xc3d
#define mmHDP_XDP_BUSY_STS                                                      \
  0xc3e
#define mmHDP_XDP_STICKY                                                        \
  0xc3f
#define mmHDP_XDP_CHKN                                                          \
  0xc40
#define mmHDP_XDP_DBG_ADDR                                                      \
  0xc41
#define mmHDP_XDP_DBG_DATA                                                      \
  0xc42
#define mmHDP_XDP_DBG_MASK                                                      \
  0xc43
#define mmHDP_XDP_BARS_ADDR_39_36                                               \
  0xc44

#endif /* OSS_2_4_D_H */
