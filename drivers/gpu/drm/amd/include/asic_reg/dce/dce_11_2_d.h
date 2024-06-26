/*
 * DCE_11_2 Register documentation
 *
 * Copyright (C) 2016  Advanced Micro Devices, Inc.
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

#ifndef DCE_11_2_D_H
#define DCE_11_2_D_H

#define mmPIPE0_PG_CONFIG                                                       \
  0x2c0
#define mmPIPE0_PG_ENABLE                                                       \
  0x2c1
#define mmPIPE0_PG_STATUS                                                       \
  0x2c2
#define mmPIPE1_PG_CONFIG                                                       \
  0x2c3
#define mmPIPE1_PG_ENABLE                                                       \
  0x2c4
#define mmPIPE1_PG_STATUS                                                       \
  0x2c5
#define mmPIPE2_PG_CONFIG                                                       \
  0x2c6
#define mmPIPE2_PG_ENABLE                                                       \
  0x2c7
#define mmPIPE2_PG_STATUS                                                       \
  0x2c8
#define mmPIPE3_PG_CONFIG                                                       \
  0x2c9
#define mmPIPE3_PG_ENABLE                                                       \
  0x2ca
#define mmPIPE3_PG_STATUS                                                       \
  0x2cb
#define mmPIPE4_PG_CONFIG                                                       \
  0x2cc
#define mmPIPE4_PG_ENABLE                                                       \
  0x2cd
#define mmPIPE4_PG_STATUS                                                       \
  0x2ce
#define mmPIPE5_PG_CONFIG                                                       \
  0x2cf
#define mmPIPE5_PG_ENABLE                                                       \
  0x2d0
#define mmPIPE5_PG_STATUS                                                       \
  0x2d1
#define mmDCPG_INTERRUPT_STATUS                                                 \
  0x2de
#define mmDCPG_INTERRUPT_CONTROL                                                \
  0x2df
#define mmDCPG_INTERRUPT_CONTROL2                                               \
  0x2e0
#define mmDC_IP_REQUEST_CNTL                                                    \
  0x2d2
#define mmDC_PGFSM_CONFIG_REG                                                   \
  0x2d3
#define mmDC_PGFSM_WRITE_REG                                                    \
  0x2d4
#define mmDC_PGCNTL_STATUS_REG                                                  \
  0x2d5
#define mmDCPG_TEST_DEBUG_INDEX                                                 \
  0x2d6
#define mmDCPG_TEST_DEBUG_DATA                                                  \
  0x2d7
#define mmBL1_PWM_AMBIENT_LIGHT_LEVEL                                           \
  0x1628
#define mmBL1_PWM_USER_LEVEL                                                    \
  0x1629
#define mmBL1_PWM_TARGET_ABM_LEVEL                                              \
  0x162a
#define mmBL1_PWM_CURRENT_ABM_LEVEL                                             \
  0x162b
#define mmBL1_PWM_FINAL_DUTY_CYCLE                                              \
  0x162c
#define mmBL1_PWM_MINIMUM_DUTY_CYCLE                                            \
  0x162d
#define mmBL1_PWM_ABM_CNTL                                                      \
  0x162e
#define mmBL1_PWM_BL_UPDATE_SAMPLE_RATE                                         \
  0x162f
#define mmBL1_PWM_GRP2_REG_LOCK                                                 \
  0x1630
#define mmDC_ABM1_CNTL                                                          \
  0x1638
#define mmDC_ABM1_IPCSC_COEFF_SEL                                               \
  0x1639
#define mmDC_ABM1_ACE_OFFSET_SLOPE_0                                            \
  0x163a
#define mmDC_ABM1_ACE_OFFSET_SLOPE_1                                            \
  0x163b
#define mmDC_ABM1_ACE_OFFSET_SLOPE_2                                            \
  0x163c
#define mmDC_ABM1_ACE_OFFSET_SLOPE_3                                            \
  0x163d
#define mmDC_ABM1_ACE_OFFSET_SLOPE_4                                            \
  0x163e
#define mmDC_ABM1_ACE_THRES_12                                                  \
  0x163f
#define mmDC_ABM1_ACE_THRES_34                                                  \
  0x1640
#define mmDC_ABM1_ACE_CNTL_MISC                                                 \
  0x1641
#define mmDC_ABM1_DEBUG_MISC                                                    \
  0x1649
#define mmDC_ABM1_HGLS_REG_READ_PROGRESS                                        \
  0x164a
#define mmDC_ABM1_HG_MISC_CTRL                                                  \
  0x164b
#define mmDC_ABM1_LS_SUM_OF_LUMA                                                \
  0x164c
#define mmDC_ABM1_LS_MIN_MAX_LUMA                                               \
  0x164d
#define mmDC_ABM1_LS_FILTERED_MIN_MAX_LUMA                                      \
  0x164e
#define mmDC_ABM1_LS_PIXEL_COUNT                                                \
  0x164f
#define mmDC_ABM1_LS_OVR_SCAN_BIN                                               \
  0x1650
#define mmDC_ABM1_LS_MIN_MAX_PIXEL_VALUE_THRES                                  \
  0x1651
#define mmDC_ABM1_LS_MIN_PIXEL_VALUE_COUNT                                      \
  0x1652
#define mmDC_ABM1_LS_MAX_PIXEL_VALUE_COUNT                                      \
  0x1653
#define mmDC_ABM1_HG_SAMPLE_RATE                                                \
  0x1654
#define mmDC_ABM1_LS_SAMPLE_RATE                                                \
  0x1655
#define mmDC_ABM1_HG_BIN_1_32_SHIFT_FLAG                                        \
  0x1656
#define mmDC_ABM1_HG_BIN_1_8_SHIFT_INDEX                                        \
  0x1657
#define mmDC_ABM1_HG_BIN_9_16_SHIFT_INDEX                                       \
  0x1658
#define mmDC_ABM1_HG_BIN_17_24_SHIFT_INDEX                                      \
  0x1659
#define mmDC_ABM1_HG_BIN_25_32_SHIFT_INDEX                                      \
  0x165a
#define mmDC_ABM1_HG_RESULT_1                                                   \
  0x165b
#define mmDC_ABM1_HG_RESULT_2                                                   \
  0x165c
#define mmDC_ABM1_HG_RESULT_3                                                   \
  0x165d
#define mmDC_ABM1_HG_RESULT_4                                                   \
  0x165e
#define mmDC_ABM1_HG_RESULT_5                                                   \
  0x165f
#define mmDC_ABM1_HG_RESULT_6                                                   \
  0x1660
#define mmDC_ABM1_HG_RESULT_7                                                   \
  0x1661
#define mmDC_ABM1_HG_RESULT_8                                                   \
  0x1662
#define mmDC_ABM1_HG_RESULT_9                                                   \
  0x1663
#define mmDC_ABM1_HG_RESULT_10                                                  \
  0x1664
#define mmDC_ABM1_HG_RESULT_11                                                  \
  0x1665
#define mmDC_ABM1_HG_RESULT_12                                                  \
  0x1666
#define mmDC_ABM1_HG_RESULT_13                                                  \
  0x1667
#define mmDC_ABM1_HG_RESULT_14                                                  \
  0x1668
#define mmDC_ABM1_HG_RESULT_15                                                  \
  0x1669
#define mmDC_ABM1_HG_RESULT_16                                                  \
  0x166a
#define mmDC_ABM1_HG_RESULT_17                                                  \
  0x166b
#define mmDC_ABM1_HG_RESULT_18                                                  \
  0x166c
#define mmDC_ABM1_HG_RESULT_19                                                  \
  0x166d
#define mmDC_ABM1_HG_RESULT_20                                                  \
  0x166e
#define mmDC_ABM1_HG_RESULT_21                                                  \
  0x166f
#define mmDC_ABM1_HG_RESULT_22                                                  \
  0x1670
#define mmDC_ABM1_HG_RESULT_23                                                  \
  0x1671
#define mmDC_ABM1_HG_RESULT_24                                                  \
  0x1672
#define mmDC_ABM1_OVERSCAN_PIXEL_VALUE                                          \
  0x169b
#define mmDC_ABM1_BL_MASTER_LOCK                                                \
  0x169c
#define mmABM_TEST_DEBUG_INDEX                                                  \
  0x169e
#define mmABM_TEST_DEBUG_DATA                                                   \
  0x169f
#define mmCRTC_H_BLANK_EARLY_NUM                                                \
  0x1b7d
#define mmCRTC0_CRTC_H_BLANK_EARLY_NUM                                          \
  0x1b7d
#define mmCRTC1_CRTC_H_BLANK_EARLY_NUM                                          \
  0x1d7d
#define mmCRTC2_CRTC_H_BLANK_EARLY_NUM                                          \
  0x1f7d
#define mmCRTC3_CRTC_H_BLANK_EARLY_NUM                                          \
  0x417d
#define mmCRTC4_CRTC_H_BLANK_EARLY_NUM                                          \
  0x437d
#define mmCRTC5_CRTC_H_BLANK_EARLY_NUM                                          \
  0x457d
#define mmCRTC_H_TOTAL                                                          \
  0x1b80
#define mmCRTC0_CRTC_H_TOTAL                                                    \
  0x1b80
#define mmCRTC1_CRTC_H_TOTAL                                                    \
  0x1d80
#define mmCRTC2_CRTC_H_TOTAL                                                    \
  0x1f80
#define mmCRTC3_CRTC_H_TOTAL                                                    \
  0x4180
#define mmCRTC4_CRTC_H_TOTAL                                                    \
  0x4380
#define mmCRTC5_CRTC_H_TOTAL                                                    \
  0x4580
#define mmCRTC_H_BLANK_START_END                                                \
  0x1b81
#define mmCRTC0_CRTC_H_BLANK_START_END                                          \
  0x1b81
#define mmCRTC1_CRTC_H_BLANK_START_END                                          \
  0x1d81
#define mmCRTC2_CRTC_H_BLANK_START_END                                          \
  0x1f81
#define mmCRTC3_CRTC_H_BLANK_START_END                                          \
  0x4181
#define mmCRTC4_CRTC_H_BLANK_START_END                                          \
  0x4381
#define mmCRTC5_CRTC_H_BLANK_START_END                                          \
  0x4581
#define mmCRTC_H_SYNC_A                                                         \
  0x1b82
#define mmCRTC0_CRTC_H_SYNC_A                                                   \
  0x1b82
#define mmCRTC1_CRTC_H_SYNC_A                                                   \
  0x1d82
#define mmCRTC2_CRTC_H_SYNC_A                                                   \
  0x1f82
#define mmCRTC3_CRTC_H_SYNC_A                                                   \
  0x4182
#define mmCRTC4_CRTC_H_SYNC_A                                                   \
  0x4382
#define mmCRTC5_CRTC_H_SYNC_A                                                   \
  0x4582
#define mmCRTC_H_SYNC_A_CNTL                                                    \
  0x1b83
#define mmCRTC0_CRTC_H_SYNC_A_CNTL                                              \
  0x1b83
#define mmCRTC1_CRTC_H_SYNC_A_CNTL                                              \
  0x1d83
#define mmCRTC2_CRTC_H_SYNC_A_CNTL                                              \
  0x1f83
#define mmCRTC3_CRTC_H_SYNC_A_CNTL                                              \
  0x4183
#define mmCRTC4_CRTC_H_SYNC_A_CNTL                                              \
  0x4383
#define mmCRTC5_CRTC_H_SYNC_A_CNTL                                              \
  0x4583
#define mmCRTC_H_SYNC_B                                                         \
  0x1b84
#define mmCRTC0_CRTC_H_SYNC_B                                                   \
  0x1b84
#define mmCRTC1_CRTC_H_SYNC_B                                                   \
  0x1d84
#define mmCRTC2_CRTC_H_SYNC_B                                                   \
  0x1f84
#define mmCRTC3_CRTC_H_SYNC_B                                                   \
  0x4184
#define mmCRTC4_CRTC_H_SYNC_B                                                   \
  0x4384
#define mmCRTC5_CRTC_H_SYNC_B                                                   \
  0x4584
#define mmCRTC_H_SYNC_B_CNTL                                                    \
  0x1b85
#define mmCRTC0_CRTC_H_SYNC_B_CNTL                                              \
  0x1b85
#define mmCRTC1_CRTC_H_SYNC_B_CNTL                                              \
  0x1d85
#define mmCRTC2_CRTC_H_SYNC_B_CNTL                                              \
  0x1f85
#define mmCRTC3_CRTC_H_SYNC_B_CNTL                                              \
  0x4185
#define mmCRTC4_CRTC_H_SYNC_B_CNTL                                              \
  0x4385
#define mmCRTC5_CRTC_H_SYNC_B_CNTL                                              \
  0x4585
#define mmCRTC_VBI_END                                                          \
  0x1b86
#define mmCRTC0_CRTC_VBI_END                                                    \
  0x1b86
#define mmCRTC1_CRTC_VBI_END                                                    \
  0x1d86
#define mmCRTC2_CRTC_VBI_END                                                    \
  0x1f86
#define mmCRTC3_CRTC_VBI_END                                                    \
  0x4186
#define mmCRTC4_CRTC_VBI_END                                                    \
  0x4386
#define mmCRTC5_CRTC_VBI_END                                                    \
  0x4586
#define mmCRTC_V_TOTAL                                                          \
  0x1b87
#define mmCRTC0_CRTC_V_TOTAL                                                    \
  0x1b87
#define mmCRTC1_CRTC_V_TOTAL                                                    \
  0x1d87
#define mmCRTC2_CRTC_V_TOTAL                                                    \
  0x1f87
#define mmCRTC3_CRTC_V_TOTAL                                                    \
  0x4187
#define mmCRTC4_CRTC_V_TOTAL                                                    \
  0x4387
#define mmCRTC5_CRTC_V_TOTAL                                                    \
  0x4587
#define mmCRTC_V_TOTAL_MIN                                                      \
  0x1b88
#define mmCRTC0_CRTC_V_TOTAL_MIN                                                \
  0x1b88
#define mmCRTC1_CRTC_V_TOTAL_MIN                                                \
  0x1d88
#define mmCRTC2_CRTC_V_TOTAL_MIN                                                \
  0x1f88
#define mmCRTC3_CRTC_V_TOTAL_MIN                                                \
  0x4188
#define mmCRTC4_CRTC_V_TOTAL_MIN                                                \
  0x4388
#define mmCRTC5_CRTC_V_TOTAL_MIN                                                \
  0x4588
#define mmCRTC_V_TOTAL_MAX                                                      \
  0x1b89
#define mmCRTC0_CRTC_V_TOTAL_MAX                                                \
  0x1b89
#define mmCRTC1_CRTC_V_TOTAL_MAX                                                \
  0x1d89
#define mmCRTC2_CRTC_V_TOTAL_MAX                                                \
  0x1f89
#define mmCRTC3_CRTC_V_TOTAL_MAX                                                \
  0x4189
#define mmCRTC4_CRTC_V_TOTAL_MAX                                                \
  0x4389
#define mmCRTC5_CRTC_V_TOTAL_MAX                                                \
  0x4589
#define mmCRTC_V_TOTAL_CONTROL                                                  \
  0x1b8a
#define mmCRTC0_CRTC_V_TOTAL_CONTROL                                            \
  0x1b8a
#define mmCRTC1_CRTC_V_TOTAL_CONTROL                                            \
  0x1d8a
#define mmCRTC2_CRTC_V_TOTAL_CONTROL                                            \
  0x1f8a
#define mmCRTC3_CRTC_V_TOTAL_CONTROL                                            \
  0x418a
#define mmCRTC4_CRTC_V_TOTAL_CONTROL                                            \
  0x438a
#define mmCRTC5_CRTC_V_TOTAL_CONTROL                                            \
  0x458a
#define mmCRTC_V_TOTAL_INT_STATUS                                               \
  0x1b8b
#define mmCRTC0_CRTC_V_TOTAL_INT_STATUS                                         \
  0x1b8b
#define mmCRTC1_CRTC_V_TOTAL_INT_STATUS                                         \
  0x1d8b
#define mmCRTC2_CRTC_V_TOTAL_INT_STATUS                                         \
  0x1f8b
#define mmCRTC3_CRTC_V_TOTAL_INT_STATUS                                         \
  0x418b
#define mmCRTC4_CRTC_V_TOTAL_INT_STATUS                                         \
  0x438b
#define mmCRTC5_CRTC_V_TOTAL_INT_STATUS                                         \
  0x458b
#define mmCRTC_VSYNC_NOM_INT_STATUS                                             \
  0x1b8c
#define mmCRTC0_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x1b8c
#define mmCRTC1_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x1d8c
#define mmCRTC2_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x1f8c
#define mmCRTC3_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x418c
#define mmCRTC4_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x438c
#define mmCRTC5_CRTC_VSYNC_NOM_INT_STATUS                                       \
  0x458c
#define mmCRTC_V_BLANK_START_END                                                \
  0x1b8d
#define mmCRTC0_CRTC_V_BLANK_START_END                                          \
  0x1b8d
#define mmCRTC1_CRTC_V_BLANK_START_END                                          \
  0x1d8d
#define mmCRTC2_CRTC_V_BLANK_START_END                                          \
  0x1f8d
#define mmCRTC3_CRTC_V_BLANK_START_END                                          \
  0x418d
#define mmCRTC4_CRTC_V_BLANK_START_END                                          \
  0x438d
#define mmCRTC5_CRTC_V_BLANK_START_END                                          \
  0x458d
#define mmCRTC_V_SYNC_A                                                         \
  0x1b8e
#define mmCRTC0_CRTC_V_SYNC_A                                                   \
  0x1b8e
#define mmCRTC1_CRTC_V_SYNC_A                                                   \
  0x1d8e
#define mmCRTC2_CRTC_V_SYNC_A                                                   \
  0x1f8e
#define mmCRTC3_CRTC_V_SYNC_A                                                   \
  0x418e
#define mmCRTC4_CRTC_V_SYNC_A                                                   \
  0x438e
#define mmCRTC5_CRTC_V_SYNC_A                                                   \
  0x458e
#define mmCRTC_V_SYNC_A_CNTL                                                    \
  0x1b8f
#define mmCRTC0_CRTC_V_SYNC_A_CNTL                                              \
  0x1b8f
#define mmCRTC1_CRTC_V_SYNC_A_CNTL                                              \
  0x1d8f
#define mmCRTC2_CRTC_V_SYNC_A_CNTL                                              \
  0x1f8f
#define mmCRTC3_CRTC_V_SYNC_A_CNTL                                              \
  0x418f
#define mmCRTC4_CRTC_V_SYNC_A_CNTL                                              \
  0x438f
#define mmCRTC5_CRTC_V_SYNC_A_CNTL                                              \
  0x458f
#define mmCRTC_V_SYNC_B                                                         \
  0x1b90
#define mmCRTC0_CRTC_V_SYNC_B                                                   \
  0x1b90
#define mmCRTC1_CRTC_V_SYNC_B                                                   \
  0x1d90
#define mmCRTC2_CRTC_V_SYNC_B                                                   \
  0x1f90
#define mmCRTC3_CRTC_V_SYNC_B                                                   \
  0x4190
#define mmCRTC4_CRTC_V_SYNC_B                                                   \
  0x4390
#define mmCRTC5_CRTC_V_SYNC_B                                                   \
  0x4590
#define mmCRTC_V_SYNC_B_CNTL                                                    \
  0x1b91
#define mmCRTC0_CRTC_V_SYNC_B_CNTL                                              \
  0x1b91
#define mmCRTC1_CRTC_V_SYNC_B_CNTL                                              \
  0x1d91
#define mmCRTC2_CRTC_V_SYNC_B_CNTL                                              \
  0x1f91
#define mmCRTC3_CRTC_V_SYNC_B_CNTL                                              \
  0x4191
#define mmCRTC4_CRTC_V_SYNC_B_CNTL                                              \
  0x4391
#define mmCRTC5_CRTC_V_SYNC_B_CNTL                                              \
  0x4591
#define mmCRTC_DTMTEST_CNTL                                                     \
  0x1b92
#define mmCRTC0_CRTC_DTMTEST_CNTL                                               \
  0x1b92
#define mmCRTC1_CRTC_DTMTEST_CNTL                                               \
  0x1d92
#define mmCRTC2_CRTC_DTMTEST_CNTL                                               \
  0x1f92
#define mmCRTC3_CRTC_DTMTEST_CNTL                                               \
  0x4192
#define mmCRTC4_CRTC_DTMTEST_CNTL                                               \
  0x4392
#define mmCRTC5_CRTC_DTMTEST_CNTL                                               \
  0x4592
#define mmCRTC_DTMTEST_STATUS_POSITION                                          \
  0x1b93
#define mmCRTC0_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x1b93
#define mmCRTC1_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x1d93
#define mmCRTC2_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x1f93
#define mmCRTC3_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x4193
#define mmCRTC4_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x4393
#define mmCRTC5_CRTC_DTMTEST_STATUS_POSITION                                    \
  0x4593
#define mmCRTC_TRIGA_CNTL                                                       \
  0x1b94
#define mmCRTC0_CRTC_TRIGA_CNTL                                                 \
  0x1b94
#define mmCRTC1_CRTC_TRIGA_CNTL                                                 \
  0x1d94
#define mmCRTC2_CRTC_TRIGA_CNTL                                                 \
  0x1f94
#define mmCRTC3_CRTC_TRIGA_CNTL                                                 \
  0x4194
#define mmCRTC4_CRTC_TRIGA_CNTL                                                 \
  0x4394
#define mmCRTC5_CRTC_TRIGA_CNTL                                                 \
  0x4594
#define mmCRTC_TRIGA_MANUAL_TRIG                                                \
  0x1b95
#define mmCRTC0_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x1b95
#define mmCRTC1_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x1d95
#define mmCRTC2_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x1f95
#define mmCRTC3_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x4195
#define mmCRTC4_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x4395
#define mmCRTC5_CRTC_TRIGA_MANUAL_TRIG                                          \
  0x4595
#define mmCRTC_TRIGB_CNTL                                                       \
  0x1b96
#define mmCRTC0_CRTC_TRIGB_CNTL                                                 \
  0x1b96
#define mmCRTC1_CRTC_TRIGB_CNTL                                                 \
  0x1d96
#define mmCRTC2_CRTC_TRIGB_CNTL                                                 \
  0x1f96
#define mmCRTC3_CRTC_TRIGB_CNTL                                                 \
  0x4196
#define mmCRTC4_CRTC_TRIGB_CNTL                                                 \
  0x4396
#define mmCRTC5_CRTC_TRIGB_CNTL                                                 \
  0x4596
#define mmCRTC_TRIGB_MANUAL_TRIG                                                \
  0x1b97
#define mmCRTC0_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x1b97
#define mmCRTC1_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x1d97
#define mmCRTC2_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x1f97
#define mmCRTC3_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x4197
#define mmCRTC4_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x4397
#define mmCRTC5_CRTC_TRIGB_MANUAL_TRIG                                          \
  0x4597
#define mmCRTC_FORCE_COUNT_NOW_CNTL                                             \
  0x1b98
#define mmCRTC0_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x1b98
#define mmCRTC1_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x1d98
#define mmCRTC2_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x1f98
#define mmCRTC3_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x4198
#define mmCRTC4_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x4398
#define mmCRTC5_CRTC_FORCE_COUNT_NOW_CNTL                                       \
  0x4598
#define mmCRTC_FLOW_CONTROL                                                     \
  0x1b99
#define mmCRTC0_CRTC_FLOW_CONTROL                                               \
  0x1b99
#define mmCRTC1_CRTC_FLOW_CONTROL                                               \
  0x1d99
#define mmCRTC2_CRTC_FLOW_CONTROL                                               \
  0x1f99
#define mmCRTC3_CRTC_FLOW_CONTROL                                               \
  0x4199
#define mmCRTC4_CRTC_FLOW_CONTROL                                               \
  0x4399
#define mmCRTC5_CRTC_FLOW_CONTROL                                               \
  0x4599
#define mmCRTC_STEREO_FORCE_NEXT_EYE                                            \
  0x1b9a
#define mmCRTC0_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x1b9a
#define mmCRTC1_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x1d9a
#define mmCRTC2_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x1f9a
#define mmCRTC3_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x419a
#define mmCRTC4_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x439a
#define mmCRTC5_CRTC_STEREO_FORCE_NEXT_EYE                                      \
  0x459a
#define mmCRTC_AVSYNC_COUNTER                                                   \
  0x1b9b
#define mmCRTC0_CRTC_AVSYNC_COUNTER                                             \
  0x1b9b
#define mmCRTC1_CRTC_AVSYNC_COUNTER                                             \
  0x1d9b
#define mmCRTC2_CRTC_AVSYNC_COUNTER                                             \
  0x1f9b
#define mmCRTC3_CRTC_AVSYNC_COUNTER                                             \
  0x419b
#define mmCRTC4_CRTC_AVSYNC_COUNTER                                             \
  0x439b
#define mmCRTC5_CRTC_AVSYNC_COUNTER                                             \
  0x459b
#define mmCRTC_CONTROL                                                          \
  0x1b9c
#define mmCRTC0_CRTC_CONTROL                                                    \
  0x1b9c
#define mmCRTC1_CRTC_CONTROL                                                    \
  0x1d9c
#define mmCRTC2_CRTC_CONTROL                                                    \
  0x1f9c
#define mmCRTC3_CRTC_CONTROL                                                    \
  0x419c
#define mmCRTC4_CRTC_CONTROL                                                    \
  0x439c
#define mmCRTC5_CRTC_CONTROL                                                    \
  0x459c
#define mmCRTC_BLANK_CONTROL                                                    \
  0x1b9d
#define mmCRTC0_CRTC_BLANK_CONTROL                                              \
  0x1b9d
#define mmCRTC1_CRTC_BLANK_CONTROL                                              \
  0x1d9d
#define mmCRTC2_CRTC_BLANK_CONTROL                                              \
  0x1f9d
#define mmCRTC3_CRTC_BLANK_CONTROL                                              \
  0x419d
#define mmCRTC4_CRTC_BLANK_CONTROL                                              \
  0x439d
#define mmCRTC5_CRTC_BLANK_CONTROL                                              \
  0x459d
#define mmCRTC_INTERLACE_CONTROL                                                \
  0x1b9e
#define mmCRTC0_CRTC_INTERLACE_CONTROL                                          \
  0x1b9e
#define mmCRTC1_CRTC_INTERLACE_CONTROL                                          \
  0x1d9e
#define mmCRTC2_CRTC_INTERLACE_CONTROL                                          \
  0x1f9e
#define mmCRTC3_CRTC_INTERLACE_CONTROL                                          \
  0x419e
#define mmCRTC4_CRTC_INTERLACE_CONTROL                                          \
  0x439e
#define mmCRTC5_CRTC_INTERLACE_CONTROL                                          \
  0x459e
#define mmCRTC_INTERLACE_STATUS                                                 \
  0x1b9f
#define mmCRTC0_CRTC_INTERLACE_STATUS                                           \
  0x1b9f
#define mmCRTC1_CRTC_INTERLACE_STATUS                                           \
  0x1d9f
#define mmCRTC2_CRTC_INTERLACE_STATUS                                           \
  0x1f9f
#define mmCRTC3_CRTC_INTERLACE_STATUS                                           \
  0x419f
#define mmCRTC4_CRTC_INTERLACE_STATUS                                           \
  0x439f
#define mmCRTC5_CRTC_INTERLACE_STATUS                                           \
  0x459f
#define mmCRTC_FIELD_INDICATION_CONTROL                                         \
  0x1ba0
#define mmCRTC0_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x1ba0
#define mmCRTC1_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x1da0
#define mmCRTC2_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x1fa0
#define mmCRTC3_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x41a0
#define mmCRTC4_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x43a0
#define mmCRTC5_CRTC_FIELD_INDICATION_CONTROL                                   \
  0x45a0
#define mmCRTC_PIXEL_DATA_READBACK0                                             \
  0x1ba1
#define mmCRTC0_CRTC_PIXEL_DATA_READBACK0                                       \
  0x1ba1
#define mmCRTC1_CRTC_PIXEL_DATA_READBACK0                                       \
  0x1da1
#define mmCRTC2_CRTC_PIXEL_DATA_READBACK0                                       \
  0x1fa1
#define mmCRTC3_CRTC_PIXEL_DATA_READBACK0                                       \
  0x41a1
#define mmCRTC4_CRTC_PIXEL_DATA_READBACK0                                       \
  0x43a1
#define mmCRTC5_CRTC_PIXEL_DATA_READBACK0                                       \
  0x45a1
#define mmCRTC_PIXEL_DATA_READBACK1                                             \
  0x1ba2
#define mmCRTC0_CRTC_PIXEL_DATA_READBACK1                                       \
  0x1ba2
#define mmCRTC1_CRTC_PIXEL_DATA_READBACK1                                       \
  0x1da2
#define mmCRTC2_CRTC_PIXEL_DATA_READBACK1                                       \
  0x1fa2
#define mmCRTC3_CRTC_PIXEL_DATA_READBACK1                                       \
  0x41a2
#define mmCRTC4_CRTC_PIXEL_DATA_READBACK1                                       \
  0x43a2
#define mmCRTC5_CRTC_PIXEL_DATA_READBACK1                                       \
  0x45a2
#define mmCRTC_STATUS                                                           \
  0x1ba3
#define mmCRTC0_CRTC_STATUS                                                     \
  0x1ba3
#define mmCRTC1_CRTC_STATUS                                                     \
  0x1da3
#define mmCRTC2_CRTC_STATUS                                                     \
  0x1fa3
#define mmCRTC3_CRTC_STATUS                                                     \
  0x41a3
#define mmCRTC4_CRTC_STATUS                                                     \
  0x43a3
#define mmCRTC5_CRTC_STATUS                                                     \
  0x45a3
#define mmCRTC_STATUS_POSITION                                                  \
  0x1ba4
#define mmCRTC0_CRTC_STATUS_POSITION                                            \
  0x1ba4
#define mmCRTC1_CRTC_STATUS_POSITION                                            \
  0x1da4
#define mmCRTC2_CRTC_STATUS_POSITION                                            \
  0x1fa4
#define mmCRTC3_CRTC_STATUS_POSITION                                            \
  0x41a4
#define mmCRTC4_CRTC_STATUS_POSITION                                            \
  0x43a4
#define mmCRTC5_CRTC_STATUS_POSITION                                            \
  0x45a4
#define mmCRTC_NOM_VERT_POSITION                                                \
  0x1ba5
#define mmCRTC0_CRTC_NOM_VERT_POSITION                                          \
  0x1ba5
#define mmCRTC1_CRTC_NOM_VERT_POSITION                                          \
  0x1da5
#define mmCRTC2_CRTC_NOM_VERT_POSITION                                          \
  0x1fa5
#define mmCRTC3_CRTC_NOM_VERT_POSITION                                          \
  0x41a5
#define mmCRTC4_CRTC_NOM_VERT_POSITION                                          \
  0x43a5
#define mmCRTC5_CRTC_NOM_VERT_POSITION                                          \
  0x45a5
#define mmCRTC_STATUS_FRAME_COUNT                                               \
  0x1ba6
#define mmCRTC0_CRTC_STATUS_FRAME_COUNT                                         \
  0x1ba6
#define mmCRTC1_CRTC_STATUS_FRAME_COUNT                                         \
  0x1da6
#define mmCRTC2_CRTC_STATUS_FRAME_COUNT                                         \
  0x1fa6
#define mmCRTC3_CRTC_STATUS_FRAME_COUNT                                         \
  0x41a6
#define mmCRTC4_CRTC_STATUS_FRAME_COUNT                                         \
  0x43a6
#define mmCRTC5_CRTC_STATUS_FRAME_COUNT                                         \
  0x45a6
#define mmCRTC_STATUS_VF_COUNT                                                  \
  0x1ba7
#define mmCRTC0_CRTC_STATUS_VF_COUNT                                            \
  0x1ba7
#define mmCRTC1_CRTC_STATUS_VF_COUNT                                            \
  0x1da7
#define mmCRTC2_CRTC_STATUS_VF_COUNT                                            \
  0x1fa7
#define mmCRTC3_CRTC_STATUS_VF_COUNT                                            \
  0x41a7
#define mmCRTC4_CRTC_STATUS_VF_COUNT                                            \
  0x43a7
#define mmCRTC5_CRTC_STATUS_VF_COUNT                                            \
  0x45a7
#define mmCRTC_STATUS_HV_COUNT                                                  \
  0x1ba8
#define mmCRTC0_CRTC_STATUS_HV_COUNT                                            \
  0x1ba8
#define mmCRTC1_CRTC_STATUS_HV_COUNT                                            \
  0x1da8
#define mmCRTC2_CRTC_STATUS_HV_COUNT                                            \
  0x1fa8
#define mmCRTC3_CRTC_STATUS_HV_COUNT                                            \
  0x41a8
#define mmCRTC4_CRTC_STATUS_HV_COUNT                                            \
  0x43a8
#define mmCRTC5_CRTC_STATUS_HV_COUNT                                            \
  0x45a8
#define mmCRTC_COUNT_CONTROL                                                    \
  0x1ba9
#define mmCRTC0_CRTC_COUNT_CONTROL                                              \
  0x1ba9
#define mmCRTC1_CRTC_COUNT_CONTROL                                              \
  0x1da9
#define mmCRTC2_CRTC_COUNT_CONTROL                                              \
  0x1fa9
#define mmCRTC3_CRTC_COUNT_CONTROL                                              \
  0x41a9
#define mmCRTC4_CRTC_COUNT_CONTROL                                              \
  0x43a9
#define mmCRTC5_CRTC_COUNT_CONTROL                                              \
  0x45a9
#define mmCRTC_COUNT_RESET                                                      \
  0x1baa
#define mmCRTC0_CRTC_COUNT_RESET                                                \
  0x1baa
#define mmCRTC1_CRTC_COUNT_RESET                                                \
  0x1daa
#define mmCRTC2_CRTC_COUNT_RESET                                                \
  0x1faa
#define mmCRTC3_CRTC_COUNT_RESET                                                \
  0x41aa
#define mmCRTC4_CRTC_COUNT_RESET                                                \
  0x43aa
#define mmCRTC5_CRTC_COUNT_RESET                                                \
  0x45aa
#define mmCRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                                     \
  0x1bab
#define mmCRTC0_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x1bab
#define mmCRTC1_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x1dab
#define mmCRTC2_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x1fab
#define mmCRTC3_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x41ab
#define mmCRTC4_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x43ab
#define mmCRTC5_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE                               \
  0x45ab
#define mmCRTC_VERT_SYNC_CONTROL                                                \
  0x1bac
#define mmCRTC0_CRTC_VERT_SYNC_CONTROL                                          \
  0x1bac
#define mmCRTC1_CRTC_VERT_SYNC_CONTROL                                          \
  0x1dac
#define mmCRTC2_CRTC_VERT_SYNC_CONTROL                                          \
  0x1fac
#define mmCRTC3_CRTC_VERT_SYNC_CONTROL                                          \
  0x41ac
#define mmCRTC4_CRTC_VERT_SYNC_CONTROL                                          \
  0x43ac
#define mmCRTC5_CRTC_VERT_SYNC_CONTROL                                          \
  0x45ac
#define mmCRTC_STEREO_STATUS                                                    \
  0x1bad
#define mmCRTC0_CRTC_STEREO_STATUS                                              \
  0x1bad
#define mmCRTC1_CRTC_STEREO_STATUS                                              \
  0x1dad
#define mmCRTC2_CRTC_STEREO_STATUS                                              \
  0x1fad
#define mmCRTC3_CRTC_STEREO_STATUS                                              \
  0x41ad
#define mmCRTC4_CRTC_STEREO_STATUS                                              \
  0x43ad
#define mmCRTC5_CRTC_STEREO_STATUS                                              \
  0x45ad
#define mmCRTC_STEREO_CONTROL                                                   \
  0x1bae
#define mmCRTC0_CRTC_STEREO_CONTROL                                             \
  0x1bae
#define mmCRTC1_CRTC_STEREO_CONTROL                                             \
  0x1dae
#define mmCRTC2_CRTC_STEREO_CONTROL                                             \
  0x1fae
#define mmCRTC3_CRTC_STEREO_CONTROL                                             \
  0x41ae
#define mmCRTC4_CRTC_STEREO_CONTROL                                             \
  0x43ae
#define mmCRTC5_CRTC_STEREO_CONTROL                                             \
  0x45ae
#define mmCRTC_SNAPSHOT_STATUS                                                  \
  0x1baf
#define mmCRTC0_CRTC_SNAPSHOT_STATUS                                            \
  0x1baf
#define mmCRTC1_CRTC_SNAPSHOT_STATUS                                            \
  0x1daf
#define mmCRTC2_CRTC_SNAPSHOT_STATUS                                            \
  0x1faf
#define mmCRTC3_CRTC_SNAPSHOT_STATUS                                            \
  0x41af
#define mmCRTC4_CRTC_SNAPSHOT_STATUS                                            \
  0x43af
#define mmCRTC5_CRTC_SNAPSHOT_STATUS                                            \
  0x45af
#define mmCRTC_SNAPSHOT_CONTROL                                                 \
  0x1bb0
#define mmCRTC0_CRTC_SNAPSHOT_CONTROL                                           \
  0x1bb0
#define mmCRTC1_CRTC_SNAPSHOT_CONTROL                                           \
  0x1db0
#define mmCRTC2_CRTC_SNAPSHOT_CONTROL                                           \
  0x1fb0
#define mmCRTC3_CRTC_SNAPSHOT_CONTROL                                           \
  0x41b0
#define mmCRTC4_CRTC_SNAPSHOT_CONTROL                                           \
  0x43b0
#define mmCRTC5_CRTC_SNAPSHOT_CONTROL                                           \
  0x45b0
#define mmCRTC_SNAPSHOT_POSITION                                                \
  0x1bb1
#define mmCRTC0_CRTC_SNAPSHOT_POSITION                                          \
  0x1bb1
#define mmCRTC1_CRTC_SNAPSHOT_POSITION                                          \
  0x1db1
#define mmCRTC2_CRTC_SNAPSHOT_POSITION                                          \
  0x1fb1
#define mmCRTC3_CRTC_SNAPSHOT_POSITION                                          \
  0x41b1
#define mmCRTC4_CRTC_SNAPSHOT_POSITION                                          \
  0x43b1
#define mmCRTC5_CRTC_SNAPSHOT_POSITION                                          \
  0x45b1
#define mmCRTC_SNAPSHOT_FRAME                                                   \
  0x1bb2
#define mmCRTC0_CRTC_SNAPSHOT_FRAME                                             \
  0x1bb2
#define mmCRTC1_CRTC_SNAPSHOT_FRAME                                             \
  0x1db2
#define mmCRTC2_CRTC_SNAPSHOT_FRAME                                             \
  0x1fb2
#define mmCRTC3_CRTC_SNAPSHOT_FRAME                                             \
  0x41b2
#define mmCRTC4_CRTC_SNAPSHOT_FRAME                                             \
  0x43b2
#define mmCRTC5_CRTC_SNAPSHOT_FRAME                                             \
  0x45b2
#define mmCRTC_START_LINE_CONTROL                                               \
  0x1bb3
#define mmCRTC0_CRTC_START_LINE_CONTROL                                         \
  0x1bb3
#define mmCRTC1_CRTC_START_LINE_CONTROL                                         \
  0x1db3
#define mmCRTC2_CRTC_START_LINE_CONTROL                                         \
  0x1fb3
#define mmCRTC3_CRTC_START_LINE_CONTROL                                         \
  0x41b3
#define mmCRTC4_CRTC_START_LINE_CONTROL                                         \
  0x43b3
#define mmCRTC5_CRTC_START_LINE_CONTROL                                         \
  0x45b3
#define mmCRTC_INTERRUPT_CONTROL                                                \
  0x1bb4
#define mmCRTC0_CRTC_INTERRUPT_CONTROL                                          \
  0x1bb4
#define mmCRTC1_CRTC_INTERRUPT_CONTROL                                          \
  0x1db4
#define mmCRTC2_CRTC_INTERRUPT_CONTROL                                          \
  0x1fb4
#define mmCRTC3_CRTC_INTERRUPT_CONTROL                                          \
  0x41b4
#define mmCRTC4_CRTC_INTERRUPT_CONTROL                                          \
  0x43b4
#define mmCRTC5_CRTC_INTERRUPT_CONTROL                                          \
  0x45b4
#define mmCRTC_UPDATE_LOCK                                                      \
  0x1bb5
#define mmCRTC0_CRTC_UPDATE_LOCK                                                \
  0x1bb5
#define mmCRTC1_CRTC_UPDATE_LOCK                                                \
  0x1db5
#define mmCRTC2_CRTC_UPDATE_LOCK                                                \
  0x1fb5
#define mmCRTC3_CRTC_UPDATE_LOCK                                                \
  0x41b5
#define mmCRTC4_CRTC_UPDATE_LOCK                                                \
  0x43b5
#define mmCRTC5_CRTC_UPDATE_LOCK                                                \
  0x45b5
#define mmCRTC_DOUBLE_BUFFER_CONTROL                                            \
  0x1bb6
#define mmCRTC0_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x1bb6
#define mmCRTC1_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x1db6
#define mmCRTC2_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x1fb6
#define mmCRTC3_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x41b6
#define mmCRTC4_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x43b6
#define mmCRTC5_CRTC_DOUBLE_BUFFER_CONTROL                                      \
  0x45b6
#define mmCRTC_VGA_PARAMETER_CAPTURE_MODE                                       \
  0x1bb7
#define mmCRTC0_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x1bb7
#define mmCRTC1_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x1db7
#define mmCRTC2_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x1fb7
#define mmCRTC3_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x41b7
#define mmCRTC4_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x43b7
#define mmCRTC5_CRTC_VGA_PARAMETER_CAPTURE_MODE                                 \
  0x45b7
#define mmCRTC_TEST_PATTERN_CONTROL                                             \
  0x1bba
#define mmCRTC0_CRTC_TEST_PATTERN_CONTROL                                       \
  0x1bba
#define mmCRTC1_CRTC_TEST_PATTERN_CONTROL                                       \
  0x1dba
#define mmCRTC2_CRTC_TEST_PATTERN_CONTROL                                       \
  0x1fba
#define mmCRTC3_CRTC_TEST_PATTERN_CONTROL                                       \
  0x41ba
#define mmCRTC4_CRTC_TEST_PATTERN_CONTROL                                       \
  0x43ba
#define mmCRTC5_CRTC_TEST_PATTERN_CONTROL                                       \
  0x45ba
#define mmCRTC_TEST_PATTERN_PARAMETERS                                          \
  0x1bbb
#define mmCRTC0_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x1bbb
#define mmCRTC1_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x1dbb
#define mmCRTC2_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x1fbb
#define mmCRTC3_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x41bb
#define mmCRTC4_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x43bb
#define mmCRTC5_CRTC_TEST_PATTERN_PARAMETERS                                    \
  0x45bb
#define mmCRTC_TEST_PATTERN_COLOR                                               \
  0x1bbc
#define mmCRTC0_CRTC_TEST_PATTERN_COLOR                                         \
  0x1bbc
#define mmCRTC1_CRTC_TEST_PATTERN_COLOR                                         \
  0x1dbc
#define mmCRTC2_CRTC_TEST_PATTERN_COLOR                                         \
  0x1fbc
#define mmCRTC3_CRTC_TEST_PATTERN_COLOR                                         \
  0x41bc
#define mmCRTC4_CRTC_TEST_PATTERN_COLOR                                         \
  0x43bc
#define mmCRTC5_CRTC_TEST_PATTERN_COLOR                                         \
  0x45bc
#define mmCRTC_MASTER_UPDATE_LOCK                                               \
  0x1bbd
#define mmCRTC0_CRTC_MASTER_UPDATE_LOCK                                         \
  0x1bbd
#define mmCRTC1_CRTC_MASTER_UPDATE_LOCK                                         \
  0x1dbd
#define mmCRTC2_CRTC_MASTER_UPDATE_LOCK                                         \
  0x1fbd
#define mmCRTC3_CRTC_MASTER_UPDATE_LOCK                                         \
  0x41bd
#define mmCRTC4_CRTC_MASTER_UPDATE_LOCK                                         \
  0x43bd
#define mmCRTC5_CRTC_MASTER_UPDATE_LOCK                                         \
  0x45bd
#define mmCRTC_MASTER_UPDATE_MODE                                               \
  0x1bbe
#define mmCRTC0_CRTC_MASTER_UPDATE_MODE                                         \
  0x1bbe
#define mmCRTC1_CRTC_MASTER_UPDATE_MODE                                         \
  0x1dbe
#define mmCRTC2_CRTC_MASTER_UPDATE_MODE                                         \
  0x1fbe
#define mmCRTC3_CRTC_MASTER_UPDATE_MODE                                         \
  0x41be
#define mmCRTC4_CRTC_MASTER_UPDATE_MODE                                         \
  0x43be
#define mmCRTC5_CRTC_MASTER_UPDATE_MODE                                         \
  0x45be
#define mmCRTC_MVP_INBAND_CNTL_INSERT                                           \
  0x1bbf
#define mmCRTC0_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x1bbf
#define mmCRTC1_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x1dbf
#define mmCRTC2_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x1fbf
#define mmCRTC3_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x41bf
#define mmCRTC4_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x43bf
#define mmCRTC5_CRTC_MVP_INBAND_CNTL_INSERT                                     \
  0x45bf
#define mmCRTC_MVP_INBAND_CNTL_INSERT_TIMER                                     \
  0x1bc0
#define mmCRTC0_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x1bc0
#define mmCRTC1_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x1dc0
#define mmCRTC2_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x1fc0
#define mmCRTC3_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x41c0
#define mmCRTC4_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x43c0
#define mmCRTC5_CRTC_MVP_INBAND_CNTL_INSERT_TIMER                               \
  0x45c0
#define mmCRTC_MVP_STATUS                                                       \
  0x1bc1
#define mmCRTC0_CRTC_MVP_STATUS                                                 \
  0x1bc1
#define mmCRTC1_CRTC_MVP_STATUS                                                 \
  0x1dc1
#define mmCRTC2_CRTC_MVP_STATUS                                                 \
  0x1fc1
#define mmCRTC3_CRTC_MVP_STATUS                                                 \
  0x41c1
#define mmCRTC4_CRTC_MVP_STATUS                                                 \
  0x43c1
#define mmCRTC5_CRTC_MVP_STATUS                                                 \
  0x45c1
#define mmCRTC_MASTER_EN                                                        \
  0x1bc2
#define mmCRTC0_CRTC_MASTER_EN                                                  \
  0x1bc2
#define mmCRTC1_CRTC_MASTER_EN                                                  \
  0x1dc2
#define mmCRTC2_CRTC_MASTER_EN                                                  \
  0x1fc2
#define mmCRTC3_CRTC_MASTER_EN                                                  \
  0x41c2
#define mmCRTC4_CRTC_MASTER_EN                                                  \
  0x43c2
#define mmCRTC5_CRTC_MASTER_EN                                                  \
  0x45c2
#define mmCRTC_ALLOW_STOP_OFF_V_CNT                                             \
  0x1bc3
#define mmCRTC0_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x1bc3
#define mmCRTC1_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x1dc3
#define mmCRTC2_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x1fc3
#define mmCRTC3_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x41c3
#define mmCRTC4_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x43c3
#define mmCRTC5_CRTC_ALLOW_STOP_OFF_V_CNT                                       \
  0x45c3
#define mmCRTC_V_UPDATE_INT_STATUS                                              \
  0x1bc4
#define mmCRTC0_CRTC_V_UPDATE_INT_STATUS                                        \
  0x1bc4
#define mmCRTC1_CRTC_V_UPDATE_INT_STATUS                                        \
  0x1dc4
#define mmCRTC2_CRTC_V_UPDATE_INT_STATUS                                        \
  0x1fc4
#define mmCRTC3_CRTC_V_UPDATE_INT_STATUS                                        \
  0x41c4
#define mmCRTC4_CRTC_V_UPDATE_INT_STATUS                                        \
  0x43c4
#define mmCRTC5_CRTC_V_UPDATE_INT_STATUS                                        \
  0x45c4
#define mmCRTC_OVERSCAN_COLOR                                                   \
  0x1bc8
#define mmCRTC0_CRTC_OVERSCAN_COLOR                                             \
  0x1bc8
#define mmCRTC1_CRTC_OVERSCAN_COLOR                                             \
  0x1dc8
#define mmCRTC2_CRTC_OVERSCAN_COLOR                                             \
  0x1fc8
#define mmCRTC3_CRTC_OVERSCAN_COLOR                                             \
  0x41c8
#define mmCRTC4_CRTC_OVERSCAN_COLOR                                             \
  0x43c8
#define mmCRTC5_CRTC_OVERSCAN_COLOR                                             \
  0x45c8
#define mmCRTC_OVERSCAN_COLOR_EXT                                               \
  0x1bc9
#define mmCRTC0_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x1bc9
#define mmCRTC1_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x1dc9
#define mmCRTC2_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x1fc9
#define mmCRTC3_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x41c9
#define mmCRTC4_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x43c9
#define mmCRTC5_CRTC_OVERSCAN_COLOR_EXT                                         \
  0x45c9
#define mmCRTC_BLANK_DATA_COLOR                                                 \
  0x1bca
#define mmCRTC0_CRTC_BLANK_DATA_COLOR                                           \
  0x1bca
#define mmCRTC1_CRTC_BLANK_DATA_COLOR                                           \
  0x1dca
#define mmCRTC2_CRTC_BLANK_DATA_COLOR                                           \
  0x1fca
#define mmCRTC3_CRTC_BLANK_DATA_COLOR                                           \
  0x41ca
#define mmCRTC4_CRTC_BLANK_DATA_COLOR                                           \
  0x43ca
#define mmCRTC5_CRTC_BLANK_DATA_COLOR                                           \
  0x45ca
#define mmCRTC_BLANK_DATA_COLOR_EXT                                             \
  0x1bcb
#define mmCRTC0_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x1bcb
#define mmCRTC1_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x1dcb
#define mmCRTC2_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x1fcb
#define mmCRTC3_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x41cb
#define mmCRTC4_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x43cb
#define mmCRTC5_CRTC_BLANK_DATA_COLOR_EXT                                       \
  0x45cb
#define mmCRTC_BLACK_COLOR                                                      \
  0x1bcc
#define mmCRTC0_CRTC_BLACK_COLOR                                                \
  0x1bcc
#define mmCRTC1_CRTC_BLACK_COLOR                                                \
  0x1dcc
#define mmCRTC2_CRTC_BLACK_COLOR                                                \
  0x1fcc
#define mmCRTC3_CRTC_BLACK_COLOR                                                \
  0x41cc
#define mmCRTC4_CRTC_BLACK_COLOR                                                \
  0x43cc
#define mmCRTC5_CRTC_BLACK_COLOR                                                \
  0x45cc
#define mmCRTC_BLACK_COLOR_EXT                                                  \
  0x1bcd
#define mmCRTC0_CRTC_BLACK_COLOR_EXT                                            \
  0x1bcd
#define mmCRTC1_CRTC_BLACK_COLOR_EXT                                            \
  0x1dcd
#define mmCRTC2_CRTC_BLACK_COLOR_EXT                                            \
  0x1fcd
#define mmCRTC3_CRTC_BLACK_COLOR_EXT                                            \
  0x41cd
#define mmCRTC4_CRTC_BLACK_COLOR_EXT                                            \
  0x43cd
#define mmCRTC5_CRTC_BLACK_COLOR_EXT                                            \
  0x45cd
#define mmCRTC_VERTICAL_INTERRUPT0_POSITION                                     \
  0x1bce
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x1bce
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x1dce
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x1fce
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x41ce
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x43ce
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT0_POSITION                               \
  0x45ce
#define mmCRTC_VERTICAL_INTERRUPT0_CONTROL                                      \
  0x1bcf
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x1bcf
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x1dcf
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x1fcf
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x41cf
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x43cf
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT0_CONTROL                                \
  0x45cf
#define mmCRTC_VERTICAL_INTERRUPT1_POSITION                                     \
  0x1bd0
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x1bd0
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x1dd0
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x1fd0
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x41d0
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x43d0
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT1_POSITION                               \
  0x45d0
#define mmCRTC_VERTICAL_INTERRUPT1_CONTROL                                      \
  0x1bd1
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x1bd1
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x1dd1
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x1fd1
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x41d1
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x43d1
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT1_CONTROL                                \
  0x45d1
#define mmCRTC_VERTICAL_INTERRUPT2_POSITION                                     \
  0x1bd2
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x1bd2
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x1dd2
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x1fd2
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x41d2
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x43d2
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT2_POSITION                               \
  0x45d2
#define mmCRTC_VERTICAL_INTERRUPT2_CONTROL                                      \
  0x1bd3
#define mmCRTC0_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x1bd3
#define mmCRTC1_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x1dd3
#define mmCRTC2_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x1fd3
#define mmCRTC3_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x41d3
#define mmCRTC4_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x43d3
#define mmCRTC5_CRTC_VERTICAL_INTERRUPT2_CONTROL                                \
  0x45d3
#define mmCRTC_CRC_CNTL                                                         \
  0x1bd4
#define mmCRTC0_CRTC_CRC_CNTL                                                   \
  0x1bd4
#define mmCRTC1_CRTC_CRC_CNTL                                                   \
  0x1dd4
#define mmCRTC2_CRTC_CRC_CNTL                                                   \
  0x1fd4
#define mmCRTC3_CRTC_CRC_CNTL                                                   \
  0x41d4
#define mmCRTC4_CRTC_CRC_CNTL                                                   \
  0x43d4
#define mmCRTC5_CRTC_CRC_CNTL                                                   \
  0x45d4
#define mmCRTC_CRC0_WINDOWA_X_CONTROL                                           \
  0x1bd5
#define mmCRTC0_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x1bd5
#define mmCRTC1_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x1dd5
#define mmCRTC2_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x1fd5
#define mmCRTC3_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x41d5
#define mmCRTC4_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x43d5
#define mmCRTC5_CRTC_CRC0_WINDOWA_X_CONTROL                                     \
  0x45d5
#define mmCRTC_CRC0_WINDOWA_Y_CONTROL                                           \
  0x1bd6
#define mmCRTC0_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x1bd6
#define mmCRTC1_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x1dd6
#define mmCRTC2_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x1fd6
#define mmCRTC3_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x41d6
#define mmCRTC4_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x43d6
#define mmCRTC5_CRTC_CRC0_WINDOWA_Y_CONTROL                                     \
  0x45d6
#define mmCRTC_CRC0_WINDOWB_X_CONTROL                                           \
  0x1bd7
#define mmCRTC0_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x1bd7
#define mmCRTC1_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x1dd7
#define mmCRTC2_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x1fd7
#define mmCRTC3_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x41d7
#define mmCRTC4_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x43d7
#define mmCRTC5_CRTC_CRC0_WINDOWB_X_CONTROL                                     \
  0x45d7
#define mmCRTC_CRC0_WINDOWB_Y_CONTROL                                           \
  0x1bd8
#define mmCRTC0_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x1bd8
#define mmCRTC1_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x1dd8
#define mmCRTC2_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x1fd8
#define mmCRTC3_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x41d8
#define mmCRTC4_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x43d8
#define mmCRTC5_CRTC_CRC0_WINDOWB_Y_CONTROL                                     \
  0x45d8
#define mmCRTC_CRC0_DATA_RG                                                     \
  0x1bd9
#define mmCRTC0_CRTC_CRC0_DATA_RG                                               \
  0x1bd9
#define mmCRTC1_CRTC_CRC0_DATA_RG                                               \
  0x1dd9
#define mmCRTC2_CRTC_CRC0_DATA_RG                                               \
  0x1fd9
#define mmCRTC3_CRTC_CRC0_DATA_RG                                               \
  0x41d9
#define mmCRTC4_CRTC_CRC0_DATA_RG                                               \
  0x43d9
#define mmCRTC5_CRTC_CRC0_DATA_RG                                               \
  0x45d9
#define mmCRTC_CRC0_DATA_B                                                      \
  0x1bda
#define mmCRTC0_CRTC_CRC0_DATA_B                                                \
  0x1bda
#define mmCRTC1_CRTC_CRC0_DATA_B                                                \
  0x1dda
#define mmCRTC2_CRTC_CRC0_DATA_B                                                \
  0x1fda
#define mmCRTC3_CRTC_CRC0_DATA_B                                                \
  0x41da
#define mmCRTC4_CRTC_CRC0_DATA_B                                                \
  0x43da
#define mmCRTC5_CRTC_CRC0_DATA_B                                                \
  0x45da
#define mmCRTC_CRC1_WINDOWA_X_CONTROL                                           \
  0x1bdb
#define mmCRTC0_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x1bdb
#define mmCRTC1_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x1ddb
#define mmCRTC2_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x1fdb
#define mmCRTC3_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x41db
#define mmCRTC4_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x43db
#define mmCRTC5_CRTC_CRC1_WINDOWA_X_CONTROL                                     \
  0x45db
#define mmCRTC_CRC1_WINDOWA_Y_CONTROL                                           \
  0x1bdc
#define mmCRTC0_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x1bdc
#define mmCRTC1_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x1ddc
#define mmCRTC2_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x1fdc
#define mmCRTC3_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x41dc
#define mmCRTC4_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x43dc
#define mmCRTC5_CRTC_CRC1_WINDOWA_Y_CONTROL                                     \
  0x45dc
#define mmCRTC_CRC1_WINDOWB_X_CONTROL                                           \
  0x1bdd
#define mmCRTC0_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x1bdd
#define mmCRTC1_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x1ddd
#define mmCRTC2_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x1fdd
#define mmCRTC3_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x41dd
#define mmCRTC4_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x43dd
#define mmCRTC5_CRTC_CRC1_WINDOWB_X_CONTROL                                     \
  0x45dd
#define mmCRTC_CRC1_WINDOWB_Y_CONTROL                                           \
  0x1bde
#define mmCRTC0_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x1bde
#define mmCRTC1_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x1dde
#define mmCRTC2_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x1fde
#define mmCRTC3_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x41de
#define mmCRTC4_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x43de
#define mmCRTC5_CRTC_CRC1_WINDOWB_Y_CONTROL                                     \
  0x45de
#define mmCRTC_CRC1_DATA_RG                                                     \
  0x1bdf
#define mmCRTC0_CRTC_CRC1_DATA_RG                                               \
  0x1bdf
#define mmCRTC1_CRTC_CRC1_DATA_RG                                               \
  0x1ddf
#define mmCRTC2_CRTC_CRC1_DATA_RG                                               \
  0x1fdf
#define mmCRTC3_CRTC_CRC1_DATA_RG                                               \
  0x41df
#define mmCRTC4_CRTC_CRC1_DATA_RG                                               \
  0x43df
#define mmCRTC5_CRTC_CRC1_DATA_RG                                               \
  0x45df
#define mmCRTC_CRC1_DATA_B                                                      \
  0x1be0
#define mmCRTC0_CRTC_CRC1_DATA_B                                                \
  0x1be0
#define mmCRTC1_CRTC_CRC1_DATA_B                                                \
  0x1de0
#define mmCRTC2_CRTC_CRC1_DATA_B                                                \
  0x1fe0
#define mmCRTC3_CRTC_CRC1_DATA_B                                                \
  0x41e0
#define mmCRTC4_CRTC_CRC1_DATA_B                                                \
  0x43e0
#define mmCRTC5_CRTC_CRC1_DATA_B                                                \
  0x45e0
#define mmCRTC_EXT_TIMING_SYNC_CONTROL                                          \
  0x1be1
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x1be1
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x1de1
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x1fe1
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x41e1
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x43e1
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_CONTROL                                    \
  0x45e1
#define mmCRTC_EXT_TIMING_SYNC_WINDOW_START                                     \
  0x1be2
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x1be2
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x1de2
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x1fe2
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x41e2
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x43e2
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_WINDOW_START                               \
  0x45e2
#define mmCRTC_EXT_TIMING_SYNC_WINDOW_END                                       \
  0x1be3
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x1be3
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x1de3
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x1fe3
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x41e3
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x43e3
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_WINDOW_END                                 \
  0x45e3
#define mmCRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                           \
  0x1be4
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x1be4
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x1de4
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x1fe4
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x41e4
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x43e4
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL                     \
  0x45e4
#define mmCRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                                \
  0x1be5
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x1be5
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x1de5
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x1fe5
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x41e5
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x43e5
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL                          \
  0x45e5
#define mmCRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                         \
  0x1be6
#define mmCRTC0_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x1be6
#define mmCRTC1_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x1de6
#define mmCRTC2_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x1fe6
#define mmCRTC3_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x41e6
#define mmCRTC4_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x43e6
#define mmCRTC5_CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL                   \
  0x45e6
#define mmCRTC_STATIC_SCREEN_CONTROL                                            \
  0x1be7
#define mmCRTC0_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x1be7
#define mmCRTC1_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x1de7
#define mmCRTC2_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x1fe7
#define mmCRTC3_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x41e7
#define mmCRTC4_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x43e7
#define mmCRTC5_CRTC_STATIC_SCREEN_CONTROL                                      \
  0x45e7
#define mmCRTC_3D_STRUCTURE_CONTROL                                             \
  0x1b78
#define mmCRTC0_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x1b78
#define mmCRTC1_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x1d78
#define mmCRTC2_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x1f78
#define mmCRTC3_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x4178
#define mmCRTC4_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x4378
#define mmCRTC5_CRTC_3D_STRUCTURE_CONTROL                                       \
  0x4578
#define mmCRTC_GSL_VSYNC_GAP                                                    \
  0x1b79
#define mmCRTC0_CRTC_GSL_VSYNC_GAP                                              \
  0x1b79
#define mmCRTC1_CRTC_GSL_VSYNC_GAP                                              \
  0x1d79
#define mmCRTC2_CRTC_GSL_VSYNC_GAP                                              \
  0x1f79
#define mmCRTC3_CRTC_GSL_VSYNC_GAP                                              \
  0x4179
#define mmCRTC4_CRTC_GSL_VSYNC_GAP                                              \
  0x4379
#define mmCRTC5_CRTC_GSL_VSYNC_GAP                                              \
  0x4579
#define mmCRTC_GSL_WINDOW                                                       \
  0x1b7a
#define mmCRTC0_CRTC_GSL_WINDOW                                                 \
  0x1b7a
#define mmCRTC1_CRTC_GSL_WINDOW                                                 \
  0x1d7a
#define mmCRTC2_CRTC_GSL_WINDOW                                                 \
  0x1f7a
#define mmCRTC3_CRTC_GSL_WINDOW                                                 \
  0x417a
#define mmCRTC4_CRTC_GSL_WINDOW                                                 \
  0x437a
#define mmCRTC5_CRTC_GSL_WINDOW                                                 \
  0x457a
#define mmCRTC_GSL_CONTROL                                                      \
  0x1b7b
#define mmCRTC0_CRTC_GSL_CONTROL                                                \
  0x1b7b
#define mmCRTC1_CRTC_GSL_CONTROL                                                \
  0x1d7b
#define mmCRTC2_CRTC_GSL_CONTROL                                                \
  0x1f7b
#define mmCRTC3_CRTC_GSL_CONTROL                                                \
  0x417b
#define mmCRTC4_CRTC_GSL_CONTROL                                                \
  0x437b
#define mmCRTC5_CRTC_GSL_CONTROL                                                \
  0x457b
#define mmCRTC_TEST_DEBUG_INDEX                                                 \
  0x1bc6
#define mmCRTC0_CRTC_TEST_DEBUG_INDEX                                           \
  0x1bc6
#define mmCRTC1_CRTC_TEST_DEBUG_INDEX                                           \
  0x1dc6
#define mmCRTC2_CRTC_TEST_DEBUG_INDEX                                           \
  0x1fc6
#define mmCRTC3_CRTC_TEST_DEBUG_INDEX                                           \
  0x41c6
#define mmCRTC4_CRTC_TEST_DEBUG_INDEX                                           \
  0x43c6
#define mmCRTC5_CRTC_TEST_DEBUG_INDEX                                           \
  0x45c6
#define mmCRTC_TEST_DEBUG_DATA                                                  \
  0x1bc7
#define mmCRTC0_CRTC_TEST_DEBUG_DATA                                            \
  0x1bc7
#define mmCRTC1_CRTC_TEST_DEBUG_DATA                                            \
  0x1dc7
#define mmCRTC2_CRTC_TEST_DEBUG_DATA                                            \
  0x1fc7
#define mmCRTC3_CRTC_TEST_DEBUG_DATA                                            \
  0x41c7
#define mmCRTC4_CRTC_TEST_DEBUG_DATA                                            \
  0x43c7
#define mmCRTC5_CRTC_TEST_DEBUG_DATA                                            \
  0x45c7
#define mmDAC_ENABLE                                                            \
  0x16aa
#define mmDAC_SOURCE_SELECT                                                     \
  0x16ab
#define mmDAC_CRC_EN                                                            \
  0x16ac
#define mmDAC_CRC_CONTROL                                                       \
  0x16ad
#define mmDAC_CRC_SIG_RGB_MASK                                                  \
  0x16ae
#define mmDAC_CRC_SIG_CONTROL_MASK                                              \
  0x16af
#define mmDAC_CRC_SIG_RGB                                                       \
  0x16b0
#define mmDAC_CRC_SIG_CONTROL                                                   \
  0x16b1
#define mmDAC_SYNC_TRISTATE_CONTROL                                             \
  0x16b2
#define mmDAC_STEREOSYNC_SELECT                                                 \
  0x16b3
#define mmDAC_AUTODETECT_CONTROL                                                \
  0x16b4
#define mmDAC_AUTODETECT_CONTROL2                                               \
  0x16b5
#define mmDAC_AUTODETECT_CONTROL3                                               \
  0x16b6
#define mmDAC_AUTODETECT_STATUS                                                 \
  0x16b7
#define mmDAC_AUTODETECT_INT_CONTROL                                            \
  0x16b8
#define mmDAC_FORCE_OUTPUT_CNTL                                                 \
  0x16b9
#define mmDAC_FORCE_DATA                                                        \
  0x16ba
#define mmDAC_POWERDOWN                                                         \
  0x16bb
#define mmDAC_CONTROL                                                           \
  0x16bc
#define mmDAC_COMPARATOR_ENABLE                                                 \
  0x16bd
#define mmDAC_COMPARATOR_OUTPUT                                                 \
  0x16be
#define mmDAC_PWR_CNTL                                                          \
  0x16bf
#define mmDAC_DFT_CONFIG                                                        \
  0x16c0
#define mmDAC_FIFO_STATUS                                                       \
  0x16c1
#define mmDAC_TEST_DEBUG_INDEX                                                  \
  0x16c2
#define mmDAC_TEST_DEBUG_DATA                                                   \
  0x16c3
#define mmPERFCOUNTER_CNTL                                                      \
  0x170
#define mmDC_PERFMON0_PERFCOUNTER_CNTL                                          \
  0x170
#define mmDC_PERFMON1_PERFCOUNTER_CNTL                                          \
  0x358
#define mmDC_PERFMON2_PERFCOUNTER_CNTL                                          \
  0x364
#define mmDC_PERFMON3_PERFCOUNTER_CNTL                                          \
  0x18c8
#define mmDC_PERFMON4_PERFCOUNTER_CNTL                                          \
  0x1b24
#define mmDC_PERFMON5_PERFCOUNTER_CNTL                                          \
  0x1d24
#define mmDC_PERFMON6_PERFCOUNTER_CNTL                                          \
  0x1f24
#define mmDC_PERFMON7_PERFCOUNTER_CNTL                                          \
  0x4124
#define mmDC_PERFMON8_PERFCOUNTER_CNTL                                          \
  0x4324
#define mmDC_PERFMON9_PERFCOUNTER_CNTL                                          \
  0x4524
#define mmDC_PERFMON10_PERFCOUNTER_CNTL                                         \
  0x4724
#define mmDC_PERFMON11_PERFCOUNTER_CNTL                                         \
  0x59a0
#define mmDC_PERFMON12_PERFCOUNTER_CNTL                                         \
  0x5f68
#define mmDC_PERFMON13_PERFCOUNTER_CNTL                                         \
  0x9924
#define mmPERFCOUNTER_STATE                                                     \
  0x171
#define mmDC_PERFMON0_PERFCOUNTER_STATE                                         \
  0x171
#define mmDC_PERFMON1_PERFCOUNTER_STATE                                         \
  0x359
#define mmDC_PERFMON2_PERFCOUNTER_STATE                                         \
  0x365
#define mmDC_PERFMON3_PERFCOUNTER_STATE                                         \
  0x18c9
#define mmDC_PERFMON4_PERFCOUNTER_STATE                                         \
  0x1b25
#define mmDC_PERFMON5_PERFCOUNTER_STATE                                         \
  0x1d25
#define mmDC_PERFMON6_PERFCOUNTER_STATE                                         \
  0x1f25
#define mmDC_PERFMON7_PERFCOUNTER_STATE                                         \
  0x4125
#define mmDC_PERFMON8_PERFCOUNTER_STATE                                         \
  0x4325
#define mmDC_PERFMON9_PERFCOUNTER_STATE                                         \
  0x4525
#define mmDC_PERFMON10_PERFCOUNTER_STATE                                        \
  0x4725
#define mmDC_PERFMON11_PERFCOUNTER_STATE                                        \
  0x59a1
#define mmDC_PERFMON12_PERFCOUNTER_STATE                                        \
  0x5f69
#define mmDC_PERFMON13_PERFCOUNTER_STATE                                        \
  0x9925
#define mmPERFMON_CNTL                                                          \
  0x173
#define mmDC_PERFMON0_PERFMON_CNTL                                              \
  0x173
#define mmDC_PERFMON1_PERFMON_CNTL                                              \
  0x35b
#define mmDC_PERFMON2_PERFMON_CNTL                                              \
  0x367
#define mmDC_PERFMON3_PERFMON_CNTL                                              \
  0x18cb
#define mmDC_PERFMON4_PERFMON_CNTL                                              \
  0x1b27
#define mmDC_PERFMON5_PERFMON_CNTL                                              \
  0x1d27
#define mmDC_PERFMON6_PERFMON_CNTL                                              \
  0x1f27
#define mmDC_PERFMON7_PERFMON_CNTL                                              \
  0x4127
#define mmDC_PERFMON8_PERFMON_CNTL                                              \
  0x4327
#define mmDC_PERFMON9_PERFMON_CNTL                                              \
  0x4527
#define mmDC_PERFMON10_PERFMON_CNTL                                             \
  0x4727
#define mmDC_PERFMON11_PERFMON_CNTL                                             \
  0x59a3
#define mmDC_PERFMON12_PERFMON_CNTL                                             \
  0x5f6b
#define mmDC_PERFMON13_PERFMON_CNTL                                             \
  0x9927
#define mmPERFMON_CNTL2                                                         \
  0x17a
#define mmDC_PERFMON0_PERFMON_CNTL2                                             \
  0x17a
#define mmDC_PERFMON1_PERFMON_CNTL2                                             \
  0x362
#define mmDC_PERFMON2_PERFMON_CNTL2                                             \
  0x36e
#define mmDC_PERFMON3_PERFMON_CNTL2                                             \
  0x18d2
#define mmDC_PERFMON4_PERFMON_CNTL2                                             \
  0x1b2e
#define mmDC_PERFMON5_PERFMON_CNTL2                                             \
  0x1d2e
#define mmDC_PERFMON6_PERFMON_CNTL2                                             \
  0x1f2e
#define mmDC_PERFMON7_PERFMON_CNTL2                                             \
  0x412e
#define mmDC_PERFMON8_PERFMON_CNTL2                                             \
  0x432e
#define mmDC_PERFMON9_PERFMON_CNTL2                                             \
  0x452e
#define mmDC_PERFMON10_PERFMON_CNTL2                                            \
  0x472e
#define mmDC_PERFMON11_PERFMON_CNTL2                                            \
  0x59aa
#define mmDC_PERFMON12_PERFMON_CNTL2                                            \
  0x5f72
#define mmDC_PERFMON13_PERFMON_CNTL2                                            \
  0x992e
#define mmPERFMON_CVALUE_INT_MISC                                               \
  0x172
#define mmDC_PERFMON0_PERFMON_CVALUE_INT_MISC                                   \
  0x172
#define mmDC_PERFMON1_PERFMON_CVALUE_INT_MISC                                   \
  0x35a
#define mmDC_PERFMON2_PERFMON_CVALUE_INT_MISC                                   \
  0x366
#define mmDC_PERFMON3_PERFMON_CVALUE_INT_MISC                                   \
  0x18ca
#define mmDC_PERFMON4_PERFMON_CVALUE_INT_MISC                                   \
  0x1b26
#define mmDC_PERFMON5_PERFMON_CVALUE_INT_MISC                                   \
  0x1d26
#define mmDC_PERFMON6_PERFMON_CVALUE_INT_MISC                                   \
  0x1f26
#define mmDC_PERFMON7_PERFMON_CVALUE_INT_MISC                                   \
  0x4126
#define mmDC_PERFMON8_PERFMON_CVALUE_INT_MISC                                   \
  0x4326
#define mmDC_PERFMON9_PERFMON_CVALUE_INT_MISC                                   \
  0x4526
#define mmDC_PERFMON10_PERFMON_CVALUE_INT_MISC                                  \
  0x4726
#define mmDC_PERFMON11_PERFMON_CVALUE_INT_MISC                                  \
  0x59a2
#define mmDC_PERFMON12_PERFMON_CVALUE_INT_MISC                                  \
  0x5f6a
#define mmDC_PERFMON13_PERFMON_CVALUE_INT_MISC                                  \
  0x9926
#define mmPERFMON_CVALUE_LOW                                                    \
  0x174
#define mmDC_PERFMON0_PERFMON_CVALUE_LOW                                        \
  0x174
#define mmDC_PERFMON1_PERFMON_CVALUE_LOW                                        \
  0x35c
#define mmDC_PERFMON2_PERFMON_CVALUE_LOW                                        \
  0x368
#define mmDC_PERFMON3_PERFMON_CVALUE_LOW                                        \
  0x18cc
#define mmDC_PERFMON4_PERFMON_CVALUE_LOW                                        \
  0x1b28
#define mmDC_PERFMON5_PERFMON_CVALUE_LOW                                        \
  0x1d28
#define mmDC_PERFMON6_PERFMON_CVALUE_LOW                                        \
  0x1f28
#define mmDC_PERFMON7_PERFMON_CVALUE_LOW                                        \
  0x4128
#define mmDC_PERFMON8_PERFMON_CVALUE_LOW                                        \
  0x4328
#define mmDC_PERFMON9_PERFMON_CVALUE_LOW                                        \
  0x4528
#define mmDC_PERFMON10_PERFMON_CVALUE_LOW                                       \
  0x4728
#define mmDC_PERFMON11_PERFMON_CVALUE_LOW                                       \
  0x59a4
#define mmDC_PERFMON12_PERFMON_CVALUE_LOW                                       \
  0x5f6c
#define mmDC_PERFMON13_PERFMON_CVALUE_LOW                                       \
  0x9928
#define mmPERFMON_HI                                                            \
  0x175
#define mmDC_PERFMON0_PERFMON_HI                                                \
  0x175
#define mmDC_PERFMON1_PERFMON_HI                                                \
  0x35d
#define mmDC_PERFMON2_PERFMON_HI                                                \
  0x369
#define mmDC_PERFMON3_PERFMON_HI                                                \
  0x18cd
#define mmDC_PERFMON4_PERFMON_HI                                                \
  0x1b29
#define mmDC_PERFMON5_PERFMON_HI                                                \
  0x1d29
#define mmDC_PERFMON6_PERFMON_HI                                                \
  0x1f29
#define mmDC_PERFMON7_PERFMON_HI                                                \
  0x4129
#define mmDC_PERFMON8_PERFMON_HI                                                \
  0x4329
#define mmDC_PERFMON9_PERFMON_HI                                                \
  0x4529
#define mmDC_PERFMON10_PERFMON_HI                                               \
  0x4729
#define mmDC_PERFMON11_PERFMON_HI                                               \
  0x59a5
#define mmDC_PERFMON12_PERFMON_HI                                               \
  0x5f6d
#define mmDC_PERFMON13_PERFMON_HI                                               \
  0x9929
#define mmPERFMON_LOW                                                           \
  0x176
#define mmDC_PERFMON0_PERFMON_LOW                                               \
  0x176
#define mmDC_PERFMON1_PERFMON_LOW                                               \
  0x35e
#define mmDC_PERFMON2_PERFMON_LOW                                               \
  0x36a
#define mmDC_PERFMON3_PERFMON_LOW                                               \
  0x18ce
#define mmDC_PERFMON4_PERFMON_LOW                                               \
  0x1b2a
#define mmDC_PERFMON5_PERFMON_LOW                                               \
  0x1d2a
#define mmDC_PERFMON6_PERFMON_LOW                                               \
  0x1f2a
#define mmDC_PERFMON7_PERFMON_LOW                                               \
  0x412a
#define mmDC_PERFMON8_PERFMON_LOW                                               \
  0x432a
#define mmDC_PERFMON9_PERFMON_LOW                                               \
  0x452a
#define mmDC_PERFMON10_PERFMON_LOW                                              \
  0x472a
#define mmDC_PERFMON11_PERFMON_LOW                                              \
  0x59a6
#define mmDC_PERFMON12_PERFMON_LOW                                              \
  0x5f6e
#define mmDC_PERFMON13_PERFMON_LOW                                              \
  0x992a
#define mmPERFMON_TEST_DEBUG_INDEX                                              \
  0x177
#define mmDC_PERFMON0_PERFMON_TEST_DEBUG_INDEX                                  \
  0x177
#define mmDC_PERFMON1_PERFMON_TEST_DEBUG_INDEX                                  \
  0x35f
#define mmDC_PERFMON2_PERFMON_TEST_DEBUG_INDEX                                  \
  0x36b
#define mmDC_PERFMON3_PERFMON_TEST_DEBUG_INDEX                                  \
  0x18cf
#define mmDC_PERFMON4_PERFMON_TEST_DEBUG_INDEX                                  \
  0x1b2b
#define mmDC_PERFMON5_PERFMON_TEST_DEBUG_INDEX                                  \
  0x1d2b
#define mmDC_PERFMON6_PERFMON_TEST_DEBUG_INDEX                                  \
  0x1f2b
#define mmDC_PERFMON7_PERFMON_TEST_DEBUG_INDEX                                  \
  0x412b
#define mmDC_PERFMON8_PERFMON_TEST_DEBUG_INDEX                                  \
  0x432b
#define mmDC_PERFMON9_PERFMON_TEST_DEBUG_INDEX                                  \
  0x452b
#define mmDC_PERFMON10_PERFMON_TEST_DEBUG_INDEX                                 \
  0x472b
#define mmDC_PERFMON11_PERFMON_TEST_DEBUG_INDEX                                 \
  0x59a7
#define mmDC_PERFMON12_PERFMON_TEST_DEBUG_INDEX                                 \
  0x5f6f
#define mmDC_PERFMON13_PERFMON_TEST_DEBUG_INDEX                                 \
  0x992b
#define mmPERFMON_TEST_DEBUG_DATA                                               \
  0x178
#define mmDC_PERFMON0_PERFMON_TEST_DEBUG_DATA                                   \
  0x178
#define mmDC_PERFMON1_PERFMON_TEST_DEBUG_DATA                                   \
  0x360
#define mmDC_PERFMON2_PERFMON_TEST_DEBUG_DATA                                   \
  0x36c
#define mmDC_PERFMON3_PERFMON_TEST_DEBUG_DATA                                   \
  0x18d0
#define mmDC_PERFMON4_PERFMON_TEST_DEBUG_DATA                                   \
  0x1b2c
#define mmDC_PERFMON5_PERFMON_TEST_DEBUG_DATA                                   \
  0x1d2c
#define mmDC_PERFMON6_PERFMON_TEST_DEBUG_DATA                                   \
  0x1f2c
#define mmDC_PERFMON7_PERFMON_TEST_DEBUG_DATA                                   \
  0x412c
#define mmDC_PERFMON8_PERFMON_TEST_DEBUG_DATA                                   \
  0x432c
#define mmDC_PERFMON9_PERFMON_TEST_DEBUG_DATA                                   \
  0x452c
#define mmDC_PERFMON10_PERFMON_TEST_DEBUG_DATA                                  \
  0x472c
#define mmDC_PERFMON11_PERFMON_TEST_DEBUG_DATA                                  \
  0x59a8
#define mmDC_PERFMON12_PERFMON_TEST_DEBUG_DATA                                  \
  0x5f70
#define mmDC_PERFMON13_PERFMON_TEST_DEBUG_DATA                                  \
  0x992c
#define mmREFCLK_CNTL                                                           \
  0x109
#define mmDCCG_CBUS_ANTIGLITCH_RESETB                                           \
  0x15c
#define mmDCCG_CBUS_SPARE                                                       \
  0x15d
#define mmDCCG_CBUS_WRCMD_DELAY                                                 \
  0x110
#define mmDPREFCLK_CNTL                                                         \
  0x118
#define mmDCE_VERSION                                                           \
  0x11e
#define mmAVSYNC_COUNTER_WRITE                                                  \
  0x12a
#define mmAVSYNC_COUNTER_CONTROL                                                \
  0x12b
#define mmAVSYNC_COUNTER_READ                                                   \
  0x12f
#define mmDCCG_GTC_CNTL                                                         \
  0x120
#define mmDCCG_GTC_DTO_INCR                                                     \
  0x121
#define mmDCCG_GTC_DTO_MODULO                                                   \
  0x122
#define mmDCCG_GTC_CURRENT                                                      \
  0x123
#define mmDCCG_DS_DTO_INCR                                                      \
  0x113
#define mmDCCG_DS_DTO_MODULO                                                    \
  0x114
#define mmDCCG_DS_CNTL                                                          \
  0x115
#define mmDCCG_DS_HW_CAL_INTERVAL                                               \
  0x116
#define mmDCCG_DS_DEBUG_CNTL                                                    \
  0x112
#define mmDMCU_SMU_INTERRUPT_CNTL                                               \
  0x12c
#define mmSMU_CONTROL                                                           \
  0x12d
#define mmSMU_INTERRUPT_CONTROL                                                 \
  0x12e
#define mmDAC_CLK_ENABLE                                                        \
  0x128
#define mmDVO_CLK_ENABLE                                                        \
  0x129
#define mmDCCG_GATE_DISABLE_CNTL                                                \
  0x134
#define mmDCCG_GATE_DISABLE_CNTL2                                               \
  0x13c
#define mmDISPCLK_CGTT_BLK_CTRL_REG                                             \
  0x135
#define mmSCLK_CGTT_BLK_CTRL_REG                                                \
  0x136
#define mmDPREFCLK_CGTT_BLK_CTRL_REG                                            \
  0x108
#define mmREFCLK_CGTT_BLK_CTRL_REG                                              \
  0x10b
#define mmSYMCLK_CGTT_BLK_CTRL_REG                                              \
  0x13d
#define mmDCCG_CAC_STATUS                                                       \
  0x137
#define mmPIXCLK0_RESYNC_CNTL                                                   \
  0x13a
#define mmPHYPLLA_PIXCLK_RESYNC_CNTL                                            \
  0x100
#define mmPHYPLLB_PIXCLK_RESYNC_CNTL                                            \
  0x101
#define mmPHYPLLC_PIXCLK_RESYNC_CNTL                                            \
  0x102
#define mmPHYPLLD_PIXCLK_RESYNC_CNTL                                            \
  0x103
#define mmPHYPLLE_PIXCLK_RESYNC_CNTL                                            \
  0x10c
#define mmPHYPLLF_PIXCLK_RESYNC_CNTL                                            \
  0x13e
#define mmMICROSECOND_TIME_BASE_DIV                                             \
  0x13b
#define mmDCCG_DISP_CNTL_REG                                                    \
  0x13f
#define mmMILLISECOND_TIME_BASE_DIV                                             \
  0x130
#define mmDISPCLK_FREQ_CHANGE_CNTL                                              \
  0x131
#define mmDC_MEM_GLOBAL_PWR_REQ_CNTL                                            \
  0x132
#define mmDCCG_PERFMON_CNTL                                                     \
  0x133
#define mmDCCG_PERFMON_CNTL2                                                    \
  0x10e
#define mmCRTC0_PIXEL_RATE_CNTL                                                 \
  0x140
#define mmDP_DTO0_PHASE                                                         \
  0x141
#define mmDP_DTO0_MODULO                                                        \
  0x142
#define mmCRTC0_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x143
#define mmCRTC1_PIXEL_RATE_CNTL                                                 \
  0x144
#define mmDP_DTO1_PHASE                                                         \
  0x145
#define mmDP_DTO1_MODULO                                                        \
  0x146
#define mmCRTC1_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x147
#define mmCRTC2_PIXEL_RATE_CNTL                                                 \
  0x148
#define mmDP_DTO2_PHASE                                                         \
  0x149
#define mmDP_DTO2_MODULO                                                        \
  0x14a
#define mmCRTC2_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x14b
#define mmCRTC3_PIXEL_RATE_CNTL                                                 \
  0x14c
#define mmDP_DTO3_PHASE                                                         \
  0x14d
#define mmDP_DTO3_MODULO                                                        \
  0x14e
#define mmCRTC3_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x14f
#define mmCRTC4_PIXEL_RATE_CNTL                                                 \
  0x150
#define mmDP_DTO4_PHASE                                                         \
  0x151
#define mmDP_DTO4_MODULO                                                        \
  0x152
#define mmCRTC4_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x153
#define mmCRTC5_PIXEL_RATE_CNTL                                                 \
  0x154
#define mmDP_DTO5_PHASE                                                         \
  0x155
#define mmDP_DTO5_MODULO                                                        \
  0x156
#define mmCRTC5_PHYPLL_PIXEL_RATE_CNTL                                          \
  0x157
#define mmDCCG_SOFT_RESET                                                       \
  0x15f
#define mmSYMCLKA_CLOCK_ENABLE                                                  \
  0x160
#define mmSYMCLKB_CLOCK_ENABLE                                                  \
  0x161
#define mmSYMCLKC_CLOCK_ENABLE                                                  \
  0x162
#define mmSYMCLKD_CLOCK_ENABLE                                                  \
  0x163
#define mmSYMCLKE_CLOCK_ENABLE                                                  \
  0x164
#define mmSYMCLKF_CLOCK_ENABLE                                                  \
  0x165
#define mmDPDBG_CLK_FORCE_CONTROL                                               \
  0x10d
#define mmDCCG_AUDIO_DTO_SOURCE                                                 \
  0x16b
#define mmDCCG_AUDIO_DTO0_PHASE                                                 \
  0x16c
#define mmDCCG_AUDIO_DTO0_MODULE                                                \
  0x16d
#define mmDCCG_AUDIO_DTO1_PHASE                                                 \
  0x16e
#define mmDCCG_AUDIO_DTO1_MODULE                                                \
  0x16f
#define mmDCCG_TEST_DEBUG_INDEX                                                 \
  0x17c
#define mmDCCG_TEST_DEBUG_DATA                                                  \
  0x17d
#define mmDCCG_TEST_CLK_SEL                                                     \
  0x17e
#define mmCPLL_MACRO_CNTL_RESERVED0                                             \
  0x5fd0
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED0                                  \
  0x5fd0
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED0                                  \
  0x5fdc
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED0                                  \
  0x5fe8
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED0                                  \
  0x5ff4
#define mmCPLL_MACRO_CNTL_RESERVED1                                             \
  0x5fd1
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED1                                  \
  0x5fd1
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED1                                  \
  0x5fdd
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED1                                  \
  0x5fe9
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED1                                  \
  0x5ff5
#define mmCPLL_MACRO_CNTL_RESERVED2                                             \
  0x5fd2
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED2                                  \
  0x5fd2
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED2                                  \
  0x5fde
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED2                                  \
  0x5fea
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED2                                  \
  0x5ff6
#define mmCPLL_MACRO_CNTL_RESERVED3                                             \
  0x5fd3
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED3                                  \
  0x5fd3
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED3                                  \
  0x5fdf
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED3                                  \
  0x5feb
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED3                                  \
  0x5ff7
#define mmCPLL_MACRO_CNTL_RESERVED4                                             \
  0x5fd4
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED4                                  \
  0x5fd4
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED4                                  \
  0x5fe0
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED4                                  \
  0x5fec
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED4                                  \
  0x5ff8
#define mmCPLL_MACRO_CNTL_RESERVED5                                             \
  0x5fd5
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED5                                  \
  0x5fd5
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED5                                  \
  0x5fe1
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED5                                  \
  0x5fed
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED5                                  \
  0x5ff9
#define mmCPLL_MACRO_CNTL_RESERVED6                                             \
  0x5fd6
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED6                                  \
  0x5fd6
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED6                                  \
  0x5fe2
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED6                                  \
  0x5fee
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED6                                  \
  0x5ffa
#define mmCPLL_MACRO_CNTL_RESERVED7                                             \
  0x5fd7
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED7                                  \
  0x5fd7
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED7                                  \
  0x5fe3
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED7                                  \
  0x5fef
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED7                                  \
  0x5ffb
#define mmCPLL_MACRO_CNTL_RESERVED8                                             \
  0x5fd8
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED8                                  \
  0x5fd8
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED8                                  \
  0x5fe4
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED8                                  \
  0x5ff0
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED8                                  \
  0x5ffc
#define mmCPLL_MACRO_CNTL_RESERVED9                                             \
  0x5fd9
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED9                                  \
  0x5fd9
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED9                                  \
  0x5fe5
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED9                                  \
  0x5ff1
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED9                                  \
  0x5ffd
#define mmCPLL_MACRO_CNTL_RESERVED10                                            \
  0x5fda
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED10                                 \
  0x5fda
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED10                                 \
  0x5fe6
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED10                                 \
  0x5ff2
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED10                                 \
  0x5ffe
#define mmCPLL_MACRO_CNTL_RESERVED11                                            \
  0x5fdb
#define mmDCCG_CPLL0_CPLL_MACRO_CNTL_RESERVED11                                 \
  0x5fdb
#define mmDCCG_CPLL1_CPLL_MACRO_CNTL_RESERVED11                                 \
  0x5fe7
#define mmDCCG_CPLL2_CPLL_MACRO_CNTL_RESERVED11                                 \
  0x5ff3
#define mmDCCG_CPLL3_CPLL_MACRO_CNTL_RESERVED11                                 \
  0x5fff
#define mmPLL_MACRO_CNTL_RESERVED0                                              \
  0x1700
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED0                                    \
  0x1700
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED0                                    \
  0x172a
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED0                                    \
  0x1754
#define mmPLL_MACRO_CNTL_RESERVED1                                              \
  0x1701
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED1                                    \
  0x1701
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED1                                    \
  0x172b
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED1                                    \
  0x1755
#define mmPLL_MACRO_CNTL_RESERVED2                                              \
  0x1702
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED2                                    \
  0x1702
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED2                                    \
  0x172c
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED2                                    \
  0x1756
#define mmPLL_MACRO_CNTL_RESERVED3                                              \
  0x1703
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED3                                    \
  0x1703
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED3                                    \
  0x172d
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED3                                    \
  0x1757
#define mmPLL_MACRO_CNTL_RESERVED4                                              \
  0x1704
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED4                                    \
  0x1704
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED4                                    \
  0x172e
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED4                                    \
  0x1758
#define mmPLL_MACRO_CNTL_RESERVED5                                              \
  0x1705
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED5                                    \
  0x1705
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED5                                    \
  0x172f
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED5                                    \
  0x1759
#define mmPLL_MACRO_CNTL_RESERVED6                                              \
  0x1706
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED6                                    \
  0x1706
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED6                                    \
  0x1730
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED6                                    \
  0x175a
#define mmPLL_MACRO_CNTL_RESERVED7                                              \
  0x1707
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED7                                    \
  0x1707
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED7                                    \
  0x1731
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED7                                    \
  0x175b
#define mmPLL_MACRO_CNTL_RESERVED8                                              \
  0x1708
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED8                                    \
  0x1708
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED8                                    \
  0x1732
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED8                                    \
  0x175c
#define mmPLL_MACRO_CNTL_RESERVED9                                              \
  0x1709
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED9                                    \
  0x1709
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED9                                    \
  0x1733
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED9                                    \
  0x175d
#define mmPLL_MACRO_CNTL_RESERVED10                                             \
  0x170a
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED10                                   \
  0x170a
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED10                                   \
  0x1734
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED10                                   \
  0x175e
#define mmPLL_MACRO_CNTL_RESERVED11                                             \
  0x170b
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED11                                   \
  0x170b
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED11                                   \
  0x1735
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED11                                   \
  0x175f
#define mmPLL_MACRO_CNTL_RESERVED12                                             \
  0x170c
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED12                                   \
  0x170c
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED12                                   \
  0x1736
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED12                                   \
  0x1760
#define mmPLL_MACRO_CNTL_RESERVED13                                             \
  0x170d
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED13                                   \
  0x170d
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED13                                   \
  0x1737
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED13                                   \
  0x1761
#define mmPLL_MACRO_CNTL_RESERVED14                                             \
  0x170e
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED14                                   \
  0x170e
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED14                                   \
  0x1738
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED14                                   \
  0x1762
#define mmPLL_MACRO_CNTL_RESERVED15                                             \
  0x170f
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED15                                   \
  0x170f
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED15                                   \
  0x1739
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED15                                   \
  0x1763
#define mmPLL_MACRO_CNTL_RESERVED16                                             \
  0x1710
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED16                                   \
  0x1710
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED16                                   \
  0x173a
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED16                                   \
  0x1764
#define mmPLL_MACRO_CNTL_RESERVED17                                             \
  0x1711
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED17                                   \
  0x1711
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED17                                   \
  0x173b
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED17                                   \
  0x1765
#define mmPLL_MACRO_CNTL_RESERVED18                                             \
  0x1712
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED18                                   \
  0x1712
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED18                                   \
  0x173c
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED18                                   \
  0x1766
#define mmPLL_MACRO_CNTL_RESERVED19                                             \
  0x1713
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED19                                   \
  0x1713
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED19                                   \
  0x173d
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED19                                   \
  0x1767
#define mmPLL_MACRO_CNTL_RESERVED20                                             \
  0x1714
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED20                                   \
  0x1714
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED20                                   \
  0x173e
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED20                                   \
  0x1768
#define mmPLL_MACRO_CNTL_RESERVED21                                             \
  0x1715
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED21                                   \
  0x1715
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED21                                   \
  0x173f
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED21                                   \
  0x1769
#define mmPLL_MACRO_CNTL_RESERVED22                                             \
  0x1716
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED22                                   \
  0x1716
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED22                                   \
  0x1740
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED22                                   \
  0x176a
#define mmPLL_MACRO_CNTL_RESERVED23                                             \
  0x1717
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED23                                   \
  0x1717
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED23                                   \
  0x1741
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED23                                   \
  0x176b
#define mmPLL_MACRO_CNTL_RESERVED24                                             \
  0x1718
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED24                                   \
  0x1718
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED24                                   \
  0x1742
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED24                                   \
  0x176c
#define mmPLL_MACRO_CNTL_RESERVED25                                             \
  0x1719
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED25                                   \
  0x1719
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED25                                   \
  0x1743
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED25                                   \
  0x176d
#define mmPLL_MACRO_CNTL_RESERVED26                                             \
  0x171a
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED26                                   \
  0x171a
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED26                                   \
  0x1744
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED26                                   \
  0x176e
#define mmPLL_MACRO_CNTL_RESERVED27                                             \
  0x171b
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED27                                   \
  0x171b
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED27                                   \
  0x1745
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED27                                   \
  0x176f
#define mmPLL_MACRO_CNTL_RESERVED28                                             \
  0x171c
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED28                                   \
  0x171c
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED28                                   \
  0x1746
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED28                                   \
  0x1770
#define mmPLL_MACRO_CNTL_RESERVED29                                             \
  0x171d
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED29                                   \
  0x171d
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED29                                   \
  0x1747
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED29                                   \
  0x1771
#define mmPLL_MACRO_CNTL_RESERVED30                                             \
  0x171e
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED30                                   \
  0x171e
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED30                                   \
  0x1748
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED30                                   \
  0x1772
#define mmPLL_MACRO_CNTL_RESERVED31                                             \
  0x171f
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED31                                   \
  0x171f
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED31                                   \
  0x1749
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED31                                   \
  0x1773
#define mmPLL_MACRO_CNTL_RESERVED32                                             \
  0x1720
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED32                                   \
  0x1720
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED32                                   \
  0x174a
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED32                                   \
  0x1774
#define mmPLL_MACRO_CNTL_RESERVED33                                             \
  0x1721
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED33                                   \
  0x1721
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED33                                   \
  0x174b
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED33                                   \
  0x1775
#define mmPLL_MACRO_CNTL_RESERVED34                                             \
  0x1722
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED34                                   \
  0x1722
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED34                                   \
  0x174c
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED34                                   \
  0x1776
#define mmPLL_MACRO_CNTL_RESERVED35                                             \
  0x1723
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED35                                   \
  0x1723
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED35                                   \
  0x174d
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED35                                   \
  0x1777
#define mmPLL_MACRO_CNTL_RESERVED36                                             \
  0x1724
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED36                                   \
  0x1724
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED36                                   \
  0x174e
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED36                                   \
  0x1778
#define mmPLL_MACRO_CNTL_RESERVED37                                             \
  0x1725
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED37                                   \
  0x1725
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED37                                   \
  0x174f
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED37                                   \
  0x1779
#define mmPLL_MACRO_CNTL_RESERVED38                                             \
  0x1726
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED38                                   \
  0x1726
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED38                                   \
  0x1750
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED38                                   \
  0x177a
#define mmPLL_MACRO_CNTL_RESERVED39                                             \
  0x1727
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED39                                   \
  0x1727
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED39                                   \
  0x1751
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED39                                   \
  0x177b
#define mmPLL_MACRO_CNTL_RESERVED40                                             \
  0x1728
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED40                                   \
  0x1728
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED40                                   \
  0x1752
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED40                                   \
  0x177c
#define mmPLL_MACRO_CNTL_RESERVED41                                             \
  0x1729
#define mmDCCG_PLL0_PLL_MACRO_CNTL_RESERVED41                                   \
  0x1729
#define mmDCCG_PLL1_PLL_MACRO_CNTL_RESERVED41                                   \
  0x1753
#define mmDCCG_PLL2_PLL_MACRO_CNTL_RESERVED41                                   \
  0x177d
#define mmDENTIST_DISPCLK_CNTL                                                  \
  0x124
#define mmDCDEBUG_BUS_CLK1_SEL                                                  \
  0x16c4
#define mmDCDEBUG_BUS_CLK2_SEL                                                  \
  0x16c5
#define mmDCDEBUG_BUS_CLK3_SEL                                                  \
  0x16c6
#define mmDCDEBUG_BUS_CLK4_SEL                                                  \
  0x16c7
#define mmDCDEBUG_BUS_CLK5_SEL                                                  \
  0x16c8
#define mmDCDEBUG_OUT_PIN_OVERRIDE                                              \
  0x16c9
#define mmDCDEBUG_OUT_CNTL                                                      \
  0x16ca
#define mmDCDEBUG_OUT_DATA                                                      \
  0x16cb
#define mmDMIF_CONTROL                                                          \
  0x2f6
#define mmDMIF_STATUS                                                           \
  0x2f7
#define mmDMIFV_STATUS                                                          \
  0x2f5
#define mmDMIF_HW_DEBUG                                                         \
  0x2f8
#define mmDMIF_ARBITRATION_CONTROL                                              \
  0x2f9
#define mmPIPE0_ARBITRATION_CONTROL3                                            \
  0x2fa
#define mmPIPE1_ARBITRATION_CONTROL3                                            \
  0x2fb
#define mmPIPE2_ARBITRATION_CONTROL3                                            \
  0x2fc
#define mmPIPE3_ARBITRATION_CONTROL3                                            \
  0x2fd
#define mmPIPE4_ARBITRATION_CONTROL3                                            \
  0x2fe
#define mmPIPE5_ARBITRATION_CONTROL3                                            \
  0x2ff
#define mmPIPE6_ARBITRATION_CONTROL3                                            \
  0x32a
#define mmPIPE7_ARBITRATION_CONTROL3                                            \
  0x32b
#define mmDMIF_P_VMID                                                           \
  0x300
#define mmDMIF_URG_OVERRIDE                                                     \
  0x329
#define mmDMIF_TEST_DEBUG_INDEX                                                 \
  0x301
#define mmDMIF_TEST_DEBUG_DATA                                                  \
  0x302
#define ixDMIF_DEBUG02_CORE0                                                    \
  0x2
#define ixDMIF_DEBUG02_CORE1                                                    \
  0xa
#define mmDMIF_ADDR_CALC                                                        \
  0x303
#define mmDMIF_STATUS2                                                          \
  0x304
#define mmPIPE0_MAX_REQUESTS                                                    \
  0x305
#define mmPIPE1_MAX_REQUESTS                                                    \
  0x306
#define mmPIPE2_MAX_REQUESTS                                                    \
  0x307
#define mmPIPE3_MAX_REQUESTS                                                    \
  0x308
#define mmPIPE4_MAX_REQUESTS                                                    \
  0x309
#define mmPIPE5_MAX_REQUESTS                                                    \
  0x30a
#define mmPIPE6_MAX_REQUESTS                                                    \
  0x32c
#define mmPIPE7_MAX_REQUESTS                                                    \
  0x32d
#define mmDVMM_REG_RD_STATUS                                                    \
  0x32e
#define mmDVMM_REG_RD_DATA                                                      \
  0x32f
#define mmDVMM_PTE_REQ                                                          \
  0x330
#define mmDVMM_CNTL                                                             \
  0x331
#define mmDVMM_FAULT_STATUS                                                     \
  0x332
#define mmDVMM_FAULT_ADDR                                                       \
  0x333
#define mmLOW_POWER_TILING_CONTROL                                              \
  0x30b
#define mmMCIF_CONTROL                                                          \
  0x30c
#define mmMCIF_WRITE_COMBINE_CONTROL                                            \
  0x30d
#define mmMCIF_TEST_DEBUG_INDEX                                                 \
  0x30e
#define mmMCIF_TEST_DEBUG_DATA                                                  \
  0x30f
#define ixIDDCCIF02_DBG_DCCIF_C                                                 \
  0x9
#define ixIDDCCIF04_DBG_DCCIF_E                                                 \
  0xb
#define ixIDDCCIF05_DBG_DCCIF_F                                                 \
  0xc
#define mmMCIF_VMID                                                             \
  0x310
#define mmMCIF_MEM_CONTROL                                                      \
  0x311
#define mmCC_DC_PIPE_DIS                                                        \
  0x312
#define mmMC_DC_INTERFACE_NACK_STATUS                                           \
  0x313
#define mmRBBMIF_TIMEOUT                                                        \
  0x314
#define mmRBBMIF_STATUS                                                         \
  0x315
#define mmRBBMIF_TIMEOUT_DIS                                                    \
  0x316
#define mmRBBMIF_STATUS_FLAG                                                    \
  0x327
#define mmDCI_MEM_PWR_STATUS                                                    \
  0x317
#define mmDCI_MEM_PWR_STATUS2                                                   \
  0x318
#define mmDCI_MEM_PWR_STATUS3                                                   \
  0x33d
#define mmDCI_CLK_CNTL                                                          \
  0x319
#define mmDCI_CLK_RAMP_CNTL                                                     \
  0x31a
#define mmDCI_MEM_PWR_CNTL                                                      \
  0x31b
#define mmDCI_MEM_PWR_CNTL2                                                     \
  0x31c
#define mmDCI_MEM_PWR_CNTL3                                                     \
  0x31d
#define mmDCI_MEM_PWR_CNTL4                                                     \
  0x33b
#define mmDVMM_PTE_PGMEM_CONTROL                                                \
  0x335
#define mmDVMM_PTE_PGMEM_STATE                                                  \
  0x336
#define mmDCI_SOFT_RESET                                                        \
  0x328
#define mmDCI_MISC                                                              \
  0x33c
#define mmDCI_TEST_DEBUG_INDEX                                                  \
  0x31e
#define mmDCI_TEST_DEBUG_DATA                                                   \
  0x31f
#define mmDCI_DEBUG_CONFIG                                                      \
  0x320
#define mmPIPE0_DMIF_BUFFER_CONTROL                                             \
  0x321
#define mmPIPE1_DMIF_BUFFER_CONTROL                                             \
  0x322
#define mmPIPE2_DMIF_BUFFER_CONTROL                                             \
  0x323
#define mmPIPE3_DMIF_BUFFER_CONTROL                                             \
  0x324
#define mmPIPE4_DMIF_BUFFER_CONTROL                                             \
  0x325
#define mmPIPE5_DMIF_BUFFER_CONTROL                                             \
  0x326
#define mmDC_GENERICA                                                           \
  0x4800
#define mmDC_GENERICB                                                           \
  0x4801
#define mmDC_PAD_EXTERN_SIG                                                     \
  0x4802
#define mmDC_REF_CLK_CNTL                                                       \
  0x4803
#define mmDC_GPIO_DEBUG                                                         \
  0x4804
#define mmUNIPHYA_LINK_CNTL                                                     \
  0x4805
#define mmUNIPHYB_LINK_CNTL                                                     \
  0x4807
#define mmUNIPHYC_LINK_CNTL                                                     \
  0x4809
#define mmUNIPHYD_LINK_CNTL                                                     \
  0x480b
#define mmUNIPHYE_LINK_CNTL                                                     \
  0x480d
#define mmUNIPHYF_LINK_CNTL                                                     \
  0x480f
#define mmUNIPHYG_LINK_CNTL                                                     \
  0x4811
#define mmUNIPHYA_CHANNEL_XBAR_CNTL                                             \
  0x4806
#define mmUNIPHYB_CHANNEL_XBAR_CNTL                                             \
  0x4808
#define mmUNIPHYC_CHANNEL_XBAR_CNTL                                             \
  0x480a
#define mmUNIPHYD_CHANNEL_XBAR_CNTL                                             \
  0x480c
#define mmUNIPHYE_CHANNEL_XBAR_CNTL                                             \
  0x480e
#define mmUNIPHYF_CHANNEL_XBAR_CNTL                                             \
  0x4810
#define mmUNIPHYG_CHANNEL_XBAR_CNTL                                             \
  0x4812
#define mmUNIPHYLPA_LINK_CNTL                                                   \
  0x4847
#define mmUNIPHYLPB_LINK_CNTL                                                   \
  0x4848
#define mmUNIPHYLPA_CHANNEL_XBAR_CNTL                                           \
  0x4849
#define mmUNIPHYLPB_CHANNEL_XBAR_CNTL                                           \
  0x484a
#define mmUNIPHY_IMPCAL_LINKA                                                   \
  0x4838
#define mmUNIPHY_IMPCAL_LINKB                                                   \
  0x4839
#define mmUNIPHY_IMPCAL_LINKC                                                   \
  0x483f
#define mmUNIPHY_IMPCAL_LINKD                                                   \
  0x4840
#define mmUNIPHY_IMPCAL_LINKE                                                   \
  0x4843
#define mmUNIPHY_IMPCAL_LINKF                                                   \
  0x4844
#define mmUNIPHY_IMPCAL_PERIOD                                                  \
  0x483a
#define mmAUXP_IMPCAL                                                           \
  0x483b
#define mmAUXN_IMPCAL                                                           \
  0x483c
#define mmDCIO_IMPCAL_CNTL                                                      \
  0x483d
#define mmUNIPHY_IMPCAL_PSW_AB                                                  \
  0x483e
#define mmDCIO_IMPCAL_CNTL_CD                                                   \
  0x4841
#define mmUNIPHY_IMPCAL_PSW_CD                                                  \
  0x4842
#define mmDCIO_IMPCAL_CNTL_EF                                                   \
  0x4845
#define mmUNIPHY_IMPCAL_PSW_EF                                                  \
  0x4846
#define mmDCIO_WRCMD_DELAY                                                      \
  0x4816
#define mmDC_PINSTRAPS                                                          \
  0x4818
#define mmDC_DVODATA_CONFIG                                                     \
  0x481a
#define mmLVTMA_PWRSEQ_CNTL                                                     \
  0x481b
#define mmLVTMA_PWRSEQ_STATE                                                    \
  0x481c
#define mmLVTMA_PWRSEQ_REF_DIV                                                  \
  0x481d
#define mmLVTMA_PWRSEQ_DELAY1                                                   \
  0x481e
#define mmLVTMA_PWRSEQ_DELAY2                                                   \
  0x481f
#define mmBL_PWM_CNTL                                                           \
  0x4820
#define mmBL_PWM_CNTL2                                                          \
  0x4821
#define mmBL_PWM_PERIOD_CNTL                                                    \
  0x4822
#define mmBL_PWM_GRP1_REG_LOCK                                                  \
  0x4823
#define mmDCIO_GSL_GENLK_PAD_CNTL                                               \
  0x4824
#define mmDCIO_GSL_SWAPLOCK_PAD_CNTL                                            \
  0x4825
#define mmDCIO_GSL0_CNTL                                                        \
  0x4826
#define mmDCIO_GSL1_CNTL                                                        \
  0x4827
#define mmDCIO_GSL2_CNTL                                                        \
  0x4828
#define mmDC_GPU_TIMER_START_POSITION_V_UPDATE                                  \
  0x4829
#define mmDC_GPU_TIMER_START_POSITION_P_FLIP                                    \
  0x482a
#define mmDC_GPU_TIMER_READ                                                     \
  0x482b
#define mmDC_GPU_TIMER_READ_CNTL                                                \
  0x482c
#define mmDCIO_CLOCK_CNTL                                                       \
  0x482d
#define mmDCIO_DEBUG                                                            \
  0x482f
#define mmDCO_DCFE_EXT_VSYNC_CNTL                                               \
  0x4830
#define mmDBG_OUT_CNTL                                                          \
  0x4834
#define mmDCIO_DEBUG_CONFIG                                                     \
  0x4835
#define mmDCIO_SOFT_RESET                                                       \
  0x4836
#define mmDCIO_DPHY_SEL                                                         \
  0x4837
#define mmDCIO_DPCS_TX_INTERRUPT                                                \
  0x484b
#define mmDCIO_DPCS_RX_INTERRUPT                                                \
  0x484c
#define mmDCIO_SEMAPHORE0                                                       \
  0x484d
#define mmDCIO_SEMAPHORE1                                                       \
  0x484e
#define mmDCIO_SEMAPHORE2                                                       \
  0x484f
#define mmDCIO_SEMAPHORE3                                                       \
  0x4850
#define mmDCIO_SEMAPHORE4                                                       \
  0x4851
#define mmDCIO_SEMAPHORE5                                                       \
  0x4852
#define mmDCIO_SEMAPHORE6                                                       \
  0x4853
#define mmDCIO_SEMAPHORE7                                                       \
  0x4854
#define mmDCIO_TEST_DEBUG_INDEX                                                 \
  0x4831
#define mmDCIO_TEST_DEBUG_DATA                                                  \
  0x4832
#define ixDCIO_DEBUG1                                                           \
  0x1
#define ixDCIO_DEBUG2                                                           \
  0x2
#define ixDCIO_DEBUG3                                                           \
  0x3
#define ixDCIO_DEBUG4                                                           \
  0x4
#define ixDCIO_DEBUG5                                                           \
  0x5
#define ixDCIO_DEBUG6                                                           \
  0x6
#define ixDCIO_DEBUG7                                                           \
  0x7
#define ixDCIO_DEBUG8                                                           \
  0x8
#define ixDCIO_DEBUG9                                                           \
  0x9
#define ixDCIO_DEBUGA                                                           \
  0xa
#define ixDCIO_DEBUGB                                                           \
  0xb
#define ixDCIO_DEBUGC                                                           \
  0xc
#define ixDCIO_DEBUGD                                                           \
  0xd
#define ixDCIO_DEBUGE                                                           \
  0xe
#define ixDCIO_DEBUGF                                                           \
  0xf
#define ixDCIO_DEBUG10                                                          \
  0x10
#define ixDCIO_DEBUG11                                                          \
  0x11
#define ixDCIO_DEBUG12                                                          \
  0x12
#define ixDCIO_DEBUG13                                                          \
  0x13
#define ixDCIO_DEBUG14                                                          \
  0x14
#define ixDCIO_DEBUG15                                                          \
  0x15
#define ixDCIO_DEBUG16                                                          \
  0x16
#define ixDCIO_DEBUG17                                                          \
  0x17
#define ixDCIO_DEBUG18                                                          \
  0x18
#define ixDCIO_DEBUG19                                                          \
  0x19
#define ixDCIO_DEBUG1A                                                          \
  0x1a
#define ixDCIO_DEBUG1B                                                          \
  0x1b
#define ixDCIO_DEBUG1C                                                          \
  0x1c
#define ixDCIO_DEBUG1D                                                          \
  0x1d
#define ixDCIO_DEBUG1E                                                          \
  0x1e
#define ixDCIO_DEBUG1F                                                          \
  0x1f
#define ixDCIO_DEBUG20                                                          \
  0x20
#define ixDCIO_DEBUG21                                                          \
  0x21
#define ixDCIO_DEBUG22                                                          \
  0x22
#define ixDCIO_DEBUG23                                                          \
  0x23
#define ixDCIO_DEBUG24                                                          \
  0x24
#define ixDCIO_DEBUG25                                                          \
  0x25
#define ixDCIO_DEBUG26                                                          \
  0x26
#define ixDCIO_DEBUG27                                                          \
  0x27
#define ixDCIO_DEBUG28                                                          \
  0x28
#define ixDCIO_DEBUG_ID                                                         \
  0x0
#define mmDC_GPIO_GENERIC_MASK                                                  \
  0x4860
#define mmDC_GPIO_GENERIC_A                                                     \
  0x4861
#define mmDC_GPIO_GENERIC_EN                                                    \
  0x4862
#define mmDC_GPIO_GENERIC_Y                                                     \
  0x4863
#define mmDC_GPIO_DDC1_MASK                                                     \
  0x4868
#define mmDC_GPIO_DDC1_A                                                        \
  0x4869
#define mmDC_GPIO_DDC1_EN                                                       \
  0x486a
#define mmDC_GPIO_DDC1_Y                                                        \
  0x486b
#define mmDC_GPIO_DDC2_MASK                                                     \
  0x486c
#define mmDC_GPIO_DDC2_A                                                        \
  0x486d
#define mmDC_GPIO_DDC2_EN                                                       \
  0x486e
#define mmDC_GPIO_DDC2_Y                                                        \
  0x486f
#define mmDC_GPIO_DDC3_MASK                                                     \
  0x4870
#define mmDC_GPIO_DDC3_A                                                        \
  0x4871
#define mmDC_GPIO_DDC3_EN                                                       \
  0x4872
#define mmDC_GPIO_DDC3_Y                                                        \
  0x4873
#define mmDC_GPIO_DDC4_MASK                                                     \
  0x4874
#define mmDC_GPIO_DDC4_A                                                        \
  0x4875
#define mmDC_GPIO_DDC4_EN                                                       \
  0x4876
#define mmDC_GPIO_DDC4_Y                                                        \
  0x4877
#define mmDC_GPIO_DDC5_MASK                                                     \
  0x4878
#define mmDC_GPIO_DDC5_A                                                        \
  0x4879
#define mmDC_GPIO_DDC5_EN                                                       \
  0x487a
#define mmDC_GPIO_DDC5_Y                                                        \
  0x487b
#define mmDC_GPIO_DDC6_MASK                                                     \
  0x487c
#define mmDC_GPIO_DDC6_A                                                        \
  0x487d
#define mmDC_GPIO_DDC6_EN                                                       \
  0x487e
#define mmDC_GPIO_DDC6_Y                                                        \
  0x487f
#define mmDC_GPIO_DDCVGA_MASK                                                   \
  0x4880
#define mmDC_GPIO_DDCVGA_A                                                      \
  0x4881
#define mmDC_GPIO_DDCVGA_EN                                                     \
  0x4882
#define mmDC_GPIO_DDCVGA_Y                                                      \
  0x4883
#define mmDC_GPIO_SYNCA_MASK                                                    \
  0x4884
#define mmDC_GPIO_SYNCA_A                                                       \
  0x4885
#define mmDC_GPIO_SYNCA_EN                                                      \
  0x4886
#define mmDC_GPIO_SYNCA_Y                                                       \
  0x4887
#define mmDC_GPIO_GENLK_MASK                                                    \
  0x4888
#define mmDC_GPIO_GENLK_A                                                       \
  0x4889
#define mmDC_GPIO_GENLK_EN                                                      \
  0x488a
#define mmDC_GPIO_GENLK_Y                                                       \
  0x488b
#define mmDC_GPIO_HPD_MASK                                                      \
  0x488c
#define mmDC_GPIO_HPD_A                                                         \
  0x488d
#define mmDC_GPIO_HPD_EN                                                        \
  0x488e
#define mmDC_GPIO_HPD_Y                                                         \
  0x488f
#define mmDC_GPIO_PWRSEQ_MASK                                                   \
  0x4890
#define mmDC_GPIO_PWRSEQ_A                                                      \
  0x4891
#define mmDC_GPIO_PWRSEQ_EN                                                     \
  0x4892
#define mmDC_GPIO_PWRSEQ_Y                                                      \
  0x4893
#define mmDC_GPIO_PAD_STRENGTH_1                                                \
  0x4894
#define mmDC_GPIO_PAD_STRENGTH_2                                                \
  0x4895
#define mmPHY_AUX_CNTL                                                          \
  0x4897
#define mmDC_GPIO_I2CPAD_A                                                      \
  0x4899
#define mmDC_GPIO_I2CPAD_EN                                                     \
  0x489a
#define mmDC_GPIO_I2CPAD_Y                                                      \
  0x489b
#define mmDC_GPIO_I2CPAD_STRENGTH                                               \
  0x489c
#define mmDVO_VREF_CONTROL                                                      \
  0x489e
#define mmDVO_SKEW_ADJUST                                                       \
  0x489f
#define mmDC_GPIO_RECEIVER_EN0                                                  \
  0x48a0
#define mmDC_GPIO_RECEIVER_EN1                                                  \
  0x48a1
#define mmDC_GPIO_I2S_SPDIF_MASK                                                \
  0x48a8
#define mmDC_GPIO_I2S_SPDIF_A                                                   \
  0x48a9
#define mmDC_GPIO_I2S_SPDIF_EN                                                  \
  0x48aa
#define mmDC_GPIO_I2S_SPDIF_Y                                                   \
  0x48ab
#define mmDC_GPIO_I2S_SPDIF_STRENGTH                                            \
  0x48ac
#define mmDC_GPIO_TX12_EN                                                       \
  0x48ad
#define mmDC_GPIO_AUX_CTRL_0                                                    \
  0x48ae
#define mmDC_GPIO_AUX_CTRL_1                                                    \
  0x48af
#define mmDC_GPIO_AUX_CTRL_2                                                    \
  0x48b0
#define mmDC_GPIO_HPD_CTRL_0                                                    \
  0x48b1
#define mmDC_GPIO_HPD_CTRL_1                                                    \
  0x48b2
#define mmDAC_MACRO_CNTL_RESERVED0                                              \
  0x48b8
#define mmDAC_MACRO_CNTL_RESERVED1                                              \
  0x48b9
#define mmDAC_MACRO_CNTL_RESERVED2                                              \
  0x48ba
#define mmDAC_MACRO_CNTL_RESERVED3                                              \
  0x48bb
#define mmUNIPHY_MACRO_CNTL_RESERVED0                                           \
  0x48c0
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x48c0
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x4960
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9a00
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9aa0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9b40
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9be0
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9c80
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED0                              \
  0x9d20
#define mmUNIPHY_MACRO_CNTL_RESERVED1                                           \
  0x48c1
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x48c1
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x4961
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9a01
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9aa1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9b41
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9be1
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9c81
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED1                              \
  0x9d21
#define mmUNIPHY_MACRO_CNTL_RESERVED2                                           \
  0x48c2
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x48c2
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x4962
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9a02
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9aa2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9b42
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9be2
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9c82
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED2                              \
  0x9d22
#define mmUNIPHY_MACRO_CNTL_RESERVED3                                           \
  0x48c3
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x48c3
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x4963
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9a03
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9aa3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9b43
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9be3
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9c83
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED3                              \
  0x9d23
#define mmUNIPHY_MACRO_CNTL_RESERVED4                                           \
  0x48c4
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x48c4
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x4964
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9a04
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9aa4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9b44
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9be4
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9c84
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED4                              \
  0x9d24
#define mmUNIPHY_MACRO_CNTL_RESERVED5                                           \
  0x48c5
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x48c5
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x4965
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9a05
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9aa5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9b45
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9be5
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9c85
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED5                              \
  0x9d25
#define mmUNIPHY_MACRO_CNTL_RESERVED6                                           \
  0x48c6
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x48c6
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x4966
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9a06
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9aa6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9b46
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9be6
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9c86
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED6                              \
  0x9d26
#define mmUNIPHY_MACRO_CNTL_RESERVED7                                           \
  0x48c7
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x48c7
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x4967
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9a07
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9aa7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9b47
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9be7
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9c87
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED7                              \
  0x9d27
#define mmUNIPHY_MACRO_CNTL_RESERVED8                                           \
  0x48c8
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x48c8
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x4968
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9a08
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9aa8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9b48
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9be8
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9c88
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED8                              \
  0x9d28
#define mmUNIPHY_MACRO_CNTL_RESERVED9                                           \
  0x48c9
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x48c9
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x4969
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9a09
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9aa9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9b49
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9be9
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9c89
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED9                              \
  0x9d29
#define mmUNIPHY_MACRO_CNTL_RESERVED10                                          \
  0x48ca
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x48ca
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x496a
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9a0a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9aaa
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9b4a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9bea
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9c8a
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED10                             \
  0x9d2a
#define mmUNIPHY_MACRO_CNTL_RESERVED11                                          \
  0x48cb
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x48cb
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x496b
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9a0b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9aab
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9b4b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9beb
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9c8b
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED11                             \
  0x9d2b
#define mmUNIPHY_MACRO_CNTL_RESERVED12                                          \
  0x48cc
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x48cc
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x496c
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9a0c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9aac
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9b4c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9bec
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9c8c
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED12                             \
  0x9d2c
#define mmUNIPHY_MACRO_CNTL_RESERVED13                                          \
  0x48cd
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x48cd
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x496d
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9a0d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9aad
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9b4d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9bed
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9c8d
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED13                             \
  0x9d2d
#define mmUNIPHY_MACRO_CNTL_RESERVED14                                          \
  0x48ce
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x48ce
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x496e
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9a0e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9aae
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9b4e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9bee
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9c8e
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED14                             \
  0x9d2e
#define mmUNIPHY_MACRO_CNTL_RESERVED15                                          \
  0x48cf
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x48cf
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x496f
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9a0f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9aaf
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9b4f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9bef
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9c8f
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED15                             \
  0x9d2f
#define mmUNIPHY_MACRO_CNTL_RESERVED16                                          \
  0x48d0
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x48d0
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x4970
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9a10
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9ab0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9b50
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9bf0
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9c90
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED16                             \
  0x9d30
#define mmUNIPHY_MACRO_CNTL_RESERVED17                                          \
  0x48d1
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x48d1
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x4971
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9a11
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9ab1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9b51
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9bf1
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9c91
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED17                             \
  0x9d31
#define mmUNIPHY_MACRO_CNTL_RESERVED18                                          \
  0x48d2
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x48d2
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x4972
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9a12
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9ab2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9b52
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9bf2
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9c92
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED18                             \
  0x9d32
#define mmUNIPHY_MACRO_CNTL_RESERVED19                                          \
  0x48d3
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x48d3
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x4973
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9a13
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9ab3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9b53
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9bf3
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9c93
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED19                             \
  0x9d33
#define mmUNIPHY_MACRO_CNTL_RESERVED20                                          \
  0x48d4
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x48d4
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x4974
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9a14
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9ab4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9b54
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9bf4
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9c94
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED20                             \
  0x9d34
#define mmUNIPHY_MACRO_CNTL_RESERVED21                                          \
  0x48d5
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x48d5
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x4975
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9a15
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9ab5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9b55
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9bf5
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9c95
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED21                             \
  0x9d35
#define mmUNIPHY_MACRO_CNTL_RESERVED22                                          \
  0x48d6
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x48d6
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x4976
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9a16
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9ab6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9b56
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9bf6
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9c96
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED22                             \
  0x9d36
#define mmUNIPHY_MACRO_CNTL_RESERVED23                                          \
  0x48d7
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x48d7
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x4977
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9a17
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9ab7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9b57
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9bf7
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9c97
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED23                             \
  0x9d37
#define mmUNIPHY_MACRO_CNTL_RESERVED24                                          \
  0x48d8
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x48d8
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x4978
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9a18
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9ab8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9b58
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9bf8
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9c98
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED24                             \
  0x9d38
#define mmUNIPHY_MACRO_CNTL_RESERVED25                                          \
  0x48d9
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x48d9
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x4979
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9a19
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9ab9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9b59
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9bf9
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9c99
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED25                             \
  0x9d39
#define mmUNIPHY_MACRO_CNTL_RESERVED26                                          \
  0x48da
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x48da
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x497a
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9a1a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9aba
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9b5a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9bfa
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9c9a
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED26                             \
  0x9d3a
#define mmUNIPHY_MACRO_CNTL_RESERVED27                                          \
  0x48db
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x48db
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x497b
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9a1b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9abb
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9b5b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9bfb
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9c9b
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED27                             \
  0x9d3b
#define mmUNIPHY_MACRO_CNTL_RESERVED28                                          \
  0x48dc
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x48dc
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x497c
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9a1c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9abc
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9b5c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9bfc
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9c9c
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED28                             \
  0x9d3c
#define mmUNIPHY_MACRO_CNTL_RESERVED29                                          \
  0x48dd
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x48dd
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x497d
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9a1d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9abd
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9b5d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9bfd
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9c9d
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED29                             \
  0x9d3d
#define mmUNIPHY_MACRO_CNTL_RESERVED30                                          \
  0x48de
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x48de
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x497e
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9a1e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9abe
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9b5e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9bfe
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9c9e
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED30                             \
  0x9d3e
#define mmUNIPHY_MACRO_CNTL_RESERVED31                                          \
  0x48df
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x48df
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x497f
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9a1f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9abf
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9b5f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9bff
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9c9f
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED31                             \
  0x9d3f
#define mmUNIPHY_MACRO_CNTL_RESERVED32                                          \
  0x48e0
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x48e0
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x4980
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9a20
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9ac0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9b60
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9c00
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9ca0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED32                             \
  0x9d40
#define mmUNIPHY_MACRO_CNTL_RESERVED33                                          \
  0x48e1
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x48e1
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x4981
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9a21
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9ac1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9b61
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9c01
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9ca1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED33                             \
  0x9d41
#define mmUNIPHY_MACRO_CNTL_RESERVED34                                          \
  0x48e2
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x48e2
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x4982
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9a22
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9ac2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9b62
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9c02
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9ca2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED34                             \
  0x9d42
#define mmUNIPHY_MACRO_CNTL_RESERVED35                                          \
  0x48e3
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x48e3
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x4983
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9a23
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9ac3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9b63
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9c03
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9ca3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED35                             \
  0x9d43
#define mmUNIPHY_MACRO_CNTL_RESERVED36                                          \
  0x48e4
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x48e4
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x4984
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9a24
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9ac4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9b64
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9c04
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9ca4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED36                             \
  0x9d44
#define mmUNIPHY_MACRO_CNTL_RESERVED37                                          \
  0x48e5
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x48e5
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x4985
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9a25
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9ac5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9b65
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9c05
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9ca5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED37                             \
  0x9d45
#define mmUNIPHY_MACRO_CNTL_RESERVED38                                          \
  0x48e6
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x48e6
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x4986
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9a26
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9ac6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9b66
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9c06
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9ca6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED38                             \
  0x9d46
#define mmUNIPHY_MACRO_CNTL_RESERVED39                                          \
  0x48e7
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x48e7
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x4987
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9a27
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9ac7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9b67
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9c07
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9ca7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED39                             \
  0x9d47
#define mmUNIPHY_MACRO_CNTL_RESERVED40                                          \
  0x48e8
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x48e8
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x4988
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9a28
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9ac8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9b68
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9c08
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9ca8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED40                             \
  0x9d48
#define mmUNIPHY_MACRO_CNTL_RESERVED41                                          \
  0x48e9
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x48e9
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x4989
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9a29
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9ac9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9b69
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9c09
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9ca9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED41                             \
  0x9d49
#define mmUNIPHY_MACRO_CNTL_RESERVED42                                          \
  0x48ea
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x48ea
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x498a
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9a2a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9aca
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9b6a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9c0a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9caa
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED42                             \
  0x9d4a
#define mmUNIPHY_MACRO_CNTL_RESERVED43                                          \
  0x48eb
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x48eb
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x498b
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9a2b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9acb
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9b6b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9c0b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9cab
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED43                             \
  0x9d4b
#define mmUNIPHY_MACRO_CNTL_RESERVED44                                          \
  0x48ec
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x48ec
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x498c
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9a2c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9acc
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9b6c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9c0c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9cac
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED44                             \
  0x9d4c
#define mmUNIPHY_MACRO_CNTL_RESERVED45                                          \
  0x48ed
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x48ed
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x498d
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9a2d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9acd
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9b6d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9c0d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9cad
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED45                             \
  0x9d4d
#define mmUNIPHY_MACRO_CNTL_RESERVED46                                          \
  0x48ee
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x48ee
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x498e
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9a2e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9ace
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9b6e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9c0e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9cae
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED46                             \
  0x9d4e
#define mmUNIPHY_MACRO_CNTL_RESERVED47                                          \
  0x48ef
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x48ef
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x498f
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9a2f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9acf
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9b6f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9c0f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9caf
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED47                             \
  0x9d4f
#define mmUNIPHY_MACRO_CNTL_RESERVED48                                          \
  0x48f0
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x48f0
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x4990
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9a30
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9ad0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9b70
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9c10
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9cb0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED48                             \
  0x9d50
#define mmUNIPHY_MACRO_CNTL_RESERVED49                                          \
  0x48f1
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x48f1
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x4991
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9a31
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9ad1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9b71
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9c11
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9cb1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED49                             \
  0x9d51
#define mmUNIPHY_MACRO_CNTL_RESERVED50                                          \
  0x48f2
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x48f2
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x4992
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9a32
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9ad2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9b72
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9c12
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9cb2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED50                             \
  0x9d52
#define mmUNIPHY_MACRO_CNTL_RESERVED51                                          \
  0x48f3
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x48f3
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x4993
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9a33
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9ad3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9b73
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9c13
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9cb3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED51                             \
  0x9d53
#define mmUNIPHY_MACRO_CNTL_RESERVED52                                          \
  0x48f4
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x48f4
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x4994
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9a34
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9ad4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9b74
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9c14
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9cb4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED52                             \
  0x9d54
#define mmUNIPHY_MACRO_CNTL_RESERVED53                                          \
  0x48f5
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x48f5
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x4995
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9a35
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9ad5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9b75
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9c15
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9cb5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED53                             \
  0x9d55
#define mmUNIPHY_MACRO_CNTL_RESERVED54                                          \
  0x48f6
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x48f6
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x4996
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9a36
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9ad6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9b76
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9c16
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9cb6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED54                             \
  0x9d56
#define mmUNIPHY_MACRO_CNTL_RESERVED55                                          \
  0x48f7
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x48f7
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x4997
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9a37
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9ad7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9b77
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9c17
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9cb7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED55                             \
  0x9d57
#define mmUNIPHY_MACRO_CNTL_RESERVED56                                          \
  0x48f8
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x48f8
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x4998
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9a38
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9ad8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9b78
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9c18
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9cb8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED56                             \
  0x9d58
#define mmUNIPHY_MACRO_CNTL_RESERVED57                                          \
  0x48f9
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x48f9
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x4999
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9a39
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9ad9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9b79
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9c19
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9cb9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED57                             \
  0x9d59
#define mmUNIPHY_MACRO_CNTL_RESERVED58                                          \
  0x48fa
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x48fa
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x499a
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9a3a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9ada
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9b7a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9c1a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9cba
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED58                             \
  0x9d5a
#define mmUNIPHY_MACRO_CNTL_RESERVED59                                          \
  0x48fb
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x48fb
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x499b
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9a3b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9adb
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9b7b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9c1b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9cbb
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED59                             \
  0x9d5b
#define mmUNIPHY_MACRO_CNTL_RESERVED60                                          \
  0x48fc
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x48fc
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x499c
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9a3c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9adc
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9b7c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9c1c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9cbc
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED60                             \
  0x9d5c
#define mmUNIPHY_MACRO_CNTL_RESERVED61                                          \
  0x48fd
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x48fd
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x499d
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9a3d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9add
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9b7d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9c1d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9cbd
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED61                             \
  0x9d5d
#define mmUNIPHY_MACRO_CNTL_RESERVED62                                          \
  0x48fe
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x48fe
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x499e
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9a3e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9ade
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9b7e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9c1e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9cbe
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED62                             \
  0x9d5e
#define mmUNIPHY_MACRO_CNTL_RESERVED63                                          \
  0x48ff
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x48ff
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x499f
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9a3f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9adf
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9b7f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9c1f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9cbf
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED63                             \
  0x9d5f
#define mmUNIPHY_MACRO_CNTL_RESERVED64                                          \
  0x4900
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x4900
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x49a0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9a40
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9ae0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9b80
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9c20
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9cc0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED64                             \
  0x9d60
#define mmUNIPHY_MACRO_CNTL_RESERVED65                                          \
  0x4901
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x4901
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x49a1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9a41
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9ae1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9b81
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9c21
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9cc1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED65                             \
  0x9d61
#define mmUNIPHY_MACRO_CNTL_RESERVED66                                          \
  0x4902
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x4902
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x49a2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9a42
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9ae2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9b82
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9c22
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9cc2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED66                             \
  0x9d62
#define mmUNIPHY_MACRO_CNTL_RESERVED67                                          \
  0x4903
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x4903
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x49a3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9a43
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9ae3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9b83
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9c23
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9cc3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED67                             \
  0x9d63
#define mmUNIPHY_MACRO_CNTL_RESERVED68                                          \
  0x4904
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x4904
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x49a4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9a44
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9ae4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9b84
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9c24
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9cc4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED68                             \
  0x9d64
#define mmUNIPHY_MACRO_CNTL_RESERVED69                                          \
  0x4905
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x4905
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x49a5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9a45
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9ae5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9b85
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9c25
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9cc5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED69                             \
  0x9d65
#define mmUNIPHY_MACRO_CNTL_RESERVED70                                          \
  0x4906
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x4906
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x49a6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9a46
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9ae6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9b86
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9c26
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9cc6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED70                             \
  0x9d66
#define mmUNIPHY_MACRO_CNTL_RESERVED71                                          \
  0x4907
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x4907
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x49a7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9a47
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9ae7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9b87
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9c27
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9cc7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED71                             \
  0x9d67
#define mmUNIPHY_MACRO_CNTL_RESERVED72                                          \
  0x4908
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x4908
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x49a8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9a48
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9ae8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9b88
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9c28
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9cc8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED72                             \
  0x9d68
#define mmUNIPHY_MACRO_CNTL_RESERVED73                                          \
  0x4909
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x4909
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x49a9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9a49
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9ae9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9b89
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9c29
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9cc9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED73                             \
  0x9d69
#define mmUNIPHY_MACRO_CNTL_RESERVED74                                          \
  0x490a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x490a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x49aa
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9a4a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9aea
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9b8a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9c2a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9cca
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED74                             \
  0x9d6a
#define mmUNIPHY_MACRO_CNTL_RESERVED75                                          \
  0x490b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x490b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x49ab
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9a4b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9aeb
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9b8b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9c2b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9ccb
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED75                             \
  0x9d6b
#define mmUNIPHY_MACRO_CNTL_RESERVED76                                          \
  0x490c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x490c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x49ac
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9a4c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9aec
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9b8c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9c2c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9ccc
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED76                             \
  0x9d6c
#define mmUNIPHY_MACRO_CNTL_RESERVED77                                          \
  0x490d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x490d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x49ad
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9a4d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9aed
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9b8d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9c2d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9ccd
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED77                             \
  0x9d6d
#define mmUNIPHY_MACRO_CNTL_RESERVED78                                          \
  0x490e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x490e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x49ae
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9a4e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9aee
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9b8e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9c2e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9cce
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED78                             \
  0x9d6e
#define mmUNIPHY_MACRO_CNTL_RESERVED79                                          \
  0x490f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x490f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x49af
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9a4f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9aef
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9b8f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9c2f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9ccf
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED79                             \
  0x9d6f
#define mmUNIPHY_MACRO_CNTL_RESERVED80                                          \
  0x4910
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x4910
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x49b0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9a50
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9af0
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9b90
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9c30
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9cd0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED80                             \
  0x9d70
#define mmUNIPHY_MACRO_CNTL_RESERVED81                                          \
  0x4911
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x4911
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x49b1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9a51
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9af1
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9b91
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9c31
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9cd1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED81                             \
  0x9d71
#define mmUNIPHY_MACRO_CNTL_RESERVED82                                          \
  0x4912
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x4912
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x49b2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9a52
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9af2
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9b92
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9c32
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9cd2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED82                             \
  0x9d72
#define mmUNIPHY_MACRO_CNTL_RESERVED83                                          \
  0x4913
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x4913
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x49b3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9a53
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9af3
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9b93
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9c33
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9cd3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED83                             \
  0x9d73
#define mmUNIPHY_MACRO_CNTL_RESERVED84                                          \
  0x4914
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x4914
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x49b4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9a54
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9af4
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9b94
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9c34
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9cd4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED84                             \
  0x9d74
#define mmUNIPHY_MACRO_CNTL_RESERVED85                                          \
  0x4915
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x4915
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x49b5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9a55
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9af5
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9b95
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9c35
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9cd5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED85                             \
  0x9d75
#define mmUNIPHY_MACRO_CNTL_RESERVED86                                          \
  0x4916
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x4916
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x49b6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9a56
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9af6
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9b96
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9c36
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9cd6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED86                             \
  0x9d76
#define mmUNIPHY_MACRO_CNTL_RESERVED87                                          \
  0x4917
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x4917
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x49b7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9a57
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9af7
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9b97
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9c37
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9cd7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED87                             \
  0x9d77
#define mmUNIPHY_MACRO_CNTL_RESERVED88                                          \
  0x4918
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x4918
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x49b8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9a58
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9af8
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9b98
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9c38
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9cd8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED88                             \
  0x9d78
#define mmUNIPHY_MACRO_CNTL_RESERVED89                                          \
  0x4919
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x4919
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x49b9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9a59
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9af9
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9b99
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9c39
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9cd9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED89                             \
  0x9d79
#define mmUNIPHY_MACRO_CNTL_RESERVED90                                          \
  0x491a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x491a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x49ba
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9a5a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9afa
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9b9a
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9c3a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9cda
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED90                             \
  0x9d7a
#define mmUNIPHY_MACRO_CNTL_RESERVED91                                          \
  0x491b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x491b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x49bb
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9a5b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9afb
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9b9b
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9c3b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9cdb
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED91                             \
  0x9d7b
#define mmUNIPHY_MACRO_CNTL_RESERVED92                                          \
  0x491c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x491c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x49bc
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9a5c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9afc
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9b9c
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9c3c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9cdc
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED92                             \
  0x9d7c
#define mmUNIPHY_MACRO_CNTL_RESERVED93                                          \
  0x491d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x491d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x49bd
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9a5d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9afd
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9b9d
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9c3d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9cdd
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED93                             \
  0x9d7d
#define mmUNIPHY_MACRO_CNTL_RESERVED94                                          \
  0x491e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x491e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x49be
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9a5e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9afe
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9b9e
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9c3e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9cde
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED94                             \
  0x9d7e
#define mmUNIPHY_MACRO_CNTL_RESERVED95                                          \
  0x491f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x491f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x49bf
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9a5f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9aff
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9b9f
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9c3f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9cdf
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED95                             \
  0x9d7f
#define mmUNIPHY_MACRO_CNTL_RESERVED96                                          \
  0x4920
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x4920
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x49c0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9a60
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9b00
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9ba0
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9c40
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9ce0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED96                             \
  0x9d80
#define mmUNIPHY_MACRO_CNTL_RESERVED97                                          \
  0x4921
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x4921
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x49c1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9a61
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9b01
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9ba1
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9c41
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9ce1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED97                             \
  0x9d81
#define mmUNIPHY_MACRO_CNTL_RESERVED98                                          \
  0x4922
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x4922
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x49c2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9a62
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9b02
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9ba2
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9c42
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9ce2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED98                             \
  0x9d82
#define mmUNIPHY_MACRO_CNTL_RESERVED99                                          \
  0x4923
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x4923
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x49c3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9a63
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9b03
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9ba3
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9c43
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9ce3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED99                             \
  0x9d83
#define mmUNIPHY_MACRO_CNTL_RESERVED100                                         \
  0x4924
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x4924
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x49c4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9a64
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9b04
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9ba4
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9c44
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9ce4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED100                            \
  0x9d84
#define mmUNIPHY_MACRO_CNTL_RESERVED101                                         \
  0x4925
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x4925
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x49c5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9a65
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9b05
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9ba5
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9c45
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9ce5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED101                            \
  0x9d85
#define mmUNIPHY_MACRO_CNTL_RESERVED102                                         \
  0x4926
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x4926
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x49c6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9a66
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9b06
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9ba6
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9c46
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9ce6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED102                            \
  0x9d86
#define mmUNIPHY_MACRO_CNTL_RESERVED103                                         \
  0x4927
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x4927
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x49c7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9a67
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9b07
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9ba7
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9c47
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9ce7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED103                            \
  0x9d87
#define mmUNIPHY_MACRO_CNTL_RESERVED104                                         \
  0x4928
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x4928
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x49c8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9a68
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9b08
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9ba8
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9c48
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9ce8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED104                            \
  0x9d88
#define mmUNIPHY_MACRO_CNTL_RESERVED105                                         \
  0x4929
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x4929
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x49c9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9a69
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9b09
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9ba9
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9c49
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9ce9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED105                            \
  0x9d89
#define mmUNIPHY_MACRO_CNTL_RESERVED106                                         \
  0x492a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x492a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x49ca
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9a6a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9b0a
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9baa
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9c4a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9cea
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED106                            \
  0x9d8a
#define mmUNIPHY_MACRO_CNTL_RESERVED107                                         \
  0x492b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x492b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x49cb
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9a6b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9b0b
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9bab
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9c4b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9ceb
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED107                            \
  0x9d8b
#define mmUNIPHY_MACRO_CNTL_RESERVED108                                         \
  0x492c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x492c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x49cc
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9a6c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9b0c
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9bac
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9c4c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9cec
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED108                            \
  0x9d8c
#define mmUNIPHY_MACRO_CNTL_RESERVED109                                         \
  0x492d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x492d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x49cd
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9a6d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9b0d
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9bad
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9c4d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9ced
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED109                            \
  0x9d8d
#define mmUNIPHY_MACRO_CNTL_RESERVED110                                         \
  0x492e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x492e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x49ce
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9a6e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9b0e
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9bae
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9c4e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9cee
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED110                            \
  0x9d8e
#define mmUNIPHY_MACRO_CNTL_RESERVED111                                         \
  0x492f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x492f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x49cf
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9a6f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9b0f
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9baf
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9c4f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9cef
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED111                            \
  0x9d8f
#define mmUNIPHY_MACRO_CNTL_RESERVED112                                         \
  0x4930
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x4930
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x49d0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9a70
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9b10
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9bb0
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9c50
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9cf0
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED112                            \
  0x9d90
#define mmUNIPHY_MACRO_CNTL_RESERVED113                                         \
  0x4931
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x4931
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x49d1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9a71
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9b11
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9bb1
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9c51
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9cf1
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED113                            \
  0x9d91
#define mmUNIPHY_MACRO_CNTL_RESERVED114                                         \
  0x4932
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x4932
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x49d2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9a72
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9b12
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9bb2
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9c52
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9cf2
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED114                            \
  0x9d92
#define mmUNIPHY_MACRO_CNTL_RESERVED115                                         \
  0x4933
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x4933
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x49d3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9a73
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9b13
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9bb3
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9c53
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9cf3
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED115                            \
  0x9d93
#define mmUNIPHY_MACRO_CNTL_RESERVED116                                         \
  0x4934
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x4934
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x49d4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9a74
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9b14
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9bb4
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9c54
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9cf4
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED116                            \
  0x9d94
#define mmUNIPHY_MACRO_CNTL_RESERVED117                                         \
  0x4935
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x4935
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x49d5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9a75
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9b15
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9bb5
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9c55
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9cf5
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED117                            \
  0x9d95
#define mmUNIPHY_MACRO_CNTL_RESERVED118                                         \
  0x4936
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x4936
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x49d6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9a76
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9b16
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9bb6
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9c56
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9cf6
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED118                            \
  0x9d96
#define mmUNIPHY_MACRO_CNTL_RESERVED119                                         \
  0x4937
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x4937
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x49d7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9a77
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9b17
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9bb7
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9c57
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9cf7
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED119                            \
  0x9d97
#define mmUNIPHY_MACRO_CNTL_RESERVED120                                         \
  0x4938
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x4938
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x49d8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9a78
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9b18
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9bb8
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9c58
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9cf8
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED120                            \
  0x9d98
#define mmUNIPHY_MACRO_CNTL_RESERVED121                                         \
  0x4939
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x4939
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x49d9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9a79
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9b19
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9bb9
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9c59
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9cf9
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED121                            \
  0x9d99
#define mmUNIPHY_MACRO_CNTL_RESERVED122                                         \
  0x493a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x493a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x49da
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9a7a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9b1a
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9bba
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9c5a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9cfa
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED122                            \
  0x9d9a
#define mmUNIPHY_MACRO_CNTL_RESERVED123                                         \
  0x493b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x493b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x49db
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9a7b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9b1b
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9bbb
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9c5b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9cfb
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED123                            \
  0x9d9b
#define mmUNIPHY_MACRO_CNTL_RESERVED124                                         \
  0x493c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x493c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x49dc
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9a7c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9b1c
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9bbc
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9c5c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9cfc
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED124                            \
  0x9d9c
#define mmUNIPHY_MACRO_CNTL_RESERVED125                                         \
  0x493d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x493d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x49dd
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9a7d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9b1d
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9bbd
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9c5d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9cfd
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED125                            \
  0x9d9d
#define mmUNIPHY_MACRO_CNTL_RESERVED126                                         \
  0x493e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x493e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x49de
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9a7e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9b1e
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9bbe
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9c5e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9cfe
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED126                            \
  0x9d9e
#define mmUNIPHY_MACRO_CNTL_RESERVED127                                         \
  0x493f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x493f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x49df
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9a7f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9b1f
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9bbf
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9c5f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9cff
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED127                            \
  0x9d9f
#define mmUNIPHY_MACRO_CNTL_RESERVED128                                         \
  0x4940
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x4940
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x49e0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9a80
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9b20
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9bc0
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9c60
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9d00
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED128                            \
  0x9da0
#define mmUNIPHY_MACRO_CNTL_RESERVED129                                         \
  0x4941
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x4941
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x49e1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9a81
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9b21
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9bc1
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9c61
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9d01
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED129                            \
  0x9da1
#define mmUNIPHY_MACRO_CNTL_RESERVED130                                         \
  0x4942
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x4942
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x49e2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9a82
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9b22
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9bc2
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9c62
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9d02
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED130                            \
  0x9da2
#define mmUNIPHY_MACRO_CNTL_RESERVED131                                         \
  0x4943
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x4943
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x49e3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9a83
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9b23
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9bc3
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9c63
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9d03
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED131                            \
  0x9da3
#define mmUNIPHY_MACRO_CNTL_RESERVED132                                         \
  0x4944
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x4944
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x49e4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9a84
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9b24
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9bc4
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9c64
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9d04
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED132                            \
  0x9da4
#define mmUNIPHY_MACRO_CNTL_RESERVED133                                         \
  0x4945
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x4945
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x49e5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9a85
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9b25
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9bc5
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9c65
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9d05
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED133                            \
  0x9da5
#define mmUNIPHY_MACRO_CNTL_RESERVED134                                         \
  0x4946
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x4946
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x49e6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9a86
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9b26
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9bc6
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9c66
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9d06
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED134                            \
  0x9da6
#define mmUNIPHY_MACRO_CNTL_RESERVED135                                         \
  0x4947
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x4947
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x49e7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9a87
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9b27
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9bc7
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9c67
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9d07
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED135                            \
  0x9da7
#define mmUNIPHY_MACRO_CNTL_RESERVED136                                         \
  0x4948
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x4948
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x49e8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9a88
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9b28
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9bc8
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9c68
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9d08
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED136                            \
  0x9da8
#define mmUNIPHY_MACRO_CNTL_RESERVED137                                         \
  0x4949
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x4949
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x49e9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9a89
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9b29
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9bc9
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9c69
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9d09
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED137                            \
  0x9da9
#define mmUNIPHY_MACRO_CNTL_RESERVED138                                         \
  0x494a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x494a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x49ea
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9a8a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9b2a
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9bca
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9c6a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9d0a
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED138                            \
  0x9daa
#define mmUNIPHY_MACRO_CNTL_RESERVED139                                         \
  0x494b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x494b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x49eb
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9a8b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9b2b
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9bcb
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9c6b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9d0b
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED139                            \
  0x9dab
#define mmUNIPHY_MACRO_CNTL_RESERVED140                                         \
  0x494c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x494c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x49ec
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9a8c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9b2c
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9bcc
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9c6c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9d0c
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED140                            \
  0x9dac
#define mmUNIPHY_MACRO_CNTL_RESERVED141                                         \
  0x494d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x494d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x49ed
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9a8d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9b2d
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9bcd
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9c6d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9d0d
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED141                            \
  0x9dad
#define mmUNIPHY_MACRO_CNTL_RESERVED142                                         \
  0x494e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x494e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x49ee
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9a8e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9b2e
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9bce
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9c6e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9d0e
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED142                            \
  0x9dae
#define mmUNIPHY_MACRO_CNTL_RESERVED143                                         \
  0x494f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x494f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x49ef
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9a8f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9b2f
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9bcf
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9c6f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9d0f
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED143                            \
  0x9daf
#define mmUNIPHY_MACRO_CNTL_RESERVED144                                         \
  0x4950
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x4950
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x49f0
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9a90
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9b30
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9bd0
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9c70
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9d10
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED144                            \
  0x9db0
#define mmUNIPHY_MACRO_CNTL_RESERVED145                                         \
  0x4951
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x4951
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x49f1
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9a91
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9b31
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9bd1
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9c71
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9d11
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED145                            \
  0x9db1
#define mmUNIPHY_MACRO_CNTL_RESERVED146                                         \
  0x4952
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x4952
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x49f2
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9a92
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9b32
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9bd2
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9c72
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9d12
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED146                            \
  0x9db2
#define mmUNIPHY_MACRO_CNTL_RESERVED147                                         \
  0x4953
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x4953
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x49f3
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9a93
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9b33
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9bd3
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9c73
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9d13
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED147                            \
  0x9db3
#define mmUNIPHY_MACRO_CNTL_RESERVED148                                         \
  0x4954
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x4954
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x49f4
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9a94
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9b34
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9bd4
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9c74
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9d14
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED148                            \
  0x9db4
#define mmUNIPHY_MACRO_CNTL_RESERVED149                                         \
  0x4955
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x4955
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x49f5
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9a95
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9b35
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9bd5
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9c75
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9d15
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED149                            \
  0x9db5
#define mmUNIPHY_MACRO_CNTL_RESERVED150                                         \
  0x4956
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x4956
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x49f6
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9a96
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9b36
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9bd6
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9c76
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9d16
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED150                            \
  0x9db6
#define mmUNIPHY_MACRO_CNTL_RESERVED151                                         \
  0x4957
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x4957
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x49f7
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9a97
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9b37
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9bd7
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9c77
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9d17
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED151                            \
  0x9db7
#define mmUNIPHY_MACRO_CNTL_RESERVED152                                         \
  0x4958
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x4958
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x49f8
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9a98
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9b38
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9bd8
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9c78
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9d18
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED152                            \
  0x9db8
#define mmUNIPHY_MACRO_CNTL_RESERVED153                                         \
  0x4959
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x4959
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x49f9
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9a99
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9b39
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9bd9
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9c79
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9d19
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED153                            \
  0x9db9
#define mmUNIPHY_MACRO_CNTL_RESERVED154                                         \
  0x495a
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x495a
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x49fa
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9a9a
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9b3a
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9bda
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9c7a
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9d1a
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED154                            \
  0x9dba
#define mmUNIPHY_MACRO_CNTL_RESERVED155                                         \
  0x495b
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x495b
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x49fb
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9a9b
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9b3b
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9bdb
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9c7b
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9d1b
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED155                            \
  0x9dbb
#define mmUNIPHY_MACRO_CNTL_RESERVED156                                         \
  0x495c
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x495c
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x49fc
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9a9c
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9b3c
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9bdc
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9c7c
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9d1c
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED156                            \
  0x9dbc
#define mmUNIPHY_MACRO_CNTL_RESERVED157                                         \
  0x495d
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x495d
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x49fd
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9a9d
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9b3d
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9bdd
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9c7d
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9d1d
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED157                            \
  0x9dbd
#define mmUNIPHY_MACRO_CNTL_RESERVED158                                         \
  0x495e
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x495e
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x49fe
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9a9e
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9b3e
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9bde
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9c7e
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9d1e
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED158                            \
  0x9dbe
#define mmUNIPHY_MACRO_CNTL_RESERVED159                                         \
  0x495f
#define mmDCIO_UNIPHY0_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x495f
#define mmDCIO_UNIPHY1_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x49ff
#define mmDCIO_UNIPHY2_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9a9f
#define mmDCIO_UNIPHY3_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9b3f
#define mmDCIO_UNIPHY4_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9bdf
#define mmDCIO_UNIPHY5_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9c7f
#define mmDCIO_UNIPHY6_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9d1f
#define mmDCIO_UNIPHY7_UNIPHY_MACRO_CNTL_RESERVED159                            \
  0x9dbf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED0                                         \
  0x5a84
#define mmDCRX_PHY_MACRO_CNTL_RESERVED1                                         \
  0x5a85
#define mmDCRX_PHY_MACRO_CNTL_RESERVED2                                         \
  0x5a86
#define mmDCRX_PHY_MACRO_CNTL_RESERVED3                                         \
  0x5a87
#define mmDCRX_PHY_MACRO_CNTL_RESERVED4                                         \
  0x5a88
#define mmDCRX_PHY_MACRO_CNTL_RESERVED5                                         \
  0x5a89
#define mmDCRX_PHY_MACRO_CNTL_RESERVED6                                         \
  0x5a8a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED7                                         \
  0x5a8b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED8                                         \
  0x5a8c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED9                                         \
  0x5a8d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED10                                        \
  0x5a8e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED11                                        \
  0x5a8f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED12                                        \
  0x5a90
#define mmDCRX_PHY_MACRO_CNTL_RESERVED13                                        \
  0x5a91
#define mmDCRX_PHY_MACRO_CNTL_RESERVED14                                        \
  0x5a92
#define mmDCRX_PHY_MACRO_CNTL_RESERVED15                                        \
  0x5a93
#define mmDCRX_PHY_MACRO_CNTL_RESERVED16                                        \
  0x5a94
#define mmDCRX_PHY_MACRO_CNTL_RESERVED17                                        \
  0x5a95
#define mmDCRX_PHY_MACRO_CNTL_RESERVED18                                        \
  0x5a96
#define mmDCRX_PHY_MACRO_CNTL_RESERVED19                                        \
  0x5a97
#define mmDCRX_PHY_MACRO_CNTL_RESERVED20                                        \
  0x5a98
#define mmDCRX_PHY_MACRO_CNTL_RESERVED21                                        \
  0x5a99
#define mmDCRX_PHY_MACRO_CNTL_RESERVED22                                        \
  0x5a9a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED23                                        \
  0x5a9b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED24                                        \
  0x5a9c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED25                                        \
  0x5a9d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED26                                        \
  0x5a9e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED27                                        \
  0x5a9f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED28                                        \
  0x5aa0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED29                                        \
  0x5aa1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED30                                        \
  0x5aa2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED31                                        \
  0x5aa3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED32                                        \
  0x5aa4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED33                                        \
  0x5aa5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED34                                        \
  0x5aa6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED35                                        \
  0x5aa7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED36                                        \
  0x5aa8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED37                                        \
  0x5aa9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED38                                        \
  0x5aaa
#define mmDCRX_PHY_MACRO_CNTL_RESERVED39                                        \
  0x5aab
#define mmDCRX_PHY_MACRO_CNTL_RESERVED40                                        \
  0x5aac
#define mmDCRX_PHY_MACRO_CNTL_RESERVED41                                        \
  0x5aad
#define mmDCRX_PHY_MACRO_CNTL_RESERVED42                                        \
  0x5aae
#define mmDCRX_PHY_MACRO_CNTL_RESERVED43                                        \
  0x5aaf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED44                                        \
  0x5ab0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED45                                        \
  0x5ab1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED46                                        \
  0x5ab2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED47                                        \
  0x5ab3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED48                                        \
  0x5ab4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED49                                        \
  0x5ab5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED50                                        \
  0x5ab6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED51                                        \
  0x5ab7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED52                                        \
  0x5ab8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED53                                        \
  0x5ab9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED54                                        \
  0x5aba
#define mmDCRX_PHY_MACRO_CNTL_RESERVED55                                        \
  0x5abb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED56                                        \
  0x5abc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED57                                        \
  0x5abd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED58                                        \
  0x5abe
#define mmDCRX_PHY_MACRO_CNTL_RESERVED59                                        \
  0x5abf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED60                                        \
  0x5ac0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED61                                        \
  0x5ac1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED62                                        \
  0x5ac2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED63                                        \
  0x5ac3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED64                                        \
  0x5ac4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED65                                        \
  0x5ac5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED66                                        \
  0x5ac6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED67                                        \
  0x5ac7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED68                                        \
  0x5ac8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED69                                        \
  0x5ac9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED70                                        \
  0x5aca
#define mmDCRX_PHY_MACRO_CNTL_RESERVED71                                        \
  0x5acb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED72                                        \
  0x5acc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED73                                        \
  0x5acd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED74                                        \
  0x5ace
#define mmDCRX_PHY_MACRO_CNTL_RESERVED75                                        \
  0x5acf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED76                                        \
  0x5ad0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED77                                        \
  0x5ad1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED78                                        \
  0x5ad2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED79                                        \
  0x5ad3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED80                                        \
  0x5ad4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED81                                        \
  0x5ad5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED82                                        \
  0x5ad6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED83                                        \
  0x5ad7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED84                                        \
  0x5ad8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED85                                        \
  0x5ad9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED86                                        \
  0x5ada
#define mmDCRX_PHY_MACRO_CNTL_RESERVED87                                        \
  0x5adb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED88                                        \
  0x5adc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED89                                        \
  0x5add
#define mmDCRX_PHY_MACRO_CNTL_RESERVED90                                        \
  0x5ade
#define mmDCRX_PHY_MACRO_CNTL_RESERVED91                                        \
  0x5adf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED92                                        \
  0x5ae0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED93                                        \
  0x5ae1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED94                                        \
  0x5ae2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED95                                        \
  0x5ae3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED96                                        \
  0x5ae4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED97                                        \
  0x5ae5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED98                                        \
  0x5ae6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED99                                        \
  0x5ae7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED100                                       \
  0x5ae8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED101                                       \
  0x5ae9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED102                                       \
  0x5aea
#define mmDCRX_PHY_MACRO_CNTL_RESERVED103                                       \
  0x5aeb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED104                                       \
  0x5aec
#define mmDCRX_PHY_MACRO_CNTL_RESERVED105                                       \
  0x5aed
#define mmDCRX_PHY_MACRO_CNTL_RESERVED106                                       \
  0x5aee
#define mmDCRX_PHY_MACRO_CNTL_RESERVED107                                       \
  0x5aef
#define mmDCRX_PHY_MACRO_CNTL_RESERVED108                                       \
  0x5af0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED109                                       \
  0x5af1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED110                                       \
  0x5af2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED111                                       \
  0x5af3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED112                                       \
  0x5af4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED113                                       \
  0x5af5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED114                                       \
  0x5af6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED115                                       \
  0x5af7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED116                                       \
  0x5af8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED117                                       \
  0x5af9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED118                                       \
  0x5afa
#define mmDCRX_PHY_MACRO_CNTL_RESERVED119                                       \
  0x5afb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED120                                       \
  0x5afc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED121                                       \
  0x5afd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED122                                       \
  0x5afe
#define mmDCRX_PHY_MACRO_CNTL_RESERVED123                                       \
  0x5aff
#define mmDCRX_PHY_MACRO_CNTL_RESERVED124                                       \
  0x5b00
#define mmDCRX_PHY_MACRO_CNTL_RESERVED125                                       \
  0x5b01
#define mmDCRX_PHY_MACRO_CNTL_RESERVED126                                       \
  0x5b02
#define mmDCRX_PHY_MACRO_CNTL_RESERVED127                                       \
  0x5b03
#define mmDCRX_PHY_MACRO_CNTL_RESERVED128                                       \
  0x5b04
#define mmDCRX_PHY_MACRO_CNTL_RESERVED129                                       \
  0x5b05
#define mmDCRX_PHY_MACRO_CNTL_RESERVED130                                       \
  0x5b06
#define mmDCRX_PHY_MACRO_CNTL_RESERVED131                                       \
  0x5b07
#define mmDCRX_PHY_MACRO_CNTL_RESERVED132                                       \
  0x5b08
#define mmDCRX_PHY_MACRO_CNTL_RESERVED133                                       \
  0x5b09
#define mmDCRX_PHY_MACRO_CNTL_RESERVED134                                       \
  0x5b0a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED135                                       \
  0x5b0b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED136                                       \
  0x5b0c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED137                                       \
  0x5b0d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED138                                       \
  0x5b0e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED139                                       \
  0x5b0f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED140                                       \
  0x5b10
#define mmDCRX_PHY_MACRO_CNTL_RESERVED141                                       \
  0x5b11
#define mmDCRX_PHY_MACRO_CNTL_RESERVED142                                       \
  0x5b12
#define mmDCRX_PHY_MACRO_CNTL_RESERVED143                                       \
  0x5b13
#define mmDCRX_PHY_MACRO_CNTL_RESERVED144                                       \
  0x5b14
#define mmDCRX_PHY_MACRO_CNTL_RESERVED145                                       \
  0x5b15
#define mmDCRX_PHY_MACRO_CNTL_RESERVED146                                       \
  0x5b16
#define mmDCRX_PHY_MACRO_CNTL_RESERVED147                                       \
  0x5b17
#define mmDCRX_PHY_MACRO_CNTL_RESERVED148                                       \
  0x5b18
#define mmDCRX_PHY_MACRO_CNTL_RESERVED149                                       \
  0x5b19
#define mmDCRX_PHY_MACRO_CNTL_RESERVED150                                       \
  0x5b1a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED151                                       \
  0x5b1b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED152                                       \
  0x5b1c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED153                                       \
  0x5b1d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED154                                       \
  0x5b1e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED155                                       \
  0x5b1f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED156                                       \
  0x5b20
#define mmDCRX_PHY_MACRO_CNTL_RESERVED157                                       \
  0x5b21
#define mmDCRX_PHY_MACRO_CNTL_RESERVED158                                       \
  0x5b22
#define mmDCRX_PHY_MACRO_CNTL_RESERVED159                                       \
  0x5b23
#define mmDCRX_PHY_MACRO_CNTL_RESERVED160                                       \
  0x5b24
#define mmDCRX_PHY_MACRO_CNTL_RESERVED161                                       \
  0x5b25
#define mmDCRX_PHY_MACRO_CNTL_RESERVED162                                       \
  0x5b26
#define mmDCRX_PHY_MACRO_CNTL_RESERVED163                                       \
  0x5b27
#define mmDCRX_PHY_MACRO_CNTL_RESERVED164                                       \
  0x5b28
#define mmDCRX_PHY_MACRO_CNTL_RESERVED165                                       \
  0x5b29
#define mmDCRX_PHY_MACRO_CNTL_RESERVED166                                       \
  0x5b2a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED167                                       \
  0x5b2b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED168                                       \
  0x5b2c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED169                                       \
  0x5b2d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED170                                       \
  0x5b2e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED171                                       \
  0x5b2f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED172                                       \
  0x5b30
#define mmDCRX_PHY_MACRO_CNTL_RESERVED173                                       \
  0x5b31
#define mmDCRX_PHY_MACRO_CNTL_RESERVED174                                       \
  0x5b32
#define mmDCRX_PHY_MACRO_CNTL_RESERVED175                                       \
  0x5b33
#define mmDCRX_PHY_MACRO_CNTL_RESERVED176                                       \
  0x5b34
#define mmDCRX_PHY_MACRO_CNTL_RESERVED177                                       \
  0x5b35
#define mmDCRX_PHY_MACRO_CNTL_RESERVED178                                       \
  0x5b36
#define mmDCRX_PHY_MACRO_CNTL_RESERVED179                                       \
  0x5b37
#define mmDCRX_PHY_MACRO_CNTL_RESERVED180                                       \
  0x5b38
#define mmDCRX_PHY_MACRO_CNTL_RESERVED181                                       \
  0x5b39
#define mmDCRX_PHY_MACRO_CNTL_RESERVED182                                       \
  0x5b3a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED183                                       \
  0x5b3b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED184                                       \
  0x5b3c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED185                                       \
  0x5b3d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED186                                       \
  0x5b3e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED187                                       \
  0x5b3f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED188                                       \
  0x5b40
#define mmDCRX_PHY_MACRO_CNTL_RESERVED189                                       \
  0x5b41
#define mmDCRX_PHY_MACRO_CNTL_RESERVED190                                       \
  0x5b42
#define mmDCRX_PHY_MACRO_CNTL_RESERVED191                                       \
  0x5b43
#define mmDCRX_PHY_MACRO_CNTL_RESERVED192                                       \
  0x5b44
#define mmDCRX_PHY_MACRO_CNTL_RESERVED193                                       \
  0x5b45
#define mmDCRX_PHY_MACRO_CNTL_RESERVED194                                       \
  0x5b46
#define mmDCRX_PHY_MACRO_CNTL_RESERVED195                                       \
  0x5b47
#define mmDCRX_PHY_MACRO_CNTL_RESERVED196                                       \
  0x5b48
#define mmDCRX_PHY_MACRO_CNTL_RESERVED197                                       \
  0x5b49
#define mmDCRX_PHY_MACRO_CNTL_RESERVED198                                       \
  0x5b4a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED199                                       \
  0x5b4b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED200                                       \
  0x5b4c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED201                                       \
  0x5b4d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED202                                       \
  0x5b4e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED203                                       \
  0x5b4f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED204                                       \
  0x5b50
#define mmDCRX_PHY_MACRO_CNTL_RESERVED205                                       \
  0x5b51
#define mmDCRX_PHY_MACRO_CNTL_RESERVED206                                       \
  0x5b52
#define mmDCRX_PHY_MACRO_CNTL_RESERVED207                                       \
  0x5b53
#define mmDCRX_PHY_MACRO_CNTL_RESERVED208                                       \
  0x5b54
#define mmDCRX_PHY_MACRO_CNTL_RESERVED209                                       \
  0x5b55
#define mmDCRX_PHY_MACRO_CNTL_RESERVED210                                       \
  0x5b56
#define mmDCRX_PHY_MACRO_CNTL_RESERVED211                                       \
  0x5b57
#define mmDCRX_PHY_MACRO_CNTL_RESERVED212                                       \
  0x5b58
#define mmDCRX_PHY_MACRO_CNTL_RESERVED213                                       \
  0x5b59
#define mmDCRX_PHY_MACRO_CNTL_RESERVED214                                       \
  0x5b5a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED215                                       \
  0x5b5b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED216                                       \
  0x5b5c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED217                                       \
  0x5b5d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED218                                       \
  0x5b5e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED219                                       \
  0x5b5f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED220                                       \
  0x5b60
#define mmDCRX_PHY_MACRO_CNTL_RESERVED221                                       \
  0x5b61
#define mmDCRX_PHY_MACRO_CNTL_RESERVED222                                       \
  0x5b62
#define mmDCRX_PHY_MACRO_CNTL_RESERVED223                                       \
  0x5b63
#define mmDCRX_PHY_MACRO_CNTL_RESERVED224                                       \
  0x5b64
#define mmDCRX_PHY_MACRO_CNTL_RESERVED225                                       \
  0x5b65
#define mmDCRX_PHY_MACRO_CNTL_RESERVED226                                       \
  0x5b66
#define mmDCRX_PHY_MACRO_CNTL_RESERVED227                                       \
  0x5b67
#define mmDCRX_PHY_MACRO_CNTL_RESERVED228                                       \
  0x5b68
#define mmDCRX_PHY_MACRO_CNTL_RESERVED229                                       \
  0x5b69
#define mmDCRX_PHY_MACRO_CNTL_RESERVED230                                       \
  0x5b6a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED231                                       \
  0x5b6b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED232                                       \
  0x5b6c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED233                                       \
  0x5b6d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED234                                       \
  0x5b6e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED235                                       \
  0x5b6f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED236                                       \
  0x5b70
#define mmDCRX_PHY_MACRO_CNTL_RESERVED237                                       \
  0x5b71
#define mmDCRX_PHY_MACRO_CNTL_RESERVED238                                       \
  0x5b72
#define mmDCRX_PHY_MACRO_CNTL_RESERVED239                                       \
  0x5b73
#define mmDCRX_PHY_MACRO_CNTL_RESERVED240                                       \
  0x5b74
#define mmDCRX_PHY_MACRO_CNTL_RESERVED241                                       \
  0x5b75
#define mmDCRX_PHY_MACRO_CNTL_RESERVED242                                       \
  0x5b76
#define mmDCRX_PHY_MACRO_CNTL_RESERVED243                                       \
  0x5b77
#define mmDCRX_PHY_MACRO_CNTL_RESERVED244                                       \
  0x5b78
#define mmDCRX_PHY_MACRO_CNTL_RESERVED245                                       \
  0x5b79
#define mmDCRX_PHY_MACRO_CNTL_RESERVED246                                       \
  0x5b7a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED247                                       \
  0x5b7b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED248                                       \
  0x5b7c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED249                                       \
  0x5b7d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED250                                       \
  0x5b7e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED251                                       \
  0x5b7f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED252                                       \
  0x5b80
#define mmDCRX_PHY_MACRO_CNTL_RESERVED253                                       \
  0x5b81
#define mmDCRX_PHY_MACRO_CNTL_RESERVED254                                       \
  0x5b82
#define mmDCRX_PHY_MACRO_CNTL_RESERVED255                                       \
  0x5b83
#define mmDCRX_PHY_MACRO_CNTL_RESERVED256                                       \
  0x5b84
#define mmDCRX_PHY_MACRO_CNTL_RESERVED257                                       \
  0x5b85
#define mmDCRX_PHY_MACRO_CNTL_RESERVED258                                       \
  0x5b86
#define mmDCRX_PHY_MACRO_CNTL_RESERVED259                                       \
  0x5b87
#define mmDCRX_PHY_MACRO_CNTL_RESERVED260                                       \
  0x5b88
#define mmDCRX_PHY_MACRO_CNTL_RESERVED261                                       \
  0x5b89
#define mmDCRX_PHY_MACRO_CNTL_RESERVED262                                       \
  0x5b8a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED263                                       \
  0x5b8b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED264                                       \
  0x5b8c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED265                                       \
  0x5b8d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED266                                       \
  0x5b8e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED267                                       \
  0x5b8f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED268                                       \
  0x5b90
#define mmDCRX_PHY_MACRO_CNTL_RESERVED269                                       \
  0x5b91
#define mmDCRX_PHY_MACRO_CNTL_RESERVED270                                       \
  0x5b92
#define mmDCRX_PHY_MACRO_CNTL_RESERVED271                                       \
  0x5b93
#define mmDCRX_PHY_MACRO_CNTL_RESERVED272                                       \
  0x5b94
#define mmDCRX_PHY_MACRO_CNTL_RESERVED273                                       \
  0x5b95
#define mmDCRX_PHY_MACRO_CNTL_RESERVED274                                       \
  0x5b96
#define mmDCRX_PHY_MACRO_CNTL_RESERVED275                                       \
  0x5b97
#define mmDCRX_PHY_MACRO_CNTL_RESERVED276                                       \
  0x5b98
#define mmDCRX_PHY_MACRO_CNTL_RESERVED277                                       \
  0x5b99
#define mmDCRX_PHY_MACRO_CNTL_RESERVED278                                       \
  0x5b9a
#define mmDCRX_PHY_MACRO_CNTL_RESERVED279                                       \
  0x5b9b
#define mmDCRX_PHY_MACRO_CNTL_RESERVED280                                       \
  0x5b9c
#define mmDCRX_PHY_MACRO_CNTL_RESERVED281                                       \
  0x5b9d
#define mmDCRX_PHY_MACRO_CNTL_RESERVED282                                       \
  0x5b9e
#define mmDCRX_PHY_MACRO_CNTL_RESERVED283                                       \
  0x5b9f
#define mmDCRX_PHY_MACRO_CNTL_RESERVED284                                       \
  0x5ba0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED285                                       \
  0x5ba1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED286                                       \
  0x5ba2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED287                                       \
  0x5ba3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED288                                       \
  0x5ba4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED289                                       \
  0x5ba5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED290                                       \
  0x5ba6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED291                                       \
  0x5ba7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED292                                       \
  0x5ba8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED293                                       \
  0x5ba9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED294                                       \
  0x5baa
#define mmDCRX_PHY_MACRO_CNTL_RESERVED295                                       \
  0x5bab
#define mmDCRX_PHY_MACRO_CNTL_RESERVED296                                       \
  0x5bac
#define mmDCRX_PHY_MACRO_CNTL_RESERVED297                                       \
  0x5bad
#define mmDCRX_PHY_MACRO_CNTL_RESERVED298                                       \
  0x5bae
#define mmDCRX_PHY_MACRO_CNTL_RESERVED299                                       \
  0x5baf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED300                                       \
  0x5bb0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED301                                       \
  0x5bb1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED302                                       \
  0x5bb2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED303                                       \
  0x5bb3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED304                                       \
  0x5bb4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED305                                       \
  0x5bb5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED306                                       \
  0x5bb6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED307                                       \
  0x5bb7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED308                                       \
  0x5bb8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED309                                       \
  0x5bb9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED310                                       \
  0x5bba
#define mmDCRX_PHY_MACRO_CNTL_RESERVED311                                       \
  0x5bbb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED312                                       \
  0x5bbc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED313                                       \
  0x5bbd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED314                                       \
  0x5bbe
#define mmDCRX_PHY_MACRO_CNTL_RESERVED315                                       \
  0x5bbf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED316                                       \
  0x5bc0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED317                                       \
  0x5bc1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED318                                       \
  0x5bc2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED319                                       \
  0x5bc3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED320                                       \
  0x5bc4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED321                                       \
  0x5bc5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED322                                       \
  0x5bc6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED323                                       \
  0x5bc7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED324                                       \
  0x5bc8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED325                                       \
  0x5bc9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED326                                       \
  0x5bca
#define mmDCRX_PHY_MACRO_CNTL_RESERVED327                                       \
  0x5bcb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED328                                       \
  0x5bcc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED329                                       \
  0x5bcd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED330                                       \
  0x5bce
#define mmDCRX_PHY_MACRO_CNTL_RESERVED331                                       \
  0x5bcf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED332                                       \
  0x5bd0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED333                                       \
  0x5bd1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED334                                       \
  0x5bd2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED335                                       \
  0x5bd3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED336                                       \
  0x5bd4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED337                                       \
  0x5bd5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED338                                       \
  0x5bd6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED339                                       \
  0x5bd7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED340                                       \
  0x5bd8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED341                                       \
  0x5bd9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED342                                       \
  0x5bda
#define mmDCRX_PHY_MACRO_CNTL_RESERVED343                                       \
  0x5bdb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED344                                       \
  0x5bdc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED345                                       \
  0x5bdd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED346                                       \
  0x5bde
#define mmDCRX_PHY_MACRO_CNTL_RESERVED347                                       \
  0x5bdf
#define mmDCRX_PHY_MACRO_CNTL_RESERVED348                                       \
  0x5be0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED349                                       \
  0x5be1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED350                                       \
  0x5be2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED351                                       \
  0x5be3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED352                                       \
  0x5be4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED353                                       \
  0x5be5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED354                                       \
  0x5be6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED355                                       \
  0x5be7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED356                                       \
  0x5be8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED357                                       \
  0x5be9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED358                                       \
  0x5bea
#define mmDCRX_PHY_MACRO_CNTL_RESERVED359                                       \
  0x5beb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED360                                       \
  0x5bec
#define mmDCRX_PHY_MACRO_CNTL_RESERVED361                                       \
  0x5bed
#define mmDCRX_PHY_MACRO_CNTL_RESERVED362                                       \
  0x5bee
#define mmDCRX_PHY_MACRO_CNTL_RESERVED363                                       \
  0x5bef
#define mmDCRX_PHY_MACRO_CNTL_RESERVED364                                       \
  0x5bf0
#define mmDCRX_PHY_MACRO_CNTL_RESERVED365                                       \
  0x5bf1
#define mmDCRX_PHY_MACRO_CNTL_RESERVED366                                       \
  0x5bf2
#define mmDCRX_PHY_MACRO_CNTL_RESERVED367                                       \
  0x5bf3
#define mmDCRX_PHY_MACRO_CNTL_RESERVED368                                       \
  0x5bf4
#define mmDCRX_PHY_MACRO_CNTL_RESERVED369                                       \
  0x5bf5
#define mmDCRX_PHY_MACRO_CNTL_RESERVED370                                       \
  0x5bf6
#define mmDCRX_PHY_MACRO_CNTL_RESERVED371                                       \
  0x5bf7
#define mmDCRX_PHY_MACRO_CNTL_RESERVED372                                       \
  0x5bf8
#define mmDCRX_PHY_MACRO_CNTL_RESERVED373                                       \
  0x5bf9
#define mmDCRX_PHY_MACRO_CNTL_RESERVED374                                       \
  0x5bfa
#define mmDCRX_PHY_MACRO_CNTL_RESERVED375                                       \
  0x5bfb
#define mmDCRX_PHY_MACRO_CNTL_RESERVED376                                       \
  0x5bfc
#define mmDCRX_PHY_MACRO_CNTL_RESERVED377                                       \
  0x5bfd
#define mmDCRX_PHY_MACRO_CNTL_RESERVED378                                       \
  0x5bfe
#define mmDCRX_PHY_MACRO_CNTL_RESERVED379                                       \
  0x5bff
#define mmDPHY_MACRO_CNTL_RESERVED0                                             \
  0x5d98
#define mmDPHY_MACRO_CNTL_RESERVED1                                             \
  0x5d99
#define mmDPHY_MACRO_CNTL_RESERVED2                                             \
  0x5d9a
#define mmDPHY_MACRO_CNTL_RESERVED3                                             \
  0x5d9b
#define mmDPHY_MACRO_CNTL_RESERVED4                                             \
  0x5d9c
#define mmDPHY_MACRO_CNTL_RESERVED5                                             \
  0x5d9d
#define mmDPHY_MACRO_CNTL_RESERVED6                                             \
  0x5d9e
#define mmDPHY_MACRO_CNTL_RESERVED7                                             \
  0x5d9f
#define mmDPHY_MACRO_CNTL_RESERVED8                                             \
  0x5da0
#define mmDPHY_MACRO_CNTL_RESERVED9                                             \
  0x5da1
#define mmDPHY_MACRO_CNTL_RESERVED10                                            \
  0x5da2
#define mmDPHY_MACRO_CNTL_RESERVED11                                            \
  0x5da3
#define mmDPHY_MACRO_CNTL_RESERVED12                                            \
  0x5da4
#define mmDPHY_MACRO_CNTL_RESERVED13                                            \
  0x5da5
#define mmDPHY_MACRO_CNTL_RESERVED14                                            \
  0x5da6
#define mmDPHY_MACRO_CNTL_RESERVED15                                            \
  0x5da7
#define mmDPHY_MACRO_CNTL_RESERVED16                                            \
  0x5da8
#define mmDPHY_MACRO_CNTL_RESERVED17                                            \
  0x5da9
#define mmDPHY_MACRO_CNTL_RESERVED18                                            \
  0x5daa
#define mmDPHY_MACRO_CNTL_RESERVED19                                            \
  0x5dab
#define mmDPHY_MACRO_CNTL_RESERVED20                                            \
  0x5dac
#define mmDPHY_MACRO_CNTL_RESERVED21                                            \
  0x5dad
#define mmDPHY_MACRO_CNTL_RESERVED22                                            \
  0x5dae
#define mmDPHY_MACRO_CNTL_RESERVED23                                            \
  0x5daf
#define mmDPHY_MACRO_CNTL_RESERVED24                                            \
  0x5db0
#define mmDPHY_MACRO_CNTL_RESERVED25                                            \
  0x5db1
#define mmDPHY_MACRO_CNTL_RESERVED26                                            \
  0x5db2
#define mmDPHY_MACRO_CNTL_RESERVED27                                            \
  0x5db3
#define mmDPHY_MACRO_CNTL_RESERVED28                                            \
  0x5db4
#define mmDPHY_MACRO_CNTL_RESERVED29                                            \
  0x5db5
#define mmDPHY_MACRO_CNTL_RESERVED30                                            \
  0x5db6
#define mmDPHY_MACRO_CNTL_RESERVED31                                            \
  0x5db7
#define mmDPHY_MACRO_CNTL_RESERVED32                                            \
  0x5db8
#define mmDPHY_MACRO_CNTL_RESERVED33                                            \
  0x5db9
#define mmDPHY_MACRO_CNTL_RESERVED34                                            \
  0x5dba
#define mmDPHY_MACRO_CNTL_RESERVED35                                            \
  0x5dbb
#define mmDPHY_MACRO_CNTL_RESERVED36                                            \
  0x5dbc
#define mmDPHY_MACRO_CNTL_RESERVED37                                            \
  0x5dbd
#define mmDPHY_MACRO_CNTL_RESERVED38                                            \
  0x5dbe
#define mmDPHY_MACRO_CNTL_RESERVED39                                            \
  0x5dbf
#define mmDPHY_MACRO_CNTL_RESERVED40                                            \
  0x5dc0
#define mmDPHY_MACRO_CNTL_RESERVED41                                            \
  0x5dc1
#define mmDPHY_MACRO_CNTL_RESERVED42                                            \
  0x5dc2
#define mmDPHY_MACRO_CNTL_RESERVED43                                            \
  0x5dc3
#define mmDPHY_MACRO_CNTL_RESERVED44                                            \
  0x5dc4
#define mmDPHY_MACRO_CNTL_RESERVED45                                            \
  0x5dc5
#define mmDPHY_MACRO_CNTL_RESERVED46                                            \
  0x5dc6
#define mmDPHY_MACRO_CNTL_RESERVED47                                            \
  0x5dc7
#define mmDPHY_MACRO_CNTL_RESERVED48                                            \
  0x5dc8
#define mmDPHY_MACRO_CNTL_RESERVED49                                            \
  0x5dc9
#define mmDPHY_MACRO_CNTL_RESERVED50                                            \
  0x5dca
#define mmDPHY_MACRO_CNTL_RESERVED51                                            \
  0x5dcb
#define mmDPHY_MACRO_CNTL_RESERVED52                                            \
  0x5dcc
#define mmDPHY_MACRO_CNTL_RESERVED53                                            \
  0x5dcd
#define mmDPHY_MACRO_CNTL_RESERVED54                                            \
  0x5dce
#define mmDPHY_MACRO_CNTL_RESERVED55                                            \
  0x5dcf
#define mmDPHY_MACRO_CNTL_RESERVED56                                            \
  0x5dd0
#define mmDPHY_MACRO_CNTL_RESERVED57                                            \
  0x5dd1
#define mmDPHY_MACRO_CNTL_RESERVED58                                            \
  0x5dd2
#define mmDPHY_MACRO_CNTL_RESERVED59                                            \
  0x5dd3
#define mmDPHY_MACRO_CNTL_RESERVED60                                            \
  0x5dd4
#define mmDPHY_MACRO_CNTL_RESERVED61                                            \
  0x5dd5
#define mmDPHY_MACRO_CNTL_RESERVED62                                            \
  0x5dd6
#define mmDPHY_MACRO_CNTL_RESERVED63                                            \
  0x5dd7
#define mmGRPH_ENABLE                                                           \
  0x1a00
#define mmDCP0_GRPH_ENABLE                                                      \
  0x1a00
#define mmDCP1_GRPH_ENABLE                                                      \
  0x1c00
#define mmDCP2_GRPH_ENABLE                                                      \
  0x1e00
#define mmDCP3_GRPH_ENABLE                                                      \
  0x4000
#define mmDCP4_GRPH_ENABLE                                                      \
  0x4200
#define mmDCP5_GRPH_ENABLE                                                      \
  0x4400
#define mmGRPH_CONTROL                                                          \
  0x1a01
#define mmDCP0_GRPH_CONTROL                                                     \
  0x1a01
#define mmDCP1_GRPH_CONTROL                                                     \
  0x1c01
#define mmDCP2_GRPH_CONTROL                                                     \
  0x1e01
#define mmDCP3_GRPH_CONTROL                                                     \
  0x4001
#define mmDCP4_GRPH_CONTROL                                                     \
  0x4201
#define mmDCP5_GRPH_CONTROL                                                     \
  0x4401
#define mmGRPH_LUT_10BIT_BYPASS                                                 \
  0x1a02
#define mmDCP0_GRPH_LUT_10BIT_BYPASS                                            \
  0x1a02
#define mmDCP1_GRPH_LUT_10BIT_BYPASS                                            \
  0x1c02
#define mmDCP2_GRPH_LUT_10BIT_BYPASS                                            \
  0x1e02
#define mmDCP3_GRPH_LUT_10BIT_BYPASS                                            \
  0x4002
#define mmDCP4_GRPH_LUT_10BIT_BYPASS                                            \
  0x4202
#define mmDCP5_GRPH_LUT_10BIT_BYPASS                                            \
  0x4402
#define mmGRPH_SWAP_CNTL                                                        \
  0x1a03
#define mmDCP0_GRPH_SWAP_CNTL                                                   \
  0x1a03
#define mmDCP1_GRPH_SWAP_CNTL                                                   \
  0x1c03
#define mmDCP2_GRPH_SWAP_CNTL                                                   \
  0x1e03
#define mmDCP3_GRPH_SWAP_CNTL                                                   \
  0x4003
#define mmDCP4_GRPH_SWAP_CNTL                                                   \
  0x4203
#define mmDCP5_GRPH_SWAP_CNTL                                                   \
  0x4403
#define mmGRPH_PRIMARY_SURFACE_ADDRESS                                          \
  0x1a04
#define mmDCP0_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x1a04
#define mmDCP1_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x1c04
#define mmDCP2_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x1e04
#define mmDCP3_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x4004
#define mmDCP4_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x4204
#define mmDCP5_GRPH_PRIMARY_SURFACE_ADDRESS                                     \
  0x4404
#define mmGRPH_SECONDARY_SURFACE_ADDRESS                                        \
  0x1a05
#define mmDCP0_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x1a05
#define mmDCP1_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x1c05
#define mmDCP2_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x1e05
#define mmDCP3_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x4005
#define mmDCP4_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x4205
#define mmDCP5_GRPH_SECONDARY_SURFACE_ADDRESS                                   \
  0x4405
#define mmGRPH_PITCH                                                            \
  0x1a06
#define mmDCP0_GRPH_PITCH                                                       \
  0x1a06
#define mmDCP1_GRPH_PITCH                                                       \
  0x1c06
#define mmDCP2_GRPH_PITCH                                                       \
  0x1e06
#define mmDCP3_GRPH_PITCH                                                       \
  0x4006
#define mmDCP4_GRPH_PITCH                                                       \
  0x4206
#define mmDCP5_GRPH_PITCH                                                       \
  0x4406
#define mmGRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                     \
  0x1a07
#define mmDCP0_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x1a07
#define mmDCP1_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x1c07
#define mmDCP2_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x1e07
#define mmDCP3_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x4007
#define mmDCP4_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x4207
#define mmDCP5_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH                                \
  0x4407
#define mmGRPH_SECONDARY_SURFACE_ADDRESS_HIGH                                   \
  0x1a08
#define mmDCP0_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x1a08
#define mmDCP1_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x1c08
#define mmDCP2_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x1e08
#define mmDCP3_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x4008
#define mmDCP4_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x4208
#define mmDCP5_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH                              \
  0x4408
#define mmGRPH_SURFACE_OFFSET_X                                                 \
  0x1a09
#define mmDCP0_GRPH_SURFACE_OFFSET_X                                            \
  0x1a09
#define mmDCP1_GRPH_SURFACE_OFFSET_X                                            \
  0x1c09
#define mmDCP2_GRPH_SURFACE_OFFSET_X                                            \
  0x1e09
#define mmDCP3_GRPH_SURFACE_OFFSET_X                                            \
  0x4009
#define mmDCP4_GRPH_SURFACE_OFFSET_X                                            \
  0x4209
#define mmDCP5_GRPH_SURFACE_OFFSET_X                                            \
  0x4409
#define mmGRPH_SURFACE_OFFSET_Y                                                 \
  0x1a0a
#define mmDCP0_GRPH_SURFACE_OFFSET_Y                                            \
  0x1a0a
#define mmDCP1_GRPH_SURFACE_OFFSET_Y                                            \
  0x1c0a
#define mmDCP2_GRPH_SURFACE_OFFSET_Y                                            \
  0x1e0a
#define mmDCP3_GRPH_SURFACE_OFFSET_Y                                            \
  0x400a
#define mmDCP4_GRPH_SURFACE_OFFSET_Y                                            \
  0x420a
#define mmDCP5_GRPH_SURFACE_OFFSET_Y                                            \
  0x440a
#define mmGRPH_X_START                                                          \
  0x1a0b
#define mmDCP0_GRPH_X_START                                                     \
  0x1a0b
#define mmDCP1_GRPH_X_START                                                     \
  0x1c0b
#define mmDCP2_GRPH_X_START                                                     \
  0x1e0b
#define mmDCP3_GRPH_X_START                                                     \
  0x400b
#define mmDCP4_GRPH_X_START                                                     \
  0x420b
#define mmDCP5_GRPH_X_START                                                     \
  0x440b
#define mmGRPH_Y_START                                                          \
  0x1a0c
#define mmDCP0_GRPH_Y_START                                                     \
  0x1a0c
#define mmDCP1_GRPH_Y_START                                                     \
  0x1c0c
#define mmDCP2_GRPH_Y_START                                                     \
  0x1e0c
#define mmDCP3_GRPH_Y_START                                                     \
  0x400c
#define mmDCP4_GRPH_Y_START                                                     \
  0x420c
#define mmDCP5_GRPH_Y_START                                                     \
  0x440c
#define mmGRPH_X_END                                                            \
  0x1a0d
#define mmDCP0_GRPH_X_END                                                       \
  0x1a0d
#define mmDCP1_GRPH_X_END                                                       \
  0x1c0d
#define mmDCP2_GRPH_X_END                                                       \
  0x1e0d
#define mmDCP3_GRPH_X_END                                                       \
  0x400d
#define mmDCP4_GRPH_X_END                                                       \
  0x420d
#define mmDCP5_GRPH_X_END                                                       \
  0x440d
#define mmGRPH_Y_END                                                            \
  0x1a0e
#define mmDCP0_GRPH_Y_END                                                       \
  0x1a0e
#define mmDCP1_GRPH_Y_END                                                       \
  0x1c0e
#define mmDCP2_GRPH_Y_END                                                       \
  0x1e0e
#define mmDCP3_GRPH_Y_END                                                       \
  0x400e
#define mmDCP4_GRPH_Y_END                                                       \
  0x420e
#define mmDCP5_GRPH_Y_END                                                       \
  0x440e
#define mmINPUT_GAMMA_CONTROL                                                   \
  0x1a10
#define mmDCP0_INPUT_GAMMA_CONTROL                                              \
  0x1a10
#define mmDCP1_INPUT_GAMMA_CONTROL                                              \
  0x1c10
#define mmDCP2_INPUT_GAMMA_CONTROL                                              \
  0x1e10
#define mmDCP3_INPUT_GAMMA_CONTROL                                              \
  0x4010
#define mmDCP4_INPUT_GAMMA_CONTROL                                              \
  0x4210
#define mmDCP5_INPUT_GAMMA_CONTROL                                              \
  0x4410
#define mmGRPH_UPDATE                                                           \
  0x1a11
#define mmDCP0_GRPH_UPDATE                                                      \
  0x1a11
#define mmDCP1_GRPH_UPDATE                                                      \
  0x1c11
#define mmDCP2_GRPH_UPDATE                                                      \
  0x1e11
#define mmDCP3_GRPH_UPDATE                                                      \
  0x4011
#define mmDCP4_GRPH_UPDATE                                                      \
  0x4211
#define mmDCP5_GRPH_UPDATE                                                      \
  0x4411
#define mmGRPH_FLIP_CONTROL                                                     \
  0x1a12
#define mmDCP0_GRPH_FLIP_CONTROL                                                \
  0x1a12
#define mmDCP1_GRPH_FLIP_CONTROL                                                \
  0x1c12
#define mmDCP2_GRPH_FLIP_CONTROL                                                \
  0x1e12
#define mmDCP3_GRPH_FLIP_CONTROL                                                \
  0x4012
#define mmDCP4_GRPH_FLIP_CONTROL                                                \
  0x4212
#define mmDCP5_GRPH_FLIP_CONTROL                                                \
  0x4412
#define mmGRPH_SURFACE_ADDRESS_INUSE                                            \
  0x1a13
#define mmDCP0_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x1a13
#define mmDCP1_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x1c13
#define mmDCP2_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x1e13
#define mmDCP3_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x4013
#define mmDCP4_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x4213
#define mmDCP5_GRPH_SURFACE_ADDRESS_INUSE                                       \
  0x4413
#define mmGRPH_DFQ_CONTROL                                                      \
  0x1a14
#define mmDCP0_GRPH_DFQ_CONTROL                                                 \
  0x1a14
#define mmDCP1_GRPH_DFQ_CONTROL                                                 \
  0x1c14
#define mmDCP2_GRPH_DFQ_CONTROL                                                 \
  0x1e14
#define mmDCP3_GRPH_DFQ_CONTROL                                                 \
  0x4014
#define mmDCP4_GRPH_DFQ_CONTROL                                                 \
  0x4214
#define mmDCP5_GRPH_DFQ_CONTROL                                                 \
  0x4414
#define mmGRPH_DFQ_STATUS                                                       \
  0x1a15
#define mmDCP0_GRPH_DFQ_STATUS                                                  \
  0x1a15
#define mmDCP1_GRPH_DFQ_STATUS                                                  \
  0x1c15
#define mmDCP2_GRPH_DFQ_STATUS                                                  \
  0x1e15
#define mmDCP3_GRPH_DFQ_STATUS                                                  \
  0x4015
#define mmDCP4_GRPH_DFQ_STATUS                                                  \
  0x4215
#define mmDCP5_GRPH_DFQ_STATUS                                                  \
  0x4415
#define mmGRPH_INTERRUPT_STATUS                                                 \
  0x1a16
#define mmDCP0_GRPH_INTERRUPT_STATUS                                            \
  0x1a16
#define mmDCP1_GRPH_INTERRUPT_STATUS                                            \
  0x1c16
#define mmDCP2_GRPH_INTERRUPT_STATUS                                            \
  0x1e16
#define mmDCP3_GRPH_INTERRUPT_STATUS                                            \
  0x4016
#define mmDCP4_GRPH_INTERRUPT_STATUS                                            \
  0x4216
#define mmDCP5_GRPH_INTERRUPT_STATUS                                            \
  0x4416
#define mmGRPH_INTERRUPT_CONTROL                                                \
  0x1a17
#define mmDCP0_GRPH_INTERRUPT_CONTROL                                           \
  0x1a17
#define mmDCP1_GRPH_INTERRUPT_CONTROL                                           \
  0x1c17
#define mmDCP2_GRPH_INTERRUPT_CONTROL                                           \
  0x1e17
#define mmDCP3_GRPH_INTERRUPT_CONTROL                                           \
  0x4017
#define mmDCP4_GRPH_INTERRUPT_CONTROL                                           \
  0x4217
#define mmDCP5_GRPH_INTERRUPT_CONTROL                                           \
  0x4417
#define mmGRPH_SURFACE_ADDRESS_HIGH_INUSE                                       \
  0x1a18
#define mmDCP0_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x1a18
#define mmDCP1_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x1c18
#define mmDCP2_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x1e18
#define mmDCP3_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x4018
#define mmDCP4_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x4218
#define mmDCP5_GRPH_SURFACE_ADDRESS_HIGH_INUSE                                  \
  0x4418
#define mmGRPH_COMPRESS_SURFACE_ADDRESS                                         \
  0x1a19
#define mmDCP0_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x1a19
#define mmDCP1_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x1c19
#define mmDCP2_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x1e19
#define mmDCP3_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x4019
#define mmDCP4_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x4219
#define mmDCP5_GRPH_COMPRESS_SURFACE_ADDRESS                                    \
  0x4419
#define mmGRPH_COMPRESS_PITCH                                                   \
  0x1a1a
#define mmDCP0_GRPH_COMPRESS_PITCH                                              \
  0x1a1a
#define mmDCP1_GRPH_COMPRESS_PITCH                                              \
  0x1c1a
#define mmDCP2_GRPH_COMPRESS_PITCH                                              \
  0x1e1a
#define mmDCP3_GRPH_COMPRESS_PITCH                                              \
  0x401a
#define mmDCP4_GRPH_COMPRESS_PITCH                                              \
  0x421a
#define mmDCP5_GRPH_COMPRESS_PITCH                                              \
  0x441a
#define mmGRPH_COMPRESS_SURFACE_ADDRESS_HIGH                                    \
  0x1a1b
#define mmDCP0_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x1a1b
#define mmDCP1_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x1c1b
#define mmDCP2_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x1e1b
#define mmDCP3_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x401b
#define mmDCP4_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x421b
#define mmDCP5_GRPH_COMPRESS_SURFACE_ADDRESS_HIGH                               \
  0x441b
#define mmGRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                                   \
  0x1a1c
#define mmDCP0_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x1a1c
#define mmDCP1_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x1c1c
#define mmDCP2_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x1e1c
#define mmDCP3_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x401c
#define mmDCP4_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x421c
#define mmDCP5_GRPH_PIPE_OUTSTANDING_REQUEST_LIMIT                              \
  0x441c
#define mmPRESCALE_GRPH_CONTROL                                                 \
  0x1a2d
#define mmDCP0_PRESCALE_GRPH_CONTROL                                            \
  0x1a2d
#define mmDCP1_PRESCALE_GRPH_CONTROL                                            \
  0x1c2d
#define mmDCP2_PRESCALE_GRPH_CONTROL                                            \
  0x1e2d
#define mmDCP3_PRESCALE_GRPH_CONTROL                                            \
  0x402d
#define mmDCP4_PRESCALE_GRPH_CONTROL                                            \
  0x422d
#define mmDCP5_PRESCALE_GRPH_CONTROL                                            \
  0x442d
#define mmPRESCALE_VALUES_GRPH_R                                                \
  0x1a2e
#define mmDCP0_PRESCALE_VALUES_GRPH_R                                           \
  0x1a2e
#define mmDCP1_PRESCALE_VALUES_GRPH_R                                           \
  0x1c2e
#define mmDCP2_PRESCALE_VALUES_GRPH_R                                           \
  0x1e2e
#define mmDCP3_PRESCALE_VALUES_GRPH_R                                           \
  0x402e
#define mmDCP4_PRESCALE_VALUES_GRPH_R                                           \
  0x422e
#define mmDCP5_PRESCALE_VALUES_GRPH_R                                           \
  0x442e
#define mmPRESCALE_VALUES_GRPH_G                                                \
  0x1a2f
#define mmDCP0_PRESCALE_VALUES_GRPH_G                                           \
  0x1a2f
#define mmDCP1_PRESCALE_VALUES_GRPH_G                                           \
  0x1c2f
#define mmDCP2_PRESCALE_VALUES_GRPH_G                                           \
  0x1e2f
#define mmDCP3_PRESCALE_VALUES_GRPH_G                                           \
  0x402f
#define mmDCP4_PRESCALE_VALUES_GRPH_G                                           \
  0x422f
#define mmDCP5_PRESCALE_VALUES_GRPH_G                                           \
  0x442f
#define mmPRESCALE_VALUES_GRPH_B                                                \
  0x1a30
#define mmDCP0_PRESCALE_VALUES_GRPH_B                                           \
  0x1a30
#define mmDCP1_PRESCALE_VALUES_GRPH_B                                           \
  0x1c30
#define mmDCP2_PRESCALE_VALUES_GRPH_B                                           \
  0x1e30
#define mmDCP3_PRESCALE_VALUES_GRPH_B                                           \
  0x4030
#define mmDCP4_PRESCALE_VALUES_GRPH_B                                           \
  0x4230
#define mmDCP5_PRESCALE_VALUES_GRPH_B                                           \
  0x4430
#define mmINPUT_CSC_CONTROL                                                     \
  0x1a35
#define mmDCP0_INPUT_CSC_CONTROL                                                \
  0x1a35
#define mmDCP1_INPUT_CSC_CONTROL                                                \
  0x1c35
#define mmDCP2_INPUT_CSC_CONTROL                                                \
  0x1e35
#define mmDCP3_INPUT_CSC_CONTROL                                                \
  0x4035
#define mmDCP4_INPUT_CSC_CONTROL                                                \
  0x4235
#define mmDCP5_INPUT_CSC_CONTROL                                                \
  0x4435
#define mmINPUT_CSC_C11_C12                                                     \
  0x1a36
#define mmDCP0_INPUT_CSC_C11_C12                                                \
  0x1a36
#define mmDCP1_INPUT_CSC_C11_C12                                                \
  0x1c36
#define mmDCP2_INPUT_CSC_C11_C12                                                \
  0x1e36
#define mmDCP3_INPUT_CSC_C11_C12                                                \
  0x4036
#define mmDCP4_INPUT_CSC_C11_C12                                                \
  0x4236
#define mmDCP5_INPUT_CSC_C11_C12                                                \
  0x4436
#define mmINPUT_CSC_C13_C14                                                     \
  0x1a37
#define mmDCP0_INPUT_CSC_C13_C14                                                \
  0x1a37
#define mmDCP1_INPUT_CSC_C13_C14                                                \
  0x1c37
#define mmDCP2_INPUT_CSC_C13_C14                                                \
  0x1e37
#define mmDCP3_INPUT_CSC_C13_C14                                                \
  0x4037
#define mmDCP4_INPUT_CSC_C13_C14                                                \
  0x4237
#define mmDCP5_INPUT_CSC_C13_C14                                                \
  0x4437
#define mmINPUT_CSC_C21_C22                                                     \
  0x1a38
#define mmDCP0_INPUT_CSC_C21_C22                                                \
  0x1a38
#define mmDCP1_INPUT_CSC_C21_C22                                                \
  0x1c38
#define mmDCP2_INPUT_CSC_C21_C22                                                \
  0x1e38
#define mmDCP3_INPUT_CSC_C21_C22                                                \
  0x4038
#define mmDCP4_INPUT_CSC_C21_C22                                                \
  0x4238
#define mmDCP5_INPUT_CSC_C21_C22                                                \
  0x4438
#define mmINPUT_CSC_C23_C24                                                     \
  0x1a39
#define mmDCP0_INPUT_CSC_C23_C24                                                \
  0x1a39
#define mmDCP1_INPUT_CSC_C23_C24                                                \
  0x1c39
#define mmDCP2_INPUT_CSC_C23_C24                                                \
  0x1e39
#define mmDCP3_INPUT_CSC_C23_C24                                                \
  0x4039
#define mmDCP4_INPUT_CSC_C23_C24                                                \
  0x4239
#define mmDCP5_INPUT_CSC_C23_C24                                                \
  0x4439
#define mmINPUT_CSC_C31_C32                                                     \
  0x1a3a
#define mmDCP0_INPUT_CSC_C31_C32                                                \
  0x1a3a
#define mmDCP1_INPUT_CSC_C31_C32                                                \
  0x1c3a
#define mmDCP2_INPUT_CSC_C31_C32                                                \
  0x1e3a
#define mmDCP3_INPUT_CSC_C31_C32                                                \
  0x403a
#define mmDCP4_INPUT_CSC_C31_C32                                                \
  0x423a
#define mmDCP5_INPUT_CSC_C31_C32                                                \
  0x443a
#define mmINPUT_CSC_C33_C34                                                     \
  0x1a3b
#define mmDCP0_INPUT_CSC_C33_C34                                                \
  0x1a3b
#define mmDCP1_INPUT_CSC_C33_C34                                                \
  0x1c3b
#define mmDCP2_INPUT_CSC_C33_C34                                                \
  0x1e3b
#define mmDCP3_INPUT_CSC_C33_C34                                                \
  0x403b
#define mmDCP4_INPUT_CSC_C33_C34                                                \
  0x423b
#define mmDCP5_INPUT_CSC_C33_C34                                                \
  0x443b
#define mmOUTPUT_CSC_CONTROL                                                    \
  0x1a3c
#define mmDCP0_OUTPUT_CSC_CONTROL                                               \
  0x1a3c
#define mmDCP1_OUTPUT_CSC_CONTROL                                               \
  0x1c3c
#define mmDCP2_OUTPUT_CSC_CONTROL                                               \
  0x1e3c
#define mmDCP3_OUTPUT_CSC_CONTROL                                               \
  0x403c
#define mmDCP4_OUTPUT_CSC_CONTROL                                               \
  0x423c
#define mmDCP5_OUTPUT_CSC_CONTROL                                               \
  0x443c
#define mmOUTPUT_CSC_C11_C12                                                    \
  0x1a3d
#define mmDCP0_OUTPUT_CSC_C11_C12                                               \
  0x1a3d
#define mmDCP1_OUTPUT_CSC_C11_C12                                               \
  0x1c3d
#define mmDCP2_OUTPUT_CSC_C11_C12                                               \
  0x1e3d
#define mmDCP3_OUTPUT_CSC_C11_C12                                               \
  0x403d
#define mmDCP4_OUTPUT_CSC_C11_C12                                               \
  0x423d
#define mmDCP5_OUTPUT_CSC_C11_C12                                               \
  0x443d
#define mmOUTPUT_CSC_C13_C14                                                    \
  0x1a3e
#define mmDCP0_OUTPUT_CSC_C13_C14                                               \
  0x1a3e
#define mmDCP1_OUTPUT_CSC_C13_C14                                               \
  0x1c3e
#define mmDCP2_OUTPUT_CSC_C13_C14                                               \
  0x1e3e
#define mmDCP3_OUTPUT_CSC_C13_C14                                               \
  0x403e
#define mmDCP4_OUTPUT_CSC_C13_C14                                               \
  0x423e
#define mmDCP5_OUTPUT_CSC_C13_C14                                               \
  0x443e
#define mmOUTPUT_CSC_C21_C22                                                    \
  0x1a3f
#define mmDCP0_OUTPUT_CSC_C21_C22                                               \
  0x1a3f
#define mmDCP1_OUTPUT_CSC_C21_C22                                               \
  0x1c3f
#define mmDCP2_OUTPUT_CSC_C21_C22                                               \
  0x1e3f
#define mmDCP3_OUTPUT_CSC_C21_C22                                               \
  0x403f
#define mmDCP4_OUTPUT_CSC_C21_C22                                               \
  0x423f
#define mmDCP5_OUTPUT_CSC_C21_C22                                               \
  0x443f
#define mmOUTPUT_CSC_C23_C24                                                    \
  0x1a40
#define mmDCP0_OUTPUT_CSC_C23_C24                                               \
  0x1a40
#define mmDCP1_OUTPUT_CSC_C23_C24                                               \
  0x1c40
#define mmDCP2_OUTPUT_CSC_C23_C24                                               \
  0x1e40
#define mmDCP3_OUTPUT_CSC_C23_C24                                               \
  0x4040
#define mmDCP4_OUTPUT_CSC_C23_C24                                               \
  0x4240
#define mmDCP5_OUTPUT_CSC_C23_C24                                               \
  0x4440
#define mmOUTPUT_CSC_C31_C32                                                    \
  0x1a41
#define mmDCP0_OUTPUT_CSC_C31_C32                                               \
  0x1a41
#define mmDCP1_OUTPUT_CSC_C31_C32                                               \
  0x1c41
#define mmDCP2_OUTPUT_CSC_C31_C32                                               \
  0x1e41
#define mmDCP3_OUTPUT_CSC_C31_C32                                               \
  0x4041
#define mmDCP4_OUTPUT_CSC_C31_C32                                               \
  0x4241
#define mmDCP5_OUTPUT_CSC_C31_C32                                               \
  0x4441
#define mmOUTPUT_CSC_C33_C34                                                    \
  0x1a42
#define mmDCP0_OUTPUT_CSC_C33_C34                                               \
  0x1a42
#define mmDCP1_OUTPUT_CSC_C33_C34                                               \
  0x1c42
#define mmDCP2_OUTPUT_CSC_C33_C34                                               \
  0x1e42
#define mmDCP3_OUTPUT_CSC_C33_C34                                               \
  0x4042
#define mmDCP4_OUTPUT_CSC_C33_C34                                               \
  0x4242
#define mmDCP5_OUTPUT_CSC_C33_C34                                               \
  0x4442
#define mmCOMM_MATRIXA_TRANS_C11_C12                                            \
  0x1a43
#define mmDCP0_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x1a43
#define mmDCP1_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x1c43
#define mmDCP2_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x1e43
#define mmDCP3_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x4043
#define mmDCP4_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x4243
#define mmDCP5_COMM_MATRIXA_TRANS_C11_C12                                       \
  0x4443
#define mmCOMM_MATRIXA_TRANS_C13_C14                                            \
  0x1a44
#define mmDCP0_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x1a44
#define mmDCP1_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x1c44
#define mmDCP2_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x1e44
#define mmDCP3_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x4044
#define mmDCP4_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x4244
#define mmDCP5_COMM_MATRIXA_TRANS_C13_C14                                       \
  0x4444
#define mmCOMM_MATRIXA_TRANS_C21_C22                                            \
  0x1a45
#define mmDCP0_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x1a45
#define mmDCP1_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x1c45
#define mmDCP2_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x1e45
#define mmDCP3_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x4045
#define mmDCP4_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x4245
#define mmDCP5_COMM_MATRIXA_TRANS_C21_C22                                       \
  0x4445
#define mmCOMM_MATRIXA_TRANS_C23_C24                                            \
  0x1a46
#define mmDCP0_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x1a46
#define mmDCP1_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x1c46
#define mmDCP2_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x1e46
#define mmDCP3_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x4046
#define mmDCP4_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x4246
#define mmDCP5_COMM_MATRIXA_TRANS_C23_C24                                       \
  0x4446
#define mmCOMM_MATRIXA_TRANS_C31_C32                                            \
  0x1a47
#define mmDCP0_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x1a47
#define mmDCP1_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x1c47
#define mmDCP2_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x1e47
#define mmDCP3_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x4047
#define mmDCP4_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x4247
#define mmDCP5_COMM_MATRIXA_TRANS_C31_C32                                       \
  0x4447
#define mmCOMM_MATRIXA_TRANS_C33_C34                                            \
  0x1a48
#define mmDCP0_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x1a48
#define mmDCP1_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x1c48
#define mmDCP2_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x1e48
#define mmDCP3_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x4048
#define mmDCP4_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x4248
#define mmDCP5_COMM_MATRIXA_TRANS_C33_C34                                       \
  0x4448
#define mmCOMM_MATRIXB_TRANS_C11_C12                                            \
  0x1a49
#define mmDCP0_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x1a49
#define mmDCP1_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x1c49
#define mmDCP2_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x1e49
#define mmDCP3_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x4049
#define mmDCP4_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x4249
#define mmDCP5_COMM_MATRIXB_TRANS_C11_C12                                       \
  0x4449
#define mmCOMM_MATRIXB_TRANS_C13_C14                                            \
  0x1a4a
#define mmDCP0_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x1a4a
#define mmDCP1_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x1c4a
#define mmDCP2_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x1e4a
#define mmDCP3_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x404a
#define mmDCP4_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x424a
#define mmDCP5_COMM_MATRIXB_TRANS_C13_C14                                       \
  0x444a
#define mmCOMM_MATRIXB_TRANS_C21_C22                                            \
  0x1a4b
#define mmDCP0_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x1a4b
#define mmDCP1_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x1c4b
#define mmDCP2_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x1e4b
#define mmDCP3_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x404b
#define mmDCP4_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x424b
#define mmDCP5_COMM_MATRIXB_TRANS_C21_C22                                       \
  0x444b
#define mmCOMM_MATRIXB_TRANS_C23_C24                                            \
  0x1a4c
#define mmDCP0_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x1a4c
#define mmDCP1_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x1c4c
#define mmDCP2_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x1e4c
#define mmDCP3_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x404c
#define mmDCP4_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x424c
#define mmDCP5_COMM_MATRIXB_TRANS_C23_C24                                       \
  0x444c
#define mmCOMM_MATRIXB_TRANS_C31_C32                                            \
  0x1a4d
#define mmDCP0_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x1a4d
#define mmDCP1_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x1c4d
#define mmDCP2_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x1e4d
#define mmDCP3_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x404d
#define mmDCP4_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x424d
#define mmDCP5_COMM_MATRIXB_TRANS_C31_C32                                       \
  0x444d
#define mmCOMM_MATRIXB_TRANS_C33_C34                                            \
  0x1a4e
#define mmDCP0_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x1a4e
#define mmDCP1_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x1c4e
#define mmDCP2_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x1e4e
#define mmDCP3_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x404e
#define mmDCP4_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x424e
#define mmDCP5_COMM_MATRIXB_TRANS_C33_C34                                       \
  0x444e
#define mmDENORM_CONTROL                                                        \
  0x1a50
#define mmDCP0_DENORM_CONTROL                                                   \
  0x1a50
#define mmDCP1_DENORM_CONTROL                                                   \
  0x1c50
#define mmDCP2_DENORM_CONTROL                                                   \
  0x1e50
#define mmDCP3_DENORM_CONTROL                                                   \
  0x4050
#define mmDCP4_DENORM_CONTROL                                                   \
  0x4250
#define mmDCP5_DENORM_CONTROL                                                   \
  0x4450
#define mmOUT_ROUND_CONTROL                                                     \
  0x1a51
#define mmDCP0_OUT_ROUND_CONTROL                                                \
  0x1a51
#define mmDCP1_OUT_ROUND_CONTROL                                                \
  0x1c51
#define mmDCP2_OUT_ROUND_CONTROL                                                \
  0x1e51
#define mmDCP3_OUT_ROUND_CONTROL                                                \
  0x4051
#define mmDCP4_OUT_ROUND_CONTROL                                                \
  0x4251
#define mmDCP5_OUT_ROUND_CONTROL                                                \
  0x4451
#define mmOUT_CLAMP_CONTROL_R_CR                                                \
  0x1a52
#define mmDCP0_OUT_CLAMP_CONTROL_R_CR                                           \
  0x1a52
#define mmDCP1_OUT_CLAMP_CONTROL_R_CR                                           \
  0x1c52
#define mmDCP2_OUT_CLAMP_CONTROL_R_CR                                           \
  0x1e52
#define mmDCP3_OUT_CLAMP_CONTROL_R_CR                                           \
  0x4052
#define mmDCP4_OUT_CLAMP_CONTROL_R_CR                                           \
  0x4252
#define mmDCP5_OUT_CLAMP_CONTROL_R_CR                                           \
  0x4452
#define mmOUT_CLAMP_CONTROL_G_Y                                                 \
  0x1a9c
#define mmDCP0_OUT_CLAMP_CONTROL_G_Y                                            \
  0x1a9c
#define mmDCP1_OUT_CLAMP_CONTROL_G_Y                                            \
  0x1c9c
#define mmDCP2_OUT_CLAMP_CONTROL_G_Y                                            \
  0x1e9c
#define mmDCP3_OUT_CLAMP_CONTROL_G_Y                                            \
  0x409c
#define mmDCP4_OUT_CLAMP_CONTROL_G_Y                                            \
  0x429c
#define mmDCP5_OUT_CLAMP_CONTROL_G_Y                                            \
  0x449c
#define mmOUT_CLAMP_CONTROL_B_CB                                                \
  0x1a9d
#define mmDCP0_OUT_CLAMP_CONTROL_B_CB                                           \
  0x1a9d
#define mmDCP1_OUT_CLAMP_CONTROL_B_CB                                           \
  0x1c9d
#define mmDCP2_OUT_CLAMP_CONTROL_B_CB                                           \
  0x1e9d
#define mmDCP3_OUT_CLAMP_CONTROL_B_CB                                           \
  0x409d
#define mmDCP4_OUT_CLAMP_CONTROL_B_CB                                           \
  0x429d
#define mmDCP5_OUT_CLAMP_CONTROL_B_CB                                           \
  0x449d
#define mmKEY_CONTROL                                                           \
  0x1a53
#define mmDCP0_KEY_CONTROL                                                      \
  0x1a53
#define mmDCP1_KEY_CONTROL                                                      \
  0x1c53
#define mmDCP2_KEY_CONTROL                                                      \
  0x1e53
#define mmDCP3_KEY_CONTROL                                                      \
  0x4053
#define mmDCP4_KEY_CONTROL                                                      \
  0x4253
#define mmDCP5_KEY_CONTROL                                                      \
  0x4453
#define mmKEY_RANGE_ALPHA                                                       \
  0x1a54
#define mmDCP0_KEY_RANGE_ALPHA                                                  \
  0x1a54
#define mmDCP1_KEY_RANGE_ALPHA                                                  \
  0x1c54
#define mmDCP2_KEY_RANGE_ALPHA                                                  \
  0x1e54
#define mmDCP3_KEY_RANGE_ALPHA                                                  \
  0x4054
#define mmDCP4_KEY_RANGE_ALPHA                                                  \
  0x4254
#define mmDCP5_KEY_RANGE_ALPHA                                                  \
  0x4454
#define mmKEY_RANGE_RED                                                         \
  0x1a55
#define mmDCP0_KEY_RANGE_RED                                                    \
  0x1a55
#define mmDCP1_KEY_RANGE_RED                                                    \
  0x1c55
#define mmDCP2_KEY_RANGE_RED                                                    \
  0x1e55
#define mmDCP3_KEY_RANGE_RED                                                    \
  0x4055
#define mmDCP4_KEY_RANGE_RED                                                    \
  0x4255
#define mmDCP5_KEY_RANGE_RED                                                    \
  0x4455
#define mmKEY_RANGE_GREEN                                                       \
  0x1a56
#define mmDCP0_KEY_RANGE_GREEN                                                  \
  0x1a56
#define mmDCP1_KEY_RANGE_GREEN                                                  \
  0x1c56
#define mmDCP2_KEY_RANGE_GREEN                                                  \
  0x1e56
#define mmDCP3_KEY_RANGE_GREEN                                                  \
  0x4056
#define mmDCP4_KEY_RANGE_GREEN                                                  \
  0x4256
#define mmDCP5_KEY_RANGE_GREEN                                                  \
  0x4456
#define mmKEY_RANGE_BLUE                                                        \
  0x1a57
#define mmDCP0_KEY_RANGE_BLUE                                                   \
  0x1a57
#define mmDCP1_KEY_RANGE_BLUE                                                   \
  0x1c57
#define mmDCP2_KEY_RANGE_BLUE                                                   \
  0x1e57
#define mmDCP3_KEY_RANGE_BLUE                                                   \
  0x4057
#define mmDCP4_KEY_RANGE_BLUE                                                   \
  0x4257
#define mmDCP5_KEY_RANGE_BLUE                                                   \
  0x4457
#define mmDEGAMMA_CONTROL                                                       \
  0x1a58
#define mmDCP0_DEGAMMA_CONTROL                                                  \
  0x1a58
#define mmDCP1_DEGAMMA_CONTROL                                                  \
  0x1c58
#define mmDCP2_DEGAMMA_CONTROL                                                  \
  0x1e58
#define mmDCP3_DEGAMMA_CONTROL                                                  \
  0x4058
#define mmDCP4_DEGAMMA_CONTROL                                                  \
  0x4258
#define mmDCP5_DEGAMMA_CONTROL                                                  \
  0x4458
#define mmGAMUT_REMAP_CONTROL                                                   \
  0x1a59
#define mmDCP0_GAMUT_REMAP_CONTROL                                              \
  0x1a59
#define mmDCP1_GAMUT_REMAP_CONTROL                                              \
  0x1c59
#define mmDCP2_GAMUT_REMAP_CONTROL                                              \
  0x1e59
#define mmDCP3_GAMUT_REMAP_CONTROL                                              \
  0x4059
#define mmDCP4_GAMUT_REMAP_CONTROL                                              \
  0x4259
#define mmDCP5_GAMUT_REMAP_CONTROL                                              \
  0x4459
#define mmGAMUT_REMAP_C11_C12                                                   \
  0x1a5a
#define mmDCP0_GAMUT_REMAP_C11_C12                                              \
  0x1a5a
#define mmDCP1_GAMUT_REMAP_C11_C12                                              \
  0x1c5a
#define mmDCP2_GAMUT_REMAP_C11_C12                                              \
  0x1e5a
#define mmDCP3_GAMUT_REMAP_C11_C12                                              \
  0x405a
#define mmDCP4_GAMUT_REMAP_C11_C12                                              \
  0x425a
#define mmDCP5_GAMUT_REMAP_C11_C12                                              \
  0x445a
#define mmGAMUT_REMAP_C13_C14                                                   \
  0x1a5b
#define mmDCP0_GAMUT_REMAP_C13_C14                                              \
  0x1a5b
#define mmDCP1_GAMUT_REMAP_C13_C14                                              \
  0x1c5b
#define mmDCP2_GAMUT_REMAP_C13_C14                                              \
  0x1e5b
#define mmDCP3_GAMUT_REMAP_C13_C14                                              \
  0x405b
#define mmDCP4_GAMUT_REMAP_C13_C14                                              \
  0x425b
#define mmDCP5_GAMUT_REMAP_C13_C14                                              \
  0x445b
#define mmGAMUT_REMAP_C21_C22                                                   \
  0x1a5c
#define mmDCP0_GAMUT_REMAP_C21_C22                                              \
  0x1a5c
#define mmDCP1_GAMUT_REMAP_C21_C22                                              \
  0x1c5c
#define mmDCP2_GAMUT_REMAP_C21_C22                                              \
  0x1e5c
#define mmDCP3_GAMUT_REMAP_C21_C22                                              \
  0x405c
#define mmDCP4_GAMUT_REMAP_C21_C22                                              \
  0x425c
#define mmDCP5_GAMUT_REMAP_C21_C22                                              \
  0x445c
#define mmGAMUT_REMAP_C23_C24                                                   \
  0x1a5d
#define mmDCP0_GAMUT_REMAP_C23_C24                                              \
  0x1a5d
#define mmDCP1_GAMUT_REMAP_C23_C24                                              \
  0x1c5d
#define mmDCP2_GAMUT_REMAP_C23_C24                                              \
  0x1e5d
#define mmDCP3_GAMUT_REMAP_C23_C24                                              \
  0x405d
#define mmDCP4_GAMUT_REMAP_C23_C24                                              \
  0x425d
#define mmDCP5_GAMUT_REMAP_C23_C24                                              \
  0x445d
#define mmGAMUT_REMAP_C31_C32                                                   \
  0x1a5e
#define mmDCP0_GAMUT_REMAP_C31_C32                                              \
  0x1a5e
#define mmDCP1_GAMUT_REMAP_C31_C32                                              \
  0x1c5e
#define mmDCP2_GAMUT_REMAP_C31_C32                                              \
  0x1e5e
#define mmDCP3_GAMUT_REMAP_C31_C32                                              \
  0x405e
#define mmDCP4_GAMUT_REMAP_C31_C32                                              \
  0x425e
#define mmDCP5_GAMUT_REMAP_C31_C32                                              \
  0x445e
#define mmGAMUT_REMAP_C33_C34                                                   \
  0x1a5f
#define mmDCP0_GAMUT_REMAP_C33_C34                                              \
  0x1a5f
#define mmDCP1_GAMUT_REMAP_C33_C34                                              \
  0x1c5f
#define mmDCP2_GAMUT_REMAP_C33_C34                                              \
  0x1e5f
#define mmDCP3_GAMUT_REMAP_C33_C34                                              \
  0x405f
#define mmDCP4_GAMUT_REMAP_C33_C34                                              \
  0x425f
#define mmDCP5_GAMUT_REMAP_C33_C34                                              \
  0x445f
#define mmDCP_SPATIAL_DITHER_CNTL                                               \
  0x1a60
#define mmDCP0_DCP_SPATIAL_DITHER_CNTL                                          \
  0x1a60
#define mmDCP1_DCP_SPATIAL_DITHER_CNTL                                          \
  0x1c60
#define mmDCP2_DCP_SPATIAL_DITHER_CNTL                                          \
  0x1e60
#define mmDCP3_DCP_SPATIAL_DITHER_CNTL                                          \
  0x4060
#define mmDCP4_DCP_SPATIAL_DITHER_CNTL                                          \
  0x4260
#define mmDCP5_DCP_SPATIAL_DITHER_CNTL                                          \
  0x4460
#define mmDCP_RANDOM_SEEDS                                                      \
  0x1a61
#define mmDCP0_DCP_RANDOM_SEEDS                                                 \
  0x1a61
#define mmDCP1_DCP_RANDOM_SEEDS                                                 \
  0x1c61
#define mmDCP2_DCP_RANDOM_SEEDS                                                 \
  0x1e61
#define mmDCP3_DCP_RANDOM_SEEDS                                                 \
  0x4061
#define mmDCP4_DCP_RANDOM_SEEDS                                                 \
  0x4261
#define mmDCP5_DCP_RANDOM_SEEDS                                                 \
  0x4461
#define mmDCP_FP_CONVERTED_FIELD                                                \
  0x1a65
#define mmDCP0_DCP_FP_CONVERTED_FIELD                                           \
  0x1a65
#define mmDCP1_DCP_FP_CONVERTED_FIELD                                           \
  0x1c65
#define mmDCP2_DCP_FP_CONVERTED_FIELD                                           \
  0x1e65
#define mmDCP3_DCP_FP_CONVERTED_FIELD                                           \
  0x4065
#define mmDCP4_DCP_FP_CONVERTED_FIELD                                           \
  0x4265
#define mmDCP5_DCP_FP_CONVERTED_FIELD                                           \
  0x4465
#define mmCUR_CONTROL                                                           \
  0x1a66
#define mmDCP0_CUR_CONTROL                                                      \
  0x1a66
#define mmDCP1_CUR_CONTROL                                                      \
  0x1c66
#define mmDCP2_CUR_CONTROL                                                      \
  0x1e66
#define mmDCP3_CUR_CONTROL                                                      \
  0x4066
#define mmDCP4_CUR_CONTROL                                                      \
  0x4266
#define mmDCP5_CUR_CONTROL                                                      \
  0x4466
#define mmCUR_SURFACE_ADDRESS                                                   \
  0x1a67
#define mmDCP0_CUR_SURFACE_ADDRESS                                              \
  0x1a67
#define mmDCP1_CUR_SURFACE_ADDRESS                                              \
  0x1c67
#define mmDCP2_CUR_SURFACE_ADDRESS                                              \
  0x1e67
#define mmDCP3_CUR_SURFACE_ADDRESS                                              \
  0x4067
#define mmDCP4_CUR_SURFACE_ADDRESS                                              \
  0x4267
#define mmDCP5_CUR_SURFACE_ADDRESS                                              \
  0x4467
#define mmCUR_SIZE                                                              \
  0x1a68
#define mmDCP0_CUR_SIZE                                                         \
  0x1a68
#define mmDCP1_CUR_SIZE                                                         \
  0x1c68
#define mmDCP2_CUR_SIZE                                                         \
  0x1e68
#define mmDCP3_CUR_SIZE                                                         \
  0x4068
#define mmDCP4_CUR_SIZE                                                         \
  0x4268
#define mmDCP5_CUR_SIZE                                                         \
  0x4468
#define mmCUR_SURFACE_ADDRESS_HIGH                                              \
  0x1a69
#define mmDCP0_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x1a69
#define mmDCP1_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x1c69
#define mmDCP2_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x1e69
#define mmDCP3_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x4069
#define mmDCP4_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x4269
#define mmDCP5_CUR_SURFACE_ADDRESS_HIGH                                         \
  0x4469
#define mmCUR_POSITION                                                          \
  0x1a6a
#define mmDCP0_CUR_POSITION                                                     \
  0x1a6a
#define mmDCP1_CUR_POSITION                                                     \
  0x1c6a
#define mmDCP2_CUR_POSITION                                                     \
  0x1e6a
#define mmDCP3_CUR_POSITION                                                     \
  0x406a
#define mmDCP4_CUR_POSITION                                                     \
  0x426a
#define mmDCP5_CUR_POSITION                                                     \
  0x446a
#define mmCUR_HOT_SPOT                                                          \
  0x1a6b
#define mmDCP0_CUR_HOT_SPOT                                                     \
  0x1a6b
#define mmDCP1_CUR_HOT_SPOT                                                     \
  0x1c6b
#define mmDCP2_CUR_HOT_SPOT                                                     \
  0x1e6b
#define mmDCP3_CUR_HOT_SPOT                                                     \
  0x406b
#define mmDCP4_CUR_HOT_SPOT                                                     \
  0x426b
#define mmDCP5_CUR_HOT_SPOT                                                     \
  0x446b
#define mmCUR_COLOR1                                                            \
  0x1a6c
#define mmDCP0_CUR_COLOR1                                                       \
  0x1a6c
#define mmDCP1_CUR_COLOR1                                                       \
  0x1c6c
#define mmDCP2_CUR_COLOR1                                                       \
  0x1e6c
#define mmDCP3_CUR_COLOR1                                                       \
  0x406c
#define mmDCP4_CUR_COLOR1                                                       \
  0x426c
#define mmDCP5_CUR_COLOR1                                                       \
  0x446c
#define mmCUR_COLOR2                                                            \
  0x1a6d
#define mmDCP0_CUR_COLOR2                                                       \
  0x1a6d
#define mmDCP1_CUR_COLOR2                                                       \
  0x1c6d
#define mmDCP2_CUR_COLOR2                                                       \
  0x1e6d
#define mmDCP3_CUR_COLOR2                                                       \
  0x406d
#define mmDCP4_CUR_COLOR2                                                       \
  0x426d
#define mmDCP5_CUR_COLOR2                                                       \
  0x446d
#define mmCUR_UPDATE                                                            \
  0x1a6e
#define mmDCP0_CUR_UPDATE                                                       \
  0x1a6e
#define mmDCP1_CUR_UPDATE                                                       \
  0x1c6e
#define mmDCP2_CUR_UPDATE                                                       \
  0x1e6e
#define mmDCP3_CUR_UPDATE                                                       \
  0x406e
#define mmDCP4_CUR_UPDATE                                                       \
  0x426e
#define mmDCP5_CUR_UPDATE                                                       \
  0x446e
#define mmCUR_REQUEST_FILTER_CNTL                                               \
  0x1a99
#define mmDCP0_CUR_REQUEST_FILTER_CNTL                                          \
  0x1a99
#define mmDCP1_CUR_REQUEST_FILTER_CNTL                                          \
  0x1c99
#define mmDCP2_CUR_REQUEST_FILTER_CNTL                                          \
  0x1e99
#define mmDCP3_CUR_REQUEST_FILTER_CNTL                                          \
  0x4099
#define mmDCP4_CUR_REQUEST_FILTER_CNTL                                          \
  0x4299
#define mmDCP5_CUR_REQUEST_FILTER_CNTL                                          \
  0x4499
#define mmCUR_STEREO_CONTROL                                                    \
  0x1a9a
#define mmDCP0_CUR_STEREO_CONTROL                                               \
  0x1a9a
#define mmDCP1_CUR_STEREO_CONTROL                                               \
  0x1c9a
#define mmDCP2_CUR_STEREO_CONTROL                                               \
  0x1e9a
#define mmDCP3_CUR_STEREO_CONTROL                                               \
  0x409a
#define mmDCP4_CUR_STEREO_CONTROL                                               \
  0x429a
#define mmDCP5_CUR_STEREO_CONTROL                                               \
  0x449a
#define mmDC_LUT_RW_MODE                                                        \
  0x1a78
#define mmDCP0_DC_LUT_RW_MODE                                                   \
  0x1a78
#define mmDCP1_DC_LUT_RW_MODE                                                   \
  0x1c78
#define mmDCP2_DC_LUT_RW_MODE                                                   \
  0x1e78
#define mmDCP3_DC_LUT_RW_MODE                                                   \
  0x4078
#define mmDCP4_DC_LUT_RW_MODE                                                   \
  0x4278
#define mmDCP5_DC_LUT_RW_MODE                                                   \
  0x4478
#define mmDC_LUT_RW_INDEX                                                       \
  0x1a79
#define mmDCP0_DC_LUT_RW_INDEX                                                  \
  0x1a79
#define mmDCP1_DC_LUT_RW_INDEX                                                  \
  0x1c79
#define mmDCP2_DC_LUT_RW_INDEX                                                  \
  0x1e79
#define mmDCP3_DC_LUT_RW_INDEX                                                  \
  0x4079
#define mmDCP4_DC_LUT_RW_INDEX                                                  \
  0x4279
#define mmDCP5_DC_LUT_RW_INDEX                                                  \
  0x4479
#define mmDC_LUT_SEQ_COLOR                                                      \
  0x1a7a
#define mmDCP0_DC_LUT_SEQ_COLOR                                                 \
  0x1a7a
#define mmDCP1_DC_LUT_SEQ_COLOR                                                 \
  0x1c7a
#define mmDCP2_DC_LUT_SEQ_COLOR                                                 \
  0x1e7a
#define mmDCP3_DC_LUT_SEQ_COLOR                                                 \
  0x407a
#define mmDCP4_DC_LUT_SEQ_COLOR                                                 \
  0x427a
#define mmDCP5_DC_LUT_SEQ_COLOR                                                 \
  0x447a
#define mmDC_LUT_PWL_DATA                                                       \
  0x1a7b
#define mmDCP0_DC_LUT_PWL_DATA                                                  \
  0x1a7b
#define mmDCP1_DC_LUT_PWL_DATA                                                  \
  0x1c7b
#define mmDCP2_DC_LUT_PWL_DATA                                                  \
  0x1e7b
#define mmDCP3_DC_LUT_PWL_DATA                                                  \
  0x407b
#define mmDCP4_DC_LUT_PWL_DATA                                                  \
  0x427b
#define mmDCP5_DC_LUT_PWL_DATA                                                  \
  0x447b
#define mmDC_LUT_30_COLOR                                                       \
  0x1a7c
#define mmDCP0_DC_LUT_30_COLOR                                                  \
  0x1a7c
#define mmDCP1_DC_LUT_30_COLOR                                                  \
  0x1c7c
#define mmDCP2_DC_LUT_30_COLOR                                                  \
  0x1e7c
#define mmDCP3_DC_LUT_30_COLOR                                                  \
  0x407c
#define mmDCP4_DC_LUT_30_COLOR                                                  \
  0x427c
#define mmDCP5_DC_LUT_30_COLOR                                                  \
  0x447c
#define mmDC_LUT_VGA_ACCESS_ENABLE                                              \
  0x1a7d
#define mmDCP0_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x1a7d
#define mmDCP1_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x1c7d
#define mmDCP2_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x1e7d
#define mmDCP3_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x407d
#define mmDCP4_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x427d
#define mmDCP5_DC_LUT_VGA_ACCESS_ENABLE                                         \
  0x447d
#define mmDC_LUT_WRITE_EN_MASK                                                  \
  0x1a7e
#define mmDCP0_DC_LUT_WRITE_EN_MASK                                             \
  0x1a7e
#define mmDCP1_DC_LUT_WRITE_EN_MASK                                             \
  0x1c7e
#define mmDCP2_DC_LUT_WRITE_EN_MASK                                             \
  0x1e7e
#define mmDCP3_DC_LUT_WRITE_EN_MASK                                             \
  0x407e
#define mmDCP4_DC_LUT_WRITE_EN_MASK                                             \
  0x427e
#define mmDCP5_DC_LUT_WRITE_EN_MASK                                             \
  0x447e
#define mmDC_LUT_AUTOFILL                                                       \
  0x1a7f
#define mmDCP0_DC_LUT_AUTOFILL                                                  \
  0x1a7f
#define mmDCP1_DC_LUT_AUTOFILL                                                  \
  0x1c7f
#define mmDCP2_DC_LUT_AUTOFILL                                                  \
  0x1e7f
#define mmDCP3_DC_LUT_AUTOFILL                                                  \
  0x407f
#define mmDCP4_DC_LUT_AUTOFILL                                                  \
  0x427f
#define mmDCP5_DC_LUT_AUTOFILL                                                  \
  0x447f
#define mmDC_LUT_CONTROL                                                        \
  0x1a80
#define mmDCP0_DC_LUT_CONTROL                                                   \
  0x1a80
#define mmDCP1_DC_LUT_CONTROL                                                   \
  0x1c80
#define mmDCP2_DC_LUT_CONTROL                                                   \
  0x1e80
#define mmDCP3_DC_LUT_CONTROL                                                   \
  0x4080
#define mmDCP4_DC_LUT_CONTROL                                                   \
  0x4280
#define mmDCP5_DC_LUT_CONTROL                                                   \
  0x4480
#define mmDC_LUT_BLACK_OFFSET_BLUE                                              \
  0x1a81
#define mmDCP0_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x1a81
#define mmDCP1_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x1c81
#define mmDCP2_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x1e81
#define mmDCP3_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x4081
#define mmDCP4_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x4281
#define mmDCP5_DC_LUT_BLACK_OFFSET_BLUE                                         \
  0x4481
#define mmDC_LUT_BLACK_OFFSET_GREEN                                             \
  0x1a82
#define mmDCP0_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x1a82
#define mmDCP1_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x1c82
#define mmDCP2_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x1e82
#define mmDCP3_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x4082
#define mmDCP4_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x4282
#define mmDCP5_DC_LUT_BLACK_OFFSET_GREEN                                        \
  0x4482
#define mmDC_LUT_BLACK_OFFSET_RED                                               \
  0x1a83
#define mmDCP0_DC_LUT_BLACK_OFFSET_RED                                          \
  0x1a83
#define mmDCP1_DC_LUT_BLACK_OFFSET_RED                                          \
  0x1c83
#define mmDCP2_DC_LUT_BLACK_OFFSET_RED                                          \
  0x1e83
#define mmDCP3_DC_LUT_BLACK_OFFSET_RED                                          \
  0x4083
#define mmDCP4_DC_LUT_BLACK_OFFSET_RED                                          \
  0x4283
#define mmDCP5_DC_LUT_BLACK_OFFSET_RED                                          \
  0x4483
#define mmDC_LUT_WHITE_OFFSET_BLUE                                              \
  0x1a84
#define mmDCP0_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x1a84
#define mmDCP1_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x1c84
#define mmDCP2_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x1e84
#define mmDCP3_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x4084
#define mmDCP4_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x4284
#define mmDCP5_DC_LUT_WHITE_OFFSET_BLUE                                         \
  0x4484
#define mmDC_LUT_WHITE_OFFSET_GREEN                                             \
  0x1a85
#define mmDCP0_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x1a85
#define mmDCP1_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x1c85
#define mmDCP2_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x1e85
#define mmDCP3_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x4085
#define mmDCP4_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x4285
#define mmDCP5_DC_LUT_WHITE_OFFSET_GREEN                                        \
  0x4485
#define mmDC_LUT_WHITE_OFFSET_RED                                               \
  0x1a86
#define mmDCP0_DC_LUT_WHITE_OFFSET_RED                                          \
  0x1a86
#define mmDCP1_DC_LUT_WHITE_OFFSET_RED                                          \
  0x1c86
#define mmDCP2_DC_LUT_WHITE_OFFSET_RED                                          \
  0x1e86
#define mmDCP3_DC_LUT_WHITE_OFFSET_RED                                          \
  0x4086
#define mmDCP4_DC_LUT_WHITE_OFFSET_RED                                          \
  0x4286
#define mmDCP5_DC_LUT_WHITE_OFFSET_RED                                          \
  0x4486
#define mmDCP_CRC_CONTROL                                                       \
  0x1a87
#define mmDCP0_DCP_CRC_CONTROL                                                  \
  0x1a87
#define mmDCP1_DCP_CRC_CONTROL                                                  \
  0x1c87
#define mmDCP2_DCP_CRC_CONTROL                                                  \
  0x1e87
#define mmDCP3_DCP_CRC_CONTROL                                                  \
  0x4087
#define mmDCP4_DCP_CRC_CONTROL                                                  \
  0x4287
#define mmDCP5_DCP_CRC_CONTROL                                                  \
  0x4487
#define mmDCP_CRC_MASK                                                          \
  0x1a88
#define mmDCP0_DCP_CRC_MASK                                                     \
  0x1a88
#define mmDCP1_DCP_CRC_MASK                                                     \
  0x1c88
#define mmDCP2_DCP_CRC_MASK                                                     \
  0x1e88
#define mmDCP3_DCP_CRC_MASK                                                     \
  0x4088
#define mmDCP4_DCP_CRC_MASK                                                     \
  0x4288
#define mmDCP5_DCP_CRC_MASK                                                     \
  0x4488
#define mmDCP_CRC_CURRENT                                                       \
  0x1a89
#define mmDCP0_DCP_CRC_CURRENT                                                  \
  0x1a89
#define mmDCP1_DCP_CRC_CURRENT                                                  \
  0x1c89
#define mmDCP2_DCP_CRC_CURRENT                                                  \
  0x1e89
#define mmDCP3_DCP_CRC_CURRENT                                                  \
  0x4089
#define mmDCP4_DCP_CRC_CURRENT                                                  \
  0x4289
#define mmDCP5_DCP_CRC_CURRENT                                                  \
  0x4489
#define mmDVMM_PTE_CONTROL                                                      \
  0x1a8a
#define mmDCP0_DVMM_PTE_CONTROL                                                 \
  0x1a8a
#define mmDCP1_DVMM_PTE_CONTROL                                                 \
  0x1c8a
#define mmDCP2_DVMM_PTE_CONTROL                                                 \
  0x1e8a
#define mmDCP3_DVMM_PTE_CONTROL                                                 \
  0x408a
#define mmDCP4_DVMM_PTE_CONTROL                                                 \
  0x428a
#define mmDCP5_DVMM_PTE_CONTROL                                                 \
  0x448a
#define mmDCP_CRC_LAST                                                          \
  0x1a8b
#define mmDCP0_DCP_CRC_LAST                                                     \
  0x1a8b
#define mmDCP1_DCP_CRC_LAST                                                     \
  0x1c8b
#define mmDCP2_DCP_CRC_LAST                                                     \
  0x1e8b
#define mmDCP3_DCP_CRC_LAST                                                     \
  0x408b
#define mmDCP4_DCP_CRC_LAST                                                     \
  0x428b
#define mmDCP5_DCP_CRC_LAST                                                     \
  0x448b
#define mmDCP_DEBUG                                                             \
  0x1a8d
#define mmDCP0_DCP_DEBUG                                                        \
  0x1a8d
#define mmDCP1_DCP_DEBUG                                                        \
  0x1c8d
#define mmDCP2_DCP_DEBUG                                                        \
  0x1e8d
#define mmDCP3_DCP_DEBUG                                                        \
  0x408d
#define mmDCP4_DCP_DEBUG                                                        \
  0x428d
#define mmDCP5_DCP_DEBUG                                                        \
  0x448d
#define mmGRPH_FLIP_RATE_CNTL                                                   \
  0x1a8e
#define mmDCP0_GRPH_FLIP_RATE_CNTL                                              \
  0x1a8e
#define mmDCP1_GRPH_FLIP_RATE_CNTL                                              \
  0x1c8e
#define mmDCP2_GRPH_FLIP_RATE_CNTL                                              \
  0x1e8e
#define mmDCP3_GRPH_FLIP_RATE_CNTL                                              \
  0x408e
#define mmDCP4_GRPH_FLIP_RATE_CNTL                                              \
  0x428e
#define mmDCP5_GRPH_FLIP_RATE_CNTL                                              \
  0x448e
#define mmDCP_GSL_CONTROL                                                       \
  0x1a90
#define mmDCP0_DCP_GSL_CONTROL                                                  \
  0x1a90
#define mmDCP1_DCP_GSL_CONTROL                                                  \
  0x1c90
#define mmDCP2_DCP_GSL_CONTROL                                                  \
  0x1e90
#define mmDCP3_DCP_GSL_CONTROL                                                  \
  0x4090
#define mmDCP4_DCP_GSL_CONTROL                                                  \
  0x4290
#define mmDCP5_DCP_GSL_CONTROL                                                  \
  0x4490
#define mmDCP_LB_DATA_GAP_BETWEEN_CHUNK                                         \
  0x1a91
#define mmDCP0_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x1a91
#define mmDCP1_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x1c91
#define mmDCP2_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x1e91
#define mmDCP3_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x4091
#define mmDCP4_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x4291
#define mmDCP5_DCP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x4491
#define mmDCP_DEBUG_SG                                                          \
  0x1a92
#define mmDCP0_DCP_DEBUG_SG                                                     \
  0x1a92
#define mmDCP1_DCP_DEBUG_SG                                                     \
  0x1c92
#define mmDCP2_DCP_DEBUG_SG                                                     \
  0x1e92
#define mmDCP3_DCP_DEBUG_SG                                                     \
  0x4092
#define mmDCP4_DCP_DEBUG_SG                                                     \
  0x4292
#define mmDCP5_DCP_DEBUG_SG                                                     \
  0x4492
#define mmDCP_DEBUG_SG2                                                         \
  0x1a94
#define mmDCP0_DCP_DEBUG_SG2                                                    \
  0x1a94
#define mmDCP1_DCP_DEBUG_SG2                                                    \
  0x1c94
#define mmDCP2_DCP_DEBUG_SG2                                                    \
  0x1e94
#define mmDCP3_DCP_DEBUG_SG2                                                    \
  0x4094
#define mmDCP4_DCP_DEBUG_SG2                                                    \
  0x4294
#define mmDCP5_DCP_DEBUG_SG2                                                    \
  0x4494
#define mmDCP_DVMM_DEBUG                                                        \
  0x1a93
#define mmDCP0_DCP_DVMM_DEBUG                                                   \
  0x1a93
#define mmDCP1_DCP_DVMM_DEBUG                                                   \
  0x1c93
#define mmDCP2_DCP_DVMM_DEBUG                                                   \
  0x1e93
#define mmDCP3_DCP_DVMM_DEBUG                                                   \
  0x4093
#define mmDCP4_DCP_DVMM_DEBUG                                                   \
  0x4293
#define mmDCP5_DCP_DVMM_DEBUG                                                   \
  0x4493
#define mmDCP_TEST_DEBUG_INDEX                                                  \
  0x1a95
#define mmDCP0_DCP_TEST_DEBUG_INDEX                                             \
  0x1a95
#define mmDCP1_DCP_TEST_DEBUG_INDEX                                             \
  0x1c95
#define mmDCP2_DCP_TEST_DEBUG_INDEX                                             \
  0x1e95
#define mmDCP3_DCP_TEST_DEBUG_INDEX                                             \
  0x4095
#define mmDCP4_DCP_TEST_DEBUG_INDEX                                             \
  0x4295
#define mmDCP5_DCP_TEST_DEBUG_INDEX                                             \
  0x4495
#define mmDCP_TEST_DEBUG_DATA                                                   \
  0x1a96
#define mmDCP0_DCP_TEST_DEBUG_DATA                                              \
  0x1a96
#define mmDCP1_DCP_TEST_DEBUG_DATA                                              \
  0x1c96
#define mmDCP2_DCP_TEST_DEBUG_DATA                                              \
  0x1e96
#define mmDCP3_DCP_TEST_DEBUG_DATA                                              \
  0x4096
#define mmDCP4_DCP_TEST_DEBUG_DATA                                              \
  0x4296
#define mmDCP5_DCP_TEST_DEBUG_DATA                                              \
  0x4496
#define mmGRPH_STEREOSYNC_FLIP                                                  \
  0x1a97
#define mmDCP0_GRPH_STEREOSYNC_FLIP                                             \
  0x1a97
#define mmDCP1_GRPH_STEREOSYNC_FLIP                                             \
  0x1c97
#define mmDCP2_GRPH_STEREOSYNC_FLIP                                             \
  0x1e97
#define mmDCP3_GRPH_STEREOSYNC_FLIP                                             \
  0x4097
#define mmDCP4_GRPH_STEREOSYNC_FLIP                                             \
  0x4297
#define mmDCP5_GRPH_STEREOSYNC_FLIP                                             \
  0x4497
#define mmDCP_DEBUG2                                                            \
  0x1a98
#define mmDCP0_DCP_DEBUG2                                                       \
  0x1a98
#define mmDCP1_DCP_DEBUG2                                                       \
  0x1c98
#define mmDCP2_DCP_DEBUG2                                                       \
  0x1e98
#define mmDCP3_DCP_DEBUG2                                                       \
  0x4098
#define mmDCP4_DCP_DEBUG2                                                       \
  0x4298
#define mmDCP5_DCP_DEBUG2                                                       \
  0x4498
#define mmHW_ROTATION                                                           \
  0x1a9e
#define mmDCP0_HW_ROTATION                                                      \
  0x1a9e
#define mmDCP1_HW_ROTATION                                                      \
  0x1c9e
#define mmDCP2_HW_ROTATION                                                      \
  0x1e9e
#define mmDCP3_HW_ROTATION                                                      \
  0x409e
#define mmDCP4_HW_ROTATION                                                      \
  0x429e
#define mmDCP5_HW_ROTATION                                                      \
  0x449e
#define mmGRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                                    \
  0x1a9f
#define mmDCP0_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x1a9f
#define mmDCP1_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x1c9f
#define mmDCP2_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x1e9f
#define mmDCP3_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x409f
#define mmDCP4_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x429f
#define mmDCP5_GRPH_XDMA_CACHE_UNDERFLOW_DET_CNTL                               \
  0x449f
#define mmREGAMMA_CONTROL                                                       \
  0x1aa0
#define mmDCP0_REGAMMA_CONTROL                                                  \
  0x1aa0
#define mmDCP1_REGAMMA_CONTROL                                                  \
  0x1ca0
#define mmDCP2_REGAMMA_CONTROL                                                  \
  0x1ea0
#define mmDCP3_REGAMMA_CONTROL                                                  \
  0x40a0
#define mmDCP4_REGAMMA_CONTROL                                                  \
  0x42a0
#define mmDCP5_REGAMMA_CONTROL                                                  \
  0x44a0
#define mmREGAMMA_LUT_INDEX                                                     \
  0x1aa1
#define mmDCP0_REGAMMA_LUT_INDEX                                                \
  0x1aa1
#define mmDCP1_REGAMMA_LUT_INDEX                                                \
  0x1ca1
#define mmDCP2_REGAMMA_LUT_INDEX                                                \
  0x1ea1
#define mmDCP3_REGAMMA_LUT_INDEX                                                \
  0x40a1
#define mmDCP4_REGAMMA_LUT_INDEX                                                \
  0x42a1
#define mmDCP5_REGAMMA_LUT_INDEX                                                \
  0x44a1
#define mmREGAMMA_LUT_DATA                                                      \
  0x1aa2
#define mmDCP0_REGAMMA_LUT_DATA                                                 \
  0x1aa2
#define mmDCP1_REGAMMA_LUT_DATA                                                 \
  0x1ca2
#define mmDCP2_REGAMMA_LUT_DATA                                                 \
  0x1ea2
#define mmDCP3_REGAMMA_LUT_DATA                                                 \
  0x40a2
#define mmDCP4_REGAMMA_LUT_DATA                                                 \
  0x42a2
#define mmDCP5_REGAMMA_LUT_DATA                                                 \
  0x44a2
#define mmREGAMMA_LUT_WRITE_EN_MASK                                             \
  0x1aa3
#define mmDCP0_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x1aa3
#define mmDCP1_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x1ca3
#define mmDCP2_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x1ea3
#define mmDCP3_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x40a3
#define mmDCP4_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x42a3
#define mmDCP5_REGAMMA_LUT_WRITE_EN_MASK                                        \
  0x44a3
#define mmREGAMMA_CNTLA_START_CNTL                                              \
  0x1aa4
#define mmDCP0_REGAMMA_CNTLA_START_CNTL                                         \
  0x1aa4
#define mmDCP1_REGAMMA_CNTLA_START_CNTL                                         \
  0x1ca4
#define mmDCP2_REGAMMA_CNTLA_START_CNTL                                         \
  0x1ea4
#define mmDCP3_REGAMMA_CNTLA_START_CNTL                                         \
  0x40a4
#define mmDCP4_REGAMMA_CNTLA_START_CNTL                                         \
  0x42a4
#define mmDCP5_REGAMMA_CNTLA_START_CNTL                                         \
  0x44a4
#define mmREGAMMA_CNTLA_SLOPE_CNTL                                              \
  0x1aa5
#define mmDCP0_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x1aa5
#define mmDCP1_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x1ca5
#define mmDCP2_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x1ea5
#define mmDCP3_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x40a5
#define mmDCP4_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x42a5
#define mmDCP5_REGAMMA_CNTLA_SLOPE_CNTL                                         \
  0x44a5
#define mmREGAMMA_CNTLA_END_CNTL1                                               \
  0x1aa6
#define mmDCP0_REGAMMA_CNTLA_END_CNTL1                                          \
  0x1aa6
#define mmDCP1_REGAMMA_CNTLA_END_CNTL1                                          \
  0x1ca6
#define mmDCP2_REGAMMA_CNTLA_END_CNTL1                                          \
  0x1ea6
#define mmDCP3_REGAMMA_CNTLA_END_CNTL1                                          \
  0x40a6
#define mmDCP4_REGAMMA_CNTLA_END_CNTL1                                          \
  0x42a6
#define mmDCP5_REGAMMA_CNTLA_END_CNTL1                                          \
  0x44a6
#define mmREGAMMA_CNTLA_END_CNTL2                                               \
  0x1aa7
#define mmDCP0_REGAMMA_CNTLA_END_CNTL2                                          \
  0x1aa7
#define mmDCP1_REGAMMA_CNTLA_END_CNTL2                                          \
  0x1ca7
#define mmDCP2_REGAMMA_CNTLA_END_CNTL2                                          \
  0x1ea7
#define mmDCP3_REGAMMA_CNTLA_END_CNTL2                                          \
  0x40a7
#define mmDCP4_REGAMMA_CNTLA_END_CNTL2                                          \
  0x42a7
#define mmDCP5_REGAMMA_CNTLA_END_CNTL2                                          \
  0x44a7
#define mmREGAMMA_CNTLA_REGION_0_1                                              \
  0x1aa8
#define mmDCP0_REGAMMA_CNTLA_REGION_0_1                                         \
  0x1aa8
#define mmDCP1_REGAMMA_CNTLA_REGION_0_1                                         \
  0x1ca8
#define mmDCP2_REGAMMA_CNTLA_REGION_0_1                                         \
  0x1ea8
#define mmDCP3_REGAMMA_CNTLA_REGION_0_1                                         \
  0x40a8
#define mmDCP4_REGAMMA_CNTLA_REGION_0_1                                         \
  0x42a8
#define mmDCP5_REGAMMA_CNTLA_REGION_0_1                                         \
  0x44a8
#define mmREGAMMA_CNTLA_REGION_2_3                                              \
  0x1aa9
#define mmDCP0_REGAMMA_CNTLA_REGION_2_3                                         \
  0x1aa9
#define mmDCP1_REGAMMA_CNTLA_REGION_2_3                                         \
  0x1ca9
#define mmDCP2_REGAMMA_CNTLA_REGION_2_3                                         \
  0x1ea9
#define mmDCP3_REGAMMA_CNTLA_REGION_2_3                                         \
  0x40a9
#define mmDCP4_REGAMMA_CNTLA_REGION_2_3                                         \
  0x42a9
#define mmDCP5_REGAMMA_CNTLA_REGION_2_3                                         \
  0x44a9
#define mmREGAMMA_CNTLA_REGION_4_5                                              \
  0x1aaa
#define mmDCP0_REGAMMA_CNTLA_REGION_4_5                                         \
  0x1aaa
#define mmDCP1_REGAMMA_CNTLA_REGION_4_5                                         \
  0x1caa
#define mmDCP2_REGAMMA_CNTLA_REGION_4_5                                         \
  0x1eaa
#define mmDCP3_REGAMMA_CNTLA_REGION_4_5                                         \
  0x40aa
#define mmDCP4_REGAMMA_CNTLA_REGION_4_5                                         \
  0x42aa
#define mmDCP5_REGAMMA_CNTLA_REGION_4_5                                         \
  0x44aa
#define mmREGAMMA_CNTLA_REGION_6_7                                              \
  0x1aab
#define mmDCP0_REGAMMA_CNTLA_REGION_6_7                                         \
  0x1aab
#define mmDCP1_REGAMMA_CNTLA_REGION_6_7                                         \
  0x1cab
#define mmDCP2_REGAMMA_CNTLA_REGION_6_7                                         \
  0x1eab
#define mmDCP3_REGAMMA_CNTLA_REGION_6_7                                         \
  0x40ab
#define mmDCP4_REGAMMA_CNTLA_REGION_6_7                                         \
  0x42ab
#define mmDCP5_REGAMMA_CNTLA_REGION_6_7                                         \
  0x44ab
#define mmREGAMMA_CNTLA_REGION_8_9                                              \
  0x1aac
#define mmDCP0_REGAMMA_CNTLA_REGION_8_9                                         \
  0x1aac
#define mmDCP1_REGAMMA_CNTLA_REGION_8_9                                         \
  0x1cac
#define mmDCP2_REGAMMA_CNTLA_REGION_8_9                                         \
  0x1eac
#define mmDCP3_REGAMMA_CNTLA_REGION_8_9                                         \
  0x40ac
#define mmDCP4_REGAMMA_CNTLA_REGION_8_9                                         \
  0x42ac
#define mmDCP5_REGAMMA_CNTLA_REGION_8_9                                         \
  0x44ac
#define mmREGAMMA_CNTLA_REGION_10_11                                            \
  0x1aad
#define mmDCP0_REGAMMA_CNTLA_REGION_10_11                                       \
  0x1aad
#define mmDCP1_REGAMMA_CNTLA_REGION_10_11                                       \
  0x1cad
#define mmDCP2_REGAMMA_CNTLA_REGION_10_11                                       \
  0x1ead
#define mmDCP3_REGAMMA_CNTLA_REGION_10_11                                       \
  0x40ad
#define mmDCP4_REGAMMA_CNTLA_REGION_10_11                                       \
  0x42ad
#define mmDCP5_REGAMMA_CNTLA_REGION_10_11                                       \
  0x44ad
#define mmREGAMMA_CNTLA_REGION_12_13                                            \
  0x1aae
#define mmDCP0_REGAMMA_CNTLA_REGION_12_13                                       \
  0x1aae
#define mmDCP1_REGAMMA_CNTLA_REGION_12_13                                       \
  0x1cae
#define mmDCP2_REGAMMA_CNTLA_REGION_12_13                                       \
  0x1eae
#define mmDCP3_REGAMMA_CNTLA_REGION_12_13                                       \
  0x40ae
#define mmDCP4_REGAMMA_CNTLA_REGION_12_13                                       \
  0x42ae
#define mmDCP5_REGAMMA_CNTLA_REGION_12_13                                       \
  0x44ae
#define mmREGAMMA_CNTLA_REGION_14_15                                            \
  0x1aaf
#define mmDCP0_REGAMMA_CNTLA_REGION_14_15                                       \
  0x1aaf
#define mmDCP1_REGAMMA_CNTLA_REGION_14_15                                       \
  0x1caf
#define mmDCP2_REGAMMA_CNTLA_REGION_14_15                                       \
  0x1eaf
#define mmDCP3_REGAMMA_CNTLA_REGION_14_15                                       \
  0x40af
#define mmDCP4_REGAMMA_CNTLA_REGION_14_15                                       \
  0x42af
#define mmDCP5_REGAMMA_CNTLA_REGION_14_15                                       \
  0x44af
#define mmREGAMMA_CNTLB_START_CNTL                                              \
  0x1ab0
#define mmDCP0_REGAMMA_CNTLB_START_CNTL                                         \
  0x1ab0
#define mmDCP1_REGAMMA_CNTLB_START_CNTL                                         \
  0x1cb0
#define mmDCP2_REGAMMA_CNTLB_START_CNTL                                         \
  0x1eb0
#define mmDCP3_REGAMMA_CNTLB_START_CNTL                                         \
  0x40b0
#define mmDCP4_REGAMMA_CNTLB_START_CNTL                                         \
  0x42b0
#define mmDCP5_REGAMMA_CNTLB_START_CNTL                                         \
  0x44b0
#define mmREGAMMA_CNTLB_SLOPE_CNTL                                              \
  0x1ab1
#define mmDCP0_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x1ab1
#define mmDCP1_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x1cb1
#define mmDCP2_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x1eb1
#define mmDCP3_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x40b1
#define mmDCP4_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x42b1
#define mmDCP5_REGAMMA_CNTLB_SLOPE_CNTL                                         \
  0x44b1
#define mmREGAMMA_CNTLB_END_CNTL1                                               \
  0x1ab2
#define mmDCP0_REGAMMA_CNTLB_END_CNTL1                                          \
  0x1ab2
#define mmDCP1_REGAMMA_CNTLB_END_CNTL1                                          \
  0x1cb2
#define mmDCP2_REGAMMA_CNTLB_END_CNTL1                                          \
  0x1eb2
#define mmDCP3_REGAMMA_CNTLB_END_CNTL1                                          \
  0x40b2
#define mmDCP4_REGAMMA_CNTLB_END_CNTL1                                          \
  0x42b2
#define mmDCP5_REGAMMA_CNTLB_END_CNTL1                                          \
  0x44b2
#define mmREGAMMA_CNTLB_END_CNTL2                                               \
  0x1ab3
#define mmDCP0_REGAMMA_CNTLB_END_CNTL2                                          \
  0x1ab3
#define mmDCP1_REGAMMA_CNTLB_END_CNTL2                                          \
  0x1cb3
#define mmDCP2_REGAMMA_CNTLB_END_CNTL2                                          \
  0x1eb3
#define mmDCP3_REGAMMA_CNTLB_END_CNTL2                                          \
  0x40b3
#define mmDCP4_REGAMMA_CNTLB_END_CNTL2                                          \
  0x42b3
#define mmDCP5_REGAMMA_CNTLB_END_CNTL2                                          \
  0x44b3
#define mmREGAMMA_CNTLB_REGION_0_1                                              \
  0x1ab4
#define mmDCP0_REGAMMA_CNTLB_REGION_0_1                                         \
  0x1ab4
#define mmDCP1_REGAMMA_CNTLB_REGION_0_1                                         \
  0x1cb4
#define mmDCP2_REGAMMA_CNTLB_REGION_0_1                                         \
  0x1eb4
#define mmDCP3_REGAMMA_CNTLB_REGION_0_1                                         \
  0x40b4
#define mmDCP4_REGAMMA_CNTLB_REGION_0_1                                         \
  0x42b4
#define mmDCP5_REGAMMA_CNTLB_REGION_0_1                                         \
  0x44b4
#define mmREGAMMA_CNTLB_REGION_2_3                                              \
  0x1ab5
#define mmDCP0_REGAMMA_CNTLB_REGION_2_3                                         \
  0x1ab5
#define mmDCP1_REGAMMA_CNTLB_REGION_2_3                                         \
  0x1cb5
#define mmDCP2_REGAMMA_CNTLB_REGION_2_3                                         \
  0x1eb5
#define mmDCP3_REGAMMA_CNTLB_REGION_2_3                                         \
  0x40b5
#define mmDCP4_REGAMMA_CNTLB_REGION_2_3                                         \
  0x42b5
#define mmDCP5_REGAMMA_CNTLB_REGION_2_3                                         \
  0x44b5
#define mmREGAMMA_CNTLB_REGION_4_5                                              \
  0x1ab6
#define mmDCP0_REGAMMA_CNTLB_REGION_4_5                                         \
  0x1ab6
#define mmDCP1_REGAMMA_CNTLB_REGION_4_5                                         \
  0x1cb6
#define mmDCP2_REGAMMA_CNTLB_REGION_4_5                                         \
  0x1eb6
#define mmDCP3_REGAMMA_CNTLB_REGION_4_5                                         \
  0x40b6
#define mmDCP4_REGAMMA_CNTLB_REGION_4_5                                         \
  0x42b6
#define mmDCP5_REGAMMA_CNTLB_REGION_4_5                                         \
  0x44b6
#define mmREGAMMA_CNTLB_REGION_6_7                                              \
  0x1ab7
#define mmDCP0_REGAMMA_CNTLB_REGION_6_7                                         \
  0x1ab7
#define mmDCP1_REGAMMA_CNTLB_REGION_6_7                                         \
  0x1cb7
#define mmDCP2_REGAMMA_CNTLB_REGION_6_7                                         \
  0x1eb7
#define mmDCP3_REGAMMA_CNTLB_REGION_6_7                                         \
  0x40b7
#define mmDCP4_REGAMMA_CNTLB_REGION_6_7                                         \
  0x42b7
#define mmDCP5_REGAMMA_CNTLB_REGION_6_7                                         \
  0x44b7
#define mmREGAMMA_CNTLB_REGION_8_9                                              \
  0x1ab8
#define mmDCP0_REGAMMA_CNTLB_REGION_8_9                                         \
  0x1ab8
#define mmDCP1_REGAMMA_CNTLB_REGION_8_9                                         \
  0x1cb8
#define mmDCP2_REGAMMA_CNTLB_REGION_8_9                                         \
  0x1eb8
#define mmDCP3_REGAMMA_CNTLB_REGION_8_9                                         \
  0x40b8
#define mmDCP4_REGAMMA_CNTLB_REGION_8_9                                         \
  0x42b8
#define mmDCP5_REGAMMA_CNTLB_REGION_8_9                                         \
  0x44b8
#define mmREGAMMA_CNTLB_REGION_10_11                                            \
  0x1ab9
#define mmDCP0_REGAMMA_CNTLB_REGION_10_11                                       \
  0x1ab9
#define mmDCP1_REGAMMA_CNTLB_REGION_10_11                                       \
  0x1cb9
#define mmDCP2_REGAMMA_CNTLB_REGION_10_11                                       \
  0x1eb9
#define mmDCP3_REGAMMA_CNTLB_REGION_10_11                                       \
  0x40b9
#define mmDCP4_REGAMMA_CNTLB_REGION_10_11                                       \
  0x42b9
#define mmDCP5_REGAMMA_CNTLB_REGION_10_11                                       \
  0x44b9
#define mmREGAMMA_CNTLB_REGION_12_13                                            \
  0x1aba
#define mmDCP0_REGAMMA_CNTLB_REGION_12_13                                       \
  0x1aba
#define mmDCP1_REGAMMA_CNTLB_REGION_12_13                                       \
  0x1cba
#define mmDCP2_REGAMMA_CNTLB_REGION_12_13                                       \
  0x1eba
#define mmDCP3_REGAMMA_CNTLB_REGION_12_13                                       \
  0x40ba
#define mmDCP4_REGAMMA_CNTLB_REGION_12_13                                       \
  0x42ba
#define mmDCP5_REGAMMA_CNTLB_REGION_12_13                                       \
  0x44ba
#define mmREGAMMA_CNTLB_REGION_14_15                                            \
  0x1abb
#define mmDCP0_REGAMMA_CNTLB_REGION_14_15                                       \
  0x1abb
#define mmDCP1_REGAMMA_CNTLB_REGION_14_15                                       \
  0x1cbb
#define mmDCP2_REGAMMA_CNTLB_REGION_14_15                                       \
  0x1ebb
#define mmDCP3_REGAMMA_CNTLB_REGION_14_15                                       \
  0x40bb
#define mmDCP4_REGAMMA_CNTLB_REGION_14_15                                       \
  0x42bb
#define mmDCP5_REGAMMA_CNTLB_REGION_14_15                                       \
  0x44bb
#define mmALPHA_CONTROL                                                         \
  0x1abc
#define mmDCP0_ALPHA_CONTROL                                                    \
  0x1abc
#define mmDCP1_ALPHA_CONTROL                                                    \
  0x1cbc
#define mmDCP2_ALPHA_CONTROL                                                    \
  0x1ebc
#define mmDCP3_ALPHA_CONTROL                                                    \
  0x40bc
#define mmDCP4_ALPHA_CONTROL                                                    \
  0x42bc
#define mmDCP5_ALPHA_CONTROL                                                    \
  0x44bc
#define mmGRPH_XDMA_RECOVERY_SURFACE_ADDRESS                                    \
  0x1abd
#define mmDCP0_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x1abd
#define mmDCP1_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x1cbd
#define mmDCP2_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x1ebd
#define mmDCP3_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x40bd
#define mmDCP4_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x42bd
#define mmDCP5_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS                               \
  0x44bd
#define mmGRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                               \
  0x1abe
#define mmDCP0_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x1abe
#define mmDCP1_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x1cbe
#define mmDCP2_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x1ebe
#define mmDCP3_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x40be
#define mmDCP4_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x42be
#define mmDCP5_GRPH_XDMA_RECOVERY_SURFACE_ADDRESS_HIGH                          \
  0x44be
#define mmGRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                                  \
  0x1abf
#define mmDCP0_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x1abf
#define mmDCP1_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x1cbf
#define mmDCP2_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x1ebf
#define mmDCP3_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x40bf
#define mmDCP4_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x42bf
#define mmDCP5_GRPH_XDMA_CACHE_UNDERFLOW_DET_STATUS                             \
  0x44bf
#define mmGRPH_SURFACE_COUNTER_CONTROL                                          \
  0x1a0f
#define mmDCP0_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x1a0f
#define mmDCP1_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x1c0f
#define mmDCP2_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x1e0f
#define mmDCP3_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x400f
#define mmDCP4_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x420f
#define mmDCP5_GRPH_SURFACE_COUNTER_CONTROL                                     \
  0x440f
#define mmGRPH_SURFACE_COUNTER_OUTPUT                                           \
  0x1a1d
#define mmDCP0_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x1a1d
#define mmDCP1_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x1c1d
#define mmDCP2_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x1e1d
#define mmDCP3_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x401d
#define mmDCP4_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x421d
#define mmDCP5_GRPH_SURFACE_COUNTER_OUTPUT                                      \
  0x441d
#define mmDIG_FE_CNTL                                                           \
  0x4a00
#define mmDIG0_DIG_FE_CNTL                                                      \
  0x4a00
#define mmDIG1_DIG_FE_CNTL                                                      \
  0x4b00
#define mmDIG2_DIG_FE_CNTL                                                      \
  0x4c00
#define mmDIG3_DIG_FE_CNTL                                                      \
  0x4d00
#define mmDIG4_DIG_FE_CNTL                                                      \
  0x4e00
#define mmDIG5_DIG_FE_CNTL                                                      \
  0x4f00
#define mmDIG6_DIG_FE_CNTL                                                      \
  0x5400
#define mmDIG7_DIG_FE_CNTL                                                      \
  0x5600
#define mmDIG8_DIG_FE_CNTL                                                      \
  0x5700
#define mmDIG_OUTPUT_CRC_CNTL                                                   \
  0x4a01
#define mmDIG0_DIG_OUTPUT_CRC_CNTL                                              \
  0x4a01
#define mmDIG1_DIG_OUTPUT_CRC_CNTL                                              \
  0x4b01
#define mmDIG2_DIG_OUTPUT_CRC_CNTL                                              \
  0x4c01
#define mmDIG3_DIG_OUTPUT_CRC_CNTL                                              \
  0x4d01
#define mmDIG4_DIG_OUTPUT_CRC_CNTL                                              \
  0x4e01
#define mmDIG5_DIG_OUTPUT_CRC_CNTL                                              \
  0x4f01
#define mmDIG6_DIG_OUTPUT_CRC_CNTL                                              \
  0x5401
#define mmDIG7_DIG_OUTPUT_CRC_CNTL                                              \
  0x5601
#define mmDIG8_DIG_OUTPUT_CRC_CNTL                                              \
  0x5701
#define mmDIG_OUTPUT_CRC_RESULT                                                 \
  0x4a02
#define mmDIG0_DIG_OUTPUT_CRC_RESULT                                            \
  0x4a02
#define mmDIG1_DIG_OUTPUT_CRC_RESULT                                            \
  0x4b02
#define mmDIG2_DIG_OUTPUT_CRC_RESULT                                            \
  0x4c02
#define mmDIG3_DIG_OUTPUT_CRC_RESULT                                            \
  0x4d02
#define mmDIG4_DIG_OUTPUT_CRC_RESULT                                            \
  0x4e02
#define mmDIG5_DIG_OUTPUT_CRC_RESULT                                            \
  0x4f02
#define mmDIG6_DIG_OUTPUT_CRC_RESULT                                            \
  0x5402
#define mmDIG7_DIG_OUTPUT_CRC_RESULT                                            \
  0x5602
#define mmDIG8_DIG_OUTPUT_CRC_RESULT                                            \
  0x5702
#define mmDIG_CLOCK_PATTERN                                                     \
  0x4a03
#define mmDIG0_DIG_CLOCK_PATTERN                                                \
  0x4a03
#define mmDIG1_DIG_CLOCK_PATTERN                                                \
  0x4b03
#define mmDIG2_DIG_CLOCK_PATTERN                                                \
  0x4c03
#define mmDIG3_DIG_CLOCK_PATTERN                                                \
  0x4d03
#define mmDIG4_DIG_CLOCK_PATTERN                                                \
  0x4e03
#define mmDIG5_DIG_CLOCK_PATTERN                                                \
  0x4f03
#define mmDIG6_DIG_CLOCK_PATTERN                                                \
  0x5403
#define mmDIG7_DIG_CLOCK_PATTERN                                                \
  0x5603
#define mmDIG8_DIG_CLOCK_PATTERN                                                \
  0x5703
#define mmDIG_TEST_PATTERN                                                      \
  0x4a04
#define mmDIG0_DIG_TEST_PATTERN                                                 \
  0x4a04
#define mmDIG1_DIG_TEST_PATTERN                                                 \
  0x4b04
#define mmDIG2_DIG_TEST_PATTERN                                                 \
  0x4c04
#define mmDIG3_DIG_TEST_PATTERN                                                 \
  0x4d04
#define mmDIG4_DIG_TEST_PATTERN                                                 \
  0x4e04
#define mmDIG5_DIG_TEST_PATTERN                                                 \
  0x4f04
#define mmDIG6_DIG_TEST_PATTERN                                                 \
  0x5404
#define mmDIG7_DIG_TEST_PATTERN                                                 \
  0x5604
#define mmDIG8_DIG_TEST_PATTERN                                                 \
  0x5704
#define mmDIG_RANDOM_PATTERN_SEED                                               \
  0x4a05
#define mmDIG0_DIG_RANDOM_PATTERN_SEED                                          \
  0x4a05
#define mmDIG1_DIG_RANDOM_PATTERN_SEED                                          \
  0x4b05
#define mmDIG2_DIG_RANDOM_PATTERN_SEED                                          \
  0x4c05
#define mmDIG3_DIG_RANDOM_PATTERN_SEED                                          \
  0x4d05
#define mmDIG4_DIG_RANDOM_PATTERN_SEED                                          \
  0x4e05
#define mmDIG5_DIG_RANDOM_PATTERN_SEED                                          \
  0x4f05
#define mmDIG6_DIG_RANDOM_PATTERN_SEED                                          \
  0x5405
#define mmDIG7_DIG_RANDOM_PATTERN_SEED                                          \
  0x5605
#define mmDIG8_DIG_RANDOM_PATTERN_SEED                                          \
  0x5705
#define mmDIG_FIFO_STATUS                                                       \
  0x4a06
#define mmDIG0_DIG_FIFO_STATUS                                                  \
  0x4a06
#define mmDIG1_DIG_FIFO_STATUS                                                  \
  0x4b06
#define mmDIG2_DIG_FIFO_STATUS                                                  \
  0x4c06
#define mmDIG3_DIG_FIFO_STATUS                                                  \
  0x4d06
#define mmDIG4_DIG_FIFO_STATUS                                                  \
  0x4e06
#define mmDIG5_DIG_FIFO_STATUS                                                  \
  0x4f06
#define mmDIG6_DIG_FIFO_STATUS                                                  \
  0x5406
#define mmDIG7_DIG_FIFO_STATUS                                                  \
  0x5606
#define mmDIG8_DIG_FIFO_STATUS                                                  \
  0x5706
#define mmDIG_DISPCLK_SWITCH_CNTL                                               \
  0x4a07
#define mmDIG0_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4a07
#define mmDIG1_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4b07
#define mmDIG2_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4c07
#define mmDIG3_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4d07
#define mmDIG4_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4e07
#define mmDIG5_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x4f07
#define mmDIG6_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x5407
#define mmDIG7_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x5607
#define mmDIG8_DIG_DISPCLK_SWITCH_CNTL                                          \
  0x5707
#define mmDIG_DISPCLK_SWITCH_STATUS                                             \
  0x4a08
#define mmDIG0_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4a08
#define mmDIG1_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4b08
#define mmDIG2_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4c08
#define mmDIG3_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4d08
#define mmDIG4_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4e08
#define mmDIG5_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x4f08
#define mmDIG6_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x5408
#define mmDIG7_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x5608
#define mmDIG8_DIG_DISPCLK_SWITCH_STATUS                                        \
  0x5708
#define mmHDMI_CONTROL                                                          \
  0x4a09
#define mmDIG0_HDMI_CONTROL                                                     \
  0x4a09
#define mmDIG1_HDMI_CONTROL                                                     \
  0x4b09
#define mmDIG2_HDMI_CONTROL                                                     \
  0x4c09
#define mmDIG3_HDMI_CONTROL                                                     \
  0x4d09
#define mmDIG4_HDMI_CONTROL                                                     \
  0x4e09
#define mmDIG5_HDMI_CONTROL                                                     \
  0x4f09
#define mmDIG6_HDMI_CONTROL                                                     \
  0x5409
#define mmDIG7_HDMI_CONTROL                                                     \
  0x5609
#define mmDIG8_HDMI_CONTROL                                                     \
  0x5709
#define mmHDMI_STATUS                                                           \
  0x4a0a
#define mmDIG0_HDMI_STATUS                                                      \
  0x4a0a
#define mmDIG1_HDMI_STATUS                                                      \
  0x4b0a
#define mmDIG2_HDMI_STATUS                                                      \
  0x4c0a
#define mmDIG3_HDMI_STATUS                                                      \
  0x4d0a
#define mmDIG4_HDMI_STATUS                                                      \
  0x4e0a
#define mmDIG5_HDMI_STATUS                                                      \
  0x4f0a
#define mmDIG6_HDMI_STATUS                                                      \
  0x540a
#define mmDIG7_HDMI_STATUS                                                      \
  0x560a
#define mmDIG8_HDMI_STATUS                                                      \
  0x570a
#define mmHDMI_AUDIO_PACKET_CONTROL                                             \
  0x4a0b
#define mmDIG0_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4a0b
#define mmDIG1_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4b0b
#define mmDIG2_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4c0b
#define mmDIG3_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4d0b
#define mmDIG4_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4e0b
#define mmDIG5_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x4f0b
#define mmDIG6_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x540b
#define mmDIG7_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x560b
#define mmDIG8_HDMI_AUDIO_PACKET_CONTROL                                        \
  0x570b
#define mmHDMI_ACR_PACKET_CONTROL                                               \
  0x4a0c
#define mmDIG0_HDMI_ACR_PACKET_CONTROL                                          \
  0x4a0c
#define mmDIG1_HDMI_ACR_PACKET_CONTROL                                          \
  0x4b0c
#define mmDIG2_HDMI_ACR_PACKET_CONTROL                                          \
  0x4c0c
#define mmDIG3_HDMI_ACR_PACKET_CONTROL                                          \
  0x4d0c
#define mmDIG4_HDMI_ACR_PACKET_CONTROL                                          \
  0x4e0c
#define mmDIG5_HDMI_ACR_PACKET_CONTROL                                          \
  0x4f0c
#define mmDIG6_HDMI_ACR_PACKET_CONTROL                                          \
  0x540c
#define mmDIG7_HDMI_ACR_PACKET_CONTROL                                          \
  0x560c
#define mmDIG8_HDMI_ACR_PACKET_CONTROL                                          \
  0x570c
#define mmHDMI_VBI_PACKET_CONTROL                                               \
  0x4a0d
#define mmDIG0_HDMI_VBI_PACKET_CONTROL                                          \
  0x4a0d
#define mmDIG1_HDMI_VBI_PACKET_CONTROL                                          \
  0x4b0d
#define mmDIG2_HDMI_VBI_PACKET_CONTROL                                          \
  0x4c0d
#define mmDIG3_HDMI_VBI_PACKET_CONTROL                                          \
  0x4d0d
#define mmDIG4_HDMI_VBI_PACKET_CONTROL                                          \
  0x4e0d
#define mmDIG5_HDMI_VBI_PACKET_CONTROL                                          \
  0x4f0d
#define mmDIG6_HDMI_VBI_PACKET_CONTROL                                          \
  0x540d
#define mmDIG7_HDMI_VBI_PACKET_CONTROL                                          \
  0x560d
#define mmDIG8_HDMI_VBI_PACKET_CONTROL                                          \
  0x570d
#define mmHDMI_INFOFRAME_CONTROL0                                               \
  0x4a0e
#define mmDIG0_HDMI_INFOFRAME_CONTROL0                                          \
  0x4a0e
#define mmDIG1_HDMI_INFOFRAME_CONTROL0                                          \
  0x4b0e
#define mmDIG2_HDMI_INFOFRAME_CONTROL0                                          \
  0x4c0e
#define mmDIG3_HDMI_INFOFRAME_CONTROL0                                          \
  0x4d0e
#define mmDIG4_HDMI_INFOFRAME_CONTROL0                                          \
  0x4e0e
#define mmDIG5_HDMI_INFOFRAME_CONTROL0                                          \
  0x4f0e
#define mmDIG6_HDMI_INFOFRAME_CONTROL0                                          \
  0x540e
#define mmDIG7_HDMI_INFOFRAME_CONTROL0                                          \
  0x560e
#define mmDIG8_HDMI_INFOFRAME_CONTROL0                                          \
  0x570e
#define mmHDMI_INFOFRAME_CONTROL1                                               \
  0x4a0f
#define mmDIG0_HDMI_INFOFRAME_CONTROL1                                          \
  0x4a0f
#define mmDIG1_HDMI_INFOFRAME_CONTROL1                                          \
  0x4b0f
#define mmDIG2_HDMI_INFOFRAME_CONTROL1                                          \
  0x4c0f
#define mmDIG3_HDMI_INFOFRAME_CONTROL1                                          \
  0x4d0f
#define mmDIG4_HDMI_INFOFRAME_CONTROL1                                          \
  0x4e0f
#define mmDIG5_HDMI_INFOFRAME_CONTROL1                                          \
  0x4f0f
#define mmDIG6_HDMI_INFOFRAME_CONTROL1                                          \
  0x540f
#define mmDIG7_HDMI_INFOFRAME_CONTROL1                                          \
  0x560f
#define mmDIG8_HDMI_INFOFRAME_CONTROL1                                          \
  0x570f
#define mmHDMI_GENERIC_PACKET_CONTROL0                                          \
  0x4a10
#define mmDIG0_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4a10
#define mmDIG1_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4b10
#define mmDIG2_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4c10
#define mmDIG3_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4d10
#define mmDIG4_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4e10
#define mmDIG5_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x4f10
#define mmDIG6_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x5410
#define mmDIG7_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x5610
#define mmDIG8_HDMI_GENERIC_PACKET_CONTROL0                                     \
  0x5710
#define mmAFMT_INTERRUPT_STATUS                                                 \
  0x4a11
#define mmDIG0_AFMT_INTERRUPT_STATUS                                            \
  0x4a11
#define mmDIG1_AFMT_INTERRUPT_STATUS                                            \
  0x4b11
#define mmDIG2_AFMT_INTERRUPT_STATUS                                            \
  0x4c11
#define mmDIG3_AFMT_INTERRUPT_STATUS                                            \
  0x4d11
#define mmDIG4_AFMT_INTERRUPT_STATUS                                            \
  0x4e11
#define mmDIG5_AFMT_INTERRUPT_STATUS                                            \
  0x4f11
#define mmDIG6_AFMT_INTERRUPT_STATUS                                            \
  0x5411
#define mmDIG7_AFMT_INTERRUPT_STATUS                                            \
  0x5611
#define mmDIG8_AFMT_INTERRUPT_STATUS                                            \
  0x5711
#define mmHDMI_GC                                                               \
  0x4a13
#define mmDIG0_HDMI_GC                                                          \
  0x4a13
#define mmDIG1_HDMI_GC                                                          \
  0x4b13
#define mmDIG2_HDMI_GC                                                          \
  0x4c13
#define mmDIG3_HDMI_GC                                                          \
  0x4d13
#define mmDIG4_HDMI_GC                                                          \
  0x4e13
#define mmDIG5_HDMI_GC                                                          \
  0x4f13
#define mmDIG6_HDMI_GC                                                          \
  0x5413
#define mmDIG7_HDMI_GC                                                          \
  0x5613
#define mmDIG8_HDMI_GC                                                          \
  0x5713
#define mmAFMT_AUDIO_PACKET_CONTROL2                                            \
  0x4a14
#define mmDIG0_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4a14
#define mmDIG1_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4b14
#define mmDIG2_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4c14
#define mmDIG3_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4d14
#define mmDIG4_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4e14
#define mmDIG5_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x4f14
#define mmDIG6_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x5414
#define mmDIG7_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x5614
#define mmDIG8_AFMT_AUDIO_PACKET_CONTROL2                                       \
  0x5714
#define mmAFMT_ISRC1_0                                                          \
  0x4a15
#define mmDIG0_AFMT_ISRC1_0                                                     \
  0x4a15
#define mmDIG1_AFMT_ISRC1_0                                                     \
  0x4b15
#define mmDIG2_AFMT_ISRC1_0                                                     \
  0x4c15
#define mmDIG3_AFMT_ISRC1_0                                                     \
  0x4d15
#define mmDIG4_AFMT_ISRC1_0                                                     \
  0x4e15
#define mmDIG5_AFMT_ISRC1_0                                                     \
  0x4f15
#define mmDIG6_AFMT_ISRC1_0                                                     \
  0x5415
#define mmDIG7_AFMT_ISRC1_0                                                     \
  0x5615
#define mmDIG8_AFMT_ISRC1_0                                                     \
  0x5715
#define mmAFMT_ISRC1_1                                                          \
  0x4a16
#define mmDIG0_AFMT_ISRC1_1                                                     \
  0x4a16
#define mmDIG1_AFMT_ISRC1_1                                                     \
  0x4b16
#define mmDIG2_AFMT_ISRC1_1                                                     \
  0x4c16
#define mmDIG3_AFMT_ISRC1_1                                                     \
  0x4d16
#define mmDIG4_AFMT_ISRC1_1                                                     \
  0x4e16
#define mmDIG5_AFMT_ISRC1_1                                                     \
  0x4f16
#define mmDIG6_AFMT_ISRC1_1                                                     \
  0x5416
#define mmDIG7_AFMT_ISRC1_1                                                     \
  0x5616
#define mmDIG8_AFMT_ISRC1_1                                                     \
  0x5716
#define mmAFMT_ISRC1_2                                                          \
  0x4a17
#define mmDIG0_AFMT_ISRC1_2                                                     \
  0x4a17
#define mmDIG1_AFMT_ISRC1_2                                                     \
  0x4b17
#define mmDIG2_AFMT_ISRC1_2                                                     \
  0x4c17
#define mmDIG3_AFMT_ISRC1_2                                                     \
  0x4d17
#define mmDIG4_AFMT_ISRC1_2                                                     \
  0x4e17
#define mmDIG5_AFMT_ISRC1_2                                                     \
  0x4f17
#define mmDIG6_AFMT_ISRC1_2                                                     \
  0x5417
#define mmDIG7_AFMT_ISRC1_2                                                     \
  0x5617
#define mmDIG8_AFMT_ISRC1_2                                                     \
  0x5717
#define mmAFMT_ISRC1_3                                                          \
  0x4a18
#define mmDIG0_AFMT_ISRC1_3                                                     \
  0x4a18
#define mmDIG1_AFMT_ISRC1_3                                                     \
  0x4b18
#define mmDIG2_AFMT_ISRC1_3                                                     \
  0x4c18
#define mmDIG3_AFMT_ISRC1_3                                                     \
  0x4d18
#define mmDIG4_AFMT_ISRC1_3                                                     \
  0x4e18
#define mmDIG5_AFMT_ISRC1_3                                                     \
  0x4f18
#define mmDIG6_AFMT_ISRC1_3                                                     \
  0x5418
#define mmDIG7_AFMT_ISRC1_3                                                     \
  0x5618
#define mmDIG8_AFMT_ISRC1_3                                                     \
  0x5718
#define mmAFMT_ISRC1_4                                                          \
  0x4a19
#define mmDIG0_AFMT_ISRC1_4                                                     \
  0x4a19
#define mmDIG1_AFMT_ISRC1_4                                                     \
  0x4b19
#define mmDIG2_AFMT_ISRC1_4                                                     \
  0x4c19
#define mmDIG3_AFMT_ISRC1_4                                                     \
  0x4d19
#define mmDIG4_AFMT_ISRC1_4                                                     \
  0x4e19
#define mmDIG5_AFMT_ISRC1_4                                                     \
  0x4f19
#define mmDIG6_AFMT_ISRC1_4                                                     \
  0x5419
#define mmDIG7_AFMT_ISRC1_4                                                     \
  0x5619
#define mmDIG8_AFMT_ISRC1_4                                                     \
  0x5719
#define mmAFMT_ISRC2_0                                                          \
  0x4a1a
#define mmDIG0_AFMT_ISRC2_0                                                     \
  0x4a1a
#define mmDIG1_AFMT_ISRC2_0                                                     \
  0x4b1a
#define mmDIG2_AFMT_ISRC2_0                                                     \
  0x4c1a
#define mmDIG3_AFMT_ISRC2_0                                                     \
  0x4d1a
#define mmDIG4_AFMT_ISRC2_0                                                     \
  0x4e1a
#define mmDIG5_AFMT_ISRC2_0                                                     \
  0x4f1a
#define mmDIG6_AFMT_ISRC2_0                                                     \
  0x541a
#define mmDIG7_AFMT_ISRC2_0                                                     \
  0x561a
#define mmDIG8_AFMT_ISRC2_0                                                     \
  0x571a
#define mmAFMT_ISRC2_1                                                          \
  0x4a1b
#define mmDIG0_AFMT_ISRC2_1                                                     \
  0x4a1b
#define mmDIG1_AFMT_ISRC2_1                                                     \
  0x4b1b
#define mmDIG2_AFMT_ISRC2_1                                                     \
  0x4c1b
#define mmDIG3_AFMT_ISRC2_1                                                     \
  0x4d1b
#define mmDIG4_AFMT_ISRC2_1                                                     \
  0x4e1b
#define mmDIG5_AFMT_ISRC2_1                                                     \
  0x4f1b
#define mmDIG6_AFMT_ISRC2_1                                                     \
  0x541b
#define mmDIG7_AFMT_ISRC2_1                                                     \
  0x561b
#define mmDIG8_AFMT_ISRC2_1                                                     \
  0x571b
#define mmAFMT_ISRC2_2                                                          \
  0x4a1c
#define mmDIG0_AFMT_ISRC2_2                                                     \
  0x4a1c
#define mmDIG1_AFMT_ISRC2_2                                                     \
  0x4b1c
#define mmDIG2_AFMT_ISRC2_2                                                     \
  0x4c1c
#define mmDIG3_AFMT_ISRC2_2                                                     \
  0x4d1c
#define mmDIG4_AFMT_ISRC2_2                                                     \
  0x4e1c
#define mmDIG5_AFMT_ISRC2_2                                                     \
  0x4f1c
#define mmDIG6_AFMT_ISRC2_2                                                     \
  0x541c
#define mmDIG7_AFMT_ISRC2_2                                                     \
  0x561c
#define mmDIG8_AFMT_ISRC2_2                                                     \
  0x571c
#define mmAFMT_ISRC2_3                                                          \
  0x4a1d
#define mmDIG0_AFMT_ISRC2_3                                                     \
  0x4a1d
#define mmDIG1_AFMT_ISRC2_3                                                     \
  0x4b1d
#define mmDIG2_AFMT_ISRC2_3                                                     \
  0x4c1d
#define mmDIG3_AFMT_ISRC2_3                                                     \
  0x4d1d
#define mmDIG4_AFMT_ISRC2_3                                                     \
  0x4e1d
#define mmDIG5_AFMT_ISRC2_3                                                     \
  0x4f1d
#define mmDIG6_AFMT_ISRC2_3                                                     \
  0x541d
#define mmDIG7_AFMT_ISRC2_3                                                     \
  0x561d
#define mmDIG8_AFMT_ISRC2_3                                                     \
  0x571d
#define mmAFMT_AVI_INFO0                                                        \
  0x4a1e
#define mmDIG0_AFMT_AVI_INFO0                                                   \
  0x4a1e
#define mmDIG1_AFMT_AVI_INFO0                                                   \
  0x4b1e
#define mmDIG2_AFMT_AVI_INFO0                                                   \
  0x4c1e
#define mmDIG3_AFMT_AVI_INFO0                                                   \
  0x4d1e
#define mmDIG4_AFMT_AVI_INFO0                                                   \
  0x4e1e
#define mmDIG5_AFMT_AVI_INFO0                                                   \
  0x4f1e
#define mmDIG6_AFMT_AVI_INFO0                                                   \
  0x541e
#define mmDIG7_AFMT_AVI_INFO0                                                   \
  0x561e
#define mmDIG8_AFMT_AVI_INFO0                                                   \
  0x571e
#define mmAFMT_AVI_INFO1                                                        \
  0x4a1f
#define mmDIG0_AFMT_AVI_INFO1                                                   \
  0x4a1f
#define mmDIG1_AFMT_AVI_INFO1                                                   \
  0x4b1f
#define mmDIG2_AFMT_AVI_INFO1                                                   \
  0x4c1f
#define mmDIG3_AFMT_AVI_INFO1                                                   \
  0x4d1f
#define mmDIG4_AFMT_AVI_INFO1                                                   \
  0x4e1f
#define mmDIG5_AFMT_AVI_INFO1                                                   \
  0x4f1f
#define mmDIG6_AFMT_AVI_INFO1                                                   \
  0x541f
#define mmDIG7_AFMT_AVI_INFO1                                                   \
  0x561f
#define mmDIG8_AFMT_AVI_INFO1                                                   \
  0x571f
#define mmAFMT_AVI_INFO2                                                        \
  0x4a20
#define mmDIG0_AFMT_AVI_INFO2                                                   \
  0x4a20
#define mmDIG1_AFMT_AVI_INFO2                                                   \
  0x4b20
#define mmDIG2_AFMT_AVI_INFO2                                                   \
  0x4c20
#define mmDIG3_AFMT_AVI_INFO2                                                   \
  0x4d20
#define mmDIG4_AFMT_AVI_INFO2                                                   \
  0x4e20
#define mmDIG5_AFMT_AVI_INFO2                                                   \
  0x4f20
#define mmDIG6_AFMT_AVI_INFO2                                                   \
  0x5420
#define mmDIG7_AFMT_AVI_INFO2                                                   \
  0x5620
#define mmDIG8_AFMT_AVI_INFO2                                                   \
  0x5720
#define mmAFMT_AVI_INFO3                                                        \
  0x4a21
#define mmDIG0_AFMT_AVI_INFO3                                                   \
  0x4a21
#define mmDIG1_AFMT_AVI_INFO3                                                   \
  0x4b21
#define mmDIG2_AFMT_AVI_INFO3                                                   \
  0x4c21
#define mmDIG3_AFMT_AVI_INFO3                                                   \
  0x4d21
#define mmDIG4_AFMT_AVI_INFO3                                                   \
  0x4e21
#define mmDIG5_AFMT_AVI_INFO3                                                   \
  0x4f21
#define mmDIG6_AFMT_AVI_INFO3                                                   \
  0x5421
#define mmDIG7_AFMT_AVI_INFO3                                                   \
  0x5621
#define mmDIG8_AFMT_AVI_INFO3                                                   \
  0x5721
#define mmAFMT_MPEG_INFO0                                                       \
  0x4a22
#define mmDIG0_AFMT_MPEG_INFO0                                                  \
  0x4a22
#define mmDIG1_AFMT_MPEG_INFO0                                                  \
  0x4b22
#define mmDIG2_AFMT_MPEG_INFO0                                                  \
  0x4c22
#define mmDIG3_AFMT_MPEG_INFO0                                                  \
  0x4d22
#define mmDIG4_AFMT_MPEG_INFO0                                                  \
  0x4e22
#define mmDIG5_AFMT_MPEG_INFO0                                                  \
  0x4f22
#define mmDIG6_AFMT_MPEG_INFO0                                                  \
  0x5422
#define mmDIG7_AFMT_MPEG_INFO0                                                  \
  0x5622
#define mmDIG8_AFMT_MPEG_INFO0                                                  \
  0x5722
#define mmAFMT_MPEG_INFO1                                                       \
  0x4a23
#define mmDIG0_AFMT_MPEG_INFO1                                                  \
  0x4a23
#define mmDIG1_AFMT_MPEG_INFO1                                                  \
  0x4b23
#define mmDIG2_AFMT_MPEG_INFO1                                                  \
  0x4c23
#define mmDIG3_AFMT_MPEG_INFO1                                                  \
  0x4d23
#define mmDIG4_AFMT_MPEG_INFO1                                                  \
  0x4e23
#define mmDIG5_AFMT_MPEG_INFO1                                                  \
  0x4f23
#define mmDIG6_AFMT_MPEG_INFO1                                                  \
  0x5423
#define mmDIG7_AFMT_MPEG_INFO1                                                  \
  0x5623
#define mmDIG8_AFMT_MPEG_INFO1                                                  \
  0x5723
#define mmAFMT_GENERIC_HDR                                                      \
  0x4a24
#define mmDIG0_AFMT_GENERIC_HDR                                                 \
  0x4a24
#define mmDIG1_AFMT_GENERIC_HDR                                                 \
  0x4b24
#define mmDIG2_AFMT_GENERIC_HDR                                                 \
  0x4c24
#define mmDIG3_AFMT_GENERIC_HDR                                                 \
  0x4d24
#define mmDIG4_AFMT_GENERIC_HDR                                                 \
  0x4e24
#define mmDIG5_AFMT_GENERIC_HDR                                                 \
  0x4f24
#define mmDIG6_AFMT_GENERIC_HDR                                                 \
  0x5424
#define mmDIG7_AFMT_GENERIC_HDR                                                 \
  0x5624
#define mmDIG8_AFMT_GENERIC_HDR                                                 \
  0x5724
#define mmAFMT_GENERIC_0                                                        \
  0x4a25
#define mmDIG0_AFMT_GENERIC_0                                                   \
  0x4a25
#define mmDIG1_AFMT_GENERIC_0                                                   \
  0x4b25
#define mmDIG2_AFMT_GENERIC_0                                                   \
  0x4c25
#define mmDIG3_AFMT_GENERIC_0                                                   \
  0x4d25
#define mmDIG4_AFMT_GENERIC_0                                                   \
  0x4e25
#define mmDIG5_AFMT_GENERIC_0                                                   \
  0x4f25
#define mmDIG6_AFMT_GENERIC_0                                                   \
  0x5425
#define mmDIG7_AFMT_GENERIC_0                                                   \
  0x5625
#define mmDIG8_AFMT_GENERIC_0                                                   \
  0x5725
#define mmAFMT_GENERIC_1                                                        \
  0x4a26
#define mmDIG0_AFMT_GENERIC_1                                                   \
  0x4a26
#define mmDIG1_AFMT_GENERIC_1                                                   \
  0x4b26
#define mmDIG2_AFMT_GENERIC_1                                                   \
  0x4c26
#define mmDIG3_AFMT_GENERIC_1                                                   \
  0x4d26
#define mmDIG4_AFMT_GENERIC_1                                                   \
  0x4e26
#define mmDIG5_AFMT_GENERIC_1                                                   \
  0x4f26
#define mmDIG6_AFMT_GENERIC_1                                                   \
  0x5426
#define mmDIG7_AFMT_GENERIC_1                                                   \
  0x5626
#define mmDIG8_AFMT_GENERIC_1                                                   \
  0x5726
#define mmAFMT_GENERIC_2                                                        \
  0x4a27
#define mmDIG0_AFMT_GENERIC_2                                                   \
  0x4a27
#define mmDIG1_AFMT_GENERIC_2                                                   \
  0x4b27
#define mmDIG2_AFMT_GENERIC_2                                                   \
  0x4c27
#define mmDIG3_AFMT_GENERIC_2                                                   \
  0x4d27
#define mmDIG4_AFMT_GENERIC_2                                                   \
  0x4e27
#define mmDIG5_AFMT_GENERIC_2                                                   \
  0x4f27
#define mmDIG6_AFMT_GENERIC_2                                                   \
  0x5427
#define mmDIG7_AFMT_GENERIC_2                                                   \
  0x5627
#define mmDIG8_AFMT_GENERIC_2                                                   \
  0x5727
#define mmAFMT_GENERIC_3                                                        \
  0x4a28
#define mmDIG0_AFMT_GENERIC_3                                                   \
  0x4a28
#define mmDIG1_AFMT_GENERIC_3                                                   \
  0x4b28
#define mmDIG2_AFMT_GENERIC_3                                                   \
  0x4c28
#define mmDIG3_AFMT_GENERIC_3                                                   \
  0x4d28
#define mmDIG4_AFMT_GENERIC_3                                                   \
  0x4e28
#define mmDIG5_AFMT_GENERIC_3                                                   \
  0x4f28
#define mmDIG6_AFMT_GENERIC_3                                                   \
  0x5428
#define mmDIG7_AFMT_GENERIC_3                                                   \
  0x5628
#define mmDIG8_AFMT_GENERIC_3                                                   \
  0x5728
#define mmAFMT_GENERIC_4                                                        \
  0x4a29
#define mmDIG0_AFMT_GENERIC_4                                                   \
  0x4a29
#define mmDIG1_AFMT_GENERIC_4                                                   \
  0x4b29
#define mmDIG2_AFMT_GENERIC_4                                                   \
  0x4c29
#define mmDIG3_AFMT_GENERIC_4                                                   \
  0x4d29
#define mmDIG4_AFMT_GENERIC_4                                                   \
  0x4e29
#define mmDIG5_AFMT_GENERIC_4                                                   \
  0x4f29
#define mmDIG6_AFMT_GENERIC_4                                                   \
  0x5429
#define mmDIG7_AFMT_GENERIC_4                                                   \
  0x5629
#define mmDIG8_AFMT_GENERIC_4                                                   \
  0x5729
#define mmAFMT_GENERIC_5                                                        \
  0x4a2a
#define mmDIG0_AFMT_GENERIC_5                                                   \
  0x4a2a
#define mmDIG1_AFMT_GENERIC_5                                                   \
  0x4b2a
#define mmDIG2_AFMT_GENERIC_5                                                   \
  0x4c2a
#define mmDIG3_AFMT_GENERIC_5                                                   \
  0x4d2a
#define mmDIG4_AFMT_GENERIC_5                                                   \
  0x4e2a
#define mmDIG5_AFMT_GENERIC_5                                                   \
  0x4f2a
#define mmDIG6_AFMT_GENERIC_5                                                   \
  0x542a
#define mmDIG7_AFMT_GENERIC_5                                                   \
  0x562a
#define mmDIG8_AFMT_GENERIC_5                                                   \
  0x572a
#define mmAFMT_GENERIC_6                                                        \
  0x4a2b
#define mmDIG0_AFMT_GENERIC_6                                                   \
  0x4a2b
#define mmDIG1_AFMT_GENERIC_6                                                   \
  0x4b2b
#define mmDIG2_AFMT_GENERIC_6                                                   \
  0x4c2b
#define mmDIG3_AFMT_GENERIC_6                                                   \
  0x4d2b
#define mmDIG4_AFMT_GENERIC_6                                                   \
  0x4e2b
#define mmDIG5_AFMT_GENERIC_6                                                   \
  0x4f2b
#define mmDIG6_AFMT_GENERIC_6                                                   \
  0x542b
#define mmDIG7_AFMT_GENERIC_6                                                   \
  0x562b
#define mmDIG8_AFMT_GENERIC_6                                                   \
  0x572b
#define mmAFMT_GENERIC_7                                                        \
  0x4a2c
#define mmDIG0_AFMT_GENERIC_7                                                   \
  0x4a2c
#define mmDIG1_AFMT_GENERIC_7                                                   \
  0x4b2c
#define mmDIG2_AFMT_GENERIC_7                                                   \
  0x4c2c
#define mmDIG3_AFMT_GENERIC_7                                                   \
  0x4d2c
#define mmDIG4_AFMT_GENERIC_7                                                   \
  0x4e2c
#define mmDIG5_AFMT_GENERIC_7                                                   \
  0x4f2c
#define mmDIG6_AFMT_GENERIC_7                                                   \
  0x542c
#define mmDIG7_AFMT_GENERIC_7                                                   \
  0x562c
#define mmDIG8_AFMT_GENERIC_7                                                   \
  0x572c
#define mmHDMI_GENERIC_PACKET_CONTROL1                                          \
  0x4a2d
#define mmDIG0_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4a2d
#define mmDIG1_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4b2d
#define mmDIG2_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4c2d
#define mmDIG3_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4d2d
#define mmDIG4_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4e2d
#define mmDIG5_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x4f2d
#define mmDIG6_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x542d
#define mmDIG7_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x562d
#define mmDIG8_HDMI_GENERIC_PACKET_CONTROL1                                     \
  0x572d
#define mmHDMI_ACR_32_0                                                         \
  0x4a2e
#define mmDIG0_HDMI_ACR_32_0                                                    \
  0x4a2e
#define mmDIG1_HDMI_ACR_32_0                                                    \
  0x4b2e
#define mmDIG2_HDMI_ACR_32_0                                                    \
  0x4c2e
#define mmDIG3_HDMI_ACR_32_0                                                    \
  0x4d2e
#define mmDIG4_HDMI_ACR_32_0                                                    \
  0x4e2e
#define mmDIG5_HDMI_ACR_32_0                                                    \
  0x4f2e
#define mmDIG6_HDMI_ACR_32_0                                                    \
  0x542e
#define mmDIG7_HDMI_ACR_32_0                                                    \
  0x562e
#define mmDIG8_HDMI_ACR_32_0                                                    \
  0x572e
#define mmHDMI_ACR_32_1                                                         \
  0x4a2f
#define mmDIG0_HDMI_ACR_32_1                                                    \
  0x4a2f
#define mmDIG1_HDMI_ACR_32_1                                                    \
  0x4b2f
#define mmDIG2_HDMI_ACR_32_1                                                    \
  0x4c2f
#define mmDIG3_HDMI_ACR_32_1                                                    \
  0x4d2f
#define mmDIG4_HDMI_ACR_32_1                                                    \
  0x4e2f
#define mmDIG5_HDMI_ACR_32_1                                                    \
  0x4f2f
#define mmDIG6_HDMI_ACR_32_1                                                    \
  0x542f
#define mmDIG7_HDMI_ACR_32_1                                                    \
  0x562f
#define mmDIG8_HDMI_ACR_32_1                                                    \
  0x572f
#define mmHDMI_ACR_44_0                                                         \
  0x4a30
#define mmDIG0_HDMI_ACR_44_0                                                    \
  0x4a30
#define mmDIG1_HDMI_ACR_44_0                                                    \
  0x4b30
#define mmDIG2_HDMI_ACR_44_0                                                    \
  0x4c30
#define mmDIG3_HDMI_ACR_44_0                                                    \
  0x4d30
#define mmDIG4_HDMI_ACR_44_0                                                    \
  0x4e30
#define mmDIG5_HDMI_ACR_44_0                                                    \
  0x4f30
#define mmDIG6_HDMI_ACR_44_0                                                    \
  0x5430
#define mmDIG7_HDMI_ACR_44_0                                                    \
  0x5630
#define mmDIG8_HDMI_ACR_44_0                                                    \
  0x5730
#define mmHDMI_ACR_44_1                                                         \
  0x4a31
#define mmDIG0_HDMI_ACR_44_1                                                    \
  0x4a31
#define mmDIG1_HDMI_ACR_44_1                                                    \
  0x4b31
#define mmDIG2_HDMI_ACR_44_1                                                    \
  0x4c31
#define mmDIG3_HDMI_ACR_44_1                                                    \
  0x4d31
#define mmDIG4_HDMI_ACR_44_1                                                    \
  0x4e31
#define mmDIG5_HDMI_ACR_44_1                                                    \
  0x4f31
#define mmDIG6_HDMI_ACR_44_1                                                    \
  0x5431
#define mmDIG7_HDMI_ACR_44_1                                                    \
  0x5631
#define mmDIG8_HDMI_ACR_44_1                                                    \
  0x5731
#define mmHDMI_ACR_48_0                                                         \
  0x4a32
#define mmDIG0_HDMI_ACR_48_0                                                    \
  0x4a32
#define mmDIG1_HDMI_ACR_48_0                                                    \
  0x4b32
#define mmDIG2_HDMI_ACR_48_0                                                    \
  0x4c32
#define mmDIG3_HDMI_ACR_48_0                                                    \
  0x4d32
#define mmDIG4_HDMI_ACR_48_0                                                    \
  0x4e32
#define mmDIG5_HDMI_ACR_48_0                                                    \
  0x4f32
#define mmDIG6_HDMI_ACR_48_0                                                    \
  0x5432
#define mmDIG7_HDMI_ACR_48_0                                                    \
  0x5632
#define mmDIG8_HDMI_ACR_48_0                                                    \
  0x5732
#define mmHDMI_ACR_48_1                                                         \
  0x4a33
#define mmDIG0_HDMI_ACR_48_1                                                    \
  0x4a33
#define mmDIG1_HDMI_ACR_48_1                                                    \
  0x4b33
#define mmDIG2_HDMI_ACR_48_1                                                    \
  0x4c33
#define mmDIG3_HDMI_ACR_48_1                                                    \
  0x4d33
#define mmDIG4_HDMI_ACR_48_1                                                    \
  0x4e33
#define mmDIG5_HDMI_ACR_48_1                                                    \
  0x4f33
#define mmDIG6_HDMI_ACR_48_1                                                    \
  0x5433
#define mmDIG7_HDMI_ACR_48_1                                                    \
  0x5633
#define mmDIG8_HDMI_ACR_48_1                                                    \
  0x5733
#define mmHDMI_ACR_STATUS_0                                                     \
  0x4a34
#define mmDIG0_HDMI_ACR_STATUS_0                                                \
  0x4a34
#define mmDIG1_HDMI_ACR_STATUS_0                                                \
  0x4b34
#define mmDIG2_HDMI_ACR_STATUS_0                                                \
  0x4c34
#define mmDIG3_HDMI_ACR_STATUS_0                                                \
  0x4d34
#define mmDIG4_HDMI_ACR_STATUS_0                                                \
  0x4e34
#define mmDIG5_HDMI_ACR_STATUS_0                                                \
  0x4f34
#define mmDIG6_HDMI_ACR_STATUS_0                                                \
  0x5434
#define mmDIG7_HDMI_ACR_STATUS_0                                                \
  0x5634
#define mmDIG8_HDMI_ACR_STATUS_0                                                \
  0x5734
#define mmHDMI_ACR_STATUS_1                                                     \
  0x4a35
#define mmDIG0_HDMI_ACR_STATUS_1                                                \
  0x4a35
#define mmDIG1_HDMI_ACR_STATUS_1                                                \
  0x4b35
#define mmDIG2_HDMI_ACR_STATUS_1                                                \
  0x4c35
#define mmDIG3_HDMI_ACR_STATUS_1                                                \
  0x4d35
#define mmDIG4_HDMI_ACR_STATUS_1                                                \
  0x4e35
#define mmDIG5_HDMI_ACR_STATUS_1                                                \
  0x4f35
#define mmDIG6_HDMI_ACR_STATUS_1                                                \
  0x5435
#define mmDIG7_HDMI_ACR_STATUS_1                                                \
  0x5635
#define mmDIG8_HDMI_ACR_STATUS_1                                                \
  0x5735
#define mmAFMT_AUDIO_INFO0                                                      \
  0x4a36
#define mmDIG0_AFMT_AUDIO_INFO0                                                 \
  0x4a36
#define mmDIG1_AFMT_AUDIO_INFO0                                                 \
  0x4b36
#define mmDIG2_AFMT_AUDIO_INFO0                                                 \
  0x4c36
#define mmDIG3_AFMT_AUDIO_INFO0                                                 \
  0x4d36
#define mmDIG4_AFMT_AUDIO_INFO0                                                 \
  0x4e36
#define mmDIG5_AFMT_AUDIO_INFO0                                                 \
  0x4f36
#define mmDIG6_AFMT_AUDIO_INFO0                                                 \
  0x5436
#define mmDIG7_AFMT_AUDIO_INFO0                                                 \
  0x5636
#define mmDIG8_AFMT_AUDIO_INFO0                                                 \
  0x5736
#define mmAFMT_AUDIO_INFO1                                                      \
  0x4a37
#define mmDIG0_AFMT_AUDIO_INFO1                                                 \
  0x4a37
#define mmDIG1_AFMT_AUDIO_INFO1                                                 \
  0x4b37
#define mmDIG2_AFMT_AUDIO_INFO1                                                 \
  0x4c37
#define mmDIG3_AFMT_AUDIO_INFO1                                                 \
  0x4d37
#define mmDIG4_AFMT_AUDIO_INFO1                                                 \
  0x4e37
#define mmDIG5_AFMT_AUDIO_INFO1                                                 \
  0x4f37
#define mmDIG6_AFMT_AUDIO_INFO1                                                 \
  0x5437
#define mmDIG7_AFMT_AUDIO_INFO1                                                 \
  0x5637
#define mmDIG8_AFMT_AUDIO_INFO1                                                 \
  0x5737
#define mmAFMT_60958_0                                                          \
  0x4a38
#define mmDIG0_AFMT_60958_0                                                     \
  0x4a38
#define mmDIG1_AFMT_60958_0                                                     \
  0x4b38
#define mmDIG2_AFMT_60958_0                                                     \
  0x4c38
#define mmDIG3_AFMT_60958_0                                                     \
  0x4d38
#define mmDIG4_AFMT_60958_0                                                     \
  0x4e38
#define mmDIG5_AFMT_60958_0                                                     \
  0x4f38
#define mmDIG6_AFMT_60958_0                                                     \
  0x5438
#define mmDIG7_AFMT_60958_0                                                     \
  0x5638
#define mmDIG8_AFMT_60958_0                                                     \
  0x5738
#define mmAFMT_60958_1                                                          \
  0x4a39
#define mmDIG0_AFMT_60958_1                                                     \
  0x4a39
#define mmDIG1_AFMT_60958_1                                                     \
  0x4b39
#define mmDIG2_AFMT_60958_1                                                     \
  0x4c39
#define mmDIG3_AFMT_60958_1                                                     \
  0x4d39
#define mmDIG4_AFMT_60958_1                                                     \
  0x4e39
#define mmDIG5_AFMT_60958_1                                                     \
  0x4f39
#define mmDIG6_AFMT_60958_1                                                     \
  0x5439
#define mmDIG7_AFMT_60958_1                                                     \
  0x5639
#define mmDIG8_AFMT_60958_1                                                     \
  0x5739
#define mmAFMT_AUDIO_CRC_CONTROL                                                \
  0x4a3a
#define mmDIG0_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4a3a
#define mmDIG1_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4b3a
#define mmDIG2_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4c3a
#define mmDIG3_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4d3a
#define mmDIG4_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4e3a
#define mmDIG5_AFMT_AUDIO_CRC_CONTROL                                           \
  0x4f3a
#define mmDIG6_AFMT_AUDIO_CRC_CONTROL                                           \
  0x543a
#define mmDIG7_AFMT_AUDIO_CRC_CONTROL                                           \
  0x563a
#define mmDIG8_AFMT_AUDIO_CRC_CONTROL                                           \
  0x573a
#define mmAFMT_RAMP_CONTROL0                                                    \
  0x4a3b
#define mmDIG0_AFMT_RAMP_CONTROL0                                               \
  0x4a3b
#define mmDIG1_AFMT_RAMP_CONTROL0                                               \
  0x4b3b
#define mmDIG2_AFMT_RAMP_CONTROL0                                               \
  0x4c3b
#define mmDIG3_AFMT_RAMP_CONTROL0                                               \
  0x4d3b
#define mmDIG4_AFMT_RAMP_CONTROL0                                               \
  0x4e3b
#define mmDIG5_AFMT_RAMP_CONTROL0                                               \
  0x4f3b
#define mmDIG6_AFMT_RAMP_CONTROL0                                               \
  0x543b
#define mmDIG7_AFMT_RAMP_CONTROL0                                               \
  0x563b
#define mmDIG8_AFMT_RAMP_CONTROL0                                               \
  0x573b
#define mmAFMT_RAMP_CONTROL1                                                    \
  0x4a3c
#define mmDIG0_AFMT_RAMP_CONTROL1                                               \
  0x4a3c
#define mmDIG1_AFMT_RAMP_CONTROL1                                               \
  0x4b3c
#define mmDIG2_AFMT_RAMP_CONTROL1                                               \
  0x4c3c
#define mmDIG3_AFMT_RAMP_CONTROL1                                               \
  0x4d3c
#define mmDIG4_AFMT_RAMP_CONTROL1                                               \
  0x4e3c
#define mmDIG5_AFMT_RAMP_CONTROL1                                               \
  0x4f3c
#define mmDIG6_AFMT_RAMP_CONTROL1                                               \
  0x543c
#define mmDIG7_AFMT_RAMP_CONTROL1                                               \
  0x563c
#define mmDIG8_AFMT_RAMP_CONTROL1                                               \
  0x573c
#define mmAFMT_RAMP_CONTROL2                                                    \
  0x4a3d
#define mmDIG0_AFMT_RAMP_CONTROL2                                               \
  0x4a3d
#define mmDIG1_AFMT_RAMP_CONTROL2                                               \
  0x4b3d
#define mmDIG2_AFMT_RAMP_CONTROL2                                               \
  0x4c3d
#define mmDIG3_AFMT_RAMP_CONTROL2                                               \
  0x4d3d
#define mmDIG4_AFMT_RAMP_CONTROL2                                               \
  0x4e3d
#define mmDIG5_AFMT_RAMP_CONTROL2                                               \
  0x4f3d
#define mmDIG6_AFMT_RAMP_CONTROL2                                               \
  0x543d
#define mmDIG7_AFMT_RAMP_CONTROL2                                               \
  0x563d
#define mmDIG8_AFMT_RAMP_CONTROL2                                               \
  0x573d
#define mmAFMT_RAMP_CONTROL3                                                    \
  0x4a3e
#define mmDIG0_AFMT_RAMP_CONTROL3                                               \
  0x4a3e
#define mmDIG1_AFMT_RAMP_CONTROL3                                               \
  0x4b3e
#define mmDIG2_AFMT_RAMP_CONTROL3                                               \
  0x4c3e
#define mmDIG3_AFMT_RAMP_CONTROL3                                               \
  0x4d3e
#define mmDIG4_AFMT_RAMP_CONTROL3                                               \
  0x4e3e
#define mmDIG5_AFMT_RAMP_CONTROL3                                               \
  0x4f3e
#define mmDIG6_AFMT_RAMP_CONTROL3                                               \
  0x543e
#define mmDIG7_AFMT_RAMP_CONTROL3                                               \
  0x563e
#define mmDIG8_AFMT_RAMP_CONTROL3                                               \
  0x573e
#define mmAFMT_60958_2                                                          \
  0x4a3f
#define mmDIG0_AFMT_60958_2                                                     \
  0x4a3f
#define mmDIG1_AFMT_60958_2                                                     \
  0x4b3f
#define mmDIG2_AFMT_60958_2                                                     \
  0x4c3f
#define mmDIG3_AFMT_60958_2                                                     \
  0x4d3f
#define mmDIG4_AFMT_60958_2                                                     \
  0x4e3f
#define mmDIG5_AFMT_60958_2                                                     \
  0x4f3f
#define mmDIG6_AFMT_60958_2                                                     \
  0x543f
#define mmDIG7_AFMT_60958_2                                                     \
  0x563f
#define mmDIG8_AFMT_60958_2                                                     \
  0x573f
#define mmAFMT_AUDIO_CRC_RESULT                                                 \
  0x4a40
#define mmDIG0_AFMT_AUDIO_CRC_RESULT                                            \
  0x4a40
#define mmDIG1_AFMT_AUDIO_CRC_RESULT                                            \
  0x4b40
#define mmDIG2_AFMT_AUDIO_CRC_RESULT                                            \
  0x4c40
#define mmDIG3_AFMT_AUDIO_CRC_RESULT                                            \
  0x4d40
#define mmDIG4_AFMT_AUDIO_CRC_RESULT                                            \
  0x4e40
#define mmDIG5_AFMT_AUDIO_CRC_RESULT                                            \
  0x4f40
#define mmDIG6_AFMT_AUDIO_CRC_RESULT                                            \
  0x5440
#define mmDIG7_AFMT_AUDIO_CRC_RESULT                                            \
  0x5640
#define mmDIG8_AFMT_AUDIO_CRC_RESULT                                            \
  0x5740
#define mmAFMT_STATUS                                                           \
  0x4a41
#define mmDIG0_AFMT_STATUS                                                      \
  0x4a41
#define mmDIG1_AFMT_STATUS                                                      \
  0x4b41
#define mmDIG2_AFMT_STATUS                                                      \
  0x4c41
#define mmDIG3_AFMT_STATUS                                                      \
  0x4d41
#define mmDIG4_AFMT_STATUS                                                      \
  0x4e41
#define mmDIG5_AFMT_STATUS                                                      \
  0x4f41
#define mmDIG6_AFMT_STATUS                                                      \
  0x5441
#define mmDIG7_AFMT_STATUS                                                      \
  0x5641
#define mmDIG8_AFMT_STATUS                                                      \
  0x5741
#define mmAFMT_AUDIO_PACKET_CONTROL                                             \
  0x4a42
#define mmDIG0_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4a42
#define mmDIG1_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4b42
#define mmDIG2_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4c42
#define mmDIG3_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4d42
#define mmDIG4_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4e42
#define mmDIG5_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x4f42
#define mmDIG6_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x5442
#define mmDIG7_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x5642
#define mmDIG8_AFMT_AUDIO_PACKET_CONTROL                                        \
  0x5742
#define mmAFMT_VBI_PACKET_CONTROL                                               \
  0x4a43
#define mmDIG0_AFMT_VBI_PACKET_CONTROL                                          \
  0x4a43
#define mmDIG1_AFMT_VBI_PACKET_CONTROL                                          \
  0x4b43
#define mmDIG2_AFMT_VBI_PACKET_CONTROL                                          \
  0x4c43
#define mmDIG3_AFMT_VBI_PACKET_CONTROL                                          \
  0x4d43
#define mmDIG4_AFMT_VBI_PACKET_CONTROL                                          \
  0x4e43
#define mmDIG5_AFMT_VBI_PACKET_CONTROL                                          \
  0x4f43
#define mmDIG6_AFMT_VBI_PACKET_CONTROL                                          \
  0x5443
#define mmDIG7_AFMT_VBI_PACKET_CONTROL                                          \
  0x5643
#define mmDIG8_AFMT_VBI_PACKET_CONTROL                                          \
  0x5743
#define mmAFMT_INFOFRAME_CONTROL0                                               \
  0x4a44
#define mmDIG0_AFMT_INFOFRAME_CONTROL0                                          \
  0x4a44
#define mmDIG1_AFMT_INFOFRAME_CONTROL0                                          \
  0x4b44
#define mmDIG2_AFMT_INFOFRAME_CONTROL0                                          \
  0x4c44
#define mmDIG3_AFMT_INFOFRAME_CONTROL0                                          \
  0x4d44
#define mmDIG4_AFMT_INFOFRAME_CONTROL0                                          \
  0x4e44
#define mmDIG5_AFMT_INFOFRAME_CONTROL0                                          \
  0x4f44
#define mmDIG6_AFMT_INFOFRAME_CONTROL0                                          \
  0x5444
#define mmDIG7_AFMT_INFOFRAME_CONTROL0                                          \
  0x5644
#define mmDIG8_AFMT_INFOFRAME_CONTROL0                                          \
  0x5744
#define mmAFMT_AUDIO_SRC_CONTROL                                                \
  0x4a45
#define mmDIG0_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4a45
#define mmDIG1_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4b45
#define mmDIG2_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4c45
#define mmDIG3_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4d45
#define mmDIG4_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4e45
#define mmDIG5_AFMT_AUDIO_SRC_CONTROL                                           \
  0x4f45
#define mmDIG6_AFMT_AUDIO_SRC_CONTROL                                           \
  0x5445
#define mmDIG7_AFMT_AUDIO_SRC_CONTROL                                           \
  0x5645
#define mmDIG8_AFMT_AUDIO_SRC_CONTROL                                           \
  0x5745
#define mmAFMT_AUDIO_DBG_DTO_CNTL                                               \
  0x4a46
#define mmDIG0_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4a46
#define mmDIG1_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4b46
#define mmDIG2_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4c46
#define mmDIG3_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4d46
#define mmDIG4_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4e46
#define mmDIG5_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x4f46
#define mmDIG6_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x5446
#define mmDIG7_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x5646
#define mmDIG8_AFMT_AUDIO_DBG_DTO_CNTL                                          \
  0x5746
#define mmAFMT_CNTL                                                             \
  0x4a7e
#define mmDIG0_AFMT_CNTL                                                        \
  0x4a7e
#define mmDIG1_AFMT_CNTL                                                        \
  0x4b7e
#define mmDIG2_AFMT_CNTL                                                        \
  0x4c7e
#define mmDIG3_AFMT_CNTL                                                        \
  0x4d7e
#define mmDIG4_AFMT_CNTL                                                        \
  0x4e7e
#define mmDIG5_AFMT_CNTL                                                        \
  0x4f7e
#define mmDIG6_AFMT_CNTL                                                        \
  0x547e
#define mmDIG7_AFMT_CNTL                                                        \
  0x567e
#define mmDIG8_AFMT_CNTL                                                        \
  0x577e
#define mmDIG_BE_CNTL                                                           \
  0x4a47
#define mmDIG0_DIG_BE_CNTL                                                      \
  0x4a47
#define mmDIG1_DIG_BE_CNTL                                                      \
  0x4b47
#define mmDIG2_DIG_BE_CNTL                                                      \
  0x4c47
#define mmDIG3_DIG_BE_CNTL                                                      \
  0x4d47
#define mmDIG4_DIG_BE_CNTL                                                      \
  0x4e47
#define mmDIG5_DIG_BE_CNTL                                                      \
  0x4f47
#define mmDIG6_DIG_BE_CNTL                                                      \
  0x5447
#define mmDIG7_DIG_BE_CNTL                                                      \
  0x5647
#define mmDIG8_DIG_BE_CNTL                                                      \
  0x5747
#define mmDIG_BE_EN_CNTL                                                        \
  0x4a48
#define mmDIG0_DIG_BE_EN_CNTL                                                   \
  0x4a48
#define mmDIG1_DIG_BE_EN_CNTL                                                   \
  0x4b48
#define mmDIG2_DIG_BE_EN_CNTL                                                   \
  0x4c48
#define mmDIG3_DIG_BE_EN_CNTL                                                   \
  0x4d48
#define mmDIG4_DIG_BE_EN_CNTL                                                   \
  0x4e48
#define mmDIG5_DIG_BE_EN_CNTL                                                   \
  0x4f48
#define mmDIG6_DIG_BE_EN_CNTL                                                   \
  0x5448
#define mmDIG7_DIG_BE_EN_CNTL                                                   \
  0x5648
#define mmDIG8_DIG_BE_EN_CNTL                                                   \
  0x5748
#define mmTMDS_CNTL                                                             \
  0x4a6b
#define mmDIG0_TMDS_CNTL                                                        \
  0x4a6b
#define mmDIG1_TMDS_CNTL                                                        \
  0x4b6b
#define mmDIG2_TMDS_CNTL                                                        \
  0x4c6b
#define mmDIG3_TMDS_CNTL                                                        \
  0x4d6b
#define mmDIG4_TMDS_CNTL                                                        \
  0x4e6b
#define mmDIG5_TMDS_CNTL                                                        \
  0x4f6b
#define mmDIG6_TMDS_CNTL                                                        \
  0x546b
#define mmDIG7_TMDS_CNTL                                                        \
  0x566b
#define mmDIG8_TMDS_CNTL                                                        \
  0x576b
#define mmTMDS_CONTROL_CHAR                                                     \
  0x4a6c
#define mmDIG0_TMDS_CONTROL_CHAR                                                \
  0x4a6c
#define mmDIG1_TMDS_CONTROL_CHAR                                                \
  0x4b6c
#define mmDIG2_TMDS_CONTROL_CHAR                                                \
  0x4c6c
#define mmDIG3_TMDS_CONTROL_CHAR                                                \
  0x4d6c
#define mmDIG4_TMDS_CONTROL_CHAR                                                \
  0x4e6c
#define mmDIG5_TMDS_CONTROL_CHAR                                                \
  0x4f6c
#define mmDIG6_TMDS_CONTROL_CHAR                                                \
  0x546c
#define mmDIG7_TMDS_CONTROL_CHAR                                                \
  0x566c
#define mmDIG8_TMDS_CONTROL_CHAR                                                \
  0x576c
#define mmTMDS_CONTROL0_FEEDBACK                                                \
  0x4a6d
#define mmDIG0_TMDS_CONTROL0_FEEDBACK                                           \
  0x4a6d
#define mmDIG1_TMDS_CONTROL0_FEEDBACK                                           \
  0x4b6d
#define mmDIG2_TMDS_CONTROL0_FEEDBACK                                           \
  0x4c6d
#define mmDIG3_TMDS_CONTROL0_FEEDBACK                                           \
  0x4d6d
#define mmDIG4_TMDS_CONTROL0_FEEDBACK                                           \
  0x4e6d
#define mmDIG5_TMDS_CONTROL0_FEEDBACK                                           \
  0x4f6d
#define mmDIG6_TMDS_CONTROL0_FEEDBACK                                           \
  0x546d
#define mmDIG7_TMDS_CONTROL0_FEEDBACK                                           \
  0x566d
#define mmDIG8_TMDS_CONTROL0_FEEDBACK                                           \
  0x576d
#define mmTMDS_STEREOSYNC_CTL_SEL                                               \
  0x4a6e
#define mmDIG0_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4a6e
#define mmDIG1_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4b6e
#define mmDIG2_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4c6e
#define mmDIG3_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4d6e
#define mmDIG4_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4e6e
#define mmDIG5_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x4f6e
#define mmDIG6_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x546e
#define mmDIG7_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x566e
#define mmDIG8_TMDS_STEREOSYNC_CTL_SEL                                          \
  0x576e
#define mmTMDS_SYNC_CHAR_PATTERN_0_1                                            \
  0x4a6f
#define mmDIG0_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4a6f
#define mmDIG1_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4b6f
#define mmDIG2_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4c6f
#define mmDIG3_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4d6f
#define mmDIG4_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4e6f
#define mmDIG5_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x4f6f
#define mmDIG6_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x546f
#define mmDIG7_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x566f
#define mmDIG8_TMDS_SYNC_CHAR_PATTERN_0_1                                       \
  0x576f
#define mmTMDS_SYNC_CHAR_PATTERN_2_3                                            \
  0x4a70
#define mmDIG0_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4a70
#define mmDIG1_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4b70
#define mmDIG2_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4c70
#define mmDIG3_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4d70
#define mmDIG4_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4e70
#define mmDIG5_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x4f70
#define mmDIG6_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x5470
#define mmDIG7_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x5670
#define mmDIG8_TMDS_SYNC_CHAR_PATTERN_2_3                                       \
  0x5770
#define mmTMDS_DEBUG                                                            \
  0x4a71
#define mmDIG0_TMDS_DEBUG                                                       \
  0x4a71
#define mmDIG1_TMDS_DEBUG                                                       \
  0x4b71
#define mmDIG2_TMDS_DEBUG                                                       \
  0x4c71
#define mmDIG3_TMDS_DEBUG                                                       \
  0x4d71
#define mmDIG4_TMDS_DEBUG                                                       \
  0x4e71
#define mmDIG5_TMDS_DEBUG                                                       \
  0x4f71
#define mmDIG6_TMDS_DEBUG                                                       \
  0x5471
#define mmDIG7_TMDS_DEBUG                                                       \
  0x5671
#define mmDIG8_TMDS_DEBUG                                                       \
  0x5771
#define mmTMDS_CTL_BITS                                                         \
  0x4a72
#define mmDIG0_TMDS_CTL_BITS                                                    \
  0x4a72
#define mmDIG1_TMDS_CTL_BITS                                                    \
  0x4b72
#define mmDIG2_TMDS_CTL_BITS                                                    \
  0x4c72
#define mmDIG3_TMDS_CTL_BITS                                                    \
  0x4d72
#define mmDIG4_TMDS_CTL_BITS                                                    \
  0x4e72
#define mmDIG5_TMDS_CTL_BITS                                                    \
  0x4f72
#define mmDIG6_TMDS_CTL_BITS                                                    \
  0x5472
#define mmDIG7_TMDS_CTL_BITS                                                    \
  0x5672
#define mmDIG8_TMDS_CTL_BITS                                                    \
  0x5772
#define mmTMDS_DCBALANCER_CONTROL                                               \
  0x4a73
#define mmDIG0_TMDS_DCBALANCER_CONTROL                                          \
  0x4a73
#define mmDIG1_TMDS_DCBALANCER_CONTROL                                          \
  0x4b73
#define mmDIG2_TMDS_DCBALANCER_CONTROL                                          \
  0x4c73
#define mmDIG3_TMDS_DCBALANCER_CONTROL                                          \
  0x4d73
#define mmDIG4_TMDS_DCBALANCER_CONTROL                                          \
  0x4e73
#define mmDIG5_TMDS_DCBALANCER_CONTROL                                          \
  0x4f73
#define mmDIG6_TMDS_DCBALANCER_CONTROL                                          \
  0x5473
#define mmDIG7_TMDS_DCBALANCER_CONTROL                                          \
  0x5673
#define mmDIG8_TMDS_DCBALANCER_CONTROL                                          \
  0x5773
#define mmTMDS_CTL0_1_GEN_CNTL                                                  \
  0x4a75
#define mmDIG0_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4a75
#define mmDIG1_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4b75
#define mmDIG2_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4c75
#define mmDIG3_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4d75
#define mmDIG4_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4e75
#define mmDIG5_TMDS_CTL0_1_GEN_CNTL                                             \
  0x4f75
#define mmDIG6_TMDS_CTL0_1_GEN_CNTL                                             \
  0x5475
#define mmDIG7_TMDS_CTL0_1_GEN_CNTL                                             \
  0x5675
#define mmDIG8_TMDS_CTL0_1_GEN_CNTL                                             \
  0x5775
#define mmTMDS_CTL2_3_GEN_CNTL                                                  \
  0x4a76
#define mmDIG0_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4a76
#define mmDIG1_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4b76
#define mmDIG2_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4c76
#define mmDIG3_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4d76
#define mmDIG4_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4e76
#define mmDIG5_TMDS_CTL2_3_GEN_CNTL                                             \
  0x4f76
#define mmDIG6_TMDS_CTL2_3_GEN_CNTL                                             \
  0x5476
#define mmDIG7_TMDS_CTL2_3_GEN_CNTL                                             \
  0x5676
#define mmDIG8_TMDS_CTL2_3_GEN_CNTL                                             \
  0x5776
#define mmDIG_VERSION                                                           \
  0x4a78
#define mmDIG0_DIG_VERSION                                                      \
  0x4a78
#define mmDIG1_DIG_VERSION                                                      \
  0x4b78
#define mmDIG2_DIG_VERSION                                                      \
  0x4c78
#define mmDIG3_DIG_VERSION                                                      \
  0x4d78
#define mmDIG4_DIG_VERSION                                                      \
  0x4e78
#define mmDIG5_DIG_VERSION                                                      \
  0x4f78
#define mmDIG6_DIG_VERSION                                                      \
  0x5478
#define mmDIG7_DIG_VERSION                                                      \
  0x5678
#define mmDIG8_DIG_VERSION                                                      \
  0x5778
#define mmDIG_LANE_ENABLE                                                       \
  0x4a79
#define mmDIG0_DIG_LANE_ENABLE                                                  \
  0x4a79
#define mmDIG1_DIG_LANE_ENABLE                                                  \
  0x4b79
#define mmDIG2_DIG_LANE_ENABLE                                                  \
  0x4c79
#define mmDIG3_DIG_LANE_ENABLE                                                  \
  0x4d79
#define mmDIG4_DIG_LANE_ENABLE                                                  \
  0x4e79
#define mmDIG5_DIG_LANE_ENABLE                                                  \
  0x4f79
#define mmDIG6_DIG_LANE_ENABLE                                                  \
  0x5479
#define mmDIG7_DIG_LANE_ENABLE                                                  \
  0x5679
#define mmDIG8_DIG_LANE_ENABLE                                                  \
  0x5779
#define mmDIG_TEST_DEBUG_INDEX                                                  \
  0x4a7a
#define mmDIG0_DIG_TEST_DEBUG_INDEX                                             \
  0x4a7a
#define mmDIG1_DIG_TEST_DEBUG_INDEX                                             \
  0x4b7a
#define mmDIG2_DIG_TEST_DEBUG_INDEX                                             \
  0x4c7a
#define mmDIG3_DIG_TEST_DEBUG_INDEX                                             \
  0x4d7a
#define mmDIG4_DIG_TEST_DEBUG_INDEX                                             \
  0x4e7a
#define mmDIG5_DIG_TEST_DEBUG_INDEX                                             \
  0x4f7a
#define mmDIG6_DIG_TEST_DEBUG_INDEX                                             \
  0x547a
#define mmDIG7_DIG_TEST_DEBUG_INDEX                                             \
  0x567a
#define mmDIG8_DIG_TEST_DEBUG_INDEX                                             \
  0x577a
#define mmDIG_TEST_DEBUG_DATA                                                   \
  0x4a7b
#define mmDIG0_DIG_TEST_DEBUG_DATA                                              \
  0x4a7b
#define mmDIG1_DIG_TEST_DEBUG_DATA                                              \
  0x4b7b
#define mmDIG2_DIG_TEST_DEBUG_DATA                                              \
  0x4c7b
#define mmDIG3_DIG_TEST_DEBUG_DATA                                              \
  0x4d7b
#define mmDIG4_DIG_TEST_DEBUG_DATA                                              \
  0x4e7b
#define mmDIG5_DIG_TEST_DEBUG_DATA                                              \
  0x4f7b
#define mmDIG6_DIG_TEST_DEBUG_DATA                                              \
  0x547b
#define mmDIG7_DIG_TEST_DEBUG_DATA                                              \
  0x567b
#define mmDIG8_DIG_TEST_DEBUG_DATA                                              \
  0x577b
#define mmDIG_FE_TEST_DEBUG_INDEX                                               \
  0x4a7c
#define mmDIG0_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4a7c
#define mmDIG1_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4b7c
#define mmDIG2_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4c7c
#define mmDIG3_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4d7c
#define mmDIG4_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4e7c
#define mmDIG5_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x4f7c
#define mmDIG6_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x547c
#define mmDIG7_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x567c
#define mmDIG8_DIG_FE_TEST_DEBUG_INDEX                                          \
  0x577c
#define mmDIG_FE_TEST_DEBUG_DATA                                                \
  0x4a7d
#define mmDIG0_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4a7d
#define mmDIG1_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4b7d
#define mmDIG2_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4c7d
#define mmDIG3_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4d7d
#define mmDIG4_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4e7d
#define mmDIG5_DIG_FE_TEST_DEBUG_DATA                                           \
  0x4f7d
#define mmDIG6_DIG_FE_TEST_DEBUG_DATA                                           \
  0x547d
#define mmDIG7_DIG_FE_TEST_DEBUG_DATA                                           \
  0x567d
#define mmDIG8_DIG_FE_TEST_DEBUG_DATA                                           \
  0x577d
#define mmDMCU_CTRL                                                             \
  0x1600
#define mmDMCU_STATUS                                                           \
  0x1601
#define mmDMCU_PC_START_ADDR                                                    \
  0x1602
#define mmDMCU_FW_START_ADDR                                                    \
  0x1603
#define mmDMCU_FW_END_ADDR                                                      \
  0x1604
#define mmDMCU_FW_ISR_START_ADDR                                                \
  0x1605
#define mmDMCU_FW_CS_HI                                                         \
  0x1606
#define mmDMCU_FW_CS_LO                                                         \
  0x1607
#define mmDMCU_RAM_ACCESS_CTRL                                                  \
  0x1608
#define mmDMCU_ERAM_WR_CTRL                                                     \
  0x1609
#define mmDMCU_ERAM_WR_DATA                                                     \
  0x160a
#define mmDMCU_ERAM_RD_CTRL                                                     \
  0x160b
#define mmDMCU_ERAM_RD_DATA                                                     \
  0x160c
#define mmDMCU_IRAM_WR_CTRL                                                     \
  0x160d
#define mmDMCU_IRAM_WR_DATA                                                     \
  0x160e
#define mmDMCU_IRAM_RD_CTRL                                                     \
  0x160f
#define mmDMCU_IRAM_RD_DATA                                                     \
  0x1610
#define mmDMCU_EVENT_TRIGGER                                                    \
  0x1611
#define mmDMCU_UC_INTERNAL_INT_STATUS                                           \
  0x1612
#define mmDMCU_SS_INTERRUPT_CNTL_STATUS                                         \
  0x1613
#define mmDMCU_INTERRUPT_STATUS                                                 \
  0x1614
#define mmDMCU_INTERRUPT_STATUS_1                                               \
  0x1633
#define mmDMCU_INTERRUPT_TO_HOST_EN_MASK                                        \
  0x1615
#define mmDMCU_INTERRUPT_TO_UC_EN_MASK                                          \
  0x1616
#define mmDMCU_INTERRUPT_TO_UC_EN_MASK_1                                        \
  0x1631
#define mmDMCU_INTERRUPT_TO_UC_XIRQ_IRQ_SEL                                     \
  0x1617
#define mmDMCU_INTERRUPT_TO_UC_XIRQ_IRQ_SEL_1                                   \
  0x1632
#define mmDC_DMCU_SCRATCH                                                       \
  0x1618
#define mmDMCU_INT_CNT                                                          \
  0x1619
#define mmDMCU_FW_CHECKSUM_SMPL_BYTE_POS                                        \
  0x161a
#define mmDMCU_UC_CLK_GATING_CNTL                                               \
  0x161b
#define mmMASTER_COMM_DATA_REG1                                                 \
  0x161c
#define mmMASTER_COMM_DATA_REG2                                                 \
  0x161d
#define mmMASTER_COMM_DATA_REG3                                                 \
  0x161e
#define mmMASTER_COMM_CMD_REG                                                   \
  0x161f
#define mmMASTER_COMM_CNTL_REG                                                  \
  0x1620
#define mmSLAVE_COMM_DATA_REG1                                                  \
  0x1621
#define mmSLAVE_COMM_DATA_REG2                                                  \
  0x1622
#define mmSLAVE_COMM_DATA_REG3                                                  \
  0x1623
#define mmSLAVE_COMM_CMD_REG                                                    \
  0x1624
#define mmSLAVE_COMM_CNTL_REG                                                   \
  0x1625
#define mmDMCU_TEST_DEBUG_INDEX                                                 \
  0x1626
#define mmDMCU_TEST_DEBUG_DATA                                                  \
  0x1627
#define mmDMCU_PERFMON_INTERRUPT_STATUS1                                        \
  0x1644
#define mmDMCU_PERFMON_INTERRUPT_STATUS2                                        \
  0x1645
#define mmDMCU_PERFMON_INTERRUPT_STATUS3                                        \
  0x1646
#define mmDMCU_PERFMON_INTERRUPT_STATUS4                                        \
  0x1647
#define mmDMCU_PERFMON_INTERRUPT_STATUS5                                        \
  0x1642
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_EN_MASK1                                 \
  0x1674
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_EN_MASK2                                 \
  0x1675
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_EN_MASK3                                 \
  0x1676
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_EN_MASK4                                 \
  0x1677
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_EN_MASK5                                 \
  0x1643
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_XIRQ_IRQ_SEL1                            \
  0x1678
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_XIRQ_IRQ_SEL2                            \
  0x1679
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_XIRQ_IRQ_SEL3                            \
  0x167a
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_XIRQ_IRQ_SEL4                            \
  0x167b
#define mmDMCU_PERFMON_INTERRUPT_TO_UC_XIRQ_IRQ_SEL5                            \
  0x1673
#define mmDMCU_DPRX_INTERRUPT_STATUS1                                           \
  0x1634
#define mmDMCU_DPRX_INTERRUPT_TO_UC_EN_MASK1                                    \
  0x1635
#define mmDMCU_DPRX_INTERRUPT_TO_UC_XIRQ_IRQ_SEL1                               \
  0x1636
#define mmDP_LINK_CNTL                                                          \
  0x4aa0
#define mmDP0_DP_LINK_CNTL                                                      \
  0x4aa0
#define mmDP1_DP_LINK_CNTL                                                      \
  0x4ba0
#define mmDP2_DP_LINK_CNTL                                                      \
  0x4ca0
#define mmDP3_DP_LINK_CNTL                                                      \
  0x4da0
#define mmDP4_DP_LINK_CNTL                                                      \
  0x4ea0
#define mmDP5_DP_LINK_CNTL                                                      \
  0x4fa0
#define mmDP6_DP_LINK_CNTL                                                      \
  0x54a0
#define mmDP7_DP_LINK_CNTL                                                      \
  0x56a0
#define mmDP8_DP_LINK_CNTL                                                      \
  0x57a0
#define mmDP_PIXEL_FORMAT                                                       \
  0x4aa1
#define mmDP0_DP_PIXEL_FORMAT                                                   \
  0x4aa1
#define mmDP1_DP_PIXEL_FORMAT                                                   \
  0x4ba1
#define mmDP2_DP_PIXEL_FORMAT                                                   \
  0x4ca1
#define mmDP3_DP_PIXEL_FORMAT                                                   \
  0x4da1
#define mmDP4_DP_PIXEL_FORMAT                                                   \
  0x4ea1
#define mmDP5_DP_PIXEL_FORMAT                                                   \
  0x4fa1
#define mmDP6_DP_PIXEL_FORMAT                                                   \
  0x54a1
#define mmDP7_DP_PIXEL_FORMAT                                                   \
  0x56a1
#define mmDP8_DP_PIXEL_FORMAT                                                   \
  0x57a1
#define mmDP_MSA_COLORIMETRY                                                    \
  0x4aa2
#define mmDP0_DP_MSA_COLORIMETRY                                                \
  0x4aa2
#define mmDP1_DP_MSA_COLORIMETRY                                                \
  0x4ba2
#define mmDP2_DP_MSA_COLORIMETRY                                                \
  0x4ca2
#define mmDP3_DP_MSA_COLORIMETRY                                                \
  0x4da2
#define mmDP4_DP_MSA_COLORIMETRY                                                \
  0x4ea2
#define mmDP5_DP_MSA_COLORIMETRY                                                \
  0x4fa2
#define mmDP6_DP_MSA_COLORIMETRY                                                \
  0x54a2
#define mmDP7_DP_MSA_COLORIMETRY                                                \
  0x56a2
#define mmDP8_DP_MSA_COLORIMETRY                                                \
  0x57a2
#define mmDP_CONFIG                                                             \
  0x4aa3
#define mmDP0_DP_CONFIG                                                         \
  0x4aa3
#define mmDP1_DP_CONFIG                                                         \
  0x4ba3
#define mmDP2_DP_CONFIG                                                         \
  0x4ca3
#define mmDP3_DP_CONFIG                                                         \
  0x4da3
#define mmDP4_DP_CONFIG                                                         \
  0x4ea3
#define mmDP5_DP_CONFIG                                                         \
  0x4fa3
#define mmDP6_DP_CONFIG                                                         \
  0x54a3
#define mmDP7_DP_CONFIG                                                         \
  0x56a3
#define mmDP8_DP_CONFIG                                                         \
  0x57a3
#define mmDP_VID_STREAM_CNTL                                                    \
  0x4aa4
#define mmDP0_DP_VID_STREAM_CNTL                                                \
  0x4aa4
#define mmDP1_DP_VID_STREAM_CNTL                                                \
  0x4ba4
#define mmDP2_DP_VID_STREAM_CNTL                                                \
  0x4ca4
#define mmDP3_DP_VID_STREAM_CNTL                                                \
  0x4da4
#define mmDP4_DP_VID_STREAM_CNTL                                                \
  0x4ea4
#define mmDP5_DP_VID_STREAM_CNTL                                                \
  0x4fa4
#define mmDP6_DP_VID_STREAM_CNTL                                                \
  0x54a4
#define mmDP7_DP_VID_STREAM_CNTL                                                \
  0x56a4
#define mmDP8_DP_VID_STREAM_CNTL                                                \
  0x57a4
#define mmDP_STEER_FIFO                                                         \
  0x4aa5
#define mmDP0_DP_STEER_FIFO                                                     \
  0x4aa5
#define mmDP1_DP_STEER_FIFO                                                     \
  0x4ba5
#define mmDP2_DP_STEER_FIFO                                                     \
  0x4ca5
#define mmDP3_DP_STEER_FIFO                                                     \
  0x4da5
#define mmDP4_DP_STEER_FIFO                                                     \
  0x4ea5
#define mmDP5_DP_STEER_FIFO                                                     \
  0x4fa5
#define mmDP6_DP_STEER_FIFO                                                     \
  0x54a5
#define mmDP7_DP_STEER_FIFO                                                     \
  0x56a5
#define mmDP8_DP_STEER_FIFO                                                     \
  0x57a5
#define mmDP_MSA_MISC                                                           \
  0x4aa6
#define mmDP0_DP_MSA_MISC                                                       \
  0x4aa6
#define mmDP1_DP_MSA_MISC                                                       \
  0x4ba6
#define mmDP2_DP_MSA_MISC                                                       \
  0x4ca6
#define mmDP3_DP_MSA_MISC                                                       \
  0x4da6
#define mmDP4_DP_MSA_MISC                                                       \
  0x4ea6
#define mmDP5_DP_MSA_MISC                                                       \
  0x4fa6
#define mmDP6_DP_MSA_MISC                                                       \
  0x54a6
#define mmDP7_DP_MSA_MISC                                                       \
  0x56a6
#define mmDP8_DP_MSA_MISC                                                       \
  0x57a6
#define mmDP_VID_TIMING                                                         \
  0x4aa8
#define mmDP0_DP_VID_TIMING                                                     \
  0x4aa8
#define mmDP1_DP_VID_TIMING                                                     \
  0x4ba8
#define mmDP2_DP_VID_TIMING                                                     \
  0x4ca8
#define mmDP3_DP_VID_TIMING                                                     \
  0x4da8
#define mmDP4_DP_VID_TIMING                                                     \
  0x4ea8
#define mmDP5_DP_VID_TIMING                                                     \
  0x4fa8
#define mmDP6_DP_VID_TIMING                                                     \
  0x54a8
#define mmDP7_DP_VID_TIMING                                                     \
  0x56a8
#define mmDP8_DP_VID_TIMING                                                     \
  0x57a8
#define mmDP_VID_N                                                              \
  0x4aa9
#define mmDP0_DP_VID_N                                                          \
  0x4aa9
#define mmDP1_DP_VID_N                                                          \
  0x4ba9
#define mmDP2_DP_VID_N                                                          \
  0x4ca9
#define mmDP3_DP_VID_N                                                          \
  0x4da9
#define mmDP4_DP_VID_N                                                          \
  0x4ea9
#define mmDP5_DP_VID_N                                                          \
  0x4fa9
#define mmDP6_DP_VID_N                                                          \
  0x54a9
#define mmDP7_DP_VID_N                                                          \
  0x56a9
#define mmDP8_DP_VID_N                                                          \
  0x57a9
#define mmDP_VID_M                                                              \
  0x4aaa
#define mmDP0_DP_VID_M                                                          \
  0x4aaa
#define mmDP1_DP_VID_M                                                          \
  0x4baa
#define mmDP2_DP_VID_M                                                          \
  0x4caa
#define mmDP3_DP_VID_M                                                          \
  0x4daa
#define mmDP4_DP_VID_M                                                          \
  0x4eaa
#define mmDP5_DP_VID_M                                                          \
  0x4faa
#define mmDP6_DP_VID_M                                                          \
  0x54aa
#define mmDP7_DP_VID_M                                                          \
  0x56aa
#define mmDP8_DP_VID_M                                                          \
  0x57aa
#define mmDP_LINK_FRAMING_CNTL                                                  \
  0x4aab
#define mmDP0_DP_LINK_FRAMING_CNTL                                              \
  0x4aab
#define mmDP1_DP_LINK_FRAMING_CNTL                                              \
  0x4bab
#define mmDP2_DP_LINK_FRAMING_CNTL                                              \
  0x4cab
#define mmDP3_DP_LINK_FRAMING_CNTL                                              \
  0x4dab
#define mmDP4_DP_LINK_FRAMING_CNTL                                              \
  0x4eab
#define mmDP5_DP_LINK_FRAMING_CNTL                                              \
  0x4fab
#define mmDP6_DP_LINK_FRAMING_CNTL                                              \
  0x54ab
#define mmDP7_DP_LINK_FRAMING_CNTL                                              \
  0x56ab
#define mmDP8_DP_LINK_FRAMING_CNTL                                              \
  0x57ab
#define mmDP_HBR2_EYE_PATTERN                                                   \
  0x4aac
#define mmDP0_DP_HBR2_EYE_PATTERN                                               \
  0x4aac
#define mmDP1_DP_HBR2_EYE_PATTERN                                               \
  0x4bac
#define mmDP2_DP_HBR2_EYE_PATTERN                                               \
  0x4cac
#define mmDP3_DP_HBR2_EYE_PATTERN                                               \
  0x4dac
#define mmDP4_DP_HBR2_EYE_PATTERN                                               \
  0x4eac
#define mmDP5_DP_HBR2_EYE_PATTERN                                               \
  0x4fac
#define mmDP6_DP_HBR2_EYE_PATTERN                                               \
  0x54ac
#define mmDP7_DP_HBR2_EYE_PATTERN                                               \
  0x56ac
#define mmDP8_DP_HBR2_EYE_PATTERN                                               \
  0x57ac
#define mmDP_VID_MSA_VBID                                                       \
  0x4aad
#define mmDP0_DP_VID_MSA_VBID                                                   \
  0x4aad
#define mmDP1_DP_VID_MSA_VBID                                                   \
  0x4bad
#define mmDP2_DP_VID_MSA_VBID                                                   \
  0x4cad
#define mmDP3_DP_VID_MSA_VBID                                                   \
  0x4dad
#define mmDP4_DP_VID_MSA_VBID                                                   \
  0x4ead
#define mmDP5_DP_VID_MSA_VBID                                                   \
  0x4fad
#define mmDP6_DP_VID_MSA_VBID                                                   \
  0x54ad
#define mmDP7_DP_VID_MSA_VBID                                                   \
  0x56ad
#define mmDP8_DP_VID_MSA_VBID                                                   \
  0x57ad
#define mmDP_VID_INTERRUPT_CNTL                                                 \
  0x4aae
#define mmDP0_DP_VID_INTERRUPT_CNTL                                             \
  0x4aae
#define mmDP1_DP_VID_INTERRUPT_CNTL                                             \
  0x4bae
#define mmDP2_DP_VID_INTERRUPT_CNTL                                             \
  0x4cae
#define mmDP3_DP_VID_INTERRUPT_CNTL                                             \
  0x4dae
#define mmDP4_DP_VID_INTERRUPT_CNTL                                             \
  0x4eae
#define mmDP5_DP_VID_INTERRUPT_CNTL                                             \
  0x4fae
#define mmDP6_DP_VID_INTERRUPT_CNTL                                             \
  0x54ae
#define mmDP7_DP_VID_INTERRUPT_CNTL                                             \
  0x56ae
#define mmDP8_DP_VID_INTERRUPT_CNTL                                             \
  0x57ae
#define mmDP_DPHY_CNTL                                                          \
  0x4aaf
#define mmDP0_DP_DPHY_CNTL                                                      \
  0x4aaf
#define mmDP1_DP_DPHY_CNTL                                                      \
  0x4baf
#define mmDP2_DP_DPHY_CNTL                                                      \
  0x4caf
#define mmDP3_DP_DPHY_CNTL                                                      \
  0x4daf
#define mmDP4_DP_DPHY_CNTL                                                      \
  0x4eaf
#define mmDP5_DP_DPHY_CNTL                                                      \
  0x4faf
#define mmDP6_DP_DPHY_CNTL                                                      \
  0x54af
#define mmDP7_DP_DPHY_CNTL                                                      \
  0x56af
#define mmDP8_DP_DPHY_CNTL                                                      \
  0x57af
#define mmDP_DPHY_TRAINING_PATTERN_SEL                                          \
  0x4ab0
#define mmDP0_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4ab0
#define mmDP1_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4bb0
#define mmDP2_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4cb0
#define mmDP3_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4db0
#define mmDP4_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4eb0
#define mmDP5_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x4fb0
#define mmDP6_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x54b0
#define mmDP7_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x56b0
#define mmDP8_DP_DPHY_TRAINING_PATTERN_SEL                                      \
  0x57b0
#define mmDP_DPHY_SYM0                                                          \
  0x4ab1
#define mmDP0_DP_DPHY_SYM0                                                      \
  0x4ab1
#define mmDP1_DP_DPHY_SYM0                                                      \
  0x4bb1
#define mmDP2_DP_DPHY_SYM0                                                      \
  0x4cb1
#define mmDP3_DP_DPHY_SYM0                                                      \
  0x4db1
#define mmDP4_DP_DPHY_SYM0                                                      \
  0x4eb1
#define mmDP5_DP_DPHY_SYM0                                                      \
  0x4fb1
#define mmDP6_DP_DPHY_SYM0                                                      \
  0x54b1
#define mmDP7_DP_DPHY_SYM0                                                      \
  0x56b1
#define mmDP8_DP_DPHY_SYM0                                                      \
  0x57b1
#define mmDP_DPHY_SYM1                                                          \
  0x4ab2
#define mmDP0_DP_DPHY_SYM1                                                      \
  0x4ab2
#define mmDP1_DP_DPHY_SYM1                                                      \
  0x4bb2
#define mmDP2_DP_DPHY_SYM1                                                      \
  0x4cb2
#define mmDP3_DP_DPHY_SYM1                                                      \
  0x4db2
#define mmDP4_DP_DPHY_SYM1                                                      \
  0x4eb2
#define mmDP5_DP_DPHY_SYM1                                                      \
  0x4fb2
#define mmDP6_DP_DPHY_SYM1                                                      \
  0x54b2
#define mmDP7_DP_DPHY_SYM1                                                      \
  0x56b2
#define mmDP8_DP_DPHY_SYM1                                                      \
  0x57b2
#define mmDP_DPHY_SYM2                                                          \
  0x4ab3
#define mmDP0_DP_DPHY_SYM2                                                      \
  0x4ab3
#define mmDP1_DP_DPHY_SYM2                                                      \
  0x4bb3
#define mmDP2_DP_DPHY_SYM2                                                      \
  0x4cb3
#define mmDP3_DP_DPHY_SYM2                                                      \
  0x4db3
#define mmDP4_DP_DPHY_SYM2                                                      \
  0x4eb3
#define mmDP5_DP_DPHY_SYM2                                                      \
  0x4fb3
#define mmDP6_DP_DPHY_SYM2                                                      \
  0x54b3
#define mmDP7_DP_DPHY_SYM2                                                      \
  0x56b3
#define mmDP8_DP_DPHY_SYM2                                                      \
  0x57b3
#define mmDP_DPHY_8B10B_CNTL                                                    \
  0x4ab4
#define mmDP0_DP_DPHY_8B10B_CNTL                                                \
  0x4ab4
#define mmDP1_DP_DPHY_8B10B_CNTL                                                \
  0x4bb4
#define mmDP2_DP_DPHY_8B10B_CNTL                                                \
  0x4cb4
#define mmDP3_DP_DPHY_8B10B_CNTL                                                \
  0x4db4
#define mmDP4_DP_DPHY_8B10B_CNTL                                                \
  0x4eb4
#define mmDP5_DP_DPHY_8B10B_CNTL                                                \
  0x4fb4
#define mmDP6_DP_DPHY_8B10B_CNTL                                                \
  0x54b4
#define mmDP7_DP_DPHY_8B10B_CNTL                                                \
  0x56b4
#define mmDP8_DP_DPHY_8B10B_CNTL                                                \
  0x57b4
#define mmDP_DPHY_PRBS_CNTL                                                     \
  0x4ab5
#define mmDP0_DP_DPHY_PRBS_CNTL                                                 \
  0x4ab5
#define mmDP1_DP_DPHY_PRBS_CNTL                                                 \
  0x4bb5
#define mmDP2_DP_DPHY_PRBS_CNTL                                                 \
  0x4cb5
#define mmDP3_DP_DPHY_PRBS_CNTL                                                 \
  0x4db5
#define mmDP4_DP_DPHY_PRBS_CNTL                                                 \
  0x4eb5
#define mmDP5_DP_DPHY_PRBS_CNTL                                                 \
  0x4fb5
#define mmDP6_DP_DPHY_PRBS_CNTL                                                 \
  0x54b5
#define mmDP7_DP_DPHY_PRBS_CNTL                                                 \
  0x56b5
#define mmDP8_DP_DPHY_PRBS_CNTL                                                 \
  0x57b5
#define mmDP_DPHY_SCRAM_CNTL                                                    \
  0x4ab6
#define mmDP0_DP_DPHY_SCRAM_CNTL                                                \
  0x4ab6
#define mmDP1_DP_DPHY_SCRAM_CNTL                                                \
  0x4bb6
#define mmDP2_DP_DPHY_SCRAM_CNTL                                                \
  0x4cb6
#define mmDP3_DP_DPHY_SCRAM_CNTL                                                \
  0x4db6
#define mmDP4_DP_DPHY_SCRAM_CNTL                                                \
  0x4eb6
#define mmDP5_DP_DPHY_SCRAM_CNTL                                                \
  0x4fb6
#define mmDP6_DP_DPHY_SCRAM_CNTL                                                \
  0x54b6
#define mmDP8_DP_DPHY_SCRAM_CNTL                                                \
  0x56b6
#define mmDP_DPHY_BS_SR_SWAP_CNTL                                               \
  0x4adc
#define mmDP0_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4adc
#define mmDP1_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4bdc
#define mmDP2_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4cdc
#define mmDP3_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4ddc
#define mmDP4_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4edc
#define mmDP5_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x4fdc
#define mmDP6_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x54dc
#define mmDP7_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x56dc
#define mmDP8_DP_DPHY_BS_SR_SWAP_CNTL                                           \
  0x57dc
#define mmDP_DPHY_CRC_EN                                                        \
  0x4ab7
#define mmDP0_DP_DPHY_CRC_EN                                                    \
  0x4ab7
#define mmDP1_DP_DPHY_CRC_EN                                                    \
  0x4bb7
#define mmDP2_DP_DPHY_CRC_EN                                                    \
  0x4cb7
#define mmDP3_DP_DPHY_CRC_EN                                                    \
  0x4db7
#define mmDP4_DP_DPHY_CRC_EN                                                    \
  0x4eb7
#define mmDP5_DP_DPHY_CRC_EN                                                    \
  0x4fb7
#define mmDP6_DP_DPHY_CRC_EN                                                    \
  0x54b7
#define mmDP7_DP_DPHY_CRC_EN                                                    \
  0x56b7
#define mmDP8_DP_DPHY_CRC_EN                                                    \
  0x57b7
#define mmDP_DPHY_CRC_CNTL                                                      \
  0x4ab8
#define mmDP0_DP_DPHY_CRC_CNTL                                                  \
  0x4ab8
#define mmDP1_DP_DPHY_CRC_CNTL                                                  \
  0x4bb8
#define mmDP2_DP_DPHY_CRC_CNTL                                                  \
  0x4cb8
#define mmDP3_DP_DPHY_CRC_CNTL                                                  \
  0x4db8
#define mmDP4_DP_DPHY_CRC_CNTL                                                  \
  0x4eb8
#define mmDP5_DP_DPHY_CRC_CNTL                                                  \
  0x4fb8
#define mmDP6_DP_DPHY_CRC_CNTL                                                  \
  0x54b8
#define mmDP7_DP_DPHY_CRC_CNTL                                                  \
  0x56b8
#define mmDP8_DP_DPHY_CRC_CNTL                                                  \
  0x57b8
#define mmDP_DPHY_CRC_RESULT                                                    \
  0x4ab9
#define mmDP0_DP_DPHY_CRC_RESULT                                                \
  0x4ab9
#define mmDP1_DP_DPHY_CRC_RESULT                                                \
  0x4bb9
#define mmDP2_DP_DPHY_CRC_RESULT                                                \
  0x4cb9
#define mmDP3_DP_DPHY_CRC_RESULT                                                \
  0x4db9
#define mmDP4_DP_DPHY_CRC_RESULT                                                \
  0x4eb9
#define mmDP5_DP_DPHY_CRC_RESULT                                                \
  0x4fb9
#define mmDP6_DP_DPHY_CRC_RESULT                                                \
  0x54b9
#define mmDP7_DP_DPHY_CRC_RESULT                                                \
  0x56b9
#define mmDP8_DP_DPHY_CRC_RESULT                                                \
  0x57b9
#define mmDP_DPHY_CRC_MST_CNTL                                                  \
  0x4aba
#define mmDP0_DP_DPHY_CRC_MST_CNTL                                              \
  0x4aba
#define mmDP1_DP_DPHY_CRC_MST_CNTL                                              \
  0x4bba
#define mmDP2_DP_DPHY_CRC_MST_CNTL                                              \
  0x4cba
#define mmDP3_DP_DPHY_CRC_MST_CNTL                                              \
  0x4dba
#define mmDP4_DP_DPHY_CRC_MST_CNTL                                              \
  0x4eba
#define mmDP5_DP_DPHY_CRC_MST_CNTL                                              \
  0x4fba
#define mmDP6_DP_DPHY_CRC_MST_CNTL                                              \
  0x54ba
#define mmDP7_DP_DPHY_CRC_MST_CNTL                                              \
  0x56ba
#define mmDP8_DP_DPHY_CRC_MST_CNTL                                              \
  0x57ba
#define mmDP_DPHY_CRC_MST_STATUS                                                \
  0x4abb
#define mmDP0_DP_DPHY_CRC_MST_STATUS                                            \
  0x4abb
#define mmDP1_DP_DPHY_CRC_MST_STATUS                                            \
  0x4bbb
#define mmDP2_DP_DPHY_CRC_MST_STATUS                                            \
  0x4cbb
#define mmDP3_DP_DPHY_CRC_MST_STATUS                                            \
  0x4dbb
#define mmDP4_DP_DPHY_CRC_MST_STATUS                                            \
  0x4ebb
#define mmDP5_DP_DPHY_CRC_MST_STATUS                                            \
  0x4fbb
#define mmDP6_DP_DPHY_CRC_MST_STATUS                                            \
  0x54bb
#define mmDP7_DP_DPHY_CRC_MST_STATUS                                            \
  0x56bb
#define mmDP8_DP_DPHY_CRC_MST_STATUS                                            \
  0x57bb
#define mmDP_DPHY_FAST_TRAINING                                                 \
  0x4abc
#define mmDP0_DP_DPHY_FAST_TRAINING                                             \
  0x4abc
#define mmDP1_DP_DPHY_FAST_TRAINING                                             \
  0x4bbc
#define mmDP2_DP_DPHY_FAST_TRAINING                                             \
  0x4cbc
#define mmDP3_DP_DPHY_FAST_TRAINING                                             \
  0x4dbc
#define mmDP4_DP_DPHY_FAST_TRAINING                                             \
  0x4ebc
#define mmDP5_DP_DPHY_FAST_TRAINING                                             \
  0x4fbc
#define mmDP6_DP_DPHY_FAST_TRAINING                                             \
  0x54bc
#define mmDP7_DP_DPHY_FAST_TRAINING                                             \
  0x56bc
#define mmDP8_DP_DPHY_FAST_TRAINING                                             \
  0x57bc
#define mmDP_DPHY_FAST_TRAINING_STATUS                                          \
  0x4abd
#define mmDP0_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4abd
#define mmDP1_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4bbd
#define mmDP2_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4cbd
#define mmDP3_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4dbd
#define mmDP4_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4ebd
#define mmDP5_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x4fbd
#define mmDP6_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x54bd
#define mmDP7_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x56bd
#define mmDP8_DP_DPHY_FAST_TRAINING_STATUS                                      \
  0x57bd
#define mmDP_DPHY_HBR2_PATTERN_CONTROL                                          \
  0x4add
#define mmDP0_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4add
#define mmDP1_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4bdd
#define mmDP2_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4cdd
#define mmDP3_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4ddd
#define mmDP4_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4edd
#define mmDP5_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x4fdd
#define mmDP6_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x54dd
#define mmDP7_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x56dd
#define mmDP8_DP_DPHY_HBR2_PATTERN_CONTROL                                      \
  0x57dd
#define mmDP_MSA_V_TIMING_OVERRIDE1                                             \
  0x4abe
#define mmDP0_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4abe
#define mmDP1_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4bbe
#define mmDP2_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4cbe
#define mmDP3_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4dbe
#define mmDP4_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4ebe
#define mmDP5_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x4fbe
#define mmDP6_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x54be
#define mmDP7_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x56be
#define mmDP8_DP_MSA_V_TIMING_OVERRIDE1                                         \
  0x57be
#define mmDP_MSA_V_TIMING_OVERRIDE2                                             \
  0x4abf
#define mmDP0_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4abf
#define mmDP1_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4bbf
#define mmDP2_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4cbf
#define mmDP3_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4dbf
#define mmDP4_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4ebf
#define mmDP5_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x4fbf
#define mmDP6_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x54bf
#define mmDP7_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x56bf
#define mmDP8_DP_MSA_V_TIMING_OVERRIDE2                                         \
  0x57bf
#define mmDP_SEC_CNTL                                                           \
  0x4ac3
#define mmDP0_DP_SEC_CNTL                                                       \
  0x4ac3
#define mmDP1_DP_SEC_CNTL                                                       \
  0x4bc3
#define mmDP2_DP_SEC_CNTL                                                       \
  0x4cc3
#define mmDP3_DP_SEC_CNTL                                                       \
  0x4dc3
#define mmDP4_DP_SEC_CNTL                                                       \
  0x4ec3
#define mmDP5_DP_SEC_CNTL                                                       \
  0x4fc3
#define mmDP6_DP_SEC_CNTL                                                       \
  0x54c3
#define mmDP7_DP_SEC_CNTL                                                       \
  0x56c3
#define mmDP8_DP_SEC_CNTL                                                       \
  0x57c3
#define mmDP_SEC_CNTL1                                                          \
  0x4ac4
#define mmDP0_DP_SEC_CNTL1                                                      \
  0x4ac4
#define mmDP1_DP_SEC_CNTL1                                                      \
  0x4bc4
#define mmDP2_DP_SEC_CNTL1                                                      \
  0x4cc4
#define mmDP3_DP_SEC_CNTL1                                                      \
  0x4dc4
#define mmDP4_DP_SEC_CNTL1                                                      \
  0x4ec4
#define mmDP5_DP_SEC_CNTL1                                                      \
  0x4fc4
#define mmDP6_DP_SEC_CNTL1                                                      \
  0x54c4
#define mmDP7_DP_SEC_CNTL1                                                      \
  0x56c4
#define mmDP8_DP_SEC_CNTL1                                                      \
  0x57c4
#define mmDP_SEC_FRAMING1                                                       \
  0x4ac5
#define mmDP0_DP_SEC_FRAMING1                                                   \
  0x4ac5
#define mmDP1_DP_SEC_FRAMING1                                                   \
  0x4bc5
#define mmDP2_DP_SEC_FRAMING1                                                   \
  0x4cc5
#define mmDP3_DP_SEC_FRAMING1                                                   \
  0x4dc5
#define mmDP4_DP_SEC_FRAMING1                                                   \
  0x4ec5
#define mmDP5_DP_SEC_FRAMING1                                                   \
  0x4fc5
#define mmDP6_DP_SEC_FRAMING1                                                   \
  0x54c5
#define mmDP7_DP_SEC_FRAMING1                                                   \
  0x56c5
#define mmDP8_DP_SEC_FRAMING1                                                   \
  0x57c5
#define mmDP_SEC_FRAMING2                                                       \
  0x4ac6
#define mmDP0_DP_SEC_FRAMING2                                                   \
  0x4ac6
#define mmDP1_DP_SEC_FRAMING2                                                   \
  0x4bc6
#define mmDP2_DP_SEC_FRAMING2                                                   \
  0x4cc6
#define mmDP3_DP_SEC_FRAMING2                                                   \
  0x4dc6
#define mmDP4_DP_SEC_FRAMING2                                                   \
  0x4ec6
#define mmDP5_DP_SEC_FRAMING2                                                   \
  0x4fc6
#define mmDP6_DP_SEC_FRAMING2                                                   \
  0x54c6
#define mmDP7_DP_SEC_FRAMING2                                                   \
  0x56c6
#define mmDP8_DP_SEC_FRAMING2                                                   \
  0x57c6
#define mmDP_SEC_FRAMING3                                                       \
  0x4ac7
#define mmDP0_DP_SEC_FRAMING3                                                   \
  0x4ac7
#define mmDP1_DP_SEC_FRAMING3                                                   \
  0x4bc7
#define mmDP2_DP_SEC_FRAMING3                                                   \
  0x4cc7
#define mmDP3_DP_SEC_FRAMING3                                                   \
  0x4dc7
#define mmDP4_DP_SEC_FRAMING3                                                   \
  0x4ec7
#define mmDP5_DP_SEC_FRAMING3                                                   \
  0x4fc7
#define mmDP6_DP_SEC_FRAMING3                                                   \
  0x54c7
#define mmDP7_DP_SEC_FRAMING3                                                   \
  0x56c7
#define mmDP8_DP_SEC_FRAMING3                                                   \
  0x57c7
#define mmDP_SEC_FRAMING4                                                       \
  0x4ac8
#define mmDP0_DP_SEC_FRAMING4                                                   \
  0x4ac8
#define mmDP1_DP_SEC_FRAMING4                                                   \
  0x4bc8
#define mmDP2_DP_SEC_FRAMING4                                                   \
  0x4cc8
#define mmDP3_DP_SEC_FRAMING4                                                   \
  0x4dc8
#define mmDP4_DP_SEC_FRAMING4                                                   \
  0x4ec8
#define mmDP5_DP_SEC_FRAMING4                                                   \
  0x4fc8
#define mmDP6_DP_SEC_FRAMING4                                                   \
  0x54c8
#define mmDP7_DP_SEC_FRAMING4                                                   \
  0x56c8
#define mmDP8_DP_SEC_FRAMING4                                                   \
  0x57c8
#define mmDP_SEC_AUD_N                                                          \
  0x4ac9
#define mmDP0_DP_SEC_AUD_N                                                      \
  0x4ac9
#define mmDP1_DP_SEC_AUD_N                                                      \
  0x4bc9
#define mmDP2_DP_SEC_AUD_N                                                      \
  0x4cc9
#define mmDP3_DP_SEC_AUD_N                                                      \
  0x4dc9
#define mmDP4_DP_SEC_AUD_N                                                      \
  0x4ec9
#define mmDP5_DP_SEC_AUD_N                                                      \
  0x4fc9
#define mmDP6_DP_SEC_AUD_N                                                      \
  0x54c9
#define mmDP7_DP_SEC_AUD_N                                                      \
  0x56c9
#define mmDP8_DP_SEC_AUD_N                                                      \
  0x57c9
#define mmDP_SEC_AUD_N_READBACK                                                 \
  0x4aca
#define mmDP0_DP_SEC_AUD_N_READBACK                                             \
  0x4aca
#define mmDP1_DP_SEC_AUD_N_READBACK                                             \
  0x4bca
#define mmDP2_DP_SEC_AUD_N_READBACK                                             \
  0x4cca
#define mmDP3_DP_SEC_AUD_N_READBACK                                             \
  0x4dca
#define mmDP4_DP_SEC_AUD_N_READBACK                                             \
  0x4eca
#define mmDP5_DP_SEC_AUD_N_READBACK                                             \
  0x4fca
#define mmDP6_DP_SEC_AUD_N_READBACK                                             \
  0x54ca
#define mmDP7_DP_SEC_AUD_N_READBACK                                             \
  0x56ca
#define mmDP8_DP_SEC_AUD_N_READBACK                                             \
  0x57ca
#define mmDP_SEC_AUD_M                                                          \
  0x4acb
#define mmDP0_DP_SEC_AUD_M                                                      \
  0x4acb
#define mmDP1_DP_SEC_AUD_M                                                      \
  0x4bcb
#define mmDP2_DP_SEC_AUD_M                                                      \
  0x4ccb
#define mmDP3_DP_SEC_AUD_M                                                      \
  0x4dcb
#define mmDP4_DP_SEC_AUD_M                                                      \
  0x4ecb
#define mmDP5_DP_SEC_AUD_M                                                      \
  0x4fcb
#define mmDP6_DP_SEC_AUD_M                                                      \
  0x54cb
#define mmDP7_DP_SEC_AUD_M                                                      \
  0x56cb
#define mmDP8_DP_SEC_AUD_M                                                      \
  0x57cb
#define mmDP_SEC_AUD_M_READBACK                                                 \
  0x4acc
#define mmDP0_DP_SEC_AUD_M_READBACK                                             \
  0x4acc
#define mmDP1_DP_SEC_AUD_M_READBACK                                             \
  0x4bcc
#define mmDP2_DP_SEC_AUD_M_READBACK                                             \
  0x4ccc
#define mmDP3_DP_SEC_AUD_M_READBACK                                             \
  0x4dcc
#define mmDP4_DP_SEC_AUD_M_READBACK                                             \
  0x4ecc
#define mmDP5_DP_SEC_AUD_M_READBACK                                             \
  0x4fcc
#define mmDP6_DP_SEC_AUD_M_READBACK                                             \
  0x54cc
#define mmDP7_DP_SEC_AUD_M_READBACK                                             \
  0x56cc
#define mmDP8_DP_SEC_AUD_M_READBACK                                             \
  0x57cc
#define mmDP_SEC_TIMESTAMP                                                      \
  0x4acd
#define mmDP0_DP_SEC_TIMESTAMP                                                  \
  0x4acd
#define mmDP1_DP_SEC_TIMESTAMP                                                  \
  0x4bcd
#define mmDP2_DP_SEC_TIMESTAMP                                                  \
  0x4ccd
#define mmDP3_DP_SEC_TIMESTAMP                                                  \
  0x4dcd
#define mmDP4_DP_SEC_TIMESTAMP                                                  \
  0x4ecd
#define mmDP5_DP_SEC_TIMESTAMP                                                  \
  0x4fcd
#define mmDP6_DP_SEC_TIMESTAMP                                                  \
  0x54cd
#define mmDP7_DP_SEC_TIMESTAMP                                                  \
  0x56cd
#define mmDP8_DP_SEC_TIMESTAMP                                                  \
  0x57cd
#define mmDP_SEC_PACKET_CNTL                                                    \
  0x4ace
#define mmDP0_DP_SEC_PACKET_CNTL                                                \
  0x4ace
#define mmDP1_DP_SEC_PACKET_CNTL                                                \
  0x4bce
#define mmDP2_DP_SEC_PACKET_CNTL                                                \
  0x4cce
#define mmDP3_DP_SEC_PACKET_CNTL                                                \
  0x4dce
#define mmDP4_DP_SEC_PACKET_CNTL                                                \
  0x4ece
#define mmDP5_DP_SEC_PACKET_CNTL                                                \
  0x4fce
#define mmDP6_DP_SEC_PACKET_CNTL                                                \
  0x54ce
#define mmDP7_DP_SEC_PACKET_CNTL                                                \
  0x56ce
#define mmDP8_DP_SEC_PACKET_CNTL                                                \
  0x57ce
#define mmDP_MSE_RATE_CNTL                                                      \
  0x4acf
#define mmDP0_DP_MSE_RATE_CNTL                                                  \
  0x4acf
#define mmDP1_DP_MSE_RATE_CNTL                                                  \
  0x4bcf
#define mmDP2_DP_MSE_RATE_CNTL                                                  \
  0x4ccf
#define mmDP3_DP_MSE_RATE_CNTL                                                  \
  0x4dcf
#define mmDP4_DP_MSE_RATE_CNTL                                                  \
  0x4ecf
#define mmDP5_DP_MSE_RATE_CNTL                                                  \
  0x4fcf
#define mmDP6_DP_MSE_RATE_CNTL                                                  \
  0x54cf
#define mmDP7_DP_MSE_RATE_CNTL                                                  \
  0x56cf
#define mmDP8_DP_MSE_RATE_CNTL                                                  \
  0x57cf
#define mmDP_MSE_RATE_UPDATE                                                    \
  0x4ad1
#define mmDP0_DP_MSE_RATE_UPDATE                                                \
  0x4ad1
#define mmDP1_DP_MSE_RATE_UPDATE                                                \
  0x4bd1
#define mmDP2_DP_MSE_RATE_UPDATE                                                \
  0x4cd1
#define mmDP3_DP_MSE_RATE_UPDATE                                                \
  0x4dd1
#define mmDP4_DP_MSE_RATE_UPDATE                                                \
  0x4ed1
#define mmDP5_DP_MSE_RATE_UPDATE                                                \
  0x4fd1
#define mmDP6_DP_MSE_RATE_UPDATE                                                \
  0x54d1
#define mmDP7_DP_MSE_RATE_UPDATE                                                \
  0x56d1
#define mmDP8_DP_MSE_RATE_UPDATE                                                \
  0x57d1
#define mmDP_MSE_SAT0                                                           \
  0x4ad2
#define mmDP0_DP_MSE_SAT0                                                       \
  0x4ad2
#define mmDP1_DP_MSE_SAT0                                                       \
  0x4bd2
#define mmDP2_DP_MSE_SAT0                                                       \
  0x4cd2
#define mmDP3_DP_MSE_SAT0                                                       \
  0x4dd2
#define mmDP4_DP_MSE_SAT0                                                       \
  0x4ed2
#define mmDP5_DP_MSE_SAT0                                                       \
  0x4fd2
#define mmDP6_DP_MSE_SAT0                                                       \
  0x54d2
#define mmDP7_DP_MSE_SAT0                                                       \
  0x56d2
#define mmDP8_DP_MSE_SAT0                                                       \
  0x57d2
#define mmDP_MSE_SAT1                                                           \
  0x4ad3
#define mmDP0_DP_MSE_SAT1                                                       \
  0x4ad3
#define mmDP1_DP_MSE_SAT1                                                       \
  0x4bd3
#define mmDP2_DP_MSE_SAT1                                                       \
  0x4cd3
#define mmDP3_DP_MSE_SAT1                                                       \
  0x4dd3
#define mmDP4_DP_MSE_SAT1                                                       \
  0x4ed3
#define mmDP5_DP_MSE_SAT1                                                       \
  0x4fd3
#define mmDP6_DP_MSE_SAT1                                                       \
  0x54d3
#define mmDP7_DP_MSE_SAT1                                                       \
  0x56d3
#define mmDP8_DP_MSE_SAT1                                                       \
  0x57d3
#define mmDP_MSE_SAT2                                                           \
  0x4ad4
#define mmDP0_DP_MSE_SAT2                                                       \
  0x4ad4
#define mmDP1_DP_MSE_SAT2                                                       \
  0x4bd4
#define mmDP2_DP_MSE_SAT2                                                       \
  0x4cd4
#define mmDP3_DP_MSE_SAT2                                                       \
  0x4dd4
#define mmDP4_DP_MSE_SAT2                                                       \
  0x4ed4
#define mmDP5_DP_MSE_SAT2                                                       \
  0x4fd4
#define mmDP6_DP_MSE_SAT2                                                       \
  0x54d4
#define mmDP7_DP_MSE_SAT2                                                       \
  0x56d4
#define mmDP8_DP_MSE_SAT2                                                       \
  0x57d4
#define mmDP_MSE_SAT_UPDATE                                                     \
  0x4ad5
#define mmDP0_DP_MSE_SAT_UPDATE                                                 \
  0x4ad5
#define mmDP1_DP_MSE_SAT_UPDATE                                                 \
  0x4bd5
#define mmDP2_DP_MSE_SAT_UPDATE                                                 \
  0x4cd5
#define mmDP3_DP_MSE_SAT_UPDATE                                                 \
  0x4dd5
#define mmDP4_DP_MSE_SAT_UPDATE                                                 \
  0x4ed5
#define mmDP5_DP_MSE_SAT_UPDATE                                                 \
  0x4fd5
#define mmDP6_DP_MSE_SAT_UPDATE                                                 \
  0x54d5
#define mmDP7_DP_MSE_SAT_UPDATE                                                 \
  0x56d5
#define mmDP8_DP_MSE_SAT_UPDATE                                                 \
  0x57d5
#define mmDP_MSE_LINK_TIMING                                                    \
  0x4ad6
#define mmDP0_DP_MSE_LINK_TIMING                                                \
  0x4ad6
#define mmDP1_DP_MSE_LINK_TIMING                                                \
  0x4bd6
#define mmDP2_DP_MSE_LINK_TIMING                                                \
  0x4cd6
#define mmDP3_DP_MSE_LINK_TIMING                                                \
  0x4dd6
#define mmDP4_DP_MSE_LINK_TIMING                                                \
  0x4ed6
#define mmDP5_DP_MSE_LINK_TIMING                                                \
  0x4fd6
#define mmDP6_DP_MSE_LINK_TIMING                                                \
  0x54d6
#define mmDP7_DP_MSE_LINK_TIMING                                                \
  0x56d6
#define mmDP8_DP_MSE_LINK_TIMING                                                \
  0x57d6
#define mmDP_MSE_MISC_CNTL                                                      \
  0x4ad7
#define mmDP0_DP_MSE_MISC_CNTL                                                  \
  0x4ad7
#define mmDP1_DP_MSE_MISC_CNTL                                                  \
  0x4bd7
#define mmDP2_DP_MSE_MISC_CNTL                                                  \
  0x4cd7
#define mmDP3_DP_MSE_MISC_CNTL                                                  \
  0x4dd7
#define mmDP4_DP_MSE_MISC_CNTL                                                  \
  0x4ed7
#define mmDP5_DP_MSE_MISC_CNTL                                                  \
  0x4fd7
#define mmDP6_DP_MSE_MISC_CNTL                                                  \
  0x54d7
#define mmDP7_DP_MSE_MISC_CNTL                                                  \
  0x56d7
#define mmDP8_DP_MSE_MISC_CNTL                                                  \
  0x57d7
#define mmDP_MSE_SAT0_STATUS                                                    \
  0x4adf
#define mmDP0_DP_MSE_SAT0_STATUS                                                \
  0x4adf
#define mmDP1_DP_MSE_SAT0_STATUS                                                \
  0x4bdf
#define mmDP2_DP_MSE_SAT0_STATUS                                                \
  0x4cdf
#define mmDP3_DP_MSE_SAT0_STATUS                                                \
  0x4ddf
#define mmDP4_DP_MSE_SAT0_STATUS                                                \
  0x4edf
#define mmDP5_DP_MSE_SAT0_STATUS                                                \
  0x4fdf
#define mmDP6_DP_MSE_SAT0_STATUS                                                \
  0x54df
#define mmDP7_DP_MSE_SAT0_STATUS                                                \
  0x56df
#define mmDP8_DP_MSE_SAT0_STATUS                                                \
  0x57df
#define mmDP_MSE_SAT1_STATUS                                                    \
  0x4ae0
#define mmDP0_DP_MSE_SAT1_STATUS                                                \
  0x4ae0
#define mmDP1_DP_MSE_SAT1_STATUS                                                \
  0x4be0
#define mmDP2_DP_MSE_SAT1_STATUS                                                \
  0x4ce0
#define mmDP3_DP_MSE_SAT1_STATUS                                                \
  0x4de0
#define mmDP4_DP_MSE_SAT1_STATUS                                                \
  0x4ee0
#define mmDP5_DP_MSE_SAT1_STATUS                                                \
  0x4fe0
#define mmDP6_DP_MSE_SAT1_STATUS                                                \
  0x54e0
#define mmDP7_DP_MSE_SAT1_STATUS                                                \
  0x56e0
#define mmDP8_DP_MSE_SAT1_STATUS                                                \
  0x57e0
#define mmDP_MSE_SAT2_STATUS                                                    \
  0x4ae1
#define mmDP0_DP_MSE_SAT2_STATUS                                                \
  0x4ae1
#define mmDP1_DP_MSE_SAT2_STATUS                                                \
  0x4be1
#define mmDP2_DP_MSE_SAT2_STATUS                                                \
  0x4ce1
#define mmDP3_DP_MSE_SAT2_STATUS                                                \
  0x4de1
#define mmDP4_DP_MSE_SAT2_STATUS                                                \
  0x4ee1
#define mmDP5_DP_MSE_SAT2_STATUS                                                \
  0x4fe1
#define mmDP6_DP_MSE_SAT2_STATUS                                                \
  0x54e1
#define mmDP7_DP_MSE_SAT2_STATUS                                                \
  0x56e1
#define mmDP8_DP_MSE_SAT2_STATUS                                                \
  0x57e1
#define mmDP_TEST_DEBUG_INDEX                                                   \
  0x4ad8
#define mmDP0_DP_TEST_DEBUG_INDEX                                               \
  0x4ad8
#define mmDP1_DP_TEST_DEBUG_INDEX                                               \
  0x4bd8
#define mmDP2_DP_TEST_DEBUG_INDEX                                               \
  0x4cd8
#define mmDP3_DP_TEST_DEBUG_INDEX                                               \
  0x4dd8
#define mmDP4_DP_TEST_DEBUG_INDEX                                               \
  0x4ed8
#define mmDP5_DP_TEST_DEBUG_INDEX                                               \
  0x4fd8
#define mmDP6_DP_TEST_DEBUG_INDEX                                               \
  0x54d8
#define mmDP7_DP_TEST_DEBUG_INDEX                                               \
  0x56d8
#define mmDP8_DP_TEST_DEBUG_INDEX                                               \
  0x57d8
#define mmDP_TEST_DEBUG_DATA                                                    \
  0x4ad9
#define mmDP0_DP_TEST_DEBUG_DATA                                                \
  0x4ad9
#define mmDP1_DP_TEST_DEBUG_DATA                                                \
  0x4bd9
#define mmDP2_DP_TEST_DEBUG_DATA                                                \
  0x4cd9
#define mmDP3_DP_TEST_DEBUG_DATA                                                \
  0x4dd9
#define mmDP4_DP_TEST_DEBUG_DATA                                                \
  0x4ed9
#define mmDP5_DP_TEST_DEBUG_DATA                                                \
  0x4fd9
#define mmDP6_DP_TEST_DEBUG_DATA                                                \
  0x54d9
#define mmDP7_DP_TEST_DEBUG_DATA                                                \
  0x56d9
#define mmDP8_DP_TEST_DEBUG_DATA                                                \
  0x57d9
#define mmDP_FE_TEST_DEBUG_INDEX                                                \
  0x4ada
#define mmDP0_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4ada
#define mmDP1_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4bda
#define mmDP2_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4cda
#define mmDP3_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4dda
#define mmDP4_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4eda
#define mmDP5_DP_FE_TEST_DEBUG_INDEX                                            \
  0x4fda
#define mmDP6_DP_FE_TEST_DEBUG_INDEX                                            \
  0x54da
#define mmDP7_DP_FE_TEST_DEBUG_INDEX                                            \
  0x56da
#define mmDP8_DP_FE_TEST_DEBUG_INDEX                                            \
  0x57da
#define mmDP_FE_TEST_DEBUG_DATA                                                 \
  0x4adb
#define mmDP0_DP_FE_TEST_DEBUG_DATA                                             \
  0x4adb
#define mmDP1_DP_FE_TEST_DEBUG_DATA                                             \
  0x4bdb
#define mmDP2_DP_FE_TEST_DEBUG_DATA                                             \
  0x4cdb
#define mmDP3_DP_FE_TEST_DEBUG_DATA                                             \
  0x4ddb
#define mmDP4_DP_FE_TEST_DEBUG_DATA                                             \
  0x4edb
#define mmDP5_DP_FE_TEST_DEBUG_DATA                                             \
  0x4fdb
#define mmDP6_DP_FE_TEST_DEBUG_DATA                                             \
  0x54db
#define mmDP7_DP_FE_TEST_DEBUG_DATA                                             \
  0x56db
#define mmDP8_DP_FE_TEST_DEBUG_DATA                                             \
  0x57db
#define mmAUX_CONTROL                                                           \
  0x5c00
#define mmDP_AUX0_AUX_CONTROL                                                   \
  0x5c00
#define mmDP_AUX1_AUX_CONTROL                                                   \
  0x5c1c
#define mmDP_AUX2_AUX_CONTROL                                                   \
  0x5c38
#define mmDP_AUX3_AUX_CONTROL                                                   \
  0x5c54
#define mmDP_AUX4_AUX_CONTROL                                                   \
  0x5c70
#define mmDP_AUX5_AUX_CONTROL                                                   \
  0x5c8c
#define mmAUX_SW_CONTROL                                                        \
  0x5c01
#define mmDP_AUX0_AUX_SW_CONTROL                                                \
  0x5c01
#define mmDP_AUX1_AUX_SW_CONTROL                                                \
  0x5c1d
#define mmDP_AUX2_AUX_SW_CONTROL                                                \
  0x5c39
#define mmDP_AUX3_AUX_SW_CONTROL                                                \
  0x5c55
#define mmDP_AUX4_AUX_SW_CONTROL                                                \
  0x5c71
#define mmDP_AUX5_AUX_SW_CONTROL                                                \
  0x5c8d
#define mmAUX_ARB_CONTROL                                                       \
  0x5c02
#define mmDP_AUX0_AUX_ARB_CONTROL                                               \
  0x5c02
#define mmDP_AUX1_AUX_ARB_CONTROL                                               \
  0x5c1e
#define mmDP_AUX2_AUX_ARB_CONTROL                                               \
  0x5c3a
#define mmDP_AUX3_AUX_ARB_CONTROL                                               \
  0x5c56
#define mmDP_AUX4_AUX_ARB_CONTROL                                               \
  0x5c72
#define mmDP_AUX5_AUX_ARB_CONTROL                                               \
  0x5c8e
#define mmAUX_INTERRUPT_CONTROL                                                 \
  0x5c03
#define mmDP_AUX0_AUX_INTERRUPT_CONTROL                                         \
  0x5c03
#define mmDP_AUX1_AUX_INTERRUPT_CONTROL                                         \
  0x5c1f
#define mmDP_AUX2_AUX_INTERRUPT_CONTROL                                         \
  0x5c3b
#define mmDP_AUX3_AUX_INTERRUPT_CONTROL                                         \
  0x5c57
#define mmDP_AUX4_AUX_INTERRUPT_CONTROL                                         \
  0x5c73
#define mmDP_AUX5_AUX_INTERRUPT_CONTROL                                         \
  0x5c8f
#define mmAUX_SW_STATUS                                                         \
  0x5c04
#define mmDP_AUX0_AUX_SW_STATUS                                                 \
  0x5c04
#define mmDP_AUX1_AUX_SW_STATUS                                                 \
  0x5c20
#define mmDP_AUX2_AUX_SW_STATUS                                                 \
  0x5c3c
#define mmDP_AUX3_AUX_SW_STATUS                                                 \
  0x5c58
#define mmDP_AUX4_AUX_SW_STATUS                                                 \
  0x5c74
#define mmDP_AUX5_AUX_SW_STATUS                                                 \
  0x5c90
#define mmAUX_LS_STATUS                                                         \
  0x5c05
#define mmDP_AUX0_AUX_LS_STATUS                                                 \
  0x5c05
#define mmDP_AUX1_AUX_LS_STATUS                                                 \
  0x5c21
#define mmDP_AUX2_AUX_LS_STATUS                                                 \
  0x5c3d
#define mmDP_AUX3_AUX_LS_STATUS                                                 \
  0x5c59
#define mmDP_AUX4_AUX_LS_STATUS                                                 \
  0x5c75
#define mmDP_AUX5_AUX_LS_STATUS                                                 \
  0x5c91
#define mmAUX_SW_DATA                                                           \
  0x5c06
#define mmDP_AUX0_AUX_SW_DATA                                                   \
  0x5c06
#define mmDP_AUX1_AUX_SW_DATA                                                   \
  0x5c22
#define mmDP_AUX2_AUX_SW_DATA                                                   \
  0x5c3e
#define mmDP_AUX3_AUX_SW_DATA                                                   \
  0x5c5a
#define mmDP_AUX4_AUX_SW_DATA                                                   \
  0x5c76
#define mmDP_AUX5_AUX_SW_DATA                                                   \
  0x5c92
#define mmAUX_LS_DATA                                                           \
  0x5c07
#define mmDP_AUX0_AUX_LS_DATA                                                   \
  0x5c07
#define mmDP_AUX1_AUX_LS_DATA                                                   \
  0x5c23
#define mmDP_AUX2_AUX_LS_DATA                                                   \
  0x5c3f
#define mmDP_AUX3_AUX_LS_DATA                                                   \
  0x5c5b
#define mmDP_AUX4_AUX_LS_DATA                                                   \
  0x5c77
#define mmDP_AUX5_AUX_LS_DATA                                                   \
  0x5c93
#define mmAUX_DPHY_TX_REF_CONTROL                                               \
  0x5c08
#define mmDP_AUX0_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c08
#define mmDP_AUX1_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c24
#define mmDP_AUX2_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c40
#define mmDP_AUX3_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c5c
#define mmDP_AUX4_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c78
#define mmDP_AUX5_AUX_DPHY_TX_REF_CONTROL                                       \
  0x5c94
#define mmAUX_DPHY_TX_CONTROL                                                   \
  0x5c09
#define mmDP_AUX0_AUX_DPHY_TX_CONTROL                                           \
  0x5c09
#define mmDP_AUX1_AUX_DPHY_TX_CONTROL                                           \
  0x5c25
#define mmDP_AUX2_AUX_DPHY_TX_CONTROL                                           \
  0x5c41
#define mmDP_AUX3_AUX_DPHY_TX_CONTROL                                           \
  0x5c5d
#define mmDP_AUX4_AUX_DPHY_TX_CONTROL                                           \
  0x5c79
#define mmDP_AUX5_AUX_DPHY_TX_CONTROL                                           \
  0x5c95
#define mmAUX_DPHY_RX_CONTROL0                                                  \
  0x5c0a
#define mmDP_AUX0_AUX_DPHY_RX_CONTROL0                                          \
  0x5c0a
#define mmDP_AUX1_AUX_DPHY_RX_CONTROL0                                          \
  0x5c26
#define mmDP_AUX2_AUX_DPHY_RX_CONTROL0                                          \
  0x5c42
#define mmDP_AUX3_AUX_DPHY_RX_CONTROL0                                          \
  0x5c5e
#define mmDP_AUX4_AUX_DPHY_RX_CONTROL0                                          \
  0x5c7a
#define mmDP_AUX5_AUX_DPHY_RX_CONTROL0                                          \
  0x5c96
#define mmAUX_DPHY_RX_CONTROL1                                                  \
  0x5c0b
#define mmDP_AUX0_AUX_DPHY_RX_CONTROL1                                          \
  0x5c0b
#define mmDP_AUX1_AUX_DPHY_RX_CONTROL1                                          \
  0x5c27
#define mmDP_AUX2_AUX_DPHY_RX_CONTROL1                                          \
  0x5c43
#define mmDP_AUX3_AUX_DPHY_RX_CONTROL1                                          \
  0x5c5f
#define mmDP_AUX4_AUX_DPHY_RX_CONTROL1                                          \
  0x5c7b
#define mmDP_AUX5_AUX_DPHY_RX_CONTROL1                                          \
  0x5c97
#define mmAUX_DPHY_TX_STATUS                                                    \
  0x5c0c
#define mmDP_AUX0_AUX_DPHY_TX_STATUS                                            \
  0x5c0c
#define mmDP_AUX1_AUX_DPHY_TX_STATUS                                            \
  0x5c28
#define mmDP_AUX2_AUX_DPHY_TX_STATUS                                            \
  0x5c44
#define mmDP_AUX3_AUX_DPHY_TX_STATUS                                            \
  0x5c60
#define mmDP_AUX4_AUX_DPHY_TX_STATUS                                            \
  0x5c7c
#define mmDP_AUX5_AUX_DPHY_TX_STATUS                                            \
  0x5c98
#define mmAUX_DPHY_RX_STATUS                                                    \
  0x5c0d
#define mmDP_AUX0_AUX_DPHY_RX_STATUS                                            \
  0x5c0d
#define mmDP_AUX1_AUX_DPHY_RX_STATUS                                            \
  0x5c29
#define mmDP_AUX2_AUX_DPHY_RX_STATUS                                            \
  0x5c45
#define mmDP_AUX3_AUX_DPHY_RX_STATUS                                            \
  0x5c61
#define mmDP_AUX4_AUX_DPHY_RX_STATUS                                            \
  0x5c7d
#define mmDP_AUX5_AUX_DPHY_RX_STATUS                                            \
  0x5c99
#define mmAUX_GTC_SYNC_ERROR_CONTROL                                            \
  0x5c0f
#define mmDP_AUX0_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c0f
#define mmDP_AUX1_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c2b
#define mmDP_AUX2_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c47
#define mmDP_AUX3_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c63
#define mmDP_AUX4_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c7f
#define mmDP_AUX5_AUX_GTC_SYNC_ERROR_CONTROL                                    \
  0x5c9b
#define mmAUX_GTC_SYNC_CONTROLLER_STATUS                                        \
  0x5c10
#define mmDP_AUX0_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c10
#define mmDP_AUX1_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c2c
#define mmDP_AUX2_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c48
#define mmDP_AUX3_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c64
#define mmDP_AUX4_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c80
#define mmDP_AUX5_AUX_GTC_SYNC_CONTROLLER_STATUS                                \
  0x5c9c
#define mmAUX_GTC_SYNC_STATUS                                                   \
  0x5c11
#define mmDP_AUX0_AUX_GTC_SYNC_STATUS                                           \
  0x5c11
#define mmDP_AUX1_AUX_GTC_SYNC_STATUS                                           \
  0x5c2d
#define mmDP_AUX2_AUX_GTC_SYNC_STATUS                                           \
  0x5c49
#define mmDP_AUX3_AUX_GTC_SYNC_STATUS                                           \
  0x5c65
#define mmDP_AUX4_AUX_GTC_SYNC_STATUS                                           \
  0x5c81
#define mmDP_AUX5_AUX_GTC_SYNC_STATUS                                           \
  0x5c9d
#define mmAUX_TEST_DEBUG_INDEX                                                  \
  0x5c14
#define mmDP_AUX0_AUX_TEST_DEBUG_INDEX                                          \
  0x5c14
#define mmDP_AUX1_AUX_TEST_DEBUG_INDEX                                          \
  0x5c30
#define mmDP_AUX2_AUX_TEST_DEBUG_INDEX                                          \
  0x5c4c
#define mmDP_AUX3_AUX_TEST_DEBUG_INDEX                                          \
  0x5c68
#define mmDP_AUX4_AUX_TEST_DEBUG_INDEX                                          \
  0x5c84
#define mmDP_AUX5_AUX_TEST_DEBUG_INDEX                                          \
  0x5ca0
#define mmAUX_TEST_DEBUG_DATA                                                   \
  0x5c15
#define mmDP_AUX0_AUX_TEST_DEBUG_DATA                                           \
  0x5c15
#define mmDP_AUX1_AUX_TEST_DEBUG_DATA                                           \
  0x5c31
#define mmDP_AUX2_AUX_TEST_DEBUG_DATA                                           \
  0x5c4d
#define mmDP_AUX3_AUX_TEST_DEBUG_DATA                                           \
  0x5c69
#define mmDP_AUX4_AUX_TEST_DEBUG_DATA                                           \
  0x5c85
#define mmDP_AUX5_AUX_TEST_DEBUG_DATA                                           \
  0x5ca1
#define ixDP_AUX_DEBUG_A                                                        \
  0x10
#define ixDP_AUX_DEBUG_B                                                        \
  0x11
#define ixDP_AUX_DEBUG_C                                                        \
  0x12
#define ixDP_AUX_DEBUG_D                                                        \
  0x13
#define ixDP_AUX_DEBUG_E                                                        \
  0x14
#define ixDP_AUX_DEBUG_F                                                        \
  0x15
#define ixDP_AUX_DEBUG_G                                                        \
  0x16
#define ixDP_AUX_DEBUG_H                                                        \
  0x17
#define ixDP_AUX_DEBUG_I                                                        \
  0x18
#define ixDP_AUX_DEBUG_J                                                        \
  0x19
#define ixDP_AUX_DEBUG_K                                                        \
  0x1a
#define ixDP_AUX_DEBUG_L                                                        \
  0x1b
#define ixDP_AUX_DEBUG_M                                                        \
  0x1c
#define ixDP_AUX_DEBUG_N                                                        \
  0x1d
#define ixDP_AUX_DEBUG_O                                                        \
  0x1e
#define ixDP_AUX_DEBUG_P                                                        \
  0x1f
#define ixDP_AUX_DEBUG_Q                                                        \
  0x20
#define mmDVO_ENABLE                                                            \
  0x16a0
#define mmDVO_SOURCE_SELECT                                                     \
  0x16a1
#define mmDVO_OUTPUT                                                            \
  0x16a2
#define mmDVO_CONTROL                                                           \
  0x16a3
#define mmDVO_CRC_EN                                                            \
  0x16a4
#define mmDVO_CRC2_SIG_MASK                                                     \
  0x16a5
#define mmDVO_CRC2_SIG_RESULT                                                   \
  0x16a6
#define mmDVO_FIFO_ERROR_STATUS                                                 \
  0x16a7
#define mmDVO_TEST_DEBUG_INDEX                                                  \
  0x16a8
#define mmDVO_TEST_DEBUG_DATA                                                   \
  0x16a9
#define mmFBC_CNTL                                                              \
  0x280
#define mmFBC_IDLE_FORCE_CLEAR_MASK                                             \
  0x282
#define mmFBC_START_STOP_DELAY                                                  \
  0x283
#define mmFBC_COMP_CNTL                                                         \
  0x284
#define mmFBC_COMP_MODE                                                         \
  0x285
#define mmFBC_DEBUG0                                                            \
  0x286
#define mmFBC_DEBUG1                                                            \
  0x287
#define mmFBC_DEBUG2                                                            \
  0x288
#define mmFBC_IND_LUT0                                                          \
  0x289
#define mmFBC_IND_LUT1                                                          \
  0x28a
#define mmFBC_IND_LUT2                                                          \
  0x28b
#define mmFBC_IND_LUT3                                                          \
  0x28c
#define mmFBC_IND_LUT4                                                          \
  0x28d
#define mmFBC_IND_LUT5                                                          \
  0x28e
#define mmFBC_IND_LUT6                                                          \
  0x28f
#define mmFBC_IND_LUT7                                                          \
  0x290
#define mmFBC_IND_LUT8                                                          \
  0x291
#define mmFBC_IND_LUT9                                                          \
  0x292
#define mmFBC_IND_LUT10                                                         \
  0x293
#define mmFBC_IND_LUT11                                                         \
  0x294
#define mmFBC_IND_LUT12                                                         \
  0x295
#define mmFBC_IND_LUT13                                                         \
  0x296
#define mmFBC_IND_LUT14                                                         \
  0x297
#define mmFBC_IND_LUT15                                                         \
  0x298
#define mmFBC_CSM_REGION_OFFSET_01                                              \
  0x299
#define mmFBC_CSM_REGION_OFFSET_23                                              \
  0x29a
#define mmFBC_CLIENT_REGION_MASK                                                \
  0x29b
#define mmFBC_DEBUG_COMP                                                        \
  0x29c
#define mmFBC_DEBUG_CSR                                                         \
  0x29d
#define mmFBC_DEBUG_CSR_RDATA                                                   \
  0x29e
#define mmFBC_DEBUG_CSR_WDATA                                                   \
  0x29f
#define mmFBC_DEBUG_CSR_RDATA_HI                                                \
  0x2a0
#define mmFBC_DEBUG_CSR_WDATA_HI                                                \
  0x2a1
#define mmFBC_MISC                                                              \
  0x2a2
#define mmFBC_STATUS                                                            \
  0x2a3
#define mmFBC_ALPHA_CNTL                                                        \
  0x2a6
#define mmFBC_ALPHA_RGB_OVERRIDE                                                \
  0x2a7
#define mmFBC_TEST_DEBUG_INDEX                                                  \
  0x2a4
#define mmFBC_TEST_DEBUG_DATA                                                   \
  0x2a5
#define mmFMT_CLAMP_COMPONENT_R                                                 \
  0x1be8
#define mmFMT0_FMT_CLAMP_COMPONENT_R                                            \
  0x1be8
#define mmFMT1_FMT_CLAMP_COMPONENT_R                                            \
  0x1de8
#define mmFMT2_FMT_CLAMP_COMPONENT_R                                            \
  0x1fe8
#define mmFMT3_FMT_CLAMP_COMPONENT_R                                            \
  0x41e8
#define mmFMT4_FMT_CLAMP_COMPONENT_R                                            \
  0x43e8
#define mmFMT5_FMT_CLAMP_COMPONENT_R                                            \
  0x45e8
#define mmFMT_CLAMP_COMPONENT_G                                                 \
  0x1be9
#define mmFMT0_FMT_CLAMP_COMPONENT_G                                            \
  0x1be9
#define mmFMT1_FMT_CLAMP_COMPONENT_G                                            \
  0x1de9
#define mmFMT2_FMT_CLAMP_COMPONENT_G                                            \
  0x1fe9
#define mmFMT3_FMT_CLAMP_COMPONENT_G                                            \
  0x41e9
#define mmFMT4_FMT_CLAMP_COMPONENT_G                                            \
  0x43e9
#define mmFMT5_FMT_CLAMP_COMPONENT_G                                            \
  0x45e9
#define mmFMT_CLAMP_COMPONENT_B                                                 \
  0x1bea
#define mmFMT0_FMT_CLAMP_COMPONENT_B                                            \
  0x1bea
#define mmFMT1_FMT_CLAMP_COMPONENT_B                                            \
  0x1dea
#define mmFMT2_FMT_CLAMP_COMPONENT_B                                            \
  0x1fea
#define mmFMT3_FMT_CLAMP_COMPONENT_B                                            \
  0x41ea
#define mmFMT4_FMT_CLAMP_COMPONENT_B                                            \
  0x43ea
#define mmFMT5_FMT_CLAMP_COMPONENT_B                                            \
  0x45ea
#define mmFMT_DYNAMIC_EXP_CNTL                                                  \
  0x1bed
#define mmFMT0_FMT_DYNAMIC_EXP_CNTL                                             \
  0x1bed
#define mmFMT1_FMT_DYNAMIC_EXP_CNTL                                             \
  0x1ded
#define mmFMT2_FMT_DYNAMIC_EXP_CNTL                                             \
  0x1fed
#define mmFMT3_FMT_DYNAMIC_EXP_CNTL                                             \
  0x41ed
#define mmFMT4_FMT_DYNAMIC_EXP_CNTL                                             \
  0x43ed
#define mmFMT5_FMT_DYNAMIC_EXP_CNTL                                             \
  0x45ed
#define mmFMT_CONTROL                                                           \
  0x1bee
#define mmFMT0_FMT_CONTROL                                                      \
  0x1bee
#define mmFMT1_FMT_CONTROL                                                      \
  0x1dee
#define mmFMT2_FMT_CONTROL                                                      \
  0x1fee
#define mmFMT3_FMT_CONTROL                                                      \
  0x41ee
#define mmFMT4_FMT_CONTROL                                                      \
  0x43ee
#define mmFMT5_FMT_CONTROL                                                      \
  0x45ee
#define mmFMT_BIT_DEPTH_CONTROL                                                 \
  0x1bf2
#define mmFMT0_FMT_BIT_DEPTH_CONTROL                                            \
  0x1bf2
#define mmFMT1_FMT_BIT_DEPTH_CONTROL                                            \
  0x1df2
#define mmFMT2_FMT_BIT_DEPTH_CONTROL                                            \
  0x1ff2
#define mmFMT3_FMT_BIT_DEPTH_CONTROL                                            \
  0x41f2
#define mmFMT4_FMT_BIT_DEPTH_CONTROL                                            \
  0x43f2
#define mmFMT5_FMT_BIT_DEPTH_CONTROL                                            \
  0x45f2
#define mmFMT_DITHER_RAND_R_SEED                                                \
  0x1bf3
#define mmFMT0_FMT_DITHER_RAND_R_SEED                                           \
  0x1bf3
#define mmFMT1_FMT_DITHER_RAND_R_SEED                                           \
  0x1df3
#define mmFMT2_FMT_DITHER_RAND_R_SEED                                           \
  0x1ff3
#define mmFMT3_FMT_DITHER_RAND_R_SEED                                           \
  0x41f3
#define mmFMT4_FMT_DITHER_RAND_R_SEED                                           \
  0x43f3
#define mmFMT5_FMT_DITHER_RAND_R_SEED                                           \
  0x45f3
#define mmFMT_DITHER_RAND_G_SEED                                                \
  0x1bf4
#define mmFMT0_FMT_DITHER_RAND_G_SEED                                           \
  0x1bf4
#define mmFMT1_FMT_DITHER_RAND_G_SEED                                           \
  0x1df4
#define mmFMT2_FMT_DITHER_RAND_G_SEED                                           \
  0x1ff4
#define mmFMT3_FMT_DITHER_RAND_G_SEED                                           \
  0x41f4
#define mmFMT4_FMT_DITHER_RAND_G_SEED                                           \
  0x43f4
#define mmFMT5_FMT_DITHER_RAND_G_SEED                                           \
  0x45f4
#define mmFMT_DITHER_RAND_B_SEED                                                \
  0x1bf5
#define mmFMT0_FMT_DITHER_RAND_B_SEED                                           \
  0x1bf5
#define mmFMT1_FMT_DITHER_RAND_B_SEED                                           \
  0x1df5
#define mmFMT2_FMT_DITHER_RAND_B_SEED                                           \
  0x1ff5
#define mmFMT3_FMT_DITHER_RAND_B_SEED                                           \
  0x41f5
#define mmFMT4_FMT_DITHER_RAND_B_SEED                                           \
  0x43f5
#define mmFMT5_FMT_DITHER_RAND_B_SEED                                           \
  0x45f5
#define mmFMT_TEMPORAL_DITHER_PATTERN_CONTROL                                   \
  0x1bf6
#define mmFMT0_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x1bf6
#define mmFMT1_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x1df6
#define mmFMT2_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x1ff6
#define mmFMT3_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x41f6
#define mmFMT4_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x43f6
#define mmFMT5_FMT_TEMPORAL_DITHER_PATTERN_CONTROL                              \
  0x45f6
#define mmFMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                     \
  0x1bf7
#define mmFMT0_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x1bf7
#define mmFMT1_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x1df7
#define mmFMT2_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x1ff7
#define mmFMT3_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x41f7
#define mmFMT4_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x43f7
#define mmFMT5_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_S_MATRIX                \
  0x45f7
#define mmFMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                     \
  0x1bf8
#define mmFMT0_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x1bf8
#define mmFMT1_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x1df8
#define mmFMT2_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x1ff8
#define mmFMT3_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x41f8
#define mmFMT4_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x43f8
#define mmFMT5_FMT_TEMPORAL_DITHER_PROGRAMMABLE_PATTERN_T_MATRIX                \
  0x45f8
#define mmFMT_CLAMP_CNTL                                                        \
  0x1bf9
#define mmFMT0_FMT_CLAMP_CNTL                                                   \
  0x1bf9
#define mmFMT1_FMT_CLAMP_CNTL                                                   \
  0x1df9
#define mmFMT2_FMT_CLAMP_CNTL                                                   \
  0x1ff9
#define mmFMT3_FMT_CLAMP_CNTL                                                   \
  0x41f9
#define mmFMT4_FMT_CLAMP_CNTL                                                   \
  0x43f9
#define mmFMT5_FMT_CLAMP_CNTL                                                   \
  0x45f9
#define mmFMT_CRC_CNTL                                                          \
  0x1bfa
#define mmFMT0_FMT_CRC_CNTL                                                     \
  0x1bfa
#define mmFMT1_FMT_CRC_CNTL                                                     \
  0x1dfa
#define mmFMT2_FMT_CRC_CNTL                                                     \
  0x1ffa
#define mmFMT3_FMT_CRC_CNTL                                                     \
  0x41fa
#define mmFMT4_FMT_CRC_CNTL                                                     \
  0x43fa
#define mmFMT5_FMT_CRC_CNTL                                                     \
  0x45fa
#define mmFMT_CRC_SIG_RED_GREEN_MASK                                            \
  0x1bfb
#define mmFMT0_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x1bfb
#define mmFMT1_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x1dfb
#define mmFMT2_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x1ffb
#define mmFMT3_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x41fb
#define mmFMT4_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x43fb
#define mmFMT5_FMT_CRC_SIG_RED_GREEN_MASK                                       \
  0x45fb
#define mmFMT_CRC_SIG_BLUE_CONTROL_MASK                                         \
  0x1bfc
#define mmFMT0_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x1bfc
#define mmFMT1_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x1dfc
#define mmFMT2_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x1ffc
#define mmFMT3_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x41fc
#define mmFMT4_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x43fc
#define mmFMT5_FMT_CRC_SIG_BLUE_CONTROL_MASK                                    \
  0x45fc
#define mmFMT_CRC_SIG_RED_GREEN                                                 \
  0x1bfd
#define mmFMT0_FMT_CRC_SIG_RED_GREEN                                            \
  0x1bfd
#define mmFMT1_FMT_CRC_SIG_RED_GREEN                                            \
  0x1dfd
#define mmFMT2_FMT_CRC_SIG_RED_GREEN                                            \
  0x1ffd
#define mmFMT3_FMT_CRC_SIG_RED_GREEN                                            \
  0x41fd
#define mmFMT4_FMT_CRC_SIG_RED_GREEN                                            \
  0x43fd
#define mmFMT5_FMT_CRC_SIG_RED_GREEN                                            \
  0x45fd
#define mmFMT_CRC_SIG_BLUE_CONTROL                                              \
  0x1bfe
#define mmFMT0_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x1bfe
#define mmFMT1_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x1dfe
#define mmFMT2_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x1ffe
#define mmFMT3_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x41fe
#define mmFMT4_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x43fe
#define mmFMT5_FMT_CRC_SIG_BLUE_CONTROL                                         \
  0x45fe
#define mmFMT_DEBUG_CNTL                                                        \
  0x1bff
#define mmFMT0_FMT_DEBUG_CNTL                                                   \
  0x1bff
#define mmFMT1_FMT_DEBUG_CNTL                                                   \
  0x1dff
#define mmFMT2_FMT_DEBUG_CNTL                                                   \
  0x1fff
#define mmFMT3_FMT_DEBUG_CNTL                                                   \
  0x41ff
#define mmFMT4_FMT_DEBUG_CNTL                                                   \
  0x43ff
#define mmFMT5_FMT_DEBUG_CNTL                                                   \
  0x45ff
#define mmFMT_SIDE_BY_SIDE_STEREO_CONTROL                                       \
  0x1bf0
#define mmFMT0_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x1bf0
#define mmFMT1_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x1df0
#define mmFMT2_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x1ff0
#define mmFMT3_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x41f0
#define mmFMT4_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x43f0
#define mmFMT5_FMT_SIDE_BY_SIDE_STEREO_CONTROL                                  \
  0x45f0
#define mmFMT_420_HBLANK_EARLY_START                                            \
  0x1bf1
#define mmFMT0_FMT_420_HBLANK_EARLY_START                                       \
  0x1bf1
#define mmFMT1_FMT_420_HBLANK_EARLY_START                                       \
  0x1df1
#define mmFMT2_FMT_420_HBLANK_EARLY_START                                       \
  0x1ff1
#define mmFMT3_FMT_420_HBLANK_EARLY_START                                       \
  0x41f1
#define mmFMT4_FMT_420_HBLANK_EARLY_START                                       \
  0x43f1
#define mmFMT5_FMT_420_HBLANK_EARLY_START                                       \
  0x45f1
#define mmFMT_TEST_DEBUG_INDEX                                                  \
  0x1beb
#define mmFMT0_FMT_TEST_DEBUG_INDEX                                             \
  0x1beb
#define mmFMT1_FMT_TEST_DEBUG_INDEX                                             \
  0x1deb
#define mmFMT2_FMT_TEST_DEBUG_INDEX                                             \
  0x1feb
#define mmFMT3_FMT_TEST_DEBUG_INDEX                                             \
  0x41eb
#define mmFMT4_FMT_TEST_DEBUG_INDEX                                             \
  0x43eb
#define mmFMT5_FMT_TEST_DEBUG_INDEX                                             \
  0x45eb
#define mmFMT_TEST_DEBUG_DATA                                                   \
  0x1bec
#define mmFMT0_FMT_TEST_DEBUG_DATA                                              \
  0x1bec
#define mmFMT1_FMT_TEST_DEBUG_DATA                                              \
  0x1dec
#define mmFMT2_FMT_TEST_DEBUG_DATA                                              \
  0x1fec
#define mmFMT3_FMT_TEST_DEBUG_DATA                                              \
  0x41ec
#define mmFMT4_FMT_TEST_DEBUG_DATA                                              \
  0x43ec
#define mmFMT5_FMT_TEST_DEBUG_DATA                                              \
  0x45ec
#define ixFMT_DEBUG0                                                            \
  0x1
#define ixFMT_DEBUG1                                                            \
  0x2
#define ixFMT_DEBUG2                                                            \
  0x3
#define ixFMT_DEBUG3                                                            \
  0x4
#define ixFMT_DEBUG_ID                                                          \
  0x0
#define mmLB_DATA_FORMAT                                                        \
  0x1ac0
#define mmLB0_LB_DATA_FORMAT                                                    \
  0x1ac0
#define mmLB1_LB_DATA_FORMAT                                                    \
  0x1cc0
#define mmLB2_LB_DATA_FORMAT                                                    \
  0x1ec0
#define mmLB3_LB_DATA_FORMAT                                                    \
  0x40c0
#define mmLB4_LB_DATA_FORMAT                                                    \
  0x42c0
#define mmLB5_LB_DATA_FORMAT                                                    \
  0x44c0
#define mmLB_MEMORY_CTRL                                                        \
  0x1ac1
#define mmLB0_LB_MEMORY_CTRL                                                    \
  0x1ac1
#define mmLB1_LB_MEMORY_CTRL                                                    \
  0x1cc1
#define mmLB2_LB_MEMORY_CTRL                                                    \
  0x1ec1
#define mmLB3_LB_MEMORY_CTRL                                                    \
  0x40c1
#define mmLB4_LB_MEMORY_CTRL                                                    \
  0x42c1
#define mmLB5_LB_MEMORY_CTRL                                                    \
  0x44c1
#define mmLB_MEMORY_SIZE_STATUS                                                 \
  0x1ac2
#define mmLB0_LB_MEMORY_SIZE_STATUS                                             \
  0x1ac2
#define mmLB1_LB_MEMORY_SIZE_STATUS                                             \
  0x1cc2
#define mmLB2_LB_MEMORY_SIZE_STATUS                                             \
  0x1ec2
#define mmLB3_LB_MEMORY_SIZE_STATUS                                             \
  0x40c2
#define mmLB4_LB_MEMORY_SIZE_STATUS                                             \
  0x42c2
#define mmLB5_LB_MEMORY_SIZE_STATUS                                             \
  0x44c2
#define mmLB_DESKTOP_HEIGHT                                                     \
  0x1ac3
#define mmLB0_LB_DESKTOP_HEIGHT                                                 \
  0x1ac3
#define mmLB1_LB_DESKTOP_HEIGHT                                                 \
  0x1cc3
#define mmLB2_LB_DESKTOP_HEIGHT                                                 \
  0x1ec3
#define mmLB3_LB_DESKTOP_HEIGHT                                                 \
  0x40c3
#define mmLB4_LB_DESKTOP_HEIGHT                                                 \
  0x42c3
#define mmLB5_LB_DESKTOP_HEIGHT                                                 \
  0x44c3
#define mmLB_VLINE_START_END                                                    \
  0x1ac4
#define mmLB0_LB_VLINE_START_END                                                \
  0x1ac4
#define mmLB1_LB_VLINE_START_END                                                \
  0x1cc4
#define mmLB2_LB_VLINE_START_END                                                \
  0x1ec4
#define mmLB3_LB_VLINE_START_END                                                \
  0x40c4
#define mmLB4_LB_VLINE_START_END                                                \
  0x42c4
#define mmLB5_LB_VLINE_START_END                                                \
  0x44c4
#define mmLB_VLINE2_START_END                                                   \
  0x1ac5
#define mmLB0_LB_VLINE2_START_END                                               \
  0x1ac5
#define mmLB1_LB_VLINE2_START_END                                               \
  0x1cc5
#define mmLB2_LB_VLINE2_START_END                                               \
  0x1ec5
#define mmLB3_LB_VLINE2_START_END                                               \
  0x40c5
#define mmLB4_LB_VLINE2_START_END                                               \
  0x42c5
#define mmLB5_LB_VLINE2_START_END                                               \
  0x44c5
#define mmLB_V_COUNTER                                                          \
  0x1ac6
#define mmLB0_LB_V_COUNTER                                                      \
  0x1ac6
#define mmLB1_LB_V_COUNTER                                                      \
  0x1cc6
#define mmLB2_LB_V_COUNTER                                                      \
  0x1ec6
#define mmLB3_LB_V_COUNTER                                                      \
  0x40c6
#define mmLB4_LB_V_COUNTER                                                      \
  0x42c6
#define mmLB5_LB_V_COUNTER                                                      \
  0x44c6
#define mmLB_SNAPSHOT_V_COUNTER                                                 \
  0x1ac7
#define mmLB0_LB_SNAPSHOT_V_COUNTER                                             \
  0x1ac7
#define mmLB1_LB_SNAPSHOT_V_COUNTER                                             \
  0x1cc7
#define mmLB2_LB_SNAPSHOT_V_COUNTER                                             \
  0x1ec7
#define mmLB3_LB_SNAPSHOT_V_COUNTER                                             \
  0x40c7
#define mmLB4_LB_SNAPSHOT_V_COUNTER                                             \
  0x42c7
#define mmLB5_LB_SNAPSHOT_V_COUNTER                                             \
  0x44c7
#define mmLB_INTERRUPT_MASK                                                     \
  0x1ac8
#define mmLB0_LB_INTERRUPT_MASK                                                 \
  0x1ac8
#define mmLB1_LB_INTERRUPT_MASK                                                 \
  0x1cc8
#define mmLB2_LB_INTERRUPT_MASK                                                 \
  0x1ec8
#define mmLB3_LB_INTERRUPT_MASK                                                 \
  0x40c8
#define mmLB4_LB_INTERRUPT_MASK                                                 \
  0x42c8
#define mmLB5_LB_INTERRUPT_MASK                                                 \
  0x44c8
#define mmLB_VLINE_STATUS                                                       \
  0x1ac9
#define mmLB0_LB_VLINE_STATUS                                                   \
  0x1ac9
#define mmLB1_LB_VLINE_STATUS                                                   \
  0x1cc9
#define mmLB2_LB_VLINE_STATUS                                                   \
  0x1ec9
#define mmLB3_LB_VLINE_STATUS                                                   \
  0x40c9
#define mmLB4_LB_VLINE_STATUS                                                   \
  0x42c9
#define mmLB5_LB_VLINE_STATUS                                                   \
  0x44c9
#define mmLB_VLINE2_STATUS                                                      \
  0x1aca
#define mmLB0_LB_VLINE2_STATUS                                                  \
  0x1aca
#define mmLB1_LB_VLINE2_STATUS                                                  \
  0x1cca
#define mmLB2_LB_VLINE2_STATUS                                                  \
  0x1eca
#define mmLB3_LB_VLINE2_STATUS                                                  \
  0x40ca
#define mmLB4_LB_VLINE2_STATUS                                                  \
  0x42ca
#define mmLB5_LB_VLINE2_STATUS                                                  \
  0x44ca
#define mmLB_VBLANK_STATUS                                                      \
  0x1acb
#define mmLB0_LB_VBLANK_STATUS                                                  \
  0x1acb
#define mmLB1_LB_VBLANK_STATUS                                                  \
  0x1ccb
#define mmLB2_LB_VBLANK_STATUS                                                  \
  0x1ecb
#define mmLB3_LB_VBLANK_STATUS                                                  \
  0x40cb
#define mmLB4_LB_VBLANK_STATUS                                                  \
  0x42cb
#define mmLB5_LB_VBLANK_STATUS                                                  \
  0x44cb
#define mmLB_SYNC_RESET_SEL                                                     \
  0x1acc
#define mmLB0_LB_SYNC_RESET_SEL                                                 \
  0x1acc
#define mmLB1_LB_SYNC_RESET_SEL                                                 \
  0x1ccc
#define mmLB2_LB_SYNC_RESET_SEL                                                 \
  0x1ecc
#define mmLB3_LB_SYNC_RESET_SEL                                                 \
  0x40cc
#define mmLB4_LB_SYNC_RESET_SEL                                                 \
  0x42cc
#define mmLB5_LB_SYNC_RESET_SEL                                                 \
  0x44cc
#define mmLB_BLACK_KEYER_R_CR                                                   \
  0x1acd
#define mmLB0_LB_BLACK_KEYER_R_CR                                               \
  0x1acd
#define mmLB1_LB_BLACK_KEYER_R_CR                                               \
  0x1ccd
#define mmLB2_LB_BLACK_KEYER_R_CR                                               \
  0x1ecd
#define mmLB3_LB_BLACK_KEYER_R_CR                                               \
  0x40cd
#define mmLB4_LB_BLACK_KEYER_R_CR                                               \
  0x42cd
#define mmLB5_LB_BLACK_KEYER_R_CR                                               \
  0x44cd
#define mmLB_BLACK_KEYER_G_Y                                                    \
  0x1ace
#define mmLB0_LB_BLACK_KEYER_G_Y                                                \
  0x1ace
#define mmLB1_LB_BLACK_KEYER_G_Y                                                \
  0x1cce
#define mmLB2_LB_BLACK_KEYER_G_Y                                                \
  0x1ece
#define mmLB3_LB_BLACK_KEYER_G_Y                                                \
  0x40ce
#define mmLB4_LB_BLACK_KEYER_G_Y                                                \
  0x42ce
#define mmLB5_LB_BLACK_KEYER_G_Y                                                \
  0x44ce
#define mmLB_BLACK_KEYER_B_CB                                                   \
  0x1acf
#define mmLB0_LB_BLACK_KEYER_B_CB                                               \
  0x1acf
#define mmLB1_LB_BLACK_KEYER_B_CB                                               \
  0x1ccf
#define mmLB2_LB_BLACK_KEYER_B_CB                                               \
  0x1ecf
#define mmLB3_LB_BLACK_KEYER_B_CB                                               \
  0x40cf
#define mmLB4_LB_BLACK_KEYER_B_CB                                               \
  0x42cf
#define mmLB5_LB_BLACK_KEYER_B_CB                                               \
  0x44cf
#define mmLB_KEYER_COLOR_CTRL                                                   \
  0x1ad0
#define mmLB0_LB_KEYER_COLOR_CTRL                                               \
  0x1ad0
#define mmLB1_LB_KEYER_COLOR_CTRL                                               \
  0x1cd0
#define mmLB2_LB_KEYER_COLOR_CTRL                                               \
  0x1ed0
#define mmLB3_LB_KEYER_COLOR_CTRL                                               \
  0x40d0
#define mmLB4_LB_KEYER_COLOR_CTRL                                               \
  0x42d0
#define mmLB5_LB_KEYER_COLOR_CTRL                                               \
  0x44d0
#define mmLB_KEYER_COLOR_R_CR                                                   \
  0x1ad1
#define mmLB0_LB_KEYER_COLOR_R_CR                                               \
  0x1ad1
#define mmLB1_LB_KEYER_COLOR_R_CR                                               \
  0x1cd1
#define mmLB2_LB_KEYER_COLOR_R_CR                                               \
  0x1ed1
#define mmLB3_LB_KEYER_COLOR_R_CR                                               \
  0x40d1
#define mmLB4_LB_KEYER_COLOR_R_CR                                               \
  0x42d1
#define mmLB5_LB_KEYER_COLOR_R_CR                                               \
  0x44d1
#define mmLB_KEYER_COLOR_G_Y                                                    \
  0x1ad2
#define mmLB0_LB_KEYER_COLOR_G_Y                                                \
  0x1ad2
#define mmLB1_LB_KEYER_COLOR_G_Y                                                \
  0x1cd2
#define mmLB2_LB_KEYER_COLOR_G_Y                                                \
  0x1ed2
#define mmLB3_LB_KEYER_COLOR_G_Y                                                \
  0x40d2
#define mmLB4_LB_KEYER_COLOR_G_Y                                                \
  0x42d2
#define mmLB5_LB_KEYER_COLOR_G_Y                                                \
  0x44d2
#define mmLB_KEYER_COLOR_B_CB                                                   \
  0x1ad3
#define mmLB0_LB_KEYER_COLOR_B_CB                                               \
  0x1ad3
#define mmLB1_LB_KEYER_COLOR_B_CB                                               \
  0x1cd3
#define mmLB2_LB_KEYER_COLOR_B_CB                                               \
  0x1ed3
#define mmLB3_LB_KEYER_COLOR_B_CB                                               \
  0x40d3
#define mmLB4_LB_KEYER_COLOR_B_CB                                               \
  0x42d3
#define mmLB5_LB_KEYER_COLOR_B_CB                                               \
  0x44d3
#define mmLB_KEYER_COLOR_REP_R_CR                                               \
  0x1ad4
#define mmLB0_LB_KEYER_COLOR_REP_R_CR                                           \
  0x1ad4
#define mmLB1_LB_KEYER_COLOR_REP_R_CR                                           \
  0x1cd4
#define mmLB2_LB_KEYER_COLOR_REP_R_CR                                           \
  0x1ed4
#define mmLB3_LB_KEYER_COLOR_REP_R_CR                                           \
  0x40d4
#define mmLB4_LB_KEYER_COLOR_REP_R_CR                                           \
  0x42d4
#define mmLB5_LB_KEYER_COLOR_REP_R_CR                                           \
  0x44d4
#define mmLB_KEYER_COLOR_REP_G_Y                                                \
  0x1ad5
#define mmLB0_LB_KEYER_COLOR_REP_G_Y                                            \
  0x1ad5
#define mmLB1_LB_KEYER_COLOR_REP_G_Y                                            \
  0x1cd5
#define mmLB2_LB_KEYER_COLOR_REP_G_Y                                            \
  0x1ed5
#define mmLB3_LB_KEYER_COLOR_REP_G_Y                                            \
  0x40d5
#define mmLB4_LB_KEYER_COLOR_REP_G_Y                                            \
  0x42d5
#define mmLB5_LB_KEYER_COLOR_REP_G_Y                                            \
  0x44d5
#define mmLB_KEYER_COLOR_REP_B_CB                                               \
  0x1ad6
#define mmLB0_LB_KEYER_COLOR_REP_B_CB                                           \
  0x1ad6
#define mmLB1_LB_KEYER_COLOR_REP_B_CB                                           \
  0x1cd6
#define mmLB2_LB_KEYER_COLOR_REP_B_CB                                           \
  0x1ed6
#define mmLB3_LB_KEYER_COLOR_REP_B_CB                                           \
  0x40d6
#define mmLB4_LB_KEYER_COLOR_REP_B_CB                                           \
  0x42d6
#define mmLB5_LB_KEYER_COLOR_REP_B_CB                                           \
  0x44d6
#define mmLB_BUFFER_LEVEL_STATUS                                                \
  0x1ad7
#define mmLB0_LB_BUFFER_LEVEL_STATUS                                            \
  0x1ad7
#define mmLB1_LB_BUFFER_LEVEL_STATUS                                            \
  0x1cd7
#define mmLB2_LB_BUFFER_LEVEL_STATUS                                            \
  0x1ed7
#define mmLB3_LB_BUFFER_LEVEL_STATUS                                            \
  0x40d7
#define mmLB4_LB_BUFFER_LEVEL_STATUS                                            \
  0x42d7
#define mmLB5_LB_BUFFER_LEVEL_STATUS                                            \
  0x44d7
#define mmLB_BUFFER_URGENCY_CTRL                                                \
  0x1ad8
#define mmLB0_LB_BUFFER_URGENCY_CTRL                                            \
  0x1ad8
#define mmLB1_LB_BUFFER_URGENCY_CTRL                                            \
  0x1cd8
#define mmLB2_LB_BUFFER_URGENCY_CTRL                                            \
  0x1ed8
#define mmLB3_LB_BUFFER_URGENCY_CTRL                                            \
  0x40d8
#define mmLB4_LB_BUFFER_URGENCY_CTRL                                            \
  0x42d8
#define mmLB5_LB_BUFFER_URGENCY_CTRL                                            \
  0x44d8
#define mmLB_BUFFER_URGENCY_STATUS                                              \
  0x1ad9
#define mmLB0_LB_BUFFER_URGENCY_STATUS                                          \
  0x1ad9
#define mmLB1_LB_BUFFER_URGENCY_STATUS                                          \
  0x1cd9
#define mmLB2_LB_BUFFER_URGENCY_STATUS                                          \
  0x1ed9
#define mmLB3_LB_BUFFER_URGENCY_STATUS                                          \
  0x40d9
#define mmLB4_LB_BUFFER_URGENCY_STATUS                                          \
  0x42d9
#define mmLB5_LB_BUFFER_URGENCY_STATUS                                          \
  0x44d9
#define mmLB_BUFFER_STATUS                                                      \
  0x1ada
#define mmLB0_LB_BUFFER_STATUS                                                  \
  0x1ada
#define mmLB1_LB_BUFFER_STATUS                                                  \
  0x1cda
#define mmLB2_LB_BUFFER_STATUS                                                  \
  0x1eda
#define mmLB3_LB_BUFFER_STATUS                                                  \
  0x40da
#define mmLB4_LB_BUFFER_STATUS                                                  \
  0x42da
#define mmLB5_LB_BUFFER_STATUS                                                  \
  0x44da
#define mmLB_NO_OUTSTANDING_REQ_STATUS                                          \
  0x1adc
#define mmLB0_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x1adc
#define mmLB1_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x1cdc
#define mmLB2_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x1edc
#define mmLB3_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x40dc
#define mmLB4_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x42dc
#define mmLB5_LB_NO_OUTSTANDING_REQ_STATUS                                      \
  0x44dc
#define mmMVP_AFR_FLIP_MODE                                                     \
  0x1ae0
#define mmLB0_MVP_AFR_FLIP_MODE                                                 \
  0x1ae0
#define mmLB1_MVP_AFR_FLIP_MODE                                                 \
  0x1ce0
#define mmLB2_MVP_AFR_FLIP_MODE                                                 \
  0x1ee0
#define mmLB3_MVP_AFR_FLIP_MODE                                                 \
  0x40e0
#define mmLB4_MVP_AFR_FLIP_MODE                                                 \
  0x42e0
#define mmLB5_MVP_AFR_FLIP_MODE                                                 \
  0x44e0
#define mmMVP_AFR_FLIP_FIFO_CNTL                                                \
  0x1ae1
#define mmLB0_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x1ae1
#define mmLB1_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x1ce1
#define mmLB2_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x1ee1
#define mmLB3_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x40e1
#define mmLB4_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x42e1
#define mmLB5_MVP_AFR_FLIP_FIFO_CNTL                                            \
  0x44e1
#define mmMVP_FLIP_LINE_NUM_INSERT                                              \
  0x1ae2
#define mmLB0_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x1ae2
#define mmLB1_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x1ce2
#define mmLB2_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x1ee2
#define mmLB3_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x40e2
#define mmLB4_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x42e2
#define mmLB5_MVP_FLIP_LINE_NUM_INSERT                                          \
  0x44e2
#define mmDC_MVP_LB_CONTROL                                                     \
  0x1ae3
#define mmLB0_DC_MVP_LB_CONTROL                                                 \
  0x1ae3
#define mmLB1_DC_MVP_LB_CONTROL                                                 \
  0x1ce3
#define mmLB2_DC_MVP_LB_CONTROL                                                 \
  0x1ee3
#define mmLB3_DC_MVP_LB_CONTROL                                                 \
  0x40e3
#define mmLB4_DC_MVP_LB_CONTROL                                                 \
  0x42e3
#define mmLB5_DC_MVP_LB_CONTROL                                                 \
  0x44e3
#define mmLB_DEBUG                                                              \
  0x1ae4
#define mmLB0_LB_DEBUG                                                          \
  0x1ae4
#define mmLB1_LB_DEBUG                                                          \
  0x1ce4
#define mmLB2_LB_DEBUG                                                          \
  0x1ee4
#define mmLB3_LB_DEBUG                                                          \
  0x40e4
#define mmLB4_LB_DEBUG                                                          \
  0x42e4
#define mmLB5_LB_DEBUG                                                          \
  0x44e4
#define mmLB_DEBUG2                                                             \
  0x1ae5
#define mmLB0_LB_DEBUG2                                                         \
  0x1ae5
#define mmLB1_LB_DEBUG2                                                         \
  0x1ce5
#define mmLB2_LB_DEBUG2                                                         \
  0x1ee5
#define mmLB3_LB_DEBUG2                                                         \
  0x40e5
#define mmLB4_LB_DEBUG2                                                         \
  0x42e5
#define mmLB5_LB_DEBUG2                                                         \
  0x44e5
#define mmLB_DEBUG3                                                             \
  0x1ae6
#define mmLB0_LB_DEBUG3                                                         \
  0x1ae6
#define mmLB1_LB_DEBUG3                                                         \
  0x1ce6
#define mmLB2_LB_DEBUG3                                                         \
  0x1ee6
#define mmLB3_LB_DEBUG3                                                         \
  0x40e6
#define mmLB4_LB_DEBUG3                                                         \
  0x42e6
#define mmLB5_LB_DEBUG3                                                         \
  0x44e6
#define mmLB_TEST_DEBUG_INDEX                                                   \
  0x1afe
#define mmLB0_LB_TEST_DEBUG_INDEX                                               \
  0x1afe
#define mmLB1_LB_TEST_DEBUG_INDEX                                               \
  0x1cfe
#define mmLB2_LB_TEST_DEBUG_INDEX                                               \
  0x1efe
#define mmLB3_LB_TEST_DEBUG_INDEX                                               \
  0x40fe
#define mmLB4_LB_TEST_DEBUG_INDEX                                               \
  0x42fe
#define mmLB5_LB_TEST_DEBUG_INDEX                                               \
  0x44fe
#define mmLB_TEST_DEBUG_DATA                                                    \
  0x1aff
#define mmLB0_LB_TEST_DEBUG_DATA                                                \
  0x1aff
#define mmLB1_LB_TEST_DEBUG_DATA                                                \
  0x1cff
#define mmLB2_LB_TEST_DEBUG_DATA                                                \
  0x1eff
#define mmLB3_LB_TEST_DEBUG_DATA                                                \
  0x40ff
#define mmLB4_LB_TEST_DEBUG_DATA                                                \
  0x42ff
#define mmLB5_LB_TEST_DEBUG_DATA                                                \
  0x44ff
#define mmLBV_DATA_FORMAT                                                       \
  0x463c
#define mmLBV0_LBV_DATA_FORMAT                                                  \
  0x463c
#define mmLBV1_LBV_DATA_FORMAT                                                  \
  0x983c
#define mmLBV_MEMORY_CTRL                                                       \
  0x463d
#define mmLBV0_LBV_MEMORY_CTRL                                                  \
  0x463d
#define mmLBV1_LBV_MEMORY_CTRL                                                  \
  0x983d
#define mmLBV_MEMORY_SIZE_STATUS                                                \
  0x463e
#define mmLBV0_LBV_MEMORY_SIZE_STATUS                                           \
  0x463e
#define mmLBV1_LBV_MEMORY_SIZE_STATUS                                           \
  0x983e
#define mmLBV_DESKTOP_HEIGHT                                                    \
  0x463f
#define mmLBV0_LBV_DESKTOP_HEIGHT                                               \
  0x463f
#define mmLBV1_LBV_DESKTOP_HEIGHT                                               \
  0x983f
#define mmLBV_VLINE_START_END                                                   \
  0x4640
#define mmLBV0_LBV_VLINE_START_END                                              \
  0x4640
#define mmLBV1_LBV_VLINE_START_END                                              \
  0x9840
#define mmLBV_VLINE2_START_END                                                  \
  0x4641
#define mmLBV0_LBV_VLINE2_START_END                                             \
  0x4641
#define mmLBV1_LBV_VLINE2_START_END                                             \
  0x9841
#define mmLBV_V_COUNTER                                                         \
  0x4642
#define mmLBV0_LBV_V_COUNTER                                                    \
  0x4642
#define mmLBV1_LBV_V_COUNTER                                                    \
  0x9842
#define mmLBV_SNAPSHOT_V_COUNTER                                                \
  0x4643
#define mmLBV0_LBV_SNAPSHOT_V_COUNTER                                           \
  0x4643
#define mmLBV1_LBV_SNAPSHOT_V_COUNTER                                           \
  0x9843
#define mmLBV_V_COUNTER_CHROMA                                                  \
  0x4644
#define mmLBV0_LBV_V_COUNTER_CHROMA                                             \
  0x4644
#define mmLBV1_LBV_V_COUNTER_CHROMA                                             \
  0x9844
#define mmLBV_SNAPSHOT_V_COUNTER_CHROMA                                         \
  0x4645
#define mmLBV0_LBV_SNAPSHOT_V_COUNTER_CHROMA                                    \
  0x4645
#define mmLBV1_LBV_SNAPSHOT_V_COUNTER_CHROMA                                    \
  0x9845
#define mmLBV_INTERRUPT_MASK                                                    \
  0x4646
#define mmLBV0_LBV_INTERRUPT_MASK                                               \
  0x4646
#define mmLBV1_LBV_INTERRUPT_MASK                                               \
  0x9846
#define mmLBV_VLINE_STATUS                                                      \
  0x4647
#define mmLBV0_LBV_VLINE_STATUS                                                 \
  0x4647
#define mmLBV1_LBV_VLINE_STATUS                                                 \
  0x9847
#define mmLBV_VLINE2_STATUS                                                     \
  0x4648
#define mmLBV0_LBV_VLINE2_STATUS                                                \
  0x4648
#define mmLBV1_LBV_VLINE2_STATUS                                                \
  0x9848
#define mmLBV_VBLANK_STATUS                                                     \
  0x4649
#define mmLBV0_LBV_VBLANK_STATUS                                                \
  0x4649
#define mmLBV1_LBV_VBLANK_STATUS                                                \
  0x9849
#define mmLBV_SYNC_RESET_SEL                                                    \
  0x464a
#define mmLBV0_LBV_SYNC_RESET_SEL                                               \
  0x464a
#define mmLBV1_LBV_SYNC_RESET_SEL                                               \
  0x984a
#define mmLBV_BLACK_KEYER_R_CR                                                  \
  0x464b
#define mmLBV0_LBV_BLACK_KEYER_R_CR                                             \
  0x464b
#define mmLBV1_LBV_BLACK_KEYER_R_CR                                             \
  0x984b
#define mmLBV_BLACK_KEYER_G_Y                                                   \
  0x464c
#define mmLBV0_LBV_BLACK_KEYER_G_Y                                              \
  0x464c
#define mmLBV1_LBV_BLACK_KEYER_G_Y                                              \
  0x984c
#define mmLBV_BLACK_KEYER_B_CB                                                  \
  0x464d
#define mmLBV0_LBV_BLACK_KEYER_B_CB                                             \
  0x464d
#define mmLBV1_LBV_BLACK_KEYER_B_CB                                             \
  0x984d
#define mmLBV_KEYER_COLOR_CTRL                                                  \
  0x464e
#define mmLBV0_LBV_KEYER_COLOR_CTRL                                             \
  0x464e
#define mmLBV1_LBV_KEYER_COLOR_CTRL                                             \
  0x984e
#define mmLBV_KEYER_COLOR_R_CR                                                  \
  0x464f
#define mmLBV0_LBV_KEYER_COLOR_R_CR                                             \
  0x464f
#define mmLBV1_LBV_KEYER_COLOR_R_CR                                             \
  0x984f
#define mmLBV_KEYER_COLOR_G_Y                                                   \
  0x4650
#define mmLBV0_LBV_KEYER_COLOR_G_Y                                              \
  0x4650
#define mmLBV1_LBV_KEYER_COLOR_G_Y                                              \
  0x9850
#define mmLBV_KEYER_COLOR_B_CB                                                  \
  0x4651
#define mmLBV0_LBV_KEYER_COLOR_B_CB                                             \
  0x4651
#define mmLBV1_LBV_KEYER_COLOR_B_CB                                             \
  0x9851
#define mmLBV_KEYER_COLOR_REP_R_CR                                              \
  0x4652
#define mmLBV0_LBV_KEYER_COLOR_REP_R_CR                                         \
  0x4652
#define mmLBV1_LBV_KEYER_COLOR_REP_R_CR                                         \
  0x9852
#define mmLBV_KEYER_COLOR_REP_G_Y                                               \
  0x4653
#define mmLBV0_LBV_KEYER_COLOR_REP_G_Y                                          \
  0x4653
#define mmLBV1_LBV_KEYER_COLOR_REP_G_Y                                          \
  0x9853
#define mmLBV_KEYER_COLOR_REP_B_CB                                              \
  0x4654
#define mmLBV0_LBV_KEYER_COLOR_REP_B_CB                                         \
  0x4654
#define mmLBV1_LBV_KEYER_COLOR_REP_B_CB                                         \
  0x9854
#define mmLBV_BUFFER_LEVEL_STATUS                                               \
  0x4655
#define mmLBV0_LBV_BUFFER_LEVEL_STATUS                                          \
  0x4655
#define mmLBV1_LBV_BUFFER_LEVEL_STATUS                                          \
  0x9855
#define mmLBV_BUFFER_URGENCY_CTRL                                               \
  0x4656
#define mmLBV0_LBV_BUFFER_URGENCY_CTRL                                          \
  0x4656
#define mmLBV1_LBV_BUFFER_URGENCY_CTRL                                          \
  0x9856
#define mmLBV_BUFFER_URGENCY_STATUS                                             \
  0x4657
#define mmLBV0_LBV_BUFFER_URGENCY_STATUS                                        \
  0x4657
#define mmLBV1_LBV_BUFFER_URGENCY_STATUS                                        \
  0x9857
#define mmLBV_BUFFER_STATUS                                                     \
  0x4658
#define mmLBV0_LBV_BUFFER_STATUS                                                \
  0x4658
#define mmLBV1_LBV_BUFFER_STATUS                                                \
  0x9858
#define mmLBV_NO_OUTSTANDING_REQ_STATUS                                         \
  0x4659
#define mmLBV0_LBV_NO_OUTSTANDING_REQ_STATUS                                    \
  0x4659
#define mmLBV1_LBV_NO_OUTSTANDING_REQ_STATUS                                    \
  0x9859
#define mmLBV_DEBUG                                                             \
  0x465a
#define mmLBV0_LBV_DEBUG                                                        \
  0x465a
#define mmLBV1_LBV_DEBUG                                                        \
  0x985a
#define mmLBV_DEBUG2                                                            \
  0x465b
#define mmLBV0_LBV_DEBUG2                                                       \
  0x465b
#define mmLBV1_LBV_DEBUG2                                                       \
  0x985b
#define mmLBV_DEBUG3                                                            \
  0x465c
#define mmLBV0_LBV_DEBUG3                                                       \
  0x465c
#define mmLBV1_LBV_DEBUG3                                                       \
  0x985c
#define mmLBV_TEST_DEBUG_INDEX                                                  \
  0x4666
#define mmLBV0_LBV_TEST_DEBUG_INDEX                                             \
  0x4666
#define mmLBV1_LBV_TEST_DEBUG_INDEX                                             \
  0x9866
#define mmLBV_TEST_DEBUG_DATA                                                   \
  0x4667
#define mmLBV0_LBV_TEST_DEBUG_DATA                                              \
  0x4667
#define mmLBV1_LBV_TEST_DEBUG_DATA                                              \
  0x9867
#define mmMVP_CONTROL1                                                          \
  0x2ac
#define mmMVP_CONTROL2                                                          \
  0x2ad
#define mmMVP_FIFO_CONTROL                                                      \
  0x2ae
#define mmMVP_FIFO_STATUS                                                       \
  0x2af
#define mmMVP_SLAVE_STATUS                                                      \
  0x2b0
#define mmMVP_INBAND_CNTL_CAP                                                   \
  0x2b1
#define mmMVP_BLACK_KEYER                                                       \
  0x2b2
#define mmMVP_CRC_CNTL                                                          \
  0x2b3
#define mmMVP_CRC_RESULT_BLUE_GREEN                                             \
  0x2b4
#define mmMVP_CRC_RESULT_RED                                                    \
  0x2b5
#define mmMVP_CONTROL3                                                          \
  0x2b6
#define mmMVP_RECEIVE_CNT_CNTL1                                                 \
  0x2b7
#define mmMVP_RECEIVE_CNT_CNTL2                                                 \
  0x2b8
#define mmMVP_DEBUG                                                             \
  0x2bb
#define mmMVP_TEST_DEBUG_INDEX                                                  \
  0x2b9
#define mmMVP_TEST_DEBUG_DATA                                                   \
  0x2ba
#define ixMVP_DEBUG_12                                                          \
  0xc
#define ixMVP_DEBUG_13                                                          \
  0xd
#define ixMVP_DEBUG_14                                                          \
  0xe
#define ixMVP_DEBUG_15                                                          \
  0xf
#define ixMVP_DEBUG_16                                                          \
  0x10
#define ixMVP_DEBUG_17                                                          \
  0x11
#define mmSCL_COEF_RAM_SELECT                                                   \
  0x1b40
#define mmSCL0_SCL_COEF_RAM_SELECT                                              \
  0x1b40
#define mmSCL1_SCL_COEF_RAM_SELECT                                              \
  0x1d40
#define mmSCL2_SCL_COEF_RAM_SELECT                                              \
  0x1f40
#define mmSCL3_SCL_COEF_RAM_SELECT                                              \
  0x4140
#define mmSCL4_SCL_COEF_RAM_SELECT                                              \
  0x4340
#define mmSCL5_SCL_COEF_RAM_SELECT                                              \
  0x4540
#define mmSCL_COEF_RAM_TAP_DATA                                                 \
  0x1b41
#define mmSCL0_SCL_COEF_RAM_TAP_DATA                                            \
  0x1b41
#define mmSCL1_SCL_COEF_RAM_TAP_DATA                                            \
  0x1d41
#define mmSCL2_SCL_COEF_RAM_TAP_DATA                                            \
  0x1f41
#define mmSCL3_SCL_COEF_RAM_TAP_DATA                                            \
  0x4141
#define mmSCL4_SCL_COEF_RAM_TAP_DATA                                            \
  0x4341
#define mmSCL5_SCL_COEF_RAM_TAP_DATA                                            \
  0x4541
#define mmSCL_MODE                                                              \
  0x1b42
#define mmSCL0_SCL_MODE                                                         \
  0x1b42
#define mmSCL1_SCL_MODE                                                         \
  0x1d42
#define mmSCL2_SCL_MODE                                                         \
  0x1f42
#define mmSCL3_SCL_MODE                                                         \
  0x4142
#define mmSCL4_SCL_MODE                                                         \
  0x4342
#define mmSCL5_SCL_MODE                                                         \
  0x4542
#define mmSCL_TAP_CONTROL                                                       \
  0x1b43
#define mmSCL0_SCL_TAP_CONTROL                                                  \
  0x1b43
#define mmSCL1_SCL_TAP_CONTROL                                                  \
  0x1d43
#define mmSCL2_SCL_TAP_CONTROL                                                  \
  0x1f43
#define mmSCL3_SCL_TAP_CONTROL                                                  \
  0x4143
#define mmSCL4_SCL_TAP_CONTROL                                                  \
  0x4343
#define mmSCL5_SCL_TAP_CONTROL                                                  \
  0x4543
#define mmSCL_CONTROL                                                           \
  0x1b44
#define mmSCL0_SCL_CONTROL                                                      \
  0x1b44
#define mmSCL1_SCL_CONTROL                                                      \
  0x1d44
#define mmSCL2_SCL_CONTROL                                                      \
  0x1f44
#define mmSCL3_SCL_CONTROL                                                      \
  0x4144
#define mmSCL4_SCL_CONTROL                                                      \
  0x4344
#define mmSCL5_SCL_CONTROL                                                      \
  0x4544
#define mmSCL_BYPASS_CONTROL                                                    \
  0x1b45
#define mmSCL0_SCL_BYPASS_CONTROL                                               \
  0x1b45
#define mmSCL1_SCL_BYPASS_CONTROL                                               \
  0x1d45
#define mmSCL2_SCL_BYPASS_CONTROL                                               \
  0x1f45
#define mmSCL3_SCL_BYPASS_CONTROL                                               \
  0x4145
#define mmSCL4_SCL_BYPASS_CONTROL                                               \
  0x4345
#define mmSCL5_SCL_BYPASS_CONTROL                                               \
  0x4545
#define mmSCL_MANUAL_REPLICATE_CONTROL                                          \
  0x1b46
#define mmSCL0_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x1b46
#define mmSCL1_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x1d46
#define mmSCL2_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x1f46
#define mmSCL3_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x4146
#define mmSCL4_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x4346
#define mmSCL5_SCL_MANUAL_REPLICATE_CONTROL                                     \
  0x4546
#define mmSCL_AUTOMATIC_MODE_CONTROL                                            \
  0x1b47
#define mmSCL0_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x1b47
#define mmSCL1_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x1d47
#define mmSCL2_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x1f47
#define mmSCL3_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x4147
#define mmSCL4_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x4347
#define mmSCL5_SCL_AUTOMATIC_MODE_CONTROL                                       \
  0x4547
#define mmSCL_HORZ_FILTER_CONTROL                                               \
  0x1b48
#define mmSCL0_SCL_HORZ_FILTER_CONTROL                                          \
  0x1b48
#define mmSCL1_SCL_HORZ_FILTER_CONTROL                                          \
  0x1d48
#define mmSCL2_SCL_HORZ_FILTER_CONTROL                                          \
  0x1f48
#define mmSCL3_SCL_HORZ_FILTER_CONTROL                                          \
  0x4148
#define mmSCL4_SCL_HORZ_FILTER_CONTROL                                          \
  0x4348
#define mmSCL5_SCL_HORZ_FILTER_CONTROL                                          \
  0x4548
#define mmSCL_HORZ_FILTER_SCALE_RATIO                                           \
  0x1b49
#define mmSCL0_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x1b49
#define mmSCL1_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x1d49
#define mmSCL2_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x1f49
#define mmSCL3_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x4149
#define mmSCL4_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x4349
#define mmSCL5_SCL_HORZ_FILTER_SCALE_RATIO                                      \
  0x4549
#define mmSCL_HORZ_FILTER_INIT                                                  \
  0x1b4a
#define mmSCL0_SCL_HORZ_FILTER_INIT                                             \
  0x1b4a
#define mmSCL1_SCL_HORZ_FILTER_INIT                                             \
  0x1d4a
#define mmSCL2_SCL_HORZ_FILTER_INIT                                             \
  0x1f4a
#define mmSCL3_SCL_HORZ_FILTER_INIT                                             \
  0x414a
#define mmSCL4_SCL_HORZ_FILTER_INIT                                             \
  0x434a
#define mmSCL5_SCL_HORZ_FILTER_INIT                                             \
  0x454a
#define mmSCL_VERT_FILTER_CONTROL                                               \
  0x1b4b
#define mmSCL0_SCL_VERT_FILTER_CONTROL                                          \
  0x1b4b
#define mmSCL1_SCL_VERT_FILTER_CONTROL                                          \
  0x1d4b
#define mmSCL2_SCL_VERT_FILTER_CONTROL                                          \
  0x1f4b
#define mmSCL3_SCL_VERT_FILTER_CONTROL                                          \
  0x414b
#define mmSCL4_SCL_VERT_FILTER_CONTROL                                          \
  0x434b
#define mmSCL5_SCL_VERT_FILTER_CONTROL                                          \
  0x454b
#define mmSCL_VERT_FILTER_SCALE_RATIO                                           \
  0x1b4c
#define mmSCL0_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x1b4c
#define mmSCL1_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x1d4c
#define mmSCL2_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x1f4c
#define mmSCL3_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x414c
#define mmSCL4_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x434c
#define mmSCL5_SCL_VERT_FILTER_SCALE_RATIO                                      \
  0x454c
#define mmSCL_VERT_FILTER_INIT                                                  \
  0x1b4d
#define mmSCL0_SCL_VERT_FILTER_INIT                                             \
  0x1b4d
#define mmSCL1_SCL_VERT_FILTER_INIT                                             \
  0x1d4d
#define mmSCL2_SCL_VERT_FILTER_INIT                                             \
  0x1f4d
#define mmSCL3_SCL_VERT_FILTER_INIT                                             \
  0x414d
#define mmSCL4_SCL_VERT_FILTER_INIT                                             \
  0x434d
#define mmSCL5_SCL_VERT_FILTER_INIT                                             \
  0x454d
#define mmSCL_VERT_FILTER_INIT_BOT                                              \
  0x1b4e
#define mmSCL0_SCL_VERT_FILTER_INIT_BOT                                         \
  0x1b4e
#define mmSCL1_SCL_VERT_FILTER_INIT_BOT                                         \
  0x1d4e
#define mmSCL2_SCL_VERT_FILTER_INIT_BOT                                         \
  0x1f4e
#define mmSCL3_SCL_VERT_FILTER_INIT_BOT                                         \
  0x414e
#define mmSCL4_SCL_VERT_FILTER_INIT_BOT                                         \
  0x434e
#define mmSCL5_SCL_VERT_FILTER_INIT_BOT                                         \
  0x454e
#define mmSCL_ROUND_OFFSET                                                      \
  0x1b4f
#define mmSCL0_SCL_ROUND_OFFSET                                                 \
  0x1b4f
#define mmSCL1_SCL_ROUND_OFFSET                                                 \
  0x1d4f
#define mmSCL2_SCL_ROUND_OFFSET                                                 \
  0x1f4f
#define mmSCL3_SCL_ROUND_OFFSET                                                 \
  0x414f
#define mmSCL4_SCL_ROUND_OFFSET                                                 \
  0x434f
#define mmSCL5_SCL_ROUND_OFFSET                                                 \
  0x454f
#define mmSCL_UPDATE                                                            \
  0x1b51
#define mmSCL0_SCL_UPDATE                                                       \
  0x1b51
#define mmSCL1_SCL_UPDATE                                                       \
  0x1d51
#define mmSCL2_SCL_UPDATE                                                       \
  0x1f51
#define mmSCL3_SCL_UPDATE                                                       \
  0x4151
#define mmSCL4_SCL_UPDATE                                                       \
  0x4351
#define mmSCL5_SCL_UPDATE                                                       \
  0x4551
#define mmSCL_F_SHARP_CONTROL                                                   \
  0x1b53
#define mmSCL0_SCL_F_SHARP_CONTROL                                              \
  0x1b53
#define mmSCL1_SCL_F_SHARP_CONTROL                                              \
  0x1d53
#define mmSCL2_SCL_F_SHARP_CONTROL                                              \
  0x1f53
#define mmSCL3_SCL_F_SHARP_CONTROL                                              \
  0x4153
#define mmSCL4_SCL_F_SHARP_CONTROL                                              \
  0x4353
#define mmSCL5_SCL_F_SHARP_CONTROL                                              \
  0x4553
#define mmSCL_ALU_CONTROL                                                       \
  0x1b54
#define mmSCL0_SCL_ALU_CONTROL                                                  \
  0x1b54
#define mmSCL1_SCL_ALU_CONTROL                                                  \
  0x1d54
#define mmSCL2_SCL_ALU_CONTROL                                                  \
  0x1f54
#define mmSCL3_SCL_ALU_CONTROL                                                  \
  0x4154
#define mmSCL4_SCL_ALU_CONTROL                                                  \
  0x4354
#define mmSCL5_SCL_ALU_CONTROL                                                  \
  0x4554
#define mmSCL_COEF_RAM_CONFLICT_STATUS                                          \
  0x1b55
#define mmSCL0_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x1b55
#define mmSCL1_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x1d55
#define mmSCL2_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x1f55
#define mmSCL3_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x4155
#define mmSCL4_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x4355
#define mmSCL5_SCL_COEF_RAM_CONFLICT_STATUS                                     \
  0x4555
#define mmVIEWPORT_START_SECONDARY                                              \
  0x1b5b
#define mmSCL0_VIEWPORT_START_SECONDARY                                         \
  0x1b5b
#define mmSCL1_VIEWPORT_START_SECONDARY                                         \
  0x1d5b
#define mmSCL2_VIEWPORT_START_SECONDARY                                         \
  0x1f5b
#define mmSCL3_VIEWPORT_START_SECONDARY                                         \
  0x415b
#define mmSCL4_VIEWPORT_START_SECONDARY                                         \
  0x435b
#define mmSCL5_VIEWPORT_START_SECONDARY                                         \
  0x455b
#define mmVIEWPORT_START                                                        \
  0x1b5c
#define mmSCL0_VIEWPORT_START                                                   \
  0x1b5c
#define mmSCL1_VIEWPORT_START                                                   \
  0x1d5c
#define mmSCL2_VIEWPORT_START                                                   \
  0x1f5c
#define mmSCL3_VIEWPORT_START                                                   \
  0x415c
#define mmSCL4_VIEWPORT_START                                                   \
  0x435c
#define mmSCL5_VIEWPORT_START                                                   \
  0x455c
#define mmVIEWPORT_SIZE                                                         \
  0x1b5d
#define mmSCL0_VIEWPORT_SIZE                                                    \
  0x1b5d
#define mmSCL1_VIEWPORT_SIZE                                                    \
  0x1d5d
#define mmSCL2_VIEWPORT_SIZE                                                    \
  0x1f5d
#define mmSCL3_VIEWPORT_SIZE                                                    \
  0x415d
#define mmSCL4_VIEWPORT_SIZE                                                    \
  0x435d
#define mmSCL5_VIEWPORT_SIZE                                                    \
  0x455d
#define mmEXT_OVERSCAN_LEFT_RIGHT                                               \
  0x1b5e
#define mmSCL0_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x1b5e
#define mmSCL1_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x1d5e
#define mmSCL2_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x1f5e
#define mmSCL3_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x415e
#define mmSCL4_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x435e
#define mmSCL5_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x455e
#define mmEXT_OVERSCAN_TOP_BOTTOM                                               \
  0x1b5f
#define mmSCL0_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x1b5f
#define mmSCL1_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x1d5f
#define mmSCL2_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x1f5f
#define mmSCL3_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x415f
#define mmSCL4_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x435f
#define mmSCL5_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x455f
#define mmSCL_MODE_CHANGE_DET1                                                  \
  0x1b60
#define mmSCL0_SCL_MODE_CHANGE_DET1                                             \
  0x1b60
#define mmSCL1_SCL_MODE_CHANGE_DET1                                             \
  0x1d60
#define mmSCL2_SCL_MODE_CHANGE_DET1                                             \
  0x1f60
#define mmSCL3_SCL_MODE_CHANGE_DET1                                             \
  0x4160
#define mmSCL4_SCL_MODE_CHANGE_DET1                                             \
  0x4360
#define mmSCL5_SCL_MODE_CHANGE_DET1                                             \
  0x4560
#define mmSCL_MODE_CHANGE_DET2                                                  \
  0x1b61
#define mmSCL0_SCL_MODE_CHANGE_DET2                                             \
  0x1b61
#define mmSCL1_SCL_MODE_CHANGE_DET2                                             \
  0x1d61
#define mmSCL2_SCL_MODE_CHANGE_DET2                                             \
  0x1f61
#define mmSCL3_SCL_MODE_CHANGE_DET2                                             \
  0x4161
#define mmSCL4_SCL_MODE_CHANGE_DET2                                             \
  0x4361
#define mmSCL5_SCL_MODE_CHANGE_DET2                                             \
  0x4561
#define mmSCL_MODE_CHANGE_DET3                                                  \
  0x1b62
#define mmSCL0_SCL_MODE_CHANGE_DET3                                             \
  0x1b62
#define mmSCL1_SCL_MODE_CHANGE_DET3                                             \
  0x1d62
#define mmSCL2_SCL_MODE_CHANGE_DET3                                             \
  0x1f62
#define mmSCL3_SCL_MODE_CHANGE_DET3                                             \
  0x4162
#define mmSCL4_SCL_MODE_CHANGE_DET3                                             \
  0x4362
#define mmSCL5_SCL_MODE_CHANGE_DET3                                             \
  0x4562
#define mmSCL_MODE_CHANGE_MASK                                                  \
  0x1b63
#define mmSCL0_SCL_MODE_CHANGE_MASK                                             \
  0x1b63
#define mmSCL1_SCL_MODE_CHANGE_MASK                                             \
  0x1d63
#define mmSCL2_SCL_MODE_CHANGE_MASK                                             \
  0x1f63
#define mmSCL3_SCL_MODE_CHANGE_MASK                                             \
  0x4163
#define mmSCL4_SCL_MODE_CHANGE_MASK                                             \
  0x4363
#define mmSCL5_SCL_MODE_CHANGE_MASK                                             \
  0x4563
#define mmSCL_DEBUG2                                                            \
  0x1b69
#define mmSCL0_SCL_DEBUG2                                                       \
  0x1b69
#define mmSCL1_SCL_DEBUG2                                                       \
  0x1d69
#define mmSCL2_SCL_DEBUG2                                                       \
  0x1f69
#define mmSCL3_SCL_DEBUG2                                                       \
  0x4169
#define mmSCL4_SCL_DEBUG2                                                       \
  0x4369
#define mmSCL5_SCL_DEBUG2                                                       \
  0x4569
#define mmSCL_DEBUG                                                             \
  0x1b6a
#define mmSCL0_SCL_DEBUG                                                        \
  0x1b6a
#define mmSCL1_SCL_DEBUG                                                        \
  0x1d6a
#define mmSCL2_SCL_DEBUG                                                        \
  0x1f6a
#define mmSCL3_SCL_DEBUG                                                        \
  0x416a
#define mmSCL4_SCL_DEBUG                                                        \
  0x436a
#define mmSCL5_SCL_DEBUG                                                        \
  0x456a
#define mmSCL_TEST_DEBUG_INDEX                                                  \
  0x1b6b
#define mmSCL0_SCL_TEST_DEBUG_INDEX                                             \
  0x1b6b
#define mmSCL1_SCL_TEST_DEBUG_INDEX                                             \
  0x1d6b
#define mmSCL2_SCL_TEST_DEBUG_INDEX                                             \
  0x1f6b
#define mmSCL3_SCL_TEST_DEBUG_INDEX                                             \
  0x416b
#define mmSCL4_SCL_TEST_DEBUG_INDEX                                             \
  0x436b
#define mmSCL5_SCL_TEST_DEBUG_INDEX                                             \
  0x456b
#define mmSCL_TEST_DEBUG_DATA                                                   \
  0x1b6c
#define mmSCL0_SCL_TEST_DEBUG_DATA                                              \
  0x1b6c
#define mmSCL1_SCL_TEST_DEBUG_DATA                                              \
  0x1d6c
#define mmSCL2_SCL_TEST_DEBUG_DATA                                              \
  0x1f6c
#define mmSCL3_SCL_TEST_DEBUG_DATA                                              \
  0x416c
#define mmSCL4_SCL_TEST_DEBUG_DATA                                              \
  0x436c
#define mmSCL5_SCL_TEST_DEBUG_DATA                                              \
  0x456c
#define mmSCLV_COEF_RAM_SELECT                                                  \
  0x4670
#define mmSCLV0_SCLV_COEF_RAM_SELECT                                            \
  0x4670
#define mmSCLV1_SCLV_COEF_RAM_SELECT                                            \
  0x9870
#define mmSCLV_COEF_RAM_TAP_DATA                                                \
  0x4671
#define mmSCLV0_SCLV_COEF_RAM_TAP_DATA                                          \
  0x4671
#define mmSCLV1_SCLV_COEF_RAM_TAP_DATA                                          \
  0x9871
#define mmSCLV_MODE                                                             \
  0x4672
#define mmSCLV0_SCLV_MODE                                                       \
  0x4672
#define mmSCLV1_SCLV_MODE                                                       \
  0x9872
#define mmSCLV_TAP_CONTROL                                                      \
  0x4673
#define mmSCLV0_SCLV_TAP_CONTROL                                                \
  0x4673
#define mmSCLV1_SCLV_TAP_CONTROL                                                \
  0x9873
#define mmSCLV_CONTROL                                                          \
  0x4674
#define mmSCLV0_SCLV_CONTROL                                                    \
  0x4674
#define mmSCLV1_SCLV_CONTROL                                                    \
  0x9874
#define mmSCLV_MANUAL_REPLICATE_CONTROL                                         \
  0x4675
#define mmSCLV0_SCLV_MANUAL_REPLICATE_CONTROL                                   \
  0x4675
#define mmSCLV1_SCLV_MANUAL_REPLICATE_CONTROL                                   \
  0x9875
#define mmSCLV_AUTOMATIC_MODE_CONTROL                                           \
  0x4676
#define mmSCLV0_SCLV_AUTOMATIC_MODE_CONTROL                                     \
  0x4676
#define mmSCLV1_SCLV_AUTOMATIC_MODE_CONTROL                                     \
  0x9876
#define mmSCLV_HORZ_FILTER_CONTROL                                              \
  0x4677
#define mmSCLV0_SCLV_HORZ_FILTER_CONTROL                                        \
  0x4677
#define mmSCLV1_SCLV_HORZ_FILTER_CONTROL                                        \
  0x9877
#define mmSCLV_HORZ_FILTER_SCALE_RATIO                                          \
  0x4678
#define mmSCLV0_SCLV_HORZ_FILTER_SCALE_RATIO                                    \
  0x4678
#define mmSCLV1_SCLV_HORZ_FILTER_SCALE_RATIO                                    \
  0x9878
#define mmSCLV_HORZ_FILTER_INIT                                                 \
  0x4679
#define mmSCLV0_SCLV_HORZ_FILTER_INIT                                           \
  0x4679
#define mmSCLV1_SCLV_HORZ_FILTER_INIT                                           \
  0x9879
#define mmSCLV_HORZ_FILTER_SCALE_RATIO_C                                        \
  0x467a
#define mmSCLV0_SCLV_HORZ_FILTER_SCALE_RATIO_C                                  \
  0x467a
#define mmSCLV1_SCLV_HORZ_FILTER_SCALE_RATIO_C                                  \
  0x987a
#define mmSCLV_HORZ_FILTER_INIT_C                                               \
  0x467b
#define mmSCLV0_SCLV_HORZ_FILTER_INIT_C                                         \
  0x467b
#define mmSCLV1_SCLV_HORZ_FILTER_INIT_C                                         \
  0x987b
#define mmSCLV_VERT_FILTER_CONTROL                                              \
  0x467c
#define mmSCLV0_SCLV_VERT_FILTER_CONTROL                                        \
  0x467c
#define mmSCLV1_SCLV_VERT_FILTER_CONTROL                                        \
  0x987c
#define mmSCLV_VERT_FILTER_SCALE_RATIO                                          \
  0x467d
#define mmSCLV0_SCLV_VERT_FILTER_SCALE_RATIO                                    \
  0x467d
#define mmSCLV1_SCLV_VERT_FILTER_SCALE_RATIO                                    \
  0x987d
#define mmSCLV_VERT_FILTER_INIT                                                 \
  0x467e
#define mmSCLV0_SCLV_VERT_FILTER_INIT                                           \
  0x467e
#define mmSCLV1_SCLV_VERT_FILTER_INIT                                           \
  0x987e
#define mmSCLV_VERT_FILTER_INIT_BOT                                             \
  0x467f
#define mmSCLV0_SCLV_VERT_FILTER_INIT_BOT                                       \
  0x467f
#define mmSCLV1_SCLV_VERT_FILTER_INIT_BOT                                       \
  0x987f
#define mmSCLV_VERT_FILTER_SCALE_RATIO_C                                        \
  0x4680
#define mmSCLV0_SCLV_VERT_FILTER_SCALE_RATIO_C                                  \
  0x4680
#define mmSCLV1_SCLV_VERT_FILTER_SCALE_RATIO_C                                  \
  0x9880
#define mmSCLV_VERT_FILTER_INIT_C                                               \
  0x4681
#define mmSCLV0_SCLV_VERT_FILTER_INIT_C                                         \
  0x4681
#define mmSCLV1_SCLV_VERT_FILTER_INIT_C                                         \
  0x9881
#define mmSCLV_VERT_FILTER_INIT_BOT_C                                           \
  0x4682
#define mmSCLV0_SCLV_VERT_FILTER_INIT_BOT_C                                     \
  0x4682
#define mmSCLV1_SCLV_VERT_FILTER_INIT_BOT_C                                     \
  0x9882
#define mmSCLV_ROUND_OFFSET                                                     \
  0x4683
#define mmSCLV0_SCLV_ROUND_OFFSET                                               \
  0x4683
#define mmSCLV1_SCLV_ROUND_OFFSET                                               \
  0x9883
#define mmSCLV_UPDATE                                                           \
  0x4684
#define mmSCLV0_SCLV_UPDATE                                                     \
  0x4684
#define mmSCLV1_SCLV_UPDATE                                                     \
  0x9884
#define mmSCLV_ALU_CONTROL                                                      \
  0x4685
#define mmSCLV0_SCLV_ALU_CONTROL                                                \
  0x4685
#define mmSCLV1_SCLV_ALU_CONTROL                                                \
  0x9885
#define mmSCLV_VIEWPORT_START                                                   \
  0x4686
#define mmSCLV0_SCLV_VIEWPORT_START                                             \
  0x4686
#define mmSCLV1_SCLV_VIEWPORT_START                                             \
  0x9886
#define mmSCLV_VIEWPORT_START_SECONDARY                                         \
  0x4687
#define mmSCLV0_SCLV_VIEWPORT_START_SECONDARY                                   \
  0x4687
#define mmSCLV1_SCLV_VIEWPORT_START_SECONDARY                                   \
  0x9887
#define mmSCLV_VIEWPORT_SIZE                                                    \
  0x4688
#define mmSCLV0_SCLV_VIEWPORT_SIZE                                              \
  0x4688
#define mmSCLV1_SCLV_VIEWPORT_SIZE                                              \
  0x9888
#define mmSCLV_VIEWPORT_START_C                                                 \
  0x4689
#define mmSCLV0_SCLV_VIEWPORT_START_C                                           \
  0x4689
#define mmSCLV1_SCLV_VIEWPORT_START_C                                           \
  0x9889
#define mmSCLV_VIEWPORT_START_SECONDARY_C                                       \
  0x468a
#define mmSCLV0_SCLV_VIEWPORT_START_SECONDARY_C                                 \
  0x468a
#define mmSCLV1_SCLV_VIEWPORT_START_SECONDARY_C                                 \
  0x988a
#define mmSCLV_VIEWPORT_SIZE_C                                                  \
  0x468b
#define mmSCLV0_SCLV_VIEWPORT_SIZE_C                                            \
  0x468b
#define mmSCLV1_SCLV_VIEWPORT_SIZE_C                                            \
  0x988b
#define mmSCLV_EXT_OVERSCAN_LEFT_RIGHT                                          \
  0x468c
#define mmSCLV0_SCLV_EXT_OVERSCAN_LEFT_RIGHT                                    \
  0x468c
#define mmSCLV1_SCLV_EXT_OVERSCAN_LEFT_RIGHT                                    \
  0x988c
#define mmSCLV_EXT_OVERSCAN_TOP_BOTTOM                                          \
  0x468d
#define mmSCLV0_SCLV_EXT_OVERSCAN_TOP_BOTTOM                                    \
  0x468d
#define mmSCLV1_SCLV_EXT_OVERSCAN_TOP_BOTTOM                                    \
  0x988d
#define mmSCLV_MODE_CHANGE_DET1                                                 \
  0x468e
#define mmSCLV0_SCLV_MODE_CHANGE_DET1                                           \
  0x468e
#define mmSCLV1_SCLV_MODE_CHANGE_DET1                                           \
  0x988e
#define mmSCLV_MODE_CHANGE_DET2                                                 \
  0x468f
#define mmSCLV0_SCLV_MODE_CHANGE_DET2                                           \
  0x468f
#define mmSCLV1_SCLV_MODE_CHANGE_DET2                                           \
  0x988f
#define mmSCLV_MODE_CHANGE_DET3                                                 \
  0x4690
#define mmSCLV0_SCLV_MODE_CHANGE_DET3                                           \
  0x4690
#define mmSCLV1_SCLV_MODE_CHANGE_DET3                                           \
  0x9890
#define mmSCLV_MODE_CHANGE_MASK                                                 \
  0x4691
#define mmSCLV0_SCLV_MODE_CHANGE_MASK                                           \
  0x4691
#define mmSCLV1_SCLV_MODE_CHANGE_MASK                                           \
  0x9891
#define mmSCLV_HORZ_FILTER_INIT_BOT                                             \
  0x4692
#define mmSCLV0_SCLV_HORZ_FILTER_INIT_BOT                                       \
  0x4692
#define mmSCLV1_SCLV_HORZ_FILTER_INIT_BOT                                       \
  0x9892
#define mmSCLV_HORZ_FILTER_INIT_BOT_C                                           \
  0x4693
#define mmSCLV0_SCLV_HORZ_FILTER_INIT_BOT_C                                     \
  0x4693
#define mmSCLV1_SCLV_HORZ_FILTER_INIT_BOT_C                                     \
  0x9893
#define mmSCLV_DEBUG2                                                           \
  0x4694
#define mmSCLV0_SCLV_DEBUG2                                                     \
  0x4694
#define mmSCLV1_SCLV_DEBUG2                                                     \
  0x9894
#define mmSCLV_DEBUG                                                            \
  0x4695
#define mmSCLV0_SCLV_DEBUG                                                      \
  0x4695
#define mmSCLV1_SCLV_DEBUG                                                      \
  0x9895
#define mmSCLV_TEST_DEBUG_INDEX                                                 \
  0x4696
#define mmSCLV0_SCLV_TEST_DEBUG_INDEX                                           \
  0x4696
#define mmSCLV1_SCLV_TEST_DEBUG_INDEX                                           \
  0x9896
#define mmSCLV_TEST_DEBUG_DATA                                                  \
  0x4697
#define mmSCLV0_SCLV_TEST_DEBUG_DATA                                            \
  0x4697
#define mmSCLV1_SCLV_TEST_DEBUG_DATA                                            \
  0x9897
#define mmCOL_MAN_UPDATE                                                        \
  0x46a4
#define mmCOL_MAN0_COL_MAN_UPDATE                                               \
  0x46a4
#define mmCOL_MAN1_COL_MAN_UPDATE                                               \
  0x98a4
#define mmCOL_MAN_INPUT_CSC_CONTROL                                             \
  0x46a5
#define mmCOL_MAN0_COL_MAN_INPUT_CSC_CONTROL                                    \
  0x46a5
#define mmCOL_MAN1_COL_MAN_INPUT_CSC_CONTROL                                    \
  0x98a5
#define mmINPUT_CSC_C11_C12_A                                                   \
  0x46a6
#define mmCOL_MAN0_INPUT_CSC_C11_C12_A                                          \
  0x46a6
#define mmCOL_MAN1_INPUT_CSC_C11_C12_A                                          \
  0x98a6
#define mmINPUT_CSC_C13_C14_A                                                   \
  0x46a7
#define mmCOL_MAN0_INPUT_CSC_C13_C14_A                                          \
  0x46a7
#define mmCOL_MAN1_INPUT_CSC_C13_C14_A                                          \
  0x98a7
#define mmINPUT_CSC_C21_C22_A                                                   \
  0x46a8
#define mmCOL_MAN0_INPUT_CSC_C21_C22_A                                          \
  0x46a8
#define mmCOL_MAN1_INPUT_CSC_C21_C22_A                                          \
  0x98a8
#define mmINPUT_CSC_C23_C24_A                                                   \
  0x46a9
#define mmCOL_MAN0_INPUT_CSC_C23_C24_A                                          \
  0x46a9
#define mmCOL_MAN1_INPUT_CSC_C23_C24_A                                          \
  0x98a9
#define mmINPUT_CSC_C31_C32_A                                                   \
  0x46aa
#define mmCOL_MAN0_INPUT_CSC_C31_C32_A                                          \
  0x46aa
#define mmCOL_MAN1_INPUT_CSC_C31_C32_A                                          \
  0x98aa
#define mmINPUT_CSC_C33_C34_A                                                   \
  0x46ab
#define mmCOL_MAN0_INPUT_CSC_C33_C34_A                                          \
  0x46ab
#define mmCOL_MAN1_INPUT_CSC_C33_C34_A                                          \
  0x98ab
#define mmINPUT_CSC_C11_C12_B                                                   \
  0x46ac
#define mmCOL_MAN0_INPUT_CSC_C11_C12_B                                          \
  0x46ac
#define mmCOL_MAN1_INPUT_CSC_C11_C12_B                                          \
  0x98ac
#define mmINPUT_CSC_C13_C14_B                                                   \
  0x46ad
#define mmCOL_MAN0_INPUT_CSC_C13_C14_B                                          \
  0x46ad
#define mmCOL_MAN1_INPUT_CSC_C13_C14_B                                          \
  0x98ad
#define mmINPUT_CSC_C21_C22_B                                                   \
  0x46ae
#define mmCOL_MAN0_INPUT_CSC_C21_C22_B                                          \
  0x46ae
#define mmCOL_MAN1_INPUT_CSC_C21_C22_B                                          \
  0x98ae
#define mmINPUT_CSC_C23_C24_B                                                   \
  0x46af
#define mmCOL_MAN0_INPUT_CSC_C23_C24_B                                          \
  0x46af
#define mmCOL_MAN1_INPUT_CSC_C23_C24_B                                          \
  0x98af
#define mmINPUT_CSC_C31_C32_B                                                   \
  0x46b0
#define mmCOL_MAN0_INPUT_CSC_C31_C32_B                                          \
  0x46b0
#define mmCOL_MAN1_INPUT_CSC_C31_C32_B                                          \
  0x98b0
#define mmINPUT_CSC_C33_C34_B                                                   \
  0x46b1
#define mmCOL_MAN0_INPUT_CSC_C33_C34_B                                          \
  0x46b1
#define mmCOL_MAN1_INPUT_CSC_C33_C34_B                                          \
  0x98b1
#define mmPRESCALE_CONTROL                                                      \
  0x46b2
#define mmCOL_MAN0_PRESCALE_CONTROL                                             \
  0x46b2
#define mmCOL_MAN1_PRESCALE_CONTROL                                             \
  0x98b2
#define mmPRESCALE_VALUES_R                                                     \
  0x46b3
#define mmCOL_MAN0_PRESCALE_VALUES_R                                            \
  0x46b3
#define mmCOL_MAN1_PRESCALE_VALUES_R                                            \
  0x98b3
#define mmPRESCALE_VALUES_G                                                     \
  0x46b4
#define mmCOL_MAN0_PRESCALE_VALUES_G                                            \
  0x46b4
#define mmCOL_MAN1_PRESCALE_VALUES_G                                            \
  0x98b4
#define mmPRESCALE_VALUES_B                                                     \
  0x46b5
#define mmCOL_MAN0_PRESCALE_VALUES_B                                            \
  0x46b5
#define mmCOL_MAN1_PRESCALE_VALUES_B                                            \
  0x98b5
#define mmCOL_MAN_OUTPUT_CSC_CONTROL                                            \
  0x46b6
#define mmCOL_MAN0_COL_MAN_OUTPUT_CSC_CONTROL                                   \
  0x46b6
#define mmCOL_MAN1_COL_MAN_OUTPUT_CSC_CONTROL                                   \
  0x98b6
#define mmOUTPUT_CSC_C11_C12_A                                                  \
  0x46b7
#define mmCOL_MAN0_OUTPUT_CSC_C11_C12_A                                         \
  0x46b7
#define mmCOL_MAN1_OUTPUT_CSC_C11_C12_A                                         \
  0x98b7
#define mmOUTPUT_CSC_C13_C14_A                                                  \
  0x46b8
#define mmCOL_MAN0_OUTPUT_CSC_C13_C14_A                                         \
  0x46b8
#define mmCOL_MAN1_OUTPUT_CSC_C13_C14_A                                         \
  0x98b8
#define mmOUTPUT_CSC_C21_C22_A                                                  \
  0x46b9
#define mmCOL_MAN0_OUTPUT_CSC_C21_C22_A                                         \
  0x46b9
#define mmCOL_MAN1_OUTPUT_CSC_C21_C22_A                                         \
  0x98b9
#define mmOUTPUT_CSC_C23_C24_A                                                  \
  0x46ba
#define mmCOL_MAN0_OUTPUT_CSC_C23_C24_A                                         \
  0x46ba
#define mmCOL_MAN1_OUTPUT_CSC_C23_C24_A                                         \
  0x98ba
#define mmOUTPUT_CSC_C31_C32_A                                                  \
  0x46bb
#define mmCOL_MAN0_OUTPUT_CSC_C31_C32_A                                         \
  0x46bb
#define mmCOL_MAN1_OUTPUT_CSC_C31_C32_A                                         \
  0x98bb
#define mmOUTPUT_CSC_C33_C34_A                                                  \
  0x46bc
#define mmCOL_MAN0_OUTPUT_CSC_C33_C34_A                                         \
  0x46bc
#define mmCOL_MAN1_OUTPUT_CSC_C33_C34_A                                         \
  0x98bc
#define mmOUTPUT_CSC_C11_C12_B                                                  \
  0x46bd
#define mmCOL_MAN0_OUTPUT_CSC_C11_C12_B                                         \
  0x46bd
#define mmCOL_MAN1_OUTPUT_CSC_C11_C12_B                                         \
  0x98bd
#define mmOUTPUT_CSC_C13_C14_B                                                  \
  0x46be
#define mmCOL_MAN0_OUTPUT_CSC_C13_C14_B                                         \
  0x46be
#define mmCOL_MAN1_OUTPUT_CSC_C13_C14_B                                         \
  0x98be
#define mmOUTPUT_CSC_C21_C22_B                                                  \
  0x46bf
#define mmCOL_MAN0_OUTPUT_CSC_C21_C22_B                                         \
  0x46bf
#define mmCOL_MAN1_OUTPUT_CSC_C21_C22_B                                         \
  0x98bf
#define mmOUTPUT_CSC_C23_C24_B                                                  \
  0x46c0
#define mmCOL_MAN0_OUTPUT_CSC_C23_C24_B                                         \
  0x46c0
#define mmCOL_MAN1_OUTPUT_CSC_C23_C24_B                                         \
  0x98c0
#define mmOUTPUT_CSC_C31_C32_B                                                  \
  0x46c1
#define mmCOL_MAN0_OUTPUT_CSC_C31_C32_B                                         \
  0x46c1
#define mmCOL_MAN1_OUTPUT_CSC_C31_C32_B                                         \
  0x98c1
#define mmOUTPUT_CSC_C33_C34_B                                                  \
  0x46c2
#define mmCOL_MAN0_OUTPUT_CSC_C33_C34_B                                         \
  0x46c2
#define mmCOL_MAN1_OUTPUT_CSC_C33_C34_B                                         \
  0x98c2
#define mmDENORM_CLAMP_CONTROL                                                  \
  0x46c3
#define mmCOL_MAN0_DENORM_CLAMP_CONTROL                                         \
  0x46c3
#define mmCOL_MAN1_DENORM_CLAMP_CONTROL                                         \
  0x98c3
#define mmDENORM_CLAMP_RANGE_R_CR                                               \
  0x46c4
#define mmCOL_MAN0_DENORM_CLAMP_RANGE_R_CR                                      \
  0x46c4
#define mmCOL_MAN1_DENORM_CLAMP_RANGE_R_CR                                      \
  0x98c4
#define mmDENORM_CLAMP_RANGE_G_Y                                                \
  0x46c5
#define mmCOL_MAN0_DENORM_CLAMP_RANGE_G_Y                                       \
  0x46c5
#define mmCOL_MAN1_DENORM_CLAMP_RANGE_G_Y                                       \
  0x98c5
#define mmDENORM_CLAMP_RANGE_B_CB                                               \
  0x46c6
#define mmCOL_MAN0_DENORM_CLAMP_RANGE_B_CB                                      \
  0x46c6
#define mmCOL_MAN1_DENORM_CLAMP_RANGE_B_CB                                      \
  0x98c6
#define mmCOL_MAN_FP_CONVERTED_FIELD                                            \
  0x46c7
#define mmCOL_MAN0_COL_MAN_FP_CONVERTED_FIELD                                   \
  0x46c7
#define mmCOL_MAN1_COL_MAN_FP_CONVERTED_FIELD                                   \
  0x98c7
#define mmGAMMA_CORR_CONTROL                                                    \
  0x46c8
#define mmCOL_MAN0_GAMMA_CORR_CONTROL                                           \
  0x46c8
#define mmCOL_MAN1_GAMMA_CORR_CONTROL                                           \
  0x98c8
#define mmGAMMA_CORR_LUT_INDEX                                                  \
  0x46c9
#define mmCOL_MAN0_GAMMA_CORR_LUT_INDEX                                         \
  0x46c9
#define mmCOL_MAN1_GAMMA_CORR_LUT_INDEX                                         \
  0x98c9
#define mmGAMMA_CORR_LUT_DATA                                                   \
  0x46ca
#define mmCOL_MAN0_GAMMA_CORR_LUT_DATA                                          \
  0x46ca
#define mmCOL_MAN1_GAMMA_CORR_LUT_DATA                                          \
  0x98ca
#define mmGAMMA_CORR_LUT_WRITE_EN_MASK                                          \
  0x46cb
#define mmCOL_MAN0_GAMMA_CORR_LUT_WRITE_EN_MASK                                 \
  0x46cb
#define mmCOL_MAN1_GAMMA_CORR_LUT_WRITE_EN_MASK                                 \
  0x98cb
#define mmGAMMA_CORR_CNTLA_START_CNTL                                           \
  0x46cc
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_START_CNTL                                  \
  0x46cc
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_START_CNTL                                  \
  0x98cc
#define mmGAMMA_CORR_CNTLA_SLOPE_CNTL                                           \
  0x46cd
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_SLOPE_CNTL                                  \
  0x46cd
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_SLOPE_CNTL                                  \
  0x98cd
#define mmGAMMA_CORR_CNTLA_END_CNTL1                                            \
  0x46ce
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_END_CNTL1                                   \
  0x46ce
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_END_CNTL1                                   \
  0x98ce
#define mmGAMMA_CORR_CNTLA_END_CNTL2                                            \
  0x46cf
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_END_CNTL2                                   \
  0x46cf
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_END_CNTL2                                   \
  0x98cf
#define mmGAMMA_CORR_CNTLA_REGION_0_1                                           \
  0x46d0
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_0_1                                  \
  0x46d0
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_0_1                                  \
  0x98d0
#define mmGAMMA_CORR_CNTLA_REGION_2_3                                           \
  0x46d1
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_2_3                                  \
  0x46d1
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_2_3                                  \
  0x98d1
#define mmGAMMA_CORR_CNTLA_REGION_4_5                                           \
  0x46d2
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_4_5                                  \
  0x46d2
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_4_5                                  \
  0x98d2
#define mmGAMMA_CORR_CNTLA_REGION_6_7                                           \
  0x46d3
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_6_7                                  \
  0x46d3
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_6_7                                  \
  0x98d3
#define mmGAMMA_CORR_CNTLA_REGION_8_9                                           \
  0x46d4
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_8_9                                  \
  0x46d4
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_8_9                                  \
  0x98d4
#define mmGAMMA_CORR_CNTLA_REGION_10_11                                         \
  0x46d5
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_10_11                                \
  0x46d5
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_10_11                                \
  0x98d5
#define mmGAMMA_CORR_CNTLA_REGION_12_13                                         \
  0x46d6
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_12_13                                \
  0x46d6
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_12_13                                \
  0x98d6
#define mmGAMMA_CORR_CNTLA_REGION_14_15                                         \
  0x46d7
#define mmCOL_MAN0_GAMMA_CORR_CNTLA_REGION_14_15                                \
  0x46d7
#define mmCOL_MAN1_GAMMA_CORR_CNTLA_REGION_14_15                                \
  0x98d7
#define mmGAMMA_CORR_CNTLB_START_CNTL                                           \
  0x46d8
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_START_CNTL                                  \
  0x46d8
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_START_CNTL                                  \
  0x98d8
#define mmGAMMA_CORR_CNTLB_SLOPE_CNTL                                           \
  0x46d9
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_SLOPE_CNTL                                  \
  0x46d9
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_SLOPE_CNTL                                  \
  0x98d9
#define mmGAMMA_CORR_CNTLB_END_CNTL1                                            \
  0x46da
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_END_CNTL1                                   \
  0x46da
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_END_CNTL1                                   \
  0x98da
#define mmGAMMA_CORR_CNTLB_END_CNTL2                                            \
  0x46db
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_END_CNTL2                                   \
  0x46db
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_END_CNTL2                                   \
  0x98db
#define mmGAMMA_CORR_CNTLB_REGION_0_1                                           \
  0x46dc
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_0_1                                  \
  0x46dc
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_0_1                                  \
  0x98dc
#define mmGAMMA_CORR_CNTLB_REGION_2_3                                           \
  0x46dd
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_2_3                                  \
  0x46dd
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_2_3                                  \
  0x98dd
#define mmGAMMA_CORR_CNTLB_REGION_4_5                                           \
  0x46de
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_4_5                                  \
  0x46de
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_4_5                                  \
  0x98de
#define mmGAMMA_CORR_CNTLB_REGION_6_7                                           \
  0x46df
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_6_7                                  \
  0x46df
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_6_7                                  \
  0x98df
#define mmGAMMA_CORR_CNTLB_REGION_8_9                                           \
  0x46e0
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_8_9                                  \
  0x46e0
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_8_9                                  \
  0x98e0
#define mmGAMMA_CORR_CNTLB_REGION_10_11                                         \
  0x46e1
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_10_11                                \
  0x46e1
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_10_11                                \
  0x98e1
#define mmGAMMA_CORR_CNTLB_REGION_12_13                                         \
  0x46e2
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_12_13                                \
  0x46e2
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_12_13                                \
  0x98e2
#define mmGAMMA_CORR_CNTLB_REGION_14_15                                         \
  0x46e3
#define mmCOL_MAN0_GAMMA_CORR_CNTLB_REGION_14_15                                \
  0x46e3
#define mmCOL_MAN1_GAMMA_CORR_CNTLB_REGION_14_15                                \
  0x98e3
#define mmPACK_FIFO_ERROR                                                       \
  0x46e4
#define mmCOL_MAN0_PACK_FIFO_ERROR                                              \
  0x46e4
#define mmCOL_MAN1_PACK_FIFO_ERROR                                              \
  0x98e4
#define mmOUTPUT_FIFO_ERROR                                                     \
  0x46e5
#define mmCOL_MAN0_OUTPUT_FIFO_ERROR                                            \
  0x46e5
#define mmCOL_MAN1_OUTPUT_FIFO_ERROR                                            \
  0x98e5
#define mmINPUT_GAMMA_LUT_AUTOFILL                                              \
  0x46e6
#define mmCOL_MAN0_INPUT_GAMMA_LUT_AUTOFILL                                     \
  0x46e6
#define mmCOL_MAN1_INPUT_GAMMA_LUT_AUTOFILL                                     \
  0x98e6
#define mmINPUT_GAMMA_LUT_RW_INDEX                                              \
  0x46e7
#define mmCOL_MAN0_INPUT_GAMMA_LUT_RW_INDEX                                     \
  0x46e7
#define mmCOL_MAN1_INPUT_GAMMA_LUT_RW_INDEX                                     \
  0x98e7
#define mmINPUT_GAMMA_LUT_SEQ_COLOR                                             \
  0x46e8
#define mmCOL_MAN0_INPUT_GAMMA_LUT_SEQ_COLOR                                    \
  0x46e8
#define mmCOL_MAN1_INPUT_GAMMA_LUT_SEQ_COLOR                                    \
  0x98e8
#define mmINPUT_GAMMA_LUT_PWL_DATA                                              \
  0x46e9
#define mmCOL_MAN0_INPUT_GAMMA_LUT_PWL_DATA                                     \
  0x46e9
#define mmCOL_MAN1_INPUT_GAMMA_LUT_PWL_DATA                                     \
  0x98e9
#define mmINPUT_GAMMA_LUT_30_COLOR                                              \
  0x46ea
#define mmCOL_MAN0_INPUT_GAMMA_LUT_30_COLOR                                     \
  0x46ea
#define mmCOL_MAN1_INPUT_GAMMA_LUT_30_COLOR                                     \
  0x98ea
#define mmCOL_MAN_INPUT_GAMMA_CONTROL1                                          \
  0x46eb
#define mmCOL_MAN0_COL_MAN_INPUT_GAMMA_CONTROL1                                 \
  0x46eb
#define mmCOL_MAN1_COL_MAN_INPUT_GAMMA_CONTROL1                                 \
  0x98eb
#define mmCOL_MAN_INPUT_GAMMA_CONTROL2                                          \
  0x46ec
#define mmCOL_MAN0_COL_MAN_INPUT_GAMMA_CONTROL2                                 \
  0x46ec
#define mmCOL_MAN1_COL_MAN_INPUT_GAMMA_CONTROL2                                 \
  0x98ec
#define mmINPUT_GAMMA_BW_OFFSETS_B                                              \
  0x46ed
#define mmCOL_MAN0_INPUT_GAMMA_BW_OFFSETS_B                                     \
  0x46ed
#define mmCOL_MAN1_INPUT_GAMMA_BW_OFFSETS_B                                     \
  0x98ed
#define mmINPUT_GAMMA_BW_OFFSETS_G                                              \
  0x46ee
#define mmCOL_MAN0_INPUT_GAMMA_BW_OFFSETS_G                                     \
  0x46ee
#define mmCOL_MAN1_INPUT_GAMMA_BW_OFFSETS_G                                     \
  0x98ee
#define mmINPUT_GAMMA_BW_OFFSETS_R                                              \
  0x46ef
#define mmCOL_MAN0_INPUT_GAMMA_BW_OFFSETS_R                                     \
  0x46ef
#define mmCOL_MAN1_INPUT_GAMMA_BW_OFFSETS_R                                     \
  0x98ef
#define mmCOL_MAN_DEBUG_CONTROL                                                 \
  0x46f0
#define mmCOL_MAN0_COL_MAN_DEBUG_CONTROL                                        \
  0x46f0
#define mmCOL_MAN1_COL_MAN_DEBUG_CONTROL                                        \
  0x98f0
#define mmCOL_MAN_TEST_DEBUG_INDEX                                              \
  0x46f1
#define mmCOL_MAN0_COL_MAN_TEST_DEBUG_INDEX                                     \
  0x46f1
#define mmCOL_MAN1_COL_MAN_TEST_DEBUG_INDEX                                     \
  0x98f1
#define mmCOL_MAN_TEST_DEBUG_DATA                                               \
  0x46f3
#define mmCOL_MAN0_COL_MAN_TEST_DEBUG_DATA                                      \
  0x46f3
#define mmCOL_MAN1_COL_MAN_TEST_DEBUG_DATA                                      \
  0x98f3
#define mmUNP_GRPH_ENABLE                                                       \
  0x4600
#define mmUNP0_UNP_GRPH_ENABLE                                                  \
  0x4600
#define mmUNP1_UNP_GRPH_ENABLE                                                  \
  0x9800
#define mmUNP_GRPH_CONTROL                                                      \
  0x4601
#define mmUNP0_UNP_GRPH_CONTROL                                                 \
  0x4601
#define mmUNP1_UNP_GRPH_CONTROL                                                 \
  0x9801
#define mmUNP_GRPH_CONTROL_C                                                    \
  0x4602
#define mmUNP0_UNP_GRPH_CONTROL_C                                               \
  0x4602
#define mmUNP1_UNP_GRPH_CONTROL_C                                               \
  0x9802
#define mmUNP_GRPH_CONTROL_EXP                                                  \
  0x4603
#define mmUNP0_UNP_GRPH_CONTROL_EXP                                             \
  0x4603
#define mmUNP1_UNP_GRPH_CONTROL_EXP                                             \
  0x9803
#define mmUNP_GRPH_SWAP_CNTL                                                    \
  0x4605
#define mmUNP0_UNP_GRPH_SWAP_CNTL                                               \
  0x4605
#define mmUNP1_UNP_GRPH_SWAP_CNTL                                               \
  0x9805
#define mmUNP_GRPH_PRIMARY_SURFACE_ADDRESS_L                                    \
  0x4606
#define mmUNP0_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_L                               \
  0x4606
#define mmUNP1_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_L                               \
  0x9806
#define mmUNP_GRPH_PRIMARY_SURFACE_ADDRESS_C                                    \
  0x4607
#define mmUNP0_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_C                               \
  0x4607
#define mmUNP1_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_C                               \
  0x9807
#define mmUNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_L                               \
  0x4608
#define mmUNP0_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_L                          \
  0x4608
#define mmUNP1_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_L                          \
  0x9808
#define mmUNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_C                               \
  0x4609
#define mmUNP0_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_C                          \
  0x4609
#define mmUNP1_UNP_GRPH_PRIMARY_SURFACE_ADDRESS_HIGH_C                          \
  0x9809
#define mmUNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_L                             \
  0x460a
#define mmUNP0_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_L                        \
  0x460a
#define mmUNP1_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_L                        \
  0x980a
#define mmUNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_C                             \
  0x460b
#define mmUNP0_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_C                        \
  0x460b
#define mmUNP1_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_C                        \
  0x980b
#define mmUNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                        \
  0x460c
#define mmUNP0_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                   \
  0x460c
#define mmUNP1_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                   \
  0x980c
#define mmUNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                        \
  0x460d
#define mmUNP0_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                   \
  0x460d
#define mmUNP1_UNP_GRPH_PRIMARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                   \
  0x980d
#define mmUNP_GRPH_SECONDARY_SURFACE_ADDRESS_L                                  \
  0x460e
#define mmUNP0_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_L                             \
  0x460e
#define mmUNP1_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_L                             \
  0x980e
#define mmUNP_GRPH_SECONDARY_SURFACE_ADDRESS_C                                  \
  0x460f
#define mmUNP0_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_C                             \
  0x460f
#define mmUNP1_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_C                             \
  0x980f
#define mmUNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_L                             \
  0x4610
#define mmUNP0_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_L                        \
  0x4610
#define mmUNP1_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_L                        \
  0x9810
#define mmUNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_C                             \
  0x4611
#define mmUNP0_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_C                        \
  0x4611
#define mmUNP1_UNP_GRPH_SECONDARY_SURFACE_ADDRESS_HIGH_C                        \
  0x9811
#define mmUNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_L                           \
  0x4612
#define mmUNP0_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_L                      \
  0x4612
#define mmUNP1_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_L                      \
  0x9812
#define mmUNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_C                           \
  0x4613
#define mmUNP0_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_C                      \
  0x4613
#define mmUNP1_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_C                      \
  0x9813
#define mmUNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                      \
  0x4614
#define mmUNP0_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                 \
  0x4614
#define mmUNP1_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_L                 \
  0x9814
#define mmUNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                      \
  0x4615
#define mmUNP0_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                 \
  0x4615
#define mmUNP1_UNP_GRPH_SECONDARY_BOTTOM_SURFACE_ADDRESS_HIGH_C                 \
  0x9815
#define mmUNP_GRPH_PITCH_L                                                      \
  0x4616
#define mmUNP0_UNP_GRPH_PITCH_L                                                 \
  0x4616
#define mmUNP1_UNP_GRPH_PITCH_L                                                 \
  0x9816
#define mmUNP_GRPH_PITCH_C                                                      \
  0x4617
#define mmUNP0_UNP_GRPH_PITCH_C                                                 \
  0x4617
#define mmUNP1_UNP_GRPH_PITCH_C                                                 \
  0x9817
#define mmUNP_GRPH_SURFACE_OFFSET_X_L                                           \
  0x4618
#define mmUNP0_UNP_GRPH_SURFACE_OFFSET_X_L                                      \
  0x4618
#define mmUNP1_UNP_GRPH_SURFACE_OFFSET_X_L                                      \
  0x9818
#define mmUNP_GRPH_SURFACE_OFFSET_X_C                                           \
  0x4619
#define mmUNP0_UNP_GRPH_SURFACE_OFFSET_X_C                                      \
  0x4619
#define mmUNP1_UNP_GRPH_SURFACE_OFFSET_X_C                                      \
  0x9819
#define mmUNP_GRPH_SURFACE_OFFSET_Y_L                                           \
  0x461a
#define mmUNP0_UNP_GRPH_SURFACE_OFFSET_Y_L                                      \
  0x461a
#define mmUNP1_UNP_GRPH_SURFACE_OFFSET_Y_L                                      \
  0x981a
#define mmUNP_GRPH_SURFACE_OFFSET_Y_C                                           \
  0x461b
#define mmUNP0_UNP_GRPH_SURFACE_OFFSET_Y_C                                      \
  0x461b
#define mmUNP1_UNP_GRPH_SURFACE_OFFSET_Y_C                                      \
  0x981b
#define mmUNP_GRPH_X_START_L                                                    \
  0x461c
#define mmUNP0_UNP_GRPH_X_START_L                                               \
  0x461c
#define mmUNP1_UNP_GRPH_X_START_L                                               \
  0x981c
#define mmUNP_GRPH_X_START_C                                                    \
  0x461d
#define mmUNP0_UNP_GRPH_X_START_C                                               \
  0x461d
#define mmUNP1_UNP_GRPH_X_START_C                                               \
  0x981d
#define mmUNP_GRPH_Y_START_L                                                    \
  0x461e
#define mmUNP0_UNP_GRPH_Y_START_L                                               \
  0x461e
#define mmUNP1_UNP_GRPH_Y_START_L                                               \
  0x981e
#define mmUNP_GRPH_Y_START_C                                                    \
  0x461f
#define mmUNP0_UNP_GRPH_Y_START_C                                               \
  0x461f
#define mmUNP1_UNP_GRPH_Y_START_C                                               \
  0x981f
#define mmUNP_GRPH_X_END_L                                                      \
  0x4620
#define mmUNP0_UNP_GRPH_X_END_L                                                 \
  0x4620
#define mmUNP1_UNP_GRPH_X_END_L                                                 \
  0x9820
#define mmUNP_GRPH_X_END_C                                                      \
  0x4621
#define mmUNP0_UNP_GRPH_X_END_C                                                 \
  0x4621
#define mmUNP1_UNP_GRPH_X_END_C                                                 \
  0x9821
#define mmUNP_GRPH_Y_END_L                                                      \
  0x4622
#define mmUNP0_UNP_GRPH_Y_END_L                                                 \
  0x4622
#define mmUNP1_UNP_GRPH_Y_END_L                                                 \
  0x9822
#define mmUNP_GRPH_Y_END_C                                                      \
  0x4623
#define mmUNP0_UNP_GRPH_Y_END_C                                                 \
  0x4623
#define mmUNP1_UNP_GRPH_Y_END_C                                                 \
  0x9823
#define mmUNP_GRPH_UPDATE                                                       \
  0x4624
#define mmUNP0_UNP_GRPH_UPDATE                                                  \
  0x4624
#define mmUNP1_UNP_GRPH_UPDATE                                                  \
  0x9824
#define mmUNP_PIPE_OUTSTANDING_REQUEST_LIMIT                                    \
  0x463a
#define mmUNP0_UNP_PIPE_OUTSTANDING_REQUEST_LIMIT                               \
  0x463a
#define mmUNP1_UNP_PIPE_OUTSTANDING_REQUEST_LIMIT                               \
  0x983a
#define mmUNP_GRPH_SURFACE_ADDRESS_INUSE_L                                      \
  0x4625
#define mmUNP0_UNP_GRPH_SURFACE_ADDRESS_INUSE_L                                 \
  0x4625
#define mmUNP1_UNP_GRPH_SURFACE_ADDRESS_INUSE_L                                 \
  0x9825
#define mmUNP_GRPH_SURFACE_ADDRESS_INUSE_C                                      \
  0x4626
#define mmUNP0_UNP_GRPH_SURFACE_ADDRESS_INUSE_C                                 \
  0x4626
#define mmUNP1_UNP_GRPH_SURFACE_ADDRESS_INUSE_C                                 \
  0x9826
#define mmUNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_L                                 \
  0x4627
#define mmUNP0_UNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_L                            \
  0x4627
#define mmUNP1_UNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_L                            \
  0x9827
#define mmUNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_C                                 \
  0x4628
#define mmUNP0_UNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_C                            \
  0x4628
#define mmUNP1_UNP_GRPH_SURFACE_ADDRESS_HIGH_INUSE_C                            \
  0x9828
#define mmUNP_DVMM_PTE_CONTROL                                                  \
  0x4629
#define mmUNP_GRPH_INTERRUPT_STATUS                                             \
  0x462b
#define mmUNP0_UNP_GRPH_INTERRUPT_STATUS                                        \
  0x462b
#define mmUNP1_UNP_GRPH_INTERRUPT_STATUS                                        \
  0x982b
#define mmUNP_GRPH_INTERRUPT_CONTROL                                            \
  0x462c
#define mmUNP0_UNP_GRPH_INTERRUPT_CONTROL                                       \
  0x462c
#define mmUNP1_UNP_GRPH_INTERRUPT_CONTROL                                       \
  0x982c
#define mmUNP_GRPH_STEREOSYNC_FLIP                                              \
  0x462e
#define mmUNP0_UNP_GRPH_STEREOSYNC_FLIP                                         \
  0x462e
#define mmUNP1_UNP_GRPH_STEREOSYNC_FLIP                                         \
  0x982e
#define mmUNP_FLIP_CONTROL                                                      \
  0x462f
#define mmUNP0_UNP_FLIP_CONTROL                                                 \
  0x462f
#define mmUNP1_UNP_FLIP_CONTROL                                                 \
  0x982f
#define mmUNP_CRC_CONTROL                                                       \
  0x4630
#define mmUNP0_UNP_CRC_CONTROL                                                  \
  0x4630
#define mmUNP1_UNP_CRC_CONTROL                                                  \
  0x9830
#define mmUNP_CRC_MASK                                                          \
  0x4631
#define mmUNP0_UNP_CRC_MASK                                                     \
  0x4631
#define mmUNP1_UNP_CRC_MASK                                                     \
  0x9831
#define mmUNP_CRC_CURRENT                                                       \
  0x4632
#define mmUNP0_UNP_CRC_CURRENT                                                  \
  0x4632
#define mmUNP1_UNP_CRC_CURRENT                                                  \
  0x9832
#define mmUNP_CRC_LAST                                                          \
  0x4633
#define mmUNP0_UNP_CRC_LAST                                                     \
  0x4633
#define mmUNP1_UNP_CRC_LAST                                                     \
  0x9833
#define mmUNP_LB_DATA_GAP_BETWEEN_CHUNK                                         \
  0x4634
#define mmUNP0_UNP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x4634
#define mmUNP1_UNP_LB_DATA_GAP_BETWEEN_CHUNK                                    \
  0x9834
#define mmUNP_HW_ROTATION                                                       \
  0x4635
#define mmUNP0_UNP_HW_ROTATION                                                  \
  0x4635
#define mmUNP1_UNP_HW_ROTATION                                                  \
  0x9835
#define mmUNP_DEBUG                                                             \
  0x4636
#define mmUNP0_UNP_DEBUG                                                        \
  0x4636
#define mmUNP1_UNP_DEBUG                                                        \
  0x9836
#define mmUNP_DEBUG2                                                            \
  0x4637
#define mmUNP0_UNP_DEBUG2                                                       \
  0x4637
#define mmUNP1_UNP_DEBUG2                                                       \
  0x9837
#define mmUNP_DVMM_DEBUG                                                        \
  0x463b
#define mmUNP0_UNP_DVMM_DEBUG                                                   \
  0x463b
#define mmUNP1_UNP_DVMM_DEBUG                                                   \
  0x983b
#define mmUNP_TEST_DEBUG_INDEX                                                  \
  0x4638
#define mmUNP0_UNP_TEST_DEBUG_INDEX                                             \
  0x4638
#define mmUNP1_UNP_TEST_DEBUG_INDEX                                             \
  0x9838
#define mmUNP_TEST_DEBUG_DATA                                                   \
  0x4639
#define mmUNP0_UNP_TEST_DEBUG_DATA                                              \
  0x4639
#define mmUNP1_UNP_TEST_DEBUG_DATA                                              \
  0x9839
#define mmGENMO_WT                                                              \
  0xf0
#define mmGENMO_RD                                                              \
  0xf3
#define mmGENENB                                                                \
  0xf0
#define mmGENFC_WT                                                              \
  0xee
#define mmVGA0_GENFC_WT                                                         \
  0xee
#define mmVGA1_GENFC_WT                                                         \
  0xf6
#define mmGENFC_RD                                                              \
  0xf2
#define mmGENS0                                                                 \
  0xf0
#define mmGENS1                                                                 \
  0xee
#define mmVGA0_GENS1                                                            \
  0xee
#define mmVGA1_GENS1                                                            \
  0xf6
#define mmDAC_DATA                                                              \
  0xf2
#define mmDAC_MASK                                                              \
  0xf1
#define mmDAC_R_INDEX                                                           \
  0xf1
#define mmDAC_W_INDEX                                                           \
  0xf2
#define mmSEQ8_IDX                                                              \
  0xf1
#define mmSEQ8_DATA                                                             \
  0xf1
#define ixSEQ00                                                                 \
  0x0
#define ixSEQ01                                                                 \
  0x1
#define ixSEQ02                                                                 \
  0x2
#define ixSEQ03                                                                 \
  0x3
#define ixSEQ04                                                                 \
  0x4
#define mmCRTC8_IDX                                                             \
  0xed
#define mmVGA0_CRTC8_IDX                                                        \
  0xed
#define mmVGA1_CRTC8_IDX                                                        \
  0xf5
#define mmCRTC8_DATA                                                            \
  0xed
#define mmVGA0_CRTC8_DATA                                                       \
  0xed
#define mmVGA1_CRTC8_DATA                                                       \
  0xf5
#define ixCRT00                                                                 \
  0x0
#define ixCRT01                                                                 \
  0x1
#define ixCRT02                                                                 \
  0x2
#define ixCRT03                                                                 \
  0x3
#define ixCRT04                                                                 \
  0x4
#define ixCRT05                                                                 \
  0x5
#define ixCRT06                                                                 \
  0x6
#define ixCRT07                                                                 \
  0x7
#define ixCRT08                                                                 \
  0x8
#define ixCRT09                                                                 \
  0x9
#define ixCRT0A                                                                 \
  0xa
#define ixCRT0B                                                                 \
  0xb
#define ixCRT0C                                                                 \
  0xc
#define ixCRT0D                                                                 \
  0xd
#define ixCRT0E                                                                 \
  0xe
#define ixCRT0F                                                                 \
  0xf
#define ixCRT10                                                                 \
  0x10
#define ixCRT11                                                                 \
  0x11
#define ixCRT12                                                                 \
  0x12
#define ixCRT13                                                                 \
  0x13
#define ixCRT14                                                                 \
  0x14
#define ixCRT15                                                                 \
  0x15
#define ixCRT16                                                                 \
  0x16
#define ixCRT17                                                                 \
  0x17
#define ixCRT18                                                                 \
  0x18
#define ixCRT1E                                                                 \
  0x1e
#define ixCRT1F                                                                 \
  0x1f
#define ixCRT22                                                                 \
  0x22
#define mmGRPH8_IDX                                                             \
  0xf3
#define mmGRPH8_DATA                                                            \
  0xf3
#define ixGRA00                                                                 \
  0x0
#define ixGRA01                                                                 \
  0x1
#define ixGRA02                                                                 \
  0x2
#define ixGRA03                                                                 \
  0x3
#define ixGRA04                                                                 \
  0x4
#define ixGRA05                                                                 \
  0x5
#define ixGRA06                                                                 \
  0x6
#define ixGRA07                                                                 \
  0x7
#define ixGRA08                                                                 \
  0x8
#define mmATTRX                                                                 \
  0xf0
#define mmATTRDW                                                                \
  0xf0
#define mmATTRDR                                                                \
  0xf0
#define ixATTR00                                                                \
  0x0
#define ixATTR01                                                                \
  0x1
#define ixATTR02                                                                \
  0x2
#define ixATTR03                                                                \
  0x3
#define ixATTR04                                                                \
  0x4
#define ixATTR05                                                                \
  0x5
#define ixATTR06                                                                \
  0x6
#define ixATTR07                                                                \
  0x7
#define ixATTR08                                                                \
  0x8
#define ixATTR09                                                                \
  0x9
#define ixATTR0A                                                                \
  0xa
#define ixATTR0B                                                                \
  0xb
#define ixATTR0C                                                                \
  0xc
#define ixATTR0D                                                                \
  0xd
#define ixATTR0E                                                                \
  0xe
#define ixATTR0F                                                                \
  0xf
#define ixATTR10                                                                \
  0x10
#define ixATTR11                                                                \
  0x11
#define ixATTR12                                                                \
  0x12
#define ixATTR13                                                                \
  0x13
#define ixATTR14                                                                \
  0x14
#define mmVGA_RENDER_CONTROL                                                    \
  0xc0
#define mmVGA_SOURCE_SELECT                                                     \
  0xfc
#define mmVGA_SEQUENCER_RESET_CONTROL                                           \
  0xc1
#define mmVGA_MODE_CONTROL                                                      \
  0xc2
#define mmVGA_SURFACE_PITCH_SELECT                                              \
  0xc3
#define mmVGA_MEMORY_BASE_ADDRESS                                               \
  0xc4
#define mmVGA_MEMORY_BASE_ADDRESS_HIGH                                          \
  0xc9
#define mmVGA_DISPBUF1_SURFACE_ADDR                                             \
  0xc6
#define mmVGA_DISPBUF2_SURFACE_ADDR                                             \
  0xc8
#define mmVGA_HDP_CONTROL                                                       \
  0xca
#define mmVGA_CACHE_CONTROL                                                     \
  0xcb
#define mmD1VGA_CONTROL                                                         \
  0xcc
#define mmD2VGA_CONTROL                                                         \
  0xce
#define mmD3VGA_CONTROL                                                         \
  0xf8
#define mmD4VGA_CONTROL                                                         \
  0xf9
#define mmD5VGA_CONTROL                                                         \
  0xfa
#define mmD6VGA_CONTROL                                                         \
  0xfb
#define mmVGA_HW_DEBUG                                                          \
  0xcf
#define mmVGA_STATUS                                                            \
  0xd0
#define mmVGA_INTERRUPT_CONTROL                                                 \
  0xd1
#define mmVGA_STATUS_CLEAR                                                      \
  0xd2
#define mmVGA_INTERRUPT_STATUS                                                  \
  0xd3
#define mmVGA_MAIN_CONTROL                                                      \
  0xd4
#define mmVGA_TEST_CONTROL                                                      \
  0xd5
#define mmVGA_DEBUG_READBACK_INDEX                                              \
  0xd6
#define mmVGA_DEBUG_READBACK_DATA                                               \
  0xd7
#define mmVGA_MEM_WRITE_PAGE_ADDR                                               \
  0x12
#define mmVGA_MEM_READ_PAGE_ADDR                                                \
  0x13
#define mmVGA_TEST_DEBUG_INDEX                                                  \
  0xc5
#define mmVGA_TEST_DEBUG_DATA                                                   \
  0xc7
#define ixVGADCC_DBG_DCCIF_C                                                    \
  0x7e
#define mmBPHYC_DAC_MACRO_CNTL                                                  \
  0x48b9
#define mmBPHYC_DAC_AUTO_CALIB_CONTROL                                          \
  0x48ba
#define mmDPG_PIPE_ARBITRATION_CONTROL1                                         \
  0x1b30
#define mmDMIF_PG0_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x1b30
#define mmDMIF_PG1_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x1d30
#define mmDMIF_PG2_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x1f30
#define mmDMIF_PG3_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x4130
#define mmDMIF_PG4_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x4330
#define mmDMIF_PG5_DPG_PIPE_ARBITRATION_CONTROL1                                \
  0x4530
#define mmDPG_PIPE_ARBITRATION_CONTROL2                                         \
  0x1b31
#define mmDMIF_PG0_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x1b31
#define mmDMIF_PG1_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x1d31
#define mmDMIF_PG2_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x1f31
#define mmDMIF_PG3_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x4131
#define mmDMIF_PG4_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x4331
#define mmDMIF_PG5_DPG_PIPE_ARBITRATION_CONTROL2                                \
  0x4531
#define mmDPG_WATERMARK_MASK_CONTROL                                            \
  0x1b32
#define mmDMIF_PG0_DPG_WATERMARK_MASK_CONTROL                                   \
  0x1b32
#define mmDMIF_PG1_DPG_WATERMARK_MASK_CONTROL                                   \
  0x1d32
#define mmDMIF_PG2_DPG_WATERMARK_MASK_CONTROL                                   \
  0x1f32
#define mmDMIF_PG3_DPG_WATERMARK_MASK_CONTROL                                   \
  0x4132
#define mmDMIF_PG4_DPG_WATERMARK_MASK_CONTROL                                   \
  0x4332
#define mmDMIF_PG5_DPG_WATERMARK_MASK_CONTROL                                   \
  0x4532
#define mmDPG_PIPE_URGENCY_CONTROL                                              \
  0x1b33
#define mmDMIF_PG0_DPG_PIPE_URGENCY_CONTROL                                     \
  0x1b33
#define mmDMIF_PG1_DPG_PIPE_URGENCY_CONTROL                                     \
  0x1d33
#define mmDMIF_PG2_DPG_PIPE_URGENCY_CONTROL                                     \
  0x1f33
#define mmDMIF_PG3_DPG_PIPE_URGENCY_CONTROL                                     \
  0x4133
#define mmDMIF_PG4_DPG_PIPE_URGENCY_CONTROL                                     \
  0x4333
#define mmDMIF_PG5_DPG_PIPE_URGENCY_CONTROL                                     \
  0x4533
#define mmDPG_PIPE_DPM_CONTROL                                                  \
  0x1b34
#define mmDMIF_PG0_DPG_PIPE_DPM_CONTROL                                         \
  0x1b34
#define mmDMIF_PG1_DPG_PIPE_DPM_CONTROL                                         \
  0x1d34
#define mmDMIF_PG2_DPG_PIPE_DPM_CONTROL                                         \
  0x1f34
#define mmDMIF_PG3_DPG_PIPE_DPM_CONTROL                                         \
  0x4134
#define mmDMIF_PG4_DPG_PIPE_DPM_CONTROL                                         \
  0x4334
#define mmDMIF_PG5_DPG_PIPE_DPM_CONTROL                                         \
  0x4534
#define mmDPG_PIPE_STUTTER_CONTROL                                              \
  0x1b35
#define mmDMIF_PG0_DPG_PIPE_STUTTER_CONTROL                                     \
  0x1b35
#define mmDMIF_PG1_DPG_PIPE_STUTTER_CONTROL                                     \
  0x1d35
#define mmDMIF_PG2_DPG_PIPE_STUTTER_CONTROL                                     \
  0x1f35
#define mmDMIF_PG3_DPG_PIPE_STUTTER_CONTROL                                     \
  0x4135
#define mmDMIF_PG4_DPG_PIPE_STUTTER_CONTROL                                     \
  0x4335
#define mmDMIF_PG5_DPG_PIPE_STUTTER_CONTROL                                     \
  0x4535
#define mmDPG_PIPE_NB_PSTATE_CHANGE_CONTROL                                     \
  0x1b36
#define mmDMIF_PG0_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x1b36
#define mmDMIF_PG1_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x1d36
#define mmDMIF_PG2_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x1f36
#define mmDMIF_PG3_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x4136
#define mmDMIF_PG4_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x4336
#define mmDMIF_PG5_DPG_PIPE_NB_PSTATE_CHANGE_CONTROL                            \
  0x4536
#define mmDPG_PIPE_STUTTER_CONTROL_NONLPTCH                                     \
  0x1b37
#define mmDMIF_PG0_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x1b37
#define mmDMIF_PG1_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x1d37
#define mmDMIF_PG2_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x1f37
#define mmDMIF_PG3_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x4137
#define mmDMIF_PG4_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x4337
#define mmDMIF_PG5_DPG_PIPE_STUTTER_CONTROL_NONLPTCH                            \
  0x4537
#define mmDPG_REPEATER_PROGRAM                                                  \
  0x1b3a
#define mmDMIF_PG0_DPG_REPEATER_PROGRAM                                         \
  0x1b3a
#define mmDMIF_PG1_DPG_REPEATER_PROGRAM                                         \
  0x1d3a
#define mmDMIF_PG2_DPG_REPEATER_PROGRAM                                         \
  0x1f3a
#define mmDMIF_PG3_DPG_REPEATER_PROGRAM                                         \
  0x413a
#define mmDMIF_PG4_DPG_REPEATER_PROGRAM                                         \
  0x433a
#define mmDMIF_PG5_DPG_REPEATER_PROGRAM                                         \
  0x453a
#define mmDPG_HW_DEBUG_A                                                        \
  0x1b3b
#define mmDMIF_PG0_DPG_HW_DEBUG_A                                               \
  0x1b3b
#define mmDMIF_PG1_DPG_HW_DEBUG_A                                               \
  0x1d3b
#define mmDMIF_PG2_DPG_HW_DEBUG_A                                               \
  0x1f3b
#define mmDMIF_PG3_DPG_HW_DEBUG_A                                               \
  0x413b
#define mmDMIF_PG4_DPG_HW_DEBUG_A                                               \
  0x433b
#define mmDMIF_PG5_DPG_HW_DEBUG_A                                               \
  0x453b
#define mmDPG_HW_DEBUG_B                                                        \
  0x1b3c
#define mmDMIF_PG0_DPG_HW_DEBUG_B                                               \
  0x1b3c
#define mmDMIF_PG1_DPG_HW_DEBUG_B                                               \
  0x1d3c
#define mmDMIF_PG2_DPG_HW_DEBUG_B                                               \
  0x1f3c
#define mmDMIF_PG3_DPG_HW_DEBUG_B                                               \
  0x413c
#define mmDMIF_PG4_DPG_HW_DEBUG_B                                               \
  0x433c
#define mmDMIF_PG5_DPG_HW_DEBUG_B                                               \
  0x453c
#define mmDPG_HW_DEBUG_11                                                       \
  0x1b3d
#define mmDMIF_PG0_DPG_HW_DEBUG_11                                              \
  0x1b3d
#define mmDMIF_PG1_DPG_HW_DEBUG_11                                              \
  0x1d3d
#define mmDMIF_PG2_DPG_HW_DEBUG_11                                              \
  0x1f3d
#define mmDMIF_PG3_DPG_HW_DEBUG_11                                              \
  0x413d
#define mmDMIF_PG4_DPG_HW_DEBUG_11                                              \
  0x433d
#define mmDMIF_PG5_DPG_HW_DEBUG_11                                              \
  0x453d
#define mmDPG_CHK_PRE_PROC_CNTL                                                 \
  0x1b3e
#define mmDMIF_PG0_DPG_CHK_PRE_PROC_CNTL                                        \
  0x1b3e
#define mmDMIF_PG1_DPG_CHK_PRE_PROC_CNTL                                        \
  0x1d3e
#define mmDMIF_PG2_DPG_CHK_PRE_PROC_CNTL                                        \
  0x1f3e
#define mmDMIF_PG3_DPG_CHK_PRE_PROC_CNTL                                        \
  0x413e
#define mmDMIF_PG4_DPG_CHK_PRE_PROC_CNTL                                        \
  0x433e
#define mmDMIF_PG5_DPG_CHK_PRE_PROC_CNTL                                        \
  0x453e
#define mmDPG_DVMM_STATUS                                                       \
  0x1b3f
#define mmDMIF_PG0_DPG_DVMM_STATUS                                              \
  0x1b3f
#define mmDMIF_PG1_DPG_DVMM_STATUS                                              \
  0x1d3f
#define mmDMIF_PG2_DPG_DVMM_STATUS                                              \
  0x1f3f
#define mmDMIF_PG3_DPG_DVMM_STATUS                                              \
  0x413f
#define mmDMIF_PG4_DPG_DVMM_STATUS                                              \
  0x433f
#define mmDMIF_PG5_DPG_DVMM_STATUS                                              \
  0x453f
#define mmDPG_TEST_DEBUG_INDEX                                                  \
  0x1b38
#define mmDMIF_PG0_DPG_TEST_DEBUG_INDEX                                         \
  0x1b38
#define mmDMIF_PG1_DPG_TEST_DEBUG_INDEX                                         \
  0x1d38
#define mmDMIF_PG2_DPG_TEST_DEBUG_INDEX                                         \
  0x1f38
#define mmDMIF_PG3_DPG_TEST_DEBUG_INDEX                                         \
  0x4138
#define mmDMIF_PG4_DPG_TEST_DEBUG_INDEX                                         \
  0x4338
#define mmDMIF_PG5_DPG_TEST_DEBUG_INDEX                                         \
  0x4538
#define mmDPG_TEST_DEBUG_DATA                                                   \
  0x1b39
#define mmDMIF_PG0_DPG_TEST_DEBUG_DATA                                          \
  0x1b39
#define mmDMIF_PG1_DPG_TEST_DEBUG_DATA                                          \
  0x1d39
#define mmDMIF_PG2_DPG_TEST_DEBUG_DATA                                          \
  0x1f39
#define mmDMIF_PG3_DPG_TEST_DEBUG_DATA                                          \
  0x4139
#define mmDMIF_PG4_DPG_TEST_DEBUG_DATA                                          \
  0x4339
#define mmDMIF_PG5_DPG_TEST_DEBUG_DATA                                          \
  0x4539
#define mmDPGV0_PIPE_ARBITRATION_CONTROL1                                       \
  0x4730
#define mmDMIFV_PG0_DPGV0_PIPE_ARBITRATION_CONTROL1                             \
  0x4730
#define mmDMIFV_PG1_DPGV0_PIPE_ARBITRATION_CONTROL1                             \
  0x9930
#define mmDPGV1_PIPE_ARBITRATION_CONTROL1                                       \
  0x473d
#define mmDMIFV_PG0_DPGV1_PIPE_ARBITRATION_CONTROL1                             \
  0x473d
#define mmDMIFV_PG1_DPGV1_PIPE_ARBITRATION_CONTROL1                             \
  0x993d
#define mmDPGV0_PIPE_ARBITRATION_CONTROL2                                       \
  0x4731
#define mmDMIFV_PG0_DPGV0_PIPE_ARBITRATION_CONTROL2                             \
  0x4731
#define mmDMIFV_PG1_DPGV0_PIPE_ARBITRATION_CONTROL2                             \
  0x9931
#define mmDPGV1_PIPE_ARBITRATION_CONTROL2                                       \
  0x473e
#define mmDMIFV_PG0_DPGV1_PIPE_ARBITRATION_CONTROL2                             \
  0x473e
#define mmDMIFV_PG1_DPGV1_PIPE_ARBITRATION_CONTROL2                             \
  0x993e
#define mmDPGV0_WATERMARK_MASK_CONTROL                                          \
  0x4732
#define mmDMIFV_PG0_DPGV0_WATERMARK_MASK_CONTROL                                \
  0x4732
#define mmDMIFV_PG1_DPGV0_WATERMARK_MASK_CONTROL                                \
  0x9932
#define mmDPGV1_WATERMARK_MASK_CONTROL                                          \
  0x473f
#define mmDMIFV_PG0_DPGV1_WATERMARK_MASK_CONTROL                                \
  0x473f
#define mmDMIFV_PG1_DPGV1_WATERMARK_MASK_CONTROL                                \
  0x993f
#define mmDPGV0_PIPE_URGENCY_CONTROL                                            \
  0x4733
#define mmDMIFV_PG0_DPGV0_PIPE_URGENCY_CONTROL                                  \
  0x4733
#define mmDMIFV_PG1_DPGV0_PIPE_URGENCY_CONTROL                                  \
  0x9933
#define mmDPGV1_PIPE_URGENCY_CONTROL                                            \
  0x4740
#define mmDMIFV_PG0_DPGV1_PIPE_URGENCY_CONTROL                                  \
  0x4740
#define mmDMIFV_PG1_DPGV1_PIPE_URGENCY_CONTROL                                  \
  0x9940
#define mmDPGV0_PIPE_DPM_CONTROL                                                \
  0x4734
#define mmDMIFV_PG0_DPGV0_PIPE_DPM_CONTROL                                      \
  0x4734
#define mmDMIFV_PG1_DPGV0_PIPE_DPM_CONTROL                                      \
  0x9934
#define mmDPGV1_PIPE_DPM_CONTROL                                                \
  0x4741
#define mmDMIFV_PG0_DPGV1_PIPE_DPM_CONTROL                                      \
  0x4741
#define mmDMIFV_PG1_DPGV1_PIPE_DPM_CONTROL                                      \
  0x9941
#define mmDPGV0_PIPE_STUTTER_CONTROL                                            \
  0x4735
#define mmDMIFV_PG0_DPGV0_PIPE_STUTTER_CONTROL                                  \
  0x4735
#define mmDMIFV_PG1_DPGV0_PIPE_STUTTER_CONTROL                                  \
  0x9935
#define mmDPGV1_PIPE_STUTTER_CONTROL                                            \
  0x4742
#define mmDMIFV_PG0_DPGV1_PIPE_STUTTER_CONTROL                                  \
  0x4742
#define mmDMIFV_PG1_DPGV1_PIPE_STUTTER_CONTROL                                  \
  0x9942
#define mmDPGV0_PIPE_NB_PSTATE_CHANGE_CONTROL                                   \
  0x4736
#define mmDMIFV_PG0_DPGV0_PIPE_NB_PSTATE_CHANGE_CONTROL                         \
  0x4736
#define mmDMIFV_PG1_DPGV0_PIPE_NB_PSTATE_CHANGE_CONTROL                         \
  0x9936
#define mmDPGV1_PIPE_NB_PSTATE_CHANGE_CONTROL                                   \
  0x4743
#define mmDMIFV_PG0_DPGV1_PIPE_NB_PSTATE_CHANGE_CONTROL                         \
  0x4743
#define mmDMIFV_PG1_DPGV1_PIPE_NB_PSTATE_CHANGE_CONTROL                         \
  0x9943
#define mmDPGV0_PIPE_STUTTER_CONTROL_NONLPTCH                                   \
  0x4737
#define mmDMIFV_PG0_DPGV0_PIPE_STUTTER_CONTROL_NONLPTCH                         \
  0x4737
#define mmDMIFV_PG1_DPGV0_PIPE_STUTTER_CONTROL_NONLPTCH                         \
  0x9937
#define mmDPGV1_PIPE_STUTTER_CONTROL_NONLPTCH                                   \
  0x4744
#define mmDMIFV_PG0_DPGV1_PIPE_STUTTER_CONTROL_NONLPTCH                         \
  0x4744
#define mmDMIFV_PG1_DPGV1_PIPE_STUTTER_CONTROL_NONLPTCH                         \
  0x9944
#define mmDPGV0_REPEATER_PROGRAM                                                \
  0x4738
#define mmDMIFV_PG0_DPGV0_REPEATER_PROGRAM                                      \
  0x4738
#define mmDMIFV_PG1_DPGV0_REPEATER_PROGRAM                                      \
  0x9938
#define mmDPGV1_REPEATER_PROGRAM                                                \
  0x4745
#define mmDMIFV_PG0_DPGV1_REPEATER_PROGRAM                                      \
  0x4745
#define mmDMIFV_PG1_DPGV1_REPEATER_PROGRAM                                      \
  0x9945
#define mmDPGV0_HW_DEBUG_A                                                      \
  0x4739
#define mmDMIFV_PG0_DPGV0_HW_DEBUG_A                                            \
  0x4739
#define mmDMIFV_PG1_DPGV0_HW_DEBUG_A                                            \
  0x9939
#define mmDPGV1_HW_DEBUG_A                                                      \
  0x4746
#define mmDMIFV_PG0_DPGV1_HW_DEBUG_A                                            \
  0x4746
#define mmDMIFV_PG1_DPGV1_HW_DEBUG_A                                            \
  0x9946
#define mmDPGV0_HW_DEBUG_B                                                      \
  0x473a
#define mmDMIFV_PG0_DPGV0_HW_DEBUG_B                                            \
  0x473a
#define mmDMIFV_PG1_DPGV0_HW_DEBUG_B                                            \
  0x993a
#define mmDPGV1_HW_DEBUG_B                                                      \
  0x4747
#define mmDMIFV_PG0_DPGV1_HW_DEBUG_B                                            \
  0x4747
#define mmDMIFV_PG1_DPGV1_HW_DEBUG_B                                            \
  0x9947
#define mmDPGV0_HW_DEBUG_11                                                     \
  0x473b
#define mmDMIFV_PG0_DPGV0_HW_DEBUG_11                                           \
  0x473b
#define mmDMIFV_PG1_DPGV0_HW_DEBUG_11                                           \
  0x993b
#define mmDPGV1_HW_DEBUG_11                                                     \
  0x4748
#define mmDMIFV_PG0_DPGV1_HW_DEBUG_11                                           \
  0x4748
#define mmDMIFV_PG1_DPGV1_HW_DEBUG_11                                           \
  0x9948
#define mmDPGV0_CHK_PRE_PROC_CNTL                                               \
  0x473c
#define mmDMIFV_PG0_DPGV0_CHK_PRE_PROC_CNTL                                     \
  0x473c
#define mmDMIFV_PG1_DPGV0_CHK_PRE_PROC_CNTL                                     \
  0x993c
#define mmDPGV1_CHK_PRE_PROC_CNTL                                               \
  0x4749
#define mmDMIFV_PG0_DPGV1_CHK_PRE_PROC_CNTL                                     \
  0x4749
#define mmDMIFV_PG1_DPGV1_CHK_PRE_PROC_CNTL                                     \
  0x9949
#define mmDPGV_TEST_DEBUG_INDEX                                                 \
  0x474e
#define mmDMIFV_PG0_DPGV_TEST_DEBUG_INDEX                                       \
  0x474e
#define mmDMIFV_PG1_DPGV_TEST_DEBUG_INDEX                                       \
  0x994e
#define mmDPGV_TEST_DEBUG_DATA                                                  \
  0x474f
#define mmDMIFV_PG0_DPGV_TEST_DEBUG_DATA                                        \
  0x474f
#define mmDMIFV_PG1_DPGV_TEST_DEBUG_DATA                                        \
  0x994f
#define mmAZROOT_IMMEDIATE_COMMAND_OUTPUT_INTERFACE_INDEX                       \
  0x18
#define mmAZROOT_IMMEDIATE_COMMAND_OUTPUT_INTERFACE_DATA                        \
  0x18
#define ixAZALIA_F2_CODEC_ROOT_PARAMETER_VENDOR_AND_DEVICE_ID                   \
  0xf00
#define ixAZALIA_F2_CODEC_ROOT_PARAMETER_REVISION_ID                            \
  0xf02
#define ixAZALIA_F2_CODEC_ROOT_PARAMETER_SUBORDINATE_NODE_COUNT                 \
  0xf04
#define ixAZALIA_F2_CODEC_FUNCTION_PARAMETER_SUBORDINATE_NODE_COUNT             \
  0x1f04
#define ixAZALIA_F2_CODEC_FUNCTION_PARAMETER_GROUP_TYPE                         \
  0x1f05
#define ixAZALIA_F2_CODEC_FUNCTION_PARAMETER_SUPPORTED_SIZE_RATES               \
  0x1f0a
#define ixAZALIA_F2_CODEC_FUNCTION_PARAMETER_STREAM_FORMATS                     \
  0x1f0b
#define ixAZALIA_F2_CODEC_FUNCTION_PARAMETER_POWER_STATES                       \
  0x1f0f
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_POWER_STATE                          \
  0x1705
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_RESET                                \
  0x17ff
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_RESPONSE_SUBSYSTEM_ID                \
  0x1720
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_RESPONSE_SUBSYSTEM_ID_2              \
  0x1721
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_RESPONSE_SUBSYSTEM_ID_3              \
  0x1722
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_RESPONSE_SUBSYSTEM_ID_4              \
  0x1723
#define ixAZALIA_F2_CODEC_FUNCTION_CONTROL_CONVERTER_SYNCHRONIZATION            \
  0x1770
#define mmAZALIA_F0_CODEC_ROOT_PARAMETER_VENDOR_AND_DEVICE_ID                   \
  0x1828
#define mmAZALIA_F0_CODEC_ROOT_PARAMETER_REVISION_ID                            \
  0x1829
#define mmAZALIA_F0_CODEC_CHANNEL_COUNT_CONTROL                                 \
  0x182a
#define mmAZALIA_F0_CODEC_RESYNC_FIFO_CONTROL                                   \
  0x182b
#define mmAZALIA_F0_CODEC_FUNCTION_PARAMETER_GROUP_TYPE                         \
  0x182c
#define mmAZALIA_F0_CODEC_FUNCTION_PARAMETER_SUPPORTED_SIZE_RATES               \
  0x182d
#define mmAZALIA_F0_CODEC_FUNCTION_PARAMETER_STREAM_FORMATS                     \
  0x182e
#define mmAZALIA_F0_CODEC_FUNCTION_PARAMETER_POWER_STATES                       \
  0x182f
#define mmAZALIA_F0_CODEC_FUNCTION_CONTROL_POWER_STATE                          \
  0x1830
#define mmAZALIA_F0_CODEC_FUNCTION_CONTROL_RESET                                \
  0x1831
#define mmAZALIA_F0_CODEC_FUNCTION_CONTROL_RESPONSE_SUBSYSTEM_ID                \
  0x1832
#define mmAZALIA_F0_CODEC_FUNCTION_CONTROL_CONVERTER_SYNCHRONIZATION            \
  0x1833
#define mmCC_RCU_DC_AUDIO_PORT_CONNECTIVITY                                     \
  0x1834
#define mmCC_RCU_DC_AUDIO_INPUT_PORT_CONNECTIVITY                               \
  0x1835
#define mmAZALIA_F0_CODEC_DEBUG                                                 \
  0x1836
#define mmAZALIA_F0_GTC_GROUP_OFFSET0                                           \
  0x1837
#define mmAZALIA_F0_GTC_GROUP_OFFSET1                                           \
  0x1838
#define mmAZALIA_F0_GTC_GROUP_OFFSET2                                           \
  0x1839
#define mmAZALIA_F0_GTC_GROUP_OFFSET3                                           \
  0x183a
#define mmAZALIA_F0_GTC_GROUP_OFFSET4                                           \
  0x183b
#define mmAZALIA_F0_GTC_GROUP_OFFSET5                                           \
  0x183c
#define mmAZALIA_F0_GTC_GROUP_OFFSET6                                           \
  0x183d
#define mmGLOBAL_CAPABILITIES                                                   \
  0x0
#define mmMINOR_VERSION                                                         \
  0x0
#define mmMAJOR_VERSION                                                         \
  0x0
#define mmOUTPUT_PAYLOAD_CAPABILITY                                             \
  0x1
#define mmINPUT_PAYLOAD_CAPABILITY                                              \
  0x1
#define mmGLOBAL_CONTROL                                                        \
  0x2
#define mmWAKE_ENABLE                                                           \
  0x3
#define mmSTATE_CHANGE_STATUS                                                   \
  0x3
#define mmGLOBAL_STATUS                                                         \
  0x4
#define mmOUTPUT_STREAM_PAYLOAD_CAPABILITY                                      \
  0x6
#define mmINPUT_STREAM_PAYLOAD_CAPABILITY                                       \
  0x6
#define mmINTERRUPT_CONTROL                                                     \
  0x8
#define mmINTERRUPT_STATUS                                                      \
  0x9
#define mmWALL_CLOCK_COUNTER                                                    \
  0xc
#define mmSTREAM_SYNCHRONIZATION                                                \
  0xe
#define mmCORB_LOWER_BASE_ADDRESS                                               \
  0x10
#define mmCORB_UPPER_BASE_ADDRESS                                               \
  0x11
#define mmCORB_WRITE_POINTER                                                    \
  0x12
#define mmCORB_READ_POINTER                                                     \
  0x12
#define mmCORB_CONTROL                                                          \
  0x13
#define mmCORB_STATUS                                                           \
  0x13
#define mmCORB_SIZE                                                             \
  0x13
#define mmRIRB_LOWER_BASE_ADDRESS                                               \
  0x14
#define mmRIRB_UPPER_BASE_ADDRESS                                               \
  0x15
#define mmRIRB_WRITE_POINTER                                                    \
  0x16
#define mmRESPONSE_INTERRUPT_COUNT                                              \
  0x16
#define mmRIRB_CONTROL                                                          \
  0x17
#define mmRIRB_STATUS                                                           \
  0x17
#define mmRIRB_SIZE                                                             \
  0x17
#define mmIMMEDIATE_COMMAND_OUTPUT_INTERFACE                                    \
  0x18
#define mmIMMEDIATE_COMMAND_OUTPUT_INTERFACE_INDEX                              \
  0x18
#define mmIMMEDIATE_COMMAND_OUTPUT_INTERFACE_DATA                               \
  0x18
#define mmIMMEDIATE_RESPONSE_INPUT_INTERFACE                                    \
  0x19
#define mmIMMEDIATE_COMMAND_STATUS                                              \
  0x1a
#define mmDMA_POSITION_LOWER_BASE_ADDRESS                                       \
  0x1c
#define mmDMA_POSITION_UPPER_BASE_ADDRESS                                       \
  0x1d
#define mmWALL_CLOCK_COUNTER_ALIAS                                              \
  0x80c
#define mmOUTPUT_STREAM_DESCRIPTOR_CONTROL_AND_STATUS                           \
  0x20
#define mmOUTPUT_STREAM_DESCRIPTOR_LINK_POSITION_IN_CURRENT_BUFFER              \
  0x21
#define mmOUTPUT_STREAM_DESCRIPTOR_CYCLIC_BUFFER_LENGTH                         \
  0x22
#define mmOUTPUT_STREAM_DESCRIPTOR_LAST_VALID_INDEX                             \
  0x23
#define mmOUTPUT_STREAM_DESCRIPTOR_FIFO_SIZE                                    \
  0x24
#define mmOUTPUT_STREAM_DESCRIPTOR_FORMAT                                       \
  0x24
#define mmOUTPUT_STREAM_DESCRIPTOR_BDL_POINTER_LOWER_BASE_ADDRESS               \
  0x26
#define mmOUTPUT_STREAM_DESCRIPTOR_BDL_POINTER_UPPER_BASE_ADDRESS               \
  0x27
#define mmOUTPUT_STREAM_DESCRIPTOR_LINK_POSITION_IN_CURRENT_BUFFER_ALIAS        \
  0x821
#define mmAZENDPOINT_IMMEDIATE_COMMAND_OUTPUT_INTERFACE_INDEX                   \
  0x18
#define mmAZENDPOINT_IMMEDIATE_COMMAND_OUTPUT_INTERFACE_DATA                    \
  0x18
#define ixAZALIA_F2_CODEC_CONVERTER_PARAMETER_AUDIO_WIDGET_CAPABILITIES         \
  0x2f09
#define ixAZALIA_F2_CODEC_CONVERTER_PARAMETER_SUPPORTED_SIZE_RATES              \
  0x2f0a
#define ixAZALIA_F2_CODEC_CONVERTER_PARAMETER_STREAM_FORMATS                    \
  0x2f0b
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_CONVERTER_FORMAT                    \
  0x2200
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_CHANNEL_STREAM_ID                   \
  0x2706
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_DIGITAL_CONVERTER                   \
  0x270d
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_DIGITAL_CONVERTER_2                 \
  0x270e
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_DIGITAL_CONVERTER_3                 \
  0x273e
#define ixAZALIA_F2_CODEC_CONVERTER_STRIPE_CONTROL                              \
  0x2724
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_RAMP_RATE                           \
  0x2770
#define ixAZALIA_F2_CODEC_CONVERTER_CONTROL_GTC_EMBEDDING                       \
  0x2771
#define ixAZALIA_F2_CODEC_PIN_PARAMETER_AUDIO_WIDGET_CAPABILITIES               \
  0x3f09
#define ixAZALIA_F2_CODEC_PIN_PARAMETER_CAPABILITIES                            \
  0x3f0c
#define ixAZALIA_F2_CODEC_PIN_PARAMETER_CONNECTION_LIST_LENGTH                  \
  0x3f0e
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_CONNECTION_LIST_ENTRY            \
  0x3702
#define ixAZALIA_F2_CODEC_PIN_CONTROL_WIDGET_CONTROL                            \
  0x3707
#define ixAZALIA_F2_CODEC_PIN_CONTROL_UNSOLICITED_RESPONSE                      \
  0x3708
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_PIN_SENSE                        \
  0x3709
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT            \
  0x371c
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_2          \
  0x371d
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_3          \
  0x371e
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_4          \
  0x371f
#define ixAZALIA_F2_CODEC_PIN_CONTROL_RESPONSE_SPEAKER_ALLOCATION               \
  0x3770
#define ixAZALIA_F2_CODEC_PIN_CONTROL_CHANNEL_ALLOCATION                        \
  0x3771
#define ixAZALIA_F2_CODEC_PIN_CONTROL_DOWN_MIX_INFO                             \
  0x3772
#define ixAZALIA_F2_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR                          \
  0x3776
#define ixAZALIA_F2_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR_DATA                     \
  0x3776
#define ixAUDIO_DESCRIPTOR0                                                     \
  0x1
#define ixAUDIO_DESCRIPTOR1                                                     \
  0x2
#define ixAUDIO_DESCRIPTOR2                                                     \
  0x3
#define ixAUDIO_DESCRIPTOR3                                                     \
  0x4
#define ixAUDIO_DESCRIPTOR4                                                     \
  0x5
#define ixAUDIO_DESCRIPTOR5                                                     \
  0x6
#define ixAUDIO_DESCRIPTOR6                                                     \
  0x7
#define ixAUDIO_DESCRIPTOR7                                                     \
  0x8
#define ixAUDIO_DESCRIPTOR8                                                     \
  0x9
#define ixAUDIO_DESCRIPTOR9                                                     \
  0xa
#define ixAUDIO_DESCRIPTOR10                                                    \
  0xb
#define ixAUDIO_DESCRIPTOR11                                                    \
  0xc
#define ixAUDIO_DESCRIPTOR12                                                    \
  0xd
#define ixAUDIO_DESCRIPTOR13                                                    \
  0xe
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL01_ENABLE                     \
  0x3777
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL23_ENABLE                     \
  0x3778
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL45_ENABLE                     \
  0x3779
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL67_ENABLE                     \
  0x377a
#define ixAZALIA_F2_CODEC_PIN_CONTROL_LIPSYNC                                   \
  0x377b
#define ixAZALIA_F2_CODEC_PIN_CONTROL_HBR                                       \
  0x377c
#define ixAZALIA_F2_CODEC_PIN_CONTROL_AUDIO_SINK_INFO_INDEX                     \
  0x3780
#define ixAZALIA_F2_CODEC_PIN_CONTROL_AUDIO_SINK_INFO_DATA                      \
  0x3781
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MANUFACTURER_ID                           \
  0x0
#define ixAZALIA_F2_CODEC_PIN_CONTROL_PRODUCT_ID                                \
  0x1
#define ixAZALIA_F2_CODEC_PIN_CONTROL_SINK_DESCRIPTION_LEN                      \
  0x2
#define ixAZALIA_F2_CODEC_PIN_CONTROL_PORTID0                                   \
  0x3
#define ixAZALIA_F2_CODEC_PIN_CONTROL_PORTID1                                   \
  0x4
#define ixSINK_DESCRIPTION0                                                     \
  0x5
#define ixSINK_DESCRIPTION1                                                     \
  0x6
#define ixSINK_DESCRIPTION2                                                     \
  0x7
#define ixSINK_DESCRIPTION3                                                     \
  0x8
#define ixSINK_DESCRIPTION4                                                     \
  0x9
#define ixSINK_DESCRIPTION5                                                     \
  0xa
#define ixSINK_DESCRIPTION6                                                     \
  0xb
#define ixSINK_DESCRIPTION7                                                     \
  0xc
#define ixSINK_DESCRIPTION8                                                     \
  0xd
#define ixSINK_DESCRIPTION9                                                     \
  0xe
#define ixSINK_DESCRIPTION10                                                    \
  0xf
#define ixSINK_DESCRIPTION11                                                    \
  0x10
#define ixSINK_DESCRIPTION12                                                    \
  0x11
#define ixSINK_DESCRIPTION13                                                    \
  0x12
#define ixSINK_DESCRIPTION14                                                    \
  0x13
#define ixSINK_DESCRIPTION15                                                    \
  0x14
#define ixSINK_DESCRIPTION16                                                    \
  0x15
#define ixSINK_DESCRIPTION17                                                    \
  0x16
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL1_ENABLE                      \
  0x3785
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL3_ENABLE                      \
  0x3786
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL5_ENABLE                      \
  0x3787
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL7_ENABLE                      \
  0x3788
#define ixAZALIA_F2_CODEC_PIN_CONTROL_MULTICHANNEL_MODE                         \
  0x3789
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_0                             \
  0x378a
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_1                             \
  0x378b
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_2                             \
  0x378c
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_3                             \
  0x378d
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_4                             \
  0x378e
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_5                             \
  0x378f
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_6                             \
  0x3790
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_7                             \
  0x3791
#define ixAZALIA_F2_PIN_CONTROL_CODEC_CS_OVERRIDE_8                             \
  0x3792
#define ixAZALIA_F2_CODEC_PIN_ASSOCIATION_INFO                                  \
  0x3793
#define ixAZALIA_F2_CODEC_PIN_CONTROL_DIGITAL_OUTPUT_STATUS                     \
  0x3797
#define ixAZALIA_F2_CODEC_PIN_CONTROL_LPIB_SNAPSHOT_CONTROL                     \
  0x3798
#define ixAZALIA_F2_CODEC_PIN_CONTROL_LPIB                                      \
  0x3799
#define ixAZALIA_F2_CODEC_PIN_CONTROL_LPIB_TIMER_SNAPSHOT                       \
  0x379a
#define ixAZALIA_F2_CODEC_PIN_CONTROL_CODING_TYPE                               \
  0x379b
#define ixAZALIA_F2_CODEC_PIN_CONTROL_FORMAT_CHANGED                            \
  0x379c
#define ixAZALIA_F2_CODEC_PIN_CONTROL_WIRELESS_DISPLAY_IDENTIFICATION           \
  0x379d
#define ixAZALIA_F2_CODEC_PIN_CONTROL_REMOTE_KEEPALIVE                          \
  0x379e
#define mmAZALIA_CONTROLLER_CLOCK_GATING                                        \
  0x17e4
#define mmAZALIA_AUDIO_DTO                                                      \
  0x17e5
#define mmAZALIA_AUDIO_DTO_CONTROL                                              \
  0x17e6
#define mmAZALIA_SCLK_CONTROL                                                   \
  0x17e7
#define mmAZALIA_UNDERFLOW_FILLER_SAMPLE                                        \
  0x17e8
#define mmAZALIA_DATA_DMA_CONTROL                                               \
  0x17e9
#define mmAZALIA_BDL_DMA_CONTROL                                                \
  0x17ea
#define mmAZALIA_RIRB_AND_DP_CONTROL                                            \
  0x17eb
#define mmAZALIA_CORB_DMA_CONTROL                                               \
  0x17ec
#define mmAZALIA_APPLICATION_POSITION_IN_CYCLIC_BUFFER                          \
  0x17f3
#define mmAZALIA_CYCLIC_BUFFER_SYNC                                             \
  0x17f4
#define mmAZALIA_GLOBAL_CAPABILITIES                                            \
  0x17f5
#define mmAZALIA_OUTPUT_PAYLOAD_CAPABILITY                                      \
  0x17f6
#define mmAZALIA_OUTPUT_STREAM_ARBITER_CONTROL                                  \
  0x17f7
#define mmAZALIA_INPUT_PAYLOAD_CAPABILITY                                       \
  0x17f8
#define mmAZALIA_CONTROLLER_DEBUG                                               \
  0x17f9
#define mmAZALIA_MEM_PWR_CTRL                                                   \
  0x1810
#define mmAZALIA_MEM_PWR_STATUS                                                 \
  0x1811
#define mmDCI_PG_DEBUG_CONFIG                                                   \
  0x1812
#define mmAZALIA_INPUT_CRC0_CONTROL0                                            \
  0x17fb
#define mmAZALIA_INPUT_CRC0_CONTROL1                                            \
  0x17fc
#define mmAZALIA_INPUT_CRC0_CONTROL2                                            \
  0x17fd
#define mmAZALIA_INPUT_CRC0_CONTROL3                                            \
  0x17fe
#define mmAZALIA_INPUT_CRC0_RESULT                                              \
  0x17ff
#define ixAZALIA_INPUT_CRC0_CHANNEL0                                            \
  0x0
#define ixAZALIA_INPUT_CRC0_CHANNEL1                                            \
  0x1
#define ixAZALIA_INPUT_CRC0_CHANNEL2                                            \
  0x2
#define ixAZALIA_INPUT_CRC0_CHANNEL3                                            \
  0x3
#define ixAZALIA_INPUT_CRC0_CHANNEL4                                            \
  0x4
#define ixAZALIA_INPUT_CRC0_CHANNEL5                                            \
  0x5
#define ixAZALIA_INPUT_CRC0_CHANNEL6                                            \
  0x6
#define ixAZALIA_INPUT_CRC0_CHANNEL7                                            \
  0x7
#define mmAZALIA_INPUT_CRC1_CONTROL0                                            \
  0x1800
#define mmAZALIA_INPUT_CRC1_CONTROL1                                            \
  0x1801
#define mmAZALIA_INPUT_CRC1_CONTROL2                                            \
  0x1802
#define mmAZALIA_INPUT_CRC1_CONTROL3                                            \
  0x1803
#define mmAZALIA_INPUT_CRC1_RESULT                                              \
  0x1804
#define ixAZALIA_INPUT_CRC1_CHANNEL0                                            \
  0x0
#define ixAZALIA_INPUT_CRC1_CHANNEL1                                            \
  0x1
#define ixAZALIA_INPUT_CRC1_CHANNEL2                                            \
  0x2
#define ixAZALIA_INPUT_CRC1_CHANNEL3                                            \
  0x3
#define ixAZALIA_INPUT_CRC1_CHANNEL4                                            \
  0x4
#define ixAZALIA_INPUT_CRC1_CHANNEL5                                            \
  0x5
#define ixAZALIA_INPUT_CRC1_CHANNEL6                                            \
  0x6
#define ixAZALIA_INPUT_CRC1_CHANNEL7                                            \
  0x7
#define mmAZALIA_CRC0_CONTROL0                                                  \
  0x1805
#define mmAZALIA_CRC0_CONTROL1                                                  \
  0x1806
#define mmAZALIA_CRC0_CONTROL2                                                  \
  0x1807
#define mmAZALIA_CRC0_CONTROL3                                                  \
  0x1808
#define mmAZALIA_CRC0_RESULT                                                    \
  0x1809
#define ixAZALIA_CRC0_CHANNEL0                                                  \
  0x0
#define ixAZALIA_CRC0_CHANNEL1                                                  \
  0x1
#define ixAZALIA_CRC0_CHANNEL2                                                  \
  0x2
#define ixAZALIA_CRC0_CHANNEL3                                                  \
  0x3
#define ixAZALIA_CRC0_CHANNEL4                                                  \
  0x4
#define ixAZALIA_CRC0_CHANNEL5                                                  \
  0x5
#define ixAZALIA_CRC0_CHANNEL6                                                  \
  0x6
#define ixAZALIA_CRC0_CHANNEL7                                                  \
  0x7
#define mmAZALIA_CRC1_CONTROL0                                                  \
  0x180a
#define mmAZALIA_CRC1_CONTROL1                                                  \
  0x180b
#define mmAZALIA_CRC1_CONTROL2                                                  \
  0x180c
#define mmAZALIA_CRC1_CONTROL3                                                  \
  0x180d
#define mmAZALIA_CRC1_RESULT                                                    \
  0x180e
#define ixAZALIA_CRC1_CHANNEL0                                                  \
  0x0
#define ixAZALIA_CRC1_CHANNEL1                                                  \
  0x1
#define ixAZALIA_CRC1_CHANNEL2                                                  \
  0x2
#define ixAZALIA_CRC1_CHANNEL3                                                  \
  0x3
#define ixAZALIA_CRC1_CHANNEL4                                                  \
  0x4
#define ixAZALIA_CRC1_CHANNEL5                                                  \
  0x5
#define ixAZALIA_CRC1_CHANNEL6                                                  \
  0x6
#define ixAZALIA_CRC1_CHANNEL7                                                  \
  0x7
#define mmAZ_TEST_DEBUG_INDEX                                                   \
  0x181f
#define mmAZ_TEST_DEBUG_DATA                                                    \
  0x1820
#define mmAZALIA_STREAM_INDEX                                                   \
  0x1780
#define mmAZF0STREAM0_AZALIA_STREAM_INDEX                                       \
  0x1780
#define mmAZF0STREAM1_AZALIA_STREAM_INDEX                                       \
  0x1782
#define mmAZF0STREAM2_AZALIA_STREAM_INDEX                                       \
  0x1784
#define mmAZF0STREAM3_AZALIA_STREAM_INDEX                                       \
  0x1786
#define mmAZF0STREAM4_AZALIA_STREAM_INDEX                                       \
  0x1788
#define mmAZF0STREAM5_AZALIA_STREAM_INDEX                                       \
  0x178a
#define mmAZF0STREAM6_AZALIA_STREAM_INDEX                                       \
  0x178c
#define mmAZF0STREAM7_AZALIA_STREAM_INDEX                                       \
  0x178e
#define mmAZF0STREAM8_AZALIA_STREAM_INDEX                                       \
  0x59c0
#define mmAZF0STREAM9_AZALIA_STREAM_INDEX                                       \
  0x59c2
#define mmAZF0STREAM10_AZALIA_STREAM_INDEX                                      \
  0x59c4
#define mmAZF0STREAM11_AZALIA_STREAM_INDEX                                      \
  0x59c6
#define mmAZF0STREAM12_AZALIA_STREAM_INDEX                                      \
  0x59c8
#define mmAZF0STREAM13_AZALIA_STREAM_INDEX                                      \
  0x59ca
#define mmAZF0STREAM14_AZALIA_STREAM_INDEX                                      \
  0x59cc
#define mmAZF0STREAM15_AZALIA_STREAM_INDEX                                      \
  0x59ce
#define mmAZALIA_STREAM_DATA                                                    \
  0x1781
#define mmAZF0STREAM0_AZALIA_STREAM_DATA                                        \
  0x1781
#define mmAZF0STREAM1_AZALIA_STREAM_DATA                                        \
  0x1783
#define mmAZF0STREAM2_AZALIA_STREAM_DATA                                        \
  0x1785
#define mmAZF0STREAM3_AZALIA_STREAM_DATA                                        \
  0x1787
#define mmAZF0STREAM4_AZALIA_STREAM_DATA                                        \
  0x1789
#define mmAZF0STREAM5_AZALIA_STREAM_DATA                                        \
  0x178b
#define mmAZF0STREAM6_AZALIA_STREAM_DATA                                        \
  0x178d
#define mmAZF0STREAM7_AZALIA_STREAM_DATA                                        \
  0x178f
#define mmAZF0STREAM8_AZALIA_STREAM_DATA                                        \
  0x59c1
#define mmAZF0STREAM9_AZALIA_STREAM_DATA                                        \
  0x59c3
#define mmAZF0STREAM10_AZALIA_STREAM_DATA                                       \
  0x59c5
#define mmAZF0STREAM11_AZALIA_STREAM_DATA                                       \
  0x59c7
#define mmAZF0STREAM12_AZALIA_STREAM_DATA                                       \
  0x59c9
#define mmAZF0STREAM13_AZALIA_STREAM_DATA                                       \
  0x59cb
#define mmAZF0STREAM14_AZALIA_STREAM_DATA                                       \
  0x59cd
#define mmAZF0STREAM15_AZALIA_STREAM_DATA                                       \
  0x59cf
#define ixAZALIA_FIFO_SIZE_CONTROL                                              \
  0x0
#define ixAZALIA_LATENCY_COUNTER_CONTROL                                        \
  0x1
#define ixAZALIA_WORSTCASE_LATENCY_COUNT                                        \
  0x2
#define ixAZALIA_CUMULATIVE_LATENCY_COUNT                                       \
  0x3
#define ixAZALIA_CUMULATIVE_REQUEST_COUNT                                       \
  0x4
#define ixAZALIA_STREAM_DEBUG                                                   \
  0x5
#define mmAZALIA_F0_CODEC_ENDPOINT_INDEX                                        \
  0x17a8
#define mmAZF0ENDPOINT0_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17a8
#define mmAZF0ENDPOINT1_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17ac
#define mmAZF0ENDPOINT2_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17b0
#define mmAZF0ENDPOINT3_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17b4
#define mmAZF0ENDPOINT4_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17b8
#define mmAZF0ENDPOINT5_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17bc
#define mmAZF0ENDPOINT6_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17c0
#define mmAZF0ENDPOINT7_AZALIA_F0_CODEC_ENDPOINT_INDEX                          \
  0x17c4
#define mmAZALIA_F0_CODEC_ENDPOINT_DATA                                         \
  0x17a9
#define mmAZF0ENDPOINT0_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17a9
#define mmAZF0ENDPOINT1_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17ad
#define mmAZF0ENDPOINT2_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17b1
#define mmAZF0ENDPOINT3_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17b5
#define mmAZF0ENDPOINT4_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17b9
#define mmAZF0ENDPOINT5_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17bd
#define mmAZF0ENDPOINT6_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17c1
#define mmAZF0ENDPOINT7_AZALIA_F0_CODEC_ENDPOINT_DATA                           \
  0x17c5
#define ixAZALIA_F0_CODEC_CONVERTER_PIN_DEBUG                                   \
  0x0
#define ixAZALIA_F0_CODEC_CONVERTER_PARAMETER_AUDIO_WIDGET_CAPABILITIES         \
  0x1
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_CONVERTER_FORMAT                    \
  0x2
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_CHANNEL_STREAM_ID                   \
  0x3
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_DIGITAL_CONVERTER                   \
  0x4
#define ixAZALIA_F0_CODEC_CONVERTER_PARAMETER_STREAM_FORMATS                    \
  0x5
#define ixAZALIA_F0_CODEC_CONVERTER_PARAMETER_SUPPORTED_SIZE_RATES              \
  0x6
#define ixAZALIA_F0_CODEC_CONVERTER_STRIPE_CONTROL                              \
  0x7
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_RAMP_RATE                           \
  0x8
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_GTC_EMBEDDING                       \
  0x9
#define ixAZALIA_F0_CODEC_CONVERTER_CONTROL_GTC_OFFSET_DEBUG                    \
  0xa
#define ixAZALIA_F0_CODEC_CONVERTER_GTC_COUNTER_DELTA                           \
  0xc
#define ixAZALIA_F0_CODEC_CONVERTER_GTC_COUNTER_DELTA_MIN                       \
  0xd
#define ixAZALIA_F0_CODEC_CONVERTER_GTC_COUNTER_DELTA_MAX                       \
  0xe
#define ixAZALIA_F0_CODEC_PIN_PARAMETER_AUDIO_WIDGET_CAPABILITIES               \
  0x20
#define ixAZALIA_F0_CODEC_PIN_PARAMETER_CAPABILITIES                            \
  0x21
#define ixAZALIA_F0_CODEC_PIN_CONTROL_UNSOLICITED_RESPONSE                      \
  0x22
#define ixAZALIA_F0_CODEC_PIN_CONTROL_RESPONSE_PIN_SENSE                        \
  0x23
#define ixAZALIA_F0_CODEC_PIN_CONTROL_WIDGET_CONTROL                            \
  0x24
#define ixAZALIA_F0_CODEC_PIN_CONTROL_CHANNEL_SPEAKER                           \
  0x25
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR0                         \
  0x28
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR1                         \
  0x29
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR2                         \
  0x2a
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR3                         \
  0x2b
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR4                         \
  0x2c
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR5                         \
  0x2d
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR6                         \
  0x2e
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR7                         \
  0x2f
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR8                         \
  0x30
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR9                         \
  0x31
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR10                        \
  0x32
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR11                        \
  0x33
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR12                        \
  0x34
#define ixAZALIA_F0_CODEC_PIN_CONTROL_AUDIO_DESCRIPTOR13                        \
  0x35
#define ixAZALIA_F0_CODEC_PIN_CONTROL_MULTICHANNEL_ENABLE                       \
  0x36
#define ixAZALIA_F0_CODEC_PIN_CONTROL_MULTICHANNEL_ENABLE2                      \
  0x57
#define ixAZALIA_F0_CODEC_PIN_CONTROL_MULTICHANNEL_MODE                         \
  0x58
#define ixAZALIA_F0_CODEC_PIN_CONTROL_RESPONSE_LIPSYNC                          \
  0x37
#define ixAZALIA_F0_CODEC_PIN_CONTROL_RESPONSE_HBR                              \
  0x38
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO0                                \
  0x3a
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO1                                \
  0x3b
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO2                                \
  0x3c
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO3                                \
  0x3d
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO4                                \
  0x3e
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO5                                \
  0x3f
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO6                                \
  0x40
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO7                                \
  0x41
#define ixAZALIA_F0_CODEC_PIN_CONTROL_SINK_INFO8                                \
  0x42
#define ixAZALIA_F0_CODEC_PIN_CONTROL_HOT_PLUG_CONTROL                          \
  0x54
#define ixAZALIA_F0_CODEC_PIN_CONTROL_UNSOLICITED_RESPONSE_FORCE                \
  0x55
#define ixAZALIA_F0_CODEC_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT            \
  0x56
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_0                             \
  0x59
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_1                             \
  0x5a
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_2                             \
  0x5b
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_3                             \
  0x5c
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_4                             \
  0x5d
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_5                             \
  0x5e
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_6                             \
  0x5f
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_7                             \
  0x60
#define ixAZALIA_F0_PIN_CONTROL_CODEC_CS_OVERRIDE_8                             \
  0x61
#define ixAZALIA_F0_CODEC_PIN_ASSOCIATION_INFO                                  \
  0x62
#define ixAZALIA_F0_CODEC_PIN_CONTROL_DIGITAL_OUTPUT_STATUS                     \
  0x63
#define ixAZALIA_F0_CODEC_PIN_CONTROL_LPIB_SNAPSHOT_CONTROL                     \
  0x64
#define ixAZALIA_F0_CODEC_PIN_CONTROL_LPIB                                      \
  0x65
#define ixAZALIA_F0_CODEC_PIN_CONTROL_LPIB_TIMER_SNAPSHOT                       \
  0x66
#define ixAZALIA_F0_CODEC_PIN_CONTROL_CODING_TYPE                               \
  0x67
#define ixAZALIA_F0_CODEC_PIN_CONTROL_FORMAT_CHANGED                            \
  0x68
#define ixAZALIA_F0_CODEC_PIN_CONTROL_WIRELESS_DISPLAY_IDENTIFICATION           \
  0x69
#define ixAZALIA_F0_CODEC_PIN_CONTROL_REMOTE_KEEPALIVE                          \
  0x6a
#define ixAZALIA_F0_AUDIO_ENABLE_STATUS                                         \
  0x6b
#define ixAZALIA_F0_AUDIO_ENABLED_INT_STATUS                                    \
  0x6c
#define ixAZALIA_F0_AUDIO_DISABLED_INT_STATUS                                   \
  0x6d
#define ixAZALIA_F0_AUDIO_FORMAT_CHANGED_INT_STATUS                             \
  0x6e
#define mmAZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX                                  \
  0x59d4
#define mmAZF0INPUTENDPOINT0_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59d4
#define mmAZF0INPUTENDPOINT1_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59d8
#define mmAZF0INPUTENDPOINT2_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59dc
#define mmAZF0INPUTENDPOINT3_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59e0
#define mmAZF0INPUTENDPOINT4_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59e4
#define mmAZF0INPUTENDPOINT5_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59e8
#define mmAZF0INPUTENDPOINT6_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59ec
#define mmAZF0INPUTENDPOINT7_AZALIA_F0_CODEC_INPUT_ENDPOINT_INDEX               \
  0x59f0
#define mmAZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                                   \
  0x59d5
#define mmAZF0INPUTENDPOINT0_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59d5
#define mmAZF0INPUTENDPOINT1_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59d9
#define mmAZF0INPUTENDPOINT2_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59dd
#define mmAZF0INPUTENDPOINT3_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59e1
#define mmAZF0INPUTENDPOINT4_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59e5
#define mmAZF0INPUTENDPOINT5_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59e9
#define mmAZF0INPUTENDPOINT6_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59ed
#define mmAZF0INPUTENDPOINT7_AZALIA_F0_CODEC_INPUT_ENDPOINT_DATA                \
  0x59f1
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_PIN_DEBUG                             \
  0x0
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_PARAMETER_AUDIO_WIDGET_CAPABILITIES   \
  0x1
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_CONTROL_CONVERTER_FORMAT              \
  0x2
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_CONTROL_CHANNEL_STREAM_ID             \
  0x3
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_CONTROL_DIGITAL_CONVERTER             \
  0x4
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_PARAMETER_STREAM_FORMATS              \
  0x5
#define ixAZALIA_F0_CODEC_INPUT_CONVERTER_PARAMETER_SUPPORTED_SIZE_RATES        \
  0x6
#define ixAZALIA_F0_CODEC_INPUT_PIN_PARAMETER_AUDIO_WIDGET_CAPABILITIES         \
  0x20
#define ixAZALIA_F0_CODEC_INPUT_PIN_PARAMETER_CAPABILITIES                      \
  0x21
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_UNSOLICITED_RESPONSE                \
  0x22
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_RESPONSE_INPUT_PIN_SENSE            \
  0x23
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_WIDGET_CONTROL                      \
  0x24
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL_ENABLE                 \
  0x36
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL_ENABLE2                \
  0x37
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_RESPONSE_HBR                        \
  0x38
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_CHANNEL_ALLOCATION                  \
  0x53
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_HOT_PLUG_CONTROL                    \
  0x54
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_UNSOLICITED_RESPONSE_FORCE          \
  0x55
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT      \
  0x56
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_INPUT_STATUS_CONTROL                \
  0x67
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_INFOFRAME                           \
  0x68
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_LPIB_SNAPSHOT_CONTROL               \
  0x64
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_LPIB                                \
  0x65
#define ixAZALIA_F0_CODEC_INPUT_PIN_CONTROL_LPIB_TIMER_SNAPSHOT                 \
  0x66
#define mmAZENDPOINT_IMMEDIATE_COMMAND_INPUT_INTERFACE_INDEX                    \
  0x18
#define mmAZENDPOINT_IMMEDIATE_COMMAND_INPUT_INTERFACE_DATA                     \
  0x18
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_PARAMETER_AUDIO_WIDGET_CAPABILITIES   \
  0x6f09
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_PARAMETER_SUPPORTED_SIZE_RATES        \
  0x6f0a
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_PARAMETER_STREAM_FORMATS              \
  0x6f0b
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_CONTROL_CONVERTER_FORMAT              \
  0x6200
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_CONTROL_CHANNEL_STREAM_ID             \
  0x6706
#define ixAZALIA_F2_CODEC_INPUT_CONVERTER_CONTROL_DIGITAL_CONVERTER             \
  0x670d
#define ixAZALIA_F2_CODEC_INPUT_PIN_PARAMETER_AUDIO_WIDGET_CAPABILITIES         \
  0x7f09
#define ixAZALIA_F2_CODEC_INPUT_PIN_PARAMETER_CAPABILITIES                      \
  0x7f0c
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_WIDGET_CONTROL                      \
  0x7707
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_UNSOLICITED_RESPONSE                \
  0x7708
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_RESPONSE_PIN_SENSE                  \
  0x7709
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT      \
  0x771c
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_2    \
  0x771d
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_3    \
  0x771e
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_RESPONSE_CONFIGURATION_DEFAULT_4    \
  0x771f
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL0_ENABLE                \
  0x7777
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL1_ENABLE                \
  0x7785
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL2_ENABLE                \
  0x7778
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL3_ENABLE                \
  0x7786
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_HBR                                 \
  0x777c
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL4_ENABLE                \
  0x7779
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL5_ENABLE                \
  0x7787
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL6_ENABLE                \
  0x777a
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_MULTICHANNEL7_ENABLE                \
  0x7788
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_CHANNEL_ALLOCATION                  \
  0x7771
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_INPUT_STATUS_CONTROL                \
  0x779b
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_INFOFRAME                           \
  0x779c
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_CHANNEL_STATUS_L                    \
  0x779d
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_CHANNEL_STATUS_H                    \
  0x779e
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_LPIB_SNAPSHOT_CONTROL               \
  0x7798
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_LPIB                                \
  0x7799
#define ixAZALIA_F2_CODEC_INPUT_PIN_CONTROL_LPIB_TIMER_SNAPSHOT                 \
  0x779a
#define mmBLND_CONTROL                                                          \
  0x1b6d
#define mmBLND0_BLND_CONTROL                                                    \
  0x1b6d
#define mmBLND1_BLND_CONTROL                                                    \
  0x1d6d
#define mmBLND2_BLND_CONTROL                                                    \
  0x1f6d
#define mmBLND3_BLND_CONTROL                                                    \
  0x416d
#define mmBLND4_BLND_CONTROL                                                    \
  0x436d
#define mmBLND5_BLND_CONTROL                                                    \
  0x456d
#define mmBLND_SM_CONTROL2                                                      \
  0x1b6e
#define mmBLND0_BLND_SM_CONTROL2                                                \
  0x1b6e
#define mmBLND1_BLND_SM_CONTROL2                                                \
  0x1d6e
#define mmBLND2_BLND_SM_CONTROL2                                                \
  0x1f6e
#define mmBLND3_BLND_SM_CONTROL2                                                \
  0x416e
#define mmBLND4_BLND_SM_CONTROL2                                                \
  0x436e
#define mmBLND5_BLND_SM_CONTROL2                                                \
  0x456e
#define mmBLND_CONTROL2                                                         \
  0x1b6f
#define mmBLND0_BLND_CONTROL2                                                   \
  0x1b6f
#define mmBLND1_BLND_CONTROL2                                                   \
  0x1d6f
#define mmBLND2_BLND_CONTROL2                                                   \
  0x1f6f
#define mmBLND3_BLND_CONTROL2                                                   \
  0x416f
#define mmBLND4_BLND_CONTROL2                                                   \
  0x436f
#define mmBLND5_BLND_CONTROL2                                                   \
  0x456f
#define mmBLND_UPDATE                                                           \
  0x1b70
#define mmBLND0_BLND_UPDATE                                                     \
  0x1b70
#define mmBLND1_BLND_UPDATE                                                     \
  0x1d70
#define mmBLND2_BLND_UPDATE                                                     \
  0x1f70
#define mmBLND3_BLND_UPDATE                                                     \
  0x4170
#define mmBLND4_BLND_UPDATE                                                     \
  0x4370
#define mmBLND5_BLND_UPDATE                                                     \
  0x4570
#define mmBLND_UNDERFLOW_INTERRUPT                                              \
  0x1b71
#define mmBLND0_BLND_UNDERFLOW_INTERRUPT                                        \
  0x1b71
#define mmBLND1_BLND_UNDERFLOW_INTERRUPT                                        \
  0x1d71
#define mmBLND2_BLND_UNDERFLOW_INTERRUPT                                        \
  0x1f71
#define mmBLND3_BLND_UNDERFLOW_INTERRUPT                                        \
  0x4171
#define mmBLND4_BLND_UNDERFLOW_INTERRUPT                                        \
  0x4371
#define mmBLND5_BLND_UNDERFLOW_INTERRUPT                                        \
  0x4571
#define mmBLND_V_UPDATE_LOCK                                                    \
  0x1b73
#define mmBLND0_BLND_V_UPDATE_LOCK                                              \
  0x1b73
#define mmBLND1_BLND_V_UPDATE_LOCK                                              \
  0x1d73
#define mmBLND2_BLND_V_UPDATE_LOCK                                              \
  0x1f73
#define mmBLND3_BLND_V_UPDATE_LOCK                                              \
  0x4173
#define mmBLND4_BLND_V_UPDATE_LOCK                                              \
  0x4373
#define mmBLND5_BLND_V_UPDATE_LOCK                                              \
  0x4573
#define mmBLND_REG_UPDATE_STATUS                                                \
  0x1b77
#define mmBLND0_BLND_REG_UPDATE_STATUS                                          \
  0x1b77
#define mmBLND1_BLND_REG_UPDATE_STATUS                                          \
  0x1d77
#define mmBLND2_BLND_REG_UPDATE_STATUS                                          \
  0x1f77
#define mmBLND3_BLND_REG_UPDATE_STATUS                                          \
  0x4177
#define mmBLND4_BLND_REG_UPDATE_STATUS                                          \
  0x4377
#define mmBLND5_BLND_REG_UPDATE_STATUS                                          \
  0x4577
#define mmBLND_DEBUG                                                            \
  0x1b74
#define mmBLND0_BLND_DEBUG                                                      \
  0x1b74
#define mmBLND1_BLND_DEBUG                                                      \
  0x1d74
#define mmBLND2_BLND_DEBUG                                                      \
  0x1f74
#define mmBLND3_BLND_DEBUG                                                      \
  0x4174
#define mmBLND4_BLND_DEBUG                                                      \
  0x4374
#define mmBLND5_BLND_DEBUG                                                      \
  0x4574
#define mmBLND_TEST_DEBUG_INDEX                                                 \
  0x1b75
#define mmBLND0_BLND_TEST_DEBUG_INDEX                                           \
  0x1b75
#define mmBLND1_BLND_TEST_DEBUG_INDEX                                           \
  0x1d75
#define mmBLND2_BLND_TEST_DEBUG_INDEX                                           \
  0x1f75
#define mmBLND3_BLND_TEST_DEBUG_INDEX                                           \
  0x4175
#define mmBLND4_BLND_TEST_DEBUG_INDEX                                           \
  0x4375
#define mmBLND5_BLND_TEST_DEBUG_INDEX                                           \
  0x4575
#define mmBLND_TEST_DEBUG_DATA                                                  \
  0x1b76
#define mmBLND0_BLND_TEST_DEBUG_DATA                                            \
  0x1b76
#define mmBLND1_BLND_TEST_DEBUG_DATA                                            \
  0x1d76
#define mmBLND2_BLND_TEST_DEBUG_DATA                                            \
  0x1f76
#define mmBLND3_BLND_TEST_DEBUG_DATA                                            \
  0x4176
#define mmBLND4_BLND_TEST_DEBUG_DATA                                            \
  0x4376
#define mmBLND5_BLND_TEST_DEBUG_DATA                                            \
  0x4576
#define mmWB_ENABLE                                                             \
  0x5e18
#define mmWB_EC_CONFIG                                                          \
  0x5e19
#define mmCNV_MODE                                                              \
  0x5e1a
#define mmCNV_WINDOW_START                                                      \
  0x5e1b
#define mmCNV_WINDOW_SIZE                                                       \
  0x5e1c
#define mmCNV_UPDATE                                                            \
  0x5e1d
#define mmCNV_SOURCE_SIZE                                                       \
  0x5e1e
#define mmCNV_CSC_CONTROL                                                       \
  0x5e1f
#define mmCNV_CSC_C11_C12                                                       \
  0x5e20
#define mmCNV_CSC_C13_C14                                                       \
  0x5e21
#define mmCNV_CSC_C21_C22                                                       \
  0x5e22
#define mmCNV_CSC_C23_C24                                                       \
  0x5e23
#define mmCNV_CSC_C31_C32                                                       \
  0x5e24
#define mmCNV_CSC_C33_C34                                                       \
  0x5e25
#define mmCNV_CSC_ROUND_OFFSET_R                                                \
  0x5e26
#define mmCNV_CSC_ROUND_OFFSET_G                                                \
  0x5e27
#define mmCNV_CSC_ROUND_OFFSET_B                                                \
  0x5e28
#define mmCNV_CSC_CLAMP_R                                                       \
  0x5e29
#define mmCNV_CSC_CLAMP_G                                                       \
  0x5e2a
#define mmCNV_CSC_CLAMP_B                                                       \
  0x5e2b
#define mmCNV_TEST_CNTL                                                         \
  0x5e2c
#define mmCNV_TEST_CRC_RED                                                      \
  0x5e2d
#define mmCNV_TEST_CRC_GREEN                                                    \
  0x5e2e
#define mmCNV_TEST_CRC_BLUE                                                     \
  0x5e2f
#define mmWB_DEBUG_CTRL                                                         \
  0x5e30
#define mmWB_DBG_MODE                                                           \
  0x5e31
#define mmWB_HW_DEBUG                                                           \
  0x5e32
#define mmCNV_INPUT_SELECT                                                      \
  0x5e33
#define mmWB_SOFT_RESET                                                         \
  0x5e36
#define mmWB_WARM_UP_MODE_CTL1                                                  \
  0x5e37
#define mmWB_WARM_UP_MODE_CTL2                                                  \
  0x5e38
#define mmCNV_TEST_DEBUG_INDEX                                                  \
  0x5e34
#define mmCNV_TEST_DEBUG_DATA                                                   \
  0x5e35
#define mmDCFE_CLOCK_CONTROL                                                    \
  0x1b00
#define mmDCFE0_DCFE_CLOCK_CONTROL                                              \
  0x1b00
#define mmDCFE1_DCFE_CLOCK_CONTROL                                              \
  0x1d00
#define mmDCFE2_DCFE_CLOCK_CONTROL                                              \
  0x1f00
#define mmDCFE3_DCFE_CLOCK_CONTROL                                              \
  0x4100
#define mmDCFE4_DCFE_CLOCK_CONTROL                                              \
  0x4300
#define mmDCFE5_DCFE_CLOCK_CONTROL                                              \
  0x4500
#define mmDCFE_SOFT_RESET                                                       \
  0x1b01
#define mmDCFE0_DCFE_SOFT_RESET                                                 \
  0x1b01
#define mmDCFE1_DCFE_SOFT_RESET                                                 \
  0x1d01
#define mmDCFE2_DCFE_SOFT_RESET                                                 \
  0x1f01
#define mmDCFE3_DCFE_SOFT_RESET                                                 \
  0x4101
#define mmDCFE4_DCFE_SOFT_RESET                                                 \
  0x4301
#define mmDCFE5_DCFE_SOFT_RESET                                                 \
  0x4501
#define mmDCFE_DBG_CONFIG                                                       \
  0x1b02
#define mmDCFE0_DCFE_DBG_CONFIG                                                 \
  0x1b02
#define mmDCFE1_DCFE_DBG_CONFIG                                                 \
  0x1d02
#define mmDCFE2_DCFE_DBG_CONFIG                                                 \
  0x1f02
#define mmDCFE3_DCFE_DBG_CONFIG                                                 \
  0x4102
#define mmDCFE4_DCFE_DBG_CONFIG                                                 \
  0x4302
#define mmDCFE5_DCFE_DBG_CONFIG                                                 \
  0x4502
#define mmDCFE_MEM_PWR_CTRL                                                     \
  0x1b03
#define mmDCFE0_DCFE_MEM_PWR_CTRL                                               \
  0x1b03
#define mmDCFE1_DCFE_MEM_PWR_CTRL                                               \
  0x1d03
#define mmDCFE2_DCFE_MEM_PWR_CTRL                                               \
  0x1f03
#define mmDCFE3_DCFE_MEM_PWR_CTRL                                               \
  0x4103
#define mmDCFE4_DCFE_MEM_PWR_CTRL                                               \
  0x4303
#define mmDCFE5_DCFE_MEM_PWR_CTRL                                               \
  0x4503
#define mmDCFE_MEM_PWR_CTRL2                                                    \
  0x1b04
#define mmDCFE0_DCFE_MEM_PWR_CTRL2                                              \
  0x1b04
#define mmDCFE1_DCFE_MEM_PWR_CTRL2                                              \
  0x1d04
#define mmDCFE2_DCFE_MEM_PWR_CTRL2                                              \
  0x1f04
#define mmDCFE3_DCFE_MEM_PWR_CTRL2                                              \
  0x4104
#define mmDCFE4_DCFE_MEM_PWR_CTRL2                                              \
  0x4304
#define mmDCFE5_DCFE_MEM_PWR_CTRL2                                              \
  0x4504
#define mmDCFE_MEM_PWR_STATUS                                                   \
  0x1b05
#define mmDCFE0_DCFE_MEM_PWR_STATUS                                             \
  0x1b05
#define mmDCFE1_DCFE_MEM_PWR_STATUS                                             \
  0x1d05
#define mmDCFE2_DCFE_MEM_PWR_STATUS                                             \
  0x1f05
#define mmDCFE3_DCFE_MEM_PWR_STATUS                                             \
  0x4105
#define mmDCFE4_DCFE_MEM_PWR_STATUS                                             \
  0x4305
#define mmDCFE5_DCFE_MEM_PWR_STATUS                                             \
  0x4505
#define mmDCFE_MISC                                                             \
  0x1b06
#define mmDCFE0_DCFE_MISC                                                       \
  0x1b06
#define mmDCFE1_DCFE_MISC                                                       \
  0x1d06
#define mmDCFE2_DCFE_MISC                                                       \
  0x1f06
#define mmDCFE3_DCFE_MISC                                                       \
  0x4106
#define mmDCFE4_DCFE_MISC                                                       \
  0x4306
#define mmDCFE5_DCFE_MISC                                                       \
  0x4506
#define mmDCFE_FLUSH                                                            \
  0x1b07
#define mmDCFE0_DCFE_FLUSH                                                      \
  0x1b07
#define mmDCFE1_DCFE_FLUSH                                                      \
  0x1d07
#define mmDCFE2_DCFE_FLUSH                                                      \
  0x1f07
#define mmDCFE3_DCFE_FLUSH                                                      \
  0x4107
#define mmDCFE4_DCFE_FLUSH                                                      \
  0x4307
#define mmDCFE5_DCFE_FLUSH                                                      \
  0x4507
#define mmDCFEV_CLOCK_CONTROL                                                   \
  0x46f4
#define mmDCFEV0_DCFEV_CLOCK_CONTROL                                            \
  0x46f4
#define mmDCFEV1_DCFEV_CLOCK_CONTROL                                            \
  0x98f4
#define mmDCFEV_SOFT_RESET                                                      \
  0x46f5
#define mmDCFEV0_DCFEV_SOFT_RESET                                               \
  0x46f5
#define mmDCFEV1_DCFEV_SOFT_RESET                                               \
  0x98f5
#define mmDCFEV_DMIFV_CLOCK_CONTROL                                             \
  0x46f6
#define mmDCFEV0_DCFEV_DMIFV_CLOCK_CONTROL                                      \
  0x46f6
#define mmDCFEV1_DCFEV_DMIFV_CLOCK_CONTROL                                      \
  0x98f6
#define mmDCFEV_DBG_CONFIG                                                      \
  0x46f7
#define mmDCFEV0_DCFEV_DBG_CONFIG                                               \
  0x46f7
#define mmDCFEV1_DCFEV_DBG_CONFIG                                               \
  0x98f7
#define mmDCFEV_DMIFV_MEM_PWR_CTRL                                              \
  0x46f8
#define mmDCFEV0_DCFEV_DMIFV_MEM_PWR_CTRL                                       \
  0x46f8
#define mmDCFEV1_DCFEV_DMIFV_MEM_PWR_CTRL                                       \
  0x98f8
#define mmDCFEV_DMIFV_MEM_PWR_STATUS                                            \
  0x46f9
#define mmDCFEV0_DCFEV_DMIFV_MEM_PWR_STATUS                                     \
  0x46f9
#define mmDCFEV1_DCFEV_DMIFV_MEM_PWR_STATUS                                     \
  0x98f9
#define mmDCFEV_MEM_PWR_CTRL                                                    \
  0x46fa
#define mmDCFEV0_DCFEV_MEM_PWR_CTRL                                             \
  0x46fa
#define mmDCFEV1_DCFEV_MEM_PWR_CTRL                                             \
  0x98fa
#define mmDCFEV_MEM_PWR_CTRL2                                                   \
  0x46fb
#define mmDCFEV0_DCFEV_MEM_PWR_CTRL2                                            \
  0x46fb
#define mmDCFEV1_DCFEV_MEM_PWR_CTRL2                                            \
  0x98fb
#define mmDCFEV_MEM_PWR_STATUS                                                  \
  0x46fc
#define mmDCFEV0_DCFEV_MEM_PWR_STATUS                                           \
  0x46fc
#define mmDCFEV1_DCFEV_MEM_PWR_STATUS                                           \
  0x98fc
#define mmDCFEV_L_FLUSH                                                         \
  0x46ff
#define mmDCFEV0_DCFEV_L_FLUSH                                                  \
  0x46ff
#define mmDCFEV1_DCFEV_L_FLUSH                                                  \
  0x98ff
#define mmDCFEV_C_FLUSH                                                         \
  0x4700
#define mmDCFEV0_DCFEV_C_FLUSH                                                  \
  0x4700
#define mmDCFEV1_DCFEV_C_FLUSH                                                  \
  0x9900
#define mmDCFEV_DMIFV_DEBUG                                                     \
  0x46fd
#define mmDCFEV0_DCFEV_DMIFV_DEBUG                                              \
  0x46fd
#define mmDCFEV1_DCFEV_DMIFV_DEBUG                                              \
  0x98fd
#define mmDCFEV_MISC                                                            \
  0x46fe
#define mmDCFEV0_DCFEV_MISC                                                     \
  0x46fe
#define mmDCFEV1_DCFEV_MISC                                                     \
  0x98fe
#define mmDC_HPD_INT_STATUS                                                     \
  0x1898
#define mmHPD0_DC_HPD_INT_STATUS                                                \
  0x1898
#define mmHPD1_DC_HPD_INT_STATUS                                                \
  0x18a0
#define mmHPD2_DC_HPD_INT_STATUS                                                \
  0x18a8
#define mmHPD3_DC_HPD_INT_STATUS                                                \
  0x18b0
#define mmHPD4_DC_HPD_INT_STATUS                                                \
  0x18b8
#define mmHPD5_DC_HPD_INT_STATUS                                                \
  0x18c0
#define mmDC_HPD_INT_CONTROL                                                    \
  0x1899
#define mmHPD0_DC_HPD_INT_CONTROL                                               \
  0x1899
#define mmHPD1_DC_HPD_INT_CONTROL                                               \
  0x18a1
#define mmHPD2_DC_HPD_INT_CONTROL                                               \
  0x18a9
#define mmHPD3_DC_HPD_INT_CONTROL                                               \
  0x18b1
#define mmHPD4_DC_HPD_INT_CONTROL                                               \
  0x18b9
#define mmHPD5_DC_HPD_INT_CONTROL                                               \
  0x18c1
#define mmDC_HPD_CONTROL                                                        \
  0x189a
#define mmHPD0_DC_HPD_CONTROL                                                   \
  0x189a
#define mmHPD1_DC_HPD_CONTROL                                                   \
  0x18a2
#define mmHPD2_DC_HPD_CONTROL                                                   \
  0x18aa
#define mmHPD3_DC_HPD_CONTROL                                                   \
  0x18b2
#define mmHPD4_DC_HPD_CONTROL                                                   \
  0x18ba
#define mmHPD5_DC_HPD_CONTROL                                                   \
  0x18c2
#define mmDC_HPD_FAST_TRAIN_CNTL                                                \
  0x189b
#define mmHPD0_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x189b
#define mmHPD1_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x18a3
#define mmHPD2_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x18ab
#define mmHPD3_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x18b3
#define mmHPD4_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x18bb
#define mmHPD5_DC_HPD_FAST_TRAIN_CNTL                                           \
  0x18c3
#define mmDC_HPD_TOGGLE_FILT_CNTL                                               \
  0x189c
#define mmHPD0_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x189c
#define mmHPD1_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x18a4
#define mmHPD2_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x18ac
#define mmHPD3_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x18b4
#define mmHPD4_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x18bc
#define mmHPD5_DC_HPD_TOGGLE_FILT_CNTL                                          \
  0x18c4
#define mmDCO_SCRATCH0                                                          \
  0x184e
#define mmDCO_SCRATCH1                                                          \
  0x184f
#define mmDCO_SCRATCH2                                                          \
  0x1850
#define mmDCO_SCRATCH3                                                          \
  0x1851
#define mmDCO_SCRATCH4                                                          \
  0x1852
#define mmDCO_SCRATCH5                                                          \
  0x1853
#define mmDCO_SCRATCH6                                                          \
  0x1854
#define mmDCO_SCRATCH7                                                          \
  0x1855
#define mmDCE_VCE_CONTROL                                                       \
  0x1856
#define mmDISP_INTERRUPT_STATUS                                                 \
  0x1857
#define mmDISP_INTERRUPT_STATUS_CONTINUE                                        \
  0x1858
#define mmDISP_INTERRUPT_STATUS_CONTINUE2                                       \
  0x1859
#define mmDISP_INTERRUPT_STATUS_CONTINUE3                                       \
  0x185a
#define mmDISP_INTERRUPT_STATUS_CONTINUE4                                       \
  0x185b
#define mmDISP_INTERRUPT_STATUS_CONTINUE5                                       \
  0x185c
#define mmDISP_INTERRUPT_STATUS_CONTINUE6                                       \
  0x185d
#define mmDISP_INTERRUPT_STATUS_CONTINUE7                                       \
  0x185e
#define mmDISP_INTERRUPT_STATUS_CONTINUE8                                       \
  0x185f
#define mmDISP_INTERRUPT_STATUS_CONTINUE9                                       \
  0x1860
#define mmDISP_INTERRUPT_STATUS_CONTINUE10                                      \
  0x1875
#define mmDCO_MEM_PWR_STATUS                                                    \
  0x1861
#define mmDCO_MEM_PWR_STATUS1                                                   \
  0x1874
#define mmDCO_MEM_PWR_CTRL                                                      \
  0x1862
#define mmDCO_MEM_PWR_CTRL2                                                     \
  0x1863
#define mmFMT_MEMORY0_CONTROL                                                   \
  0x1888
#define mmFMT_MEMORY1_CONTROL                                                   \
  0x1889
#define mmFMT_MEMORY2_CONTROL                                                   \
  0x188a
#define mmFMT_MEMORY3_CONTROL                                                   \
  0x188b
#define mmFMT_MEMORY4_CONTROL                                                   \
  0x188c
#define mmFMT_MEMORY5_CONTROL                                                   \
  0x188d
#define mmDCO_CLK_CNTL                                                          \
  0x1864
#define mmDCO_CLK_CNTL2                                                         \
  0x1876
#define mmDCO_CLK_CNTL3                                                         \
  0x1877
#define mmDPDBG_CNTL                                                            \
  0x1866
#define mmDPDBG_INTERRUPT                                                       \
  0x1867
#define mmDCO_POWER_MANAGEMENT_CNTL                                             \
  0x1868
#define mmDCO_SOFT_RESET                                                        \
  0x1871
#define mmDIG_SOFT_RESET                                                        \
  0x1872
#define mmDIG_SOFT_RESET_2                                                      \
  0x186a
#define mmDCO_STEREOSYNC_SEL                                                    \
  0x186e
#define mmDCO_HDMI_RXSTATUS_TIMER_CONTROL                                       \
  0x1883
#define mmDCO_PSP_INTERRUPT_STATUS                                              \
  0x1884
#define mmDCO_PSP_INTERRUPT_CLEAR                                               \
  0x1885
#define mmDCO_GENERIC_INTERRUPT_MESSAGE                                         \
  0x1886
#define mmDCO_GENERIC_INTERRUPT_CLEAR                                           \
  0x1887
#define mmDCO_TEST_DEBUG_INDEX                                                  \
  0x186f
#define mmDCO_TEST_DEBUG_DATA                                                   \
  0x1870
#define mmDC_I2C_CONTROL                                                        \
  0x16d4
#define mmDC_I2C_ARBITRATION                                                    \
  0x16d5
#define mmDC_I2C_INTERRUPT_CONTROL                                              \
  0x16d6
#define mmDC_I2C_SW_STATUS                                                      \
  0x16d7
#define mmDC_I2C_DDC1_HW_STATUS                                                 \
  0x16d8
#define mmDC_I2C_DDC2_HW_STATUS                                                 \
  0x16d9
#define mmDC_I2C_DDC3_HW_STATUS                                                 \
  0x16da
#define mmDC_I2C_DDC4_HW_STATUS                                                 \
  0x16db
#define mmDC_I2C_DDC5_HW_STATUS                                                 \
  0x16dc
#define mmDC_I2C_DDC6_HW_STATUS                                                 \
  0x16dd
#define mmDC_I2C_DDC1_SPEED                                                     \
  0x16de
#define mmDC_I2C_DDC1_SETUP                                                     \
  0x16df
#define mmDC_I2C_DDC2_SPEED                                                     \
  0x16e0
#define mmDC_I2C_DDC2_SETUP                                                     \
  0x16e1
#define mmDC_I2C_DDC3_SPEED                                                     \
  0x16e2
#define mmDC_I2C_DDC3_SETUP                                                     \
  0x16e3
#define mmDC_I2C_DDC4_SPEED                                                     \
  0x16e4
#define mmDC_I2C_DDC4_SETUP                                                     \
  0x16e5
#define mmDC_I2C_DDC5_SPEED                                                     \
  0x16e6
#define mmDC_I2C_DDC5_SETUP                                                     \
  0x16e7
#define mmDC_I2C_DDC6_SPEED                                                     \
  0x16e8
#define mmDC_I2C_DDC6_SETUP                                                     \
  0x16e9
#define mmDC_I2C_TRANSACTION0                                                   \
  0x16ea
#define mmDC_I2C_TRANSACTION1                                                   \
  0x16eb
#define mmDC_I2C_TRANSACTION2                                                   \
  0x16ec
#define mmDC_I2C_TRANSACTION3                                                   \
  0x16ed
#define mmDC_I2C_DATA                                                           \
  0x16ee
#define mmDC_I2C_DDCVGA_HW_STATUS                                               \
  0x16ef
#define mmDC_I2C_DDCVGA_SPEED                                                   \
  0x16f0
#define mmDC_I2C_DDCVGA_SETUP                                                   \
  0x16f1
#define mmDC_I2C_EDID_DETECT_CTRL                                               \
  0x16f2
#define mmDC_I2C_READ_REQUEST_INTERRUPT                                         \
  0x16f3
#define mmGENERIC_I2C_CONTROL                                                   \
  0x16f4
#define mmGENERIC_I2C_INTERRUPT_CONTROL                                         \
  0x16f5
#define mmGENERIC_I2C_STATUS                                                    \
  0x16f6
#define mmGENERIC_I2C_SPEED                                                     \
  0x16f7
#define mmGENERIC_I2C_SETUP                                                     \
  0x16f8
#define mmGENERIC_I2C_TRANSACTION                                               \
  0x16f9
#define mmGENERIC_I2C_DATA                                                      \
  0x16fa
#define mmGENERIC_I2C_PIN_SELECTION                                             \
  0x16fb
#define mmGENERIC_I2C_PIN_DEBUG                                                 \
  0x16fc
#define mmBLNDV_CONTROL                                                         \
  0x476d
#define mmBLNDV0_BLNDV_CONTROL                                                  \
  0x476d
#define mmBLNDV1_BLNDV_CONTROL                                                  \
  0x996d
#define mmBLNDV_SM_CONTROL2                                                     \
  0x476e
#define mmBLNDV0_BLNDV_SM_CONTROL2                                              \
  0x476e
#define mmBLNDV1_BLNDV_SM_CONTROL2                                              \
  0x996e
#define mmBLNDV_CONTROL2                                                        \
  0x476f
#define mmBLNDV0_BLNDV_CONTROL2                                                 \
  0x476f
#define mmBLNDV1_BLNDV_CONTROL2                                                 \
  0x996f
#define mmBLNDV_UPDATE                                                          \
  0x4770
#define mmBLNDV0_BLNDV_UPDATE                                                   \
  0x4770
#define mmBLNDV1_BLNDV_UPDATE                                                   \
  0x9970
#define mmBLNDV_UNDERFLOW_INTERRUPT                                             \
  0x4771
#define mmBLNDV0_BLNDV_UNDERFLOW_INTERRUPT                                      \
  0x4771
#define mmBLNDV1_BLNDV_UNDERFLOW_INTERRUPT                                      \
  0x9971
#define mmBLNDV_V_UPDATE_LOCK                                                   \
  0x4773
#define mmBLNDV0_BLNDV_V_UPDATE_LOCK                                            \
  0x4773
#define mmBLNDV1_BLNDV_V_UPDATE_LOCK                                            \
  0x9973
#define mmBLNDV_REG_UPDATE_STATUS                                               \
  0x4777
#define mmBLNDV0_BLNDV_REG_UPDATE_STATUS                                        \
  0x4777
#define mmBLNDV1_BLNDV_REG_UPDATE_STATUS                                        \
  0x9977
#define mmBLNDV_DEBUG                                                           \
  0x4774
#define mmBLNDV0_BLNDV_DEBUG                                                    \
  0x4774
#define mmBLNDV1_BLNDV_DEBUG                                                    \
  0x9974
#define mmBLNDV_TEST_DEBUG_INDEX                                                \
  0x4775
#define mmBLNDV0_BLNDV_TEST_DEBUG_INDEX                                         \
  0x4775
#define mmBLNDV1_BLNDV_TEST_DEBUG_INDEX                                         \
  0x9975
#define mmBLNDV_TEST_DEBUG_DATA                                                 \
  0x4776
#define mmBLNDV0_BLNDV_TEST_DEBUG_DATA                                          \
  0x4776
#define mmBLNDV1_BLNDV_TEST_DEBUG_DATA                                          \
  0x9976
#define mmCRTCV_H_TOTAL                                                         \
  0x4780
#define mmCRTCV0_CRTCV_H_TOTAL                                                  \
  0x4780
#define mmCRTCV1_CRTCV_H_TOTAL                                                  \
  0x9980
#define mmCRTCV_H_BLANK_START_END                                               \
  0x4781
#define mmCRTCV0_CRTCV_H_BLANK_START_END                                        \
  0x4781
#define mmCRTCV1_CRTCV_H_BLANK_START_END                                        \
  0x9981
#define mmCRTCV_H_SYNC_A                                                        \
  0x4782
#define mmCRTCV0_CRTCV_H_SYNC_A                                                 \
  0x4782
#define mmCRTCV1_CRTCV_H_SYNC_A                                                 \
  0x9982
#define mmCRTCV_V_TOTAL                                                         \
  0x4787
#define mmCRTCV0_CRTCV_V_TOTAL                                                  \
  0x4787
#define mmCRTCV1_CRTCV_V_TOTAL                                                  \
  0x9987
#define mmCRTCV_V_BLANK_START_END                                               \
  0x478d
#define mmCRTCV0_CRTCV_V_BLANK_START_END                                        \
  0x478d
#define mmCRTCV1_CRTCV_V_BLANK_START_END                                        \
  0x998d
#define mmCRTCV_V_SYNC_A                                                        \
  0x478e
#define mmCRTCV0_CRTCV_V_SYNC_A                                                 \
  0x478e
#define mmCRTCV1_CRTCV_V_SYNC_A                                                 \
  0x998e
#define mmCRTCV_CONTROL                                                         \
  0x479c
#define mmCRTCV0_CRTCV_CONTROL                                                  \
  0x479c
#define mmCRTCV1_CRTCV_CONTROL                                                  \
  0x999c
#define mmCRTCV_START_LINE_CONTROL                                              \
  0x47b3
#define mmCRTCV0_CRTCV_START_LINE_CONTROL                                       \
  0x47b3
#define mmCRTCV1_CRTCV_START_LINE_CONTROL                                       \
  0x99b3
#define mmCRTCV_OVERSCAN_COLOR                                                  \
  0x47c8
#define mmCRTCV0_CRTCV_OVERSCAN_COLOR                                           \
  0x47c8
#define mmCRTCV1_CRTCV_OVERSCAN_COLOR                                           \
  0x99c8
#define mmCRTCV_OVERSCAN_COLOR_EXT                                              \
  0x47c9
#define mmCRTCV0_CRTCV_OVERSCAN_COLOR_EXT                                       \
  0x47c9
#define mmCRTCV1_CRTCV_OVERSCAN_COLOR_EXT                                       \
  0x99c9
#define mmCRTCV_BLACK_COLOR                                                     \
  0x47cc
#define mmCRTCV0_CRTCV_BLACK_COLOR                                              \
  0x47cc
#define mmCRTCV1_CRTCV_BLACK_COLOR                                              \
  0x99cc
#define mmCRTCV_BLACK_COLOR_EXT                                                 \
  0x47cd
#define mmCRTCV0_CRTCV_BLACK_COLOR_EXT                                          \
  0x47cd
#define mmCRTCV1_CRTCV_BLACK_COLOR_EXT                                          \
  0x99cd
#define mmCRTCV_CRC_CNTL                                                        \
  0x47d4
#define mmCRTCV0_CRTCV_CRC_CNTL                                                 \
  0x47d4
#define mmCRTCV1_CRTCV_CRC_CNTL                                                 \
  0x99d4
#define mmCRTCV_CRC0_WINDOWA_X_CONTROL                                          \
  0x47d5
#define mmCRTCV0_CRTCV_CRC0_WINDOWA_X_CONTROL                                   \
  0x47d5
#define mmCRTCV1_CRTCV_CRC0_WINDOWA_X_CONTROL                                   \
  0x99d5
#define mmCRTCV_CRC0_WINDOWA_Y_CONTROL                                          \
  0x47d6
#define mmCRTCV0_CRTCV_CRC0_WINDOWA_Y_CONTROL                                   \
  0x47d6
#define mmCRTCV1_CRTCV_CRC0_WINDOWA_Y_CONTROL                                   \
  0x99d6
#define mmCRTCV_CRC0_WINDOWB_X_CONTROL                                          \
  0x47d7
#define mmCRTCV0_CRTCV_CRC0_WINDOWB_X_CONTROL                                   \
  0x47d7
#define mmCRTCV1_CRTCV_CRC0_WINDOWB_X_CONTROL                                   \
  0x99d7
#define mmCRTCV_CRC0_WINDOWB_Y_CONTROL                                          \
  0x47d8
#define mmCRTCV0_CRTCV_CRC0_WINDOWB_Y_CONTROL                                   \
  0x47d8
#define mmCRTCV1_CRTCV_CRC0_WINDOWB_Y_CONTROL                                   \
  0x99d8
#define mmCRTCV_CRC0_DATA_RG                                                    \
  0x47d9
#define mmCRTCV0_CRTCV_CRC0_DATA_RG                                             \
  0x47d9
#define mmCRTCV1_CRTCV_CRC0_DATA_RG                                             \
  0x99d9
#define mmCRTCV_CRC0_DATA_B                                                     \
  0x47da
#define mmCRTCV0_CRTCV_CRC0_DATA_B                                              \
  0x47da
#define mmCRTCV1_CRTCV_CRC0_DATA_B                                              \
  0x99da
#define mmCRTCV_CRC1_WINDOWA_X_CONTROL                                          \
  0x47db
#define mmCRTCV0_CRTCV_CRC1_WINDOWA_X_CONTROL                                   \
  0x47db
#define mmCRTCV1_CRTCV_CRC1_WINDOWA_X_CONTROL                                   \
  0x99db
#define mmCRTCV_CRC1_WINDOWA_Y_CONTROL                                          \
  0x47dc
#define mmCRTCV0_CRTCV_CRC1_WINDOWA_Y_CONTROL                                   \
  0x47dc
#define mmCRTCV1_CRTCV_CRC1_WINDOWA_Y_CONTROL                                   \
  0x99dc
#define mmCRTCV_CRC1_WINDOWB_X_CONTROL                                          \
  0x47dd
#define mmCRTCV0_CRTCV_CRC1_WINDOWB_X_CONTROL                                   \
  0x47dd
#define mmCRTCV1_CRTCV_CRC1_WINDOWB_X_CONTROL                                   \
  0x99dd
#define mmCRTCV_CRC1_WINDOWB_Y_CONTROL                                          \
  0x47de
#define mmCRTCV0_CRTCV_CRC1_WINDOWB_Y_CONTROL                                   \
  0x47de
#define mmCRTCV1_CRTCV_CRC1_WINDOWB_Y_CONTROL                                   \
  0x99de
#define mmCRTCV_CRC1_DATA_RG                                                    \
  0x47df
#define mmCRTCV0_CRTCV_CRC1_DATA_RG                                             \
  0x47df
#define mmCRTCV1_CRTCV_CRC1_DATA_RG                                             \
  0x99df
#define mmCRTCV_CRC1_DATA_B                                                     \
  0x47e0
#define mmCRTCV0_CRTCV_CRC1_DATA_B                                              \
  0x47e0
#define mmCRTCV1_CRTCV_CRC1_DATA_B                                              \
  0x99e0
#define mmCRTCV_TEST_DEBUG_INDEX                                                \
  0x47c6
#define mmCRTCV0_CRTCV_TEST_DEBUG_INDEX                                         \
  0x47c6
#define mmCRTCV1_CRTCV_TEST_DEBUG_INDEX                                         \
  0x99c6
#define mmCRTCV_TEST_DEBUG_DATA                                                 \
  0x47c7
#define mmCRTCV0_CRTCV_TEST_DEBUG_DATA                                          \
  0x47c7
#define mmCRTCV1_CRTCV_TEST_DEBUG_DATA                                          \
  0x99c7
#define mmXDMA_MC_PCIE_CLIENT_CONFIG                                            \
  0x3e0
#define mmXDMA_LOCAL_SURFACE_TILING1                                            \
  0x3e1
#define mmXDMA_LOCAL_SURFACE_TILING2                                            \
  0x3e2
#define mmXDMA_INTERRUPT                                                        \
  0x3e3
#define mmXDMA_CLOCK_GATING_CNTL                                                \
  0x3e4
#define mmXDMA_MEM_POWER_CNTL                                                   \
  0x3e6
#define mmXDMA_IF_BIF_STATUS                                                    \
  0x3e7
#define mmXDMA_PERF_MEAS_STATUS                                                 \
  0x3e8
#define mmXDMA_IF_STATUS                                                        \
  0x3e9
#define mmXDMA_TEST_DEBUG_INDEX                                                 \
  0x3ea
#define mmXDMA_TEST_DEBUG_DATA                                                  \
  0x3eb
#define mmXDMA_RBBMIF_RDWR_CNTL                                                 \
  0x3f8
#define mmXDMA_PG_CONTROL                                                       \
  0x3f9
#define mmXDMA_PG_WDATA                                                         \
  0x3fa
#define mmXDMA_PG_STATUS                                                        \
  0x3fb
#define mmXDMA_AON_TEST_DEBUG_INDEX                                             \
  0x3fc
#define mmXDMA_AON_TEST_DEBUG_DATA                                              \
  0x3fd
#define mmXDMA_MSTR_CNTL                                                        \
  0x3ec
#define mmXDMA_MSTR_STATUS                                                      \
  0x3ed
#define mmXDMA_MSTR_MEM_CLIENT_CONFIG                                           \
  0x3ee
#define mmXDMA_MSTR_LOCAL_SURFACE_BASE_ADDR                                     \
  0x3ef
#define mmXDMA_MSTR_LOCAL_SURFACE_BASE_ADDR_HIGH                                \
  0x3f0
#define mmXDMA_MSTR_LOCAL_SURFACE_PITCH                                         \
  0x3f1
#define mmXDMA_MSTR_CMD_URGENT_CNTL                                             \
  0x3f2
#define mmXDMA_MSTR_MEM_URGENT_CNTL                                             \
  0x3f3
#define mmXDMA_MSTR_PCIE_NACK_STATUS                                            \
  0x3f5
#define mmXDMA_MSTR_MEM_NACK_STATUS                                             \
  0x3f6
#define mmXDMA_MSTR_VSYNC_GSL_CHECK                                             \
  0x3f7
#define mmXDMA_MSTR_PIPE_CNTL                                                   \
  0x400
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_PIPE_CNTL                                   \
  0x400
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_PIPE_CNTL                                   \
  0x410
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_PIPE_CNTL                                   \
  0x420
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_PIPE_CNTL                                   \
  0x430
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_PIPE_CNTL                                   \
  0x440
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_PIPE_CNTL                                   \
  0x450
#define mmXDMA_MSTR_READ_COMMAND                                                \
  0x401
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_READ_COMMAND                                \
  0x401
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_READ_COMMAND                                \
  0x411
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_READ_COMMAND                                \
  0x421
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_READ_COMMAND                                \
  0x431
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_READ_COMMAND                                \
  0x441
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_READ_COMMAND                                \
  0x451
#define mmXDMA_MSTR_CHANNEL_DIM                                                 \
  0x402
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_CHANNEL_DIM                                 \
  0x402
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_CHANNEL_DIM                                 \
  0x412
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_CHANNEL_DIM                                 \
  0x422
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_CHANNEL_DIM                                 \
  0x432
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_CHANNEL_DIM                                 \
  0x442
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_CHANNEL_DIM                                 \
  0x452
#define mmXDMA_MSTR_HEIGHT                                                      \
  0x403
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_HEIGHT                                      \
  0x403
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_HEIGHT                                      \
  0x413
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_HEIGHT                                      \
  0x423
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_HEIGHT                                      \
  0x433
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_HEIGHT                                      \
  0x443
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_HEIGHT                                      \
  0x453
#define mmXDMA_MSTR_REMOTE_SURFACE_BASE                                         \
  0x404
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x404
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x414
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x424
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x434
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x444
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_REMOTE_SURFACE_BASE                         \
  0x454
#define mmXDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                                    \
  0x405
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x405
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x415
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x425
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x435
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x445
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_REMOTE_SURFACE_BASE_HIGH                    \
  0x455
#define mmXDMA_MSTR_REMOTE_GPU_ADDRESS                                          \
  0x406
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x406
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x416
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x426
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x436
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x446
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_REMOTE_GPU_ADDRESS                          \
  0x456
#define mmXDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                                     \
  0x407
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x407
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x417
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x427
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x437
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x447
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_REMOTE_GPU_ADDRESS_HIGH                     \
  0x457
#define mmXDMA_MSTR_CACHE_BASE_ADDR                                             \
  0x408
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x408
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x418
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x428
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x438
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x448
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_CACHE_BASE_ADDR                             \
  0x458
#define mmXDMA_MSTR_CACHE_BASE_ADDR_HIGH                                        \
  0x409
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x409
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x419
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x429
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x439
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x449
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_CACHE_BASE_ADDR_HIGH                        \
  0x459
#define mmXDMA_MSTR_CACHE                                                       \
  0x40a
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_CACHE                                       \
  0x40a
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_CACHE                                       \
  0x41a
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_CACHE                                       \
  0x42a
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_CACHE                                       \
  0x43a
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_CACHE                                       \
  0x44a
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_CACHE                                       \
  0x45a
#define mmXDMA_MSTR_CHANNEL_START                                               \
  0x40b
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_CHANNEL_START                               \
  0x40b
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_CHANNEL_START                               \
  0x41b
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_CHANNEL_START                               \
  0x42b
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_CHANNEL_START                               \
  0x43b
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_CHANNEL_START                               \
  0x44b
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_CHANNEL_START                               \
  0x45b
#define mmXDMA_MSTR_PERFMEAS_STATUS                                             \
  0x40e
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x40e
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x41e
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x42e
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x43e
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x44e
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_PERFMEAS_STATUS                             \
  0x45e
#define mmXDMA_MSTR_PERFMEAS_CNTL                                               \
  0x40f
#define mmXDMA_MSTR_PIPE0_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x40f
#define mmXDMA_MSTR_PIPE1_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x41f
#define mmXDMA_MSTR_PIPE2_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x42f
#define mmXDMA_MSTR_PIPE3_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x43f
#define mmXDMA_MSTR_PIPE4_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x44f
#define mmXDMA_MSTR_PIPE5_XDMA_MSTR_PERFMEAS_CNTL                               \
  0x45f
#define mmXDMA_SLV_CNTL                                                         \
  0x460
#define mmXDMA_SLV_MEM_CLIENT_CONFIG                                            \
  0x461
#define mmXDMA_SLV_SLS_PITCH                                                    \
  0x462
#define mmXDMA_SLV_READ_URGENT_CNTL                                             \
  0x463
#define mmXDMA_SLV_WRITE_URGENT_CNTL                                            \
  0x464
#define mmXDMA_SLV_WB_RATE_CNTL                                                 \
  0x465
#define mmXDMA_SLV_READ_LATENCY_MINMAX                                          \
  0x466
#define mmXDMA_SLV_READ_LATENCY_AVE                                             \
  0x467
#define mmXDMA_SLV_PCIE_NACK_STATUS                                             \
  0x468
#define mmXDMA_SLV_MEM_NACK_STATUS                                              \
  0x469
#define mmXDMA_SLV_RDRET_BUF_STATUS                                             \
  0x46a
#define mmXDMA_SLV_READ_LATENCY_TIMER                                           \
  0x46b
#define mmXDMA_SLV_FLIP_PENDING                                                 \
  0x46c
#define mmXDMA_SLV_CHANNEL_CNTL                                                 \
  0x470
#define mmXDMA_SLV_CHANNEL0_XDMA_SLV_CHANNEL_CNTL                               \
  0x470
#define mmXDMA_SLV_CHANNEL1_XDMA_SLV_CHANNEL_CNTL                               \
  0x478
#define mmXDMA_SLV_CHANNEL2_XDMA_SLV_CHANNEL_CNTL                               \
  0x480
#define mmXDMA_SLV_CHANNEL3_XDMA_SLV_CHANNEL_CNTL                               \
  0x488
#define mmXDMA_SLV_CHANNEL4_XDMA_SLV_CHANNEL_CNTL                               \
  0x490
#define mmXDMA_SLV_CHANNEL5_XDMA_SLV_CHANNEL_CNTL                               \
  0x498
#define mmXDMA_SLV_REMOTE_GPU_ADDRESS                                           \
  0x471
#define mmXDMA_SLV_CHANNEL0_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x471
#define mmXDMA_SLV_CHANNEL1_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x479
#define mmXDMA_SLV_CHANNEL2_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x481
#define mmXDMA_SLV_CHANNEL3_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x489
#define mmXDMA_SLV_CHANNEL4_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x491
#define mmXDMA_SLV_CHANNEL5_XDMA_SLV_REMOTE_GPU_ADDRESS                         \
  0x499
#define mmXDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                                      \
  0x472
#define mmXDMA_SLV_CHANNEL0_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x472
#define mmXDMA_SLV_CHANNEL1_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x47a
#define mmXDMA_SLV_CHANNEL2_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x482
#define mmXDMA_SLV_CHANNEL3_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x48a
#define mmXDMA_SLV_CHANNEL4_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x492
#define mmXDMA_SLV_CHANNEL5_XDMA_SLV_REMOTE_GPU_ADDRESS_HIGH                    \
  0x49a
#define mmCMD_BUS_TX_CONTROL_LANE0                                              \
  0x48e0
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_TX_CONTROL_LANE0                           \
  0x48e0
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_TX_CONTROL_LANE0                           \
  0x4980
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9a20
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9ac0
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9b60
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9c00
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9ca0
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_TX_CONTROL_LANE0                           \
  0x9d40
#define mmCMD_BUS_TX_CONTROL_LANE1                                              \
  0x48f0
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_TX_CONTROL_LANE1                           \
  0x48f0
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_TX_CONTROL_LANE1                           \
  0x4990
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9a30
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9ad0
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9b70
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9c10
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9cb0
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_TX_CONTROL_LANE1                           \
  0x9d50
#define mmCMD_BUS_TX_CONTROL_LANE2                                              \
  0x4900
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_TX_CONTROL_LANE2                           \
  0x4900
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_TX_CONTROL_LANE2                           \
  0x49a0
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9a40
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9ae0
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9b80
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9c20
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9cc0
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_TX_CONTROL_LANE2                           \
  0x9d60
#define mmCMD_BUS_TX_CONTROL_LANE3                                              \
  0x4910
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_TX_CONTROL_LANE3                           \
  0x4910
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_TX_CONTROL_LANE3                           \
  0x49b0
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9a50
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9af0
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9b90
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9c30
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9cd0
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_TX_CONTROL_LANE3                           \
  0x9d70
#define mmMARGIN_DEEMPH_LANE0                                                   \
  0x48e1
#define mmDC_COMBOPHYTXREGS0_MARGIN_DEEMPH_LANE0                                \
  0x48e1
#define mmDC_COMBOPHYTXREGS1_MARGIN_DEEMPH_LANE0                                \
  0x4981
#define mmDC_COMBOPHYTXREGS2_MARGIN_DEEMPH_LANE0                                \
  0x9a21
#define mmDC_COMBOPHYTXREGS3_MARGIN_DEEMPH_LANE0                                \
  0x9ac1
#define mmDC_COMBOPHYTXREGS4_MARGIN_DEEMPH_LANE0                                \
  0x9b61
#define mmDC_COMBOPHYTXREGS5_MARGIN_DEEMPH_LANE0                                \
  0x9c01
#define mmDC_COMBOPHYTXREGS6_MARGIN_DEEMPH_LANE0                                \
  0x9ca1
#define mmDC_COMBOPHYTXREGS7_MARGIN_DEEMPH_LANE0                                \
  0x9d41
#define mmMARGIN_DEEMPH_LANE1                                                   \
  0x48f1
#define mmDC_COMBOPHYTXREGS0_MARGIN_DEEMPH_LANE1                                \
  0x48f1
#define mmDC_COMBOPHYTXREGS1_MARGIN_DEEMPH_LANE1                                \
  0x4991
#define mmDC_COMBOPHYTXREGS2_MARGIN_DEEMPH_LANE1                                \
  0x9a31
#define mmDC_COMBOPHYTXREGS3_MARGIN_DEEMPH_LANE1                                \
  0x9ad1
#define mmDC_COMBOPHYTXREGS4_MARGIN_DEEMPH_LANE1                                \
  0x9b71
#define mmDC_COMBOPHYTXREGS5_MARGIN_DEEMPH_LANE1                                \
  0x9c11
#define mmDC_COMBOPHYTXREGS6_MARGIN_DEEMPH_LANE1                                \
  0x9cb1
#define mmDC_COMBOPHYTXREGS7_MARGIN_DEEMPH_LANE1                                \
  0x9d51
#define mmMARGIN_DEEMPH_LANE2                                                   \
  0x4901
#define mmDC_COMBOPHYTXREGS0_MARGIN_DEEMPH_LANE2                                \
  0x4901
#define mmDC_COMBOPHYTXREGS1_MARGIN_DEEMPH_LANE2                                \
  0x49a1
#define mmDC_COMBOPHYTXREGS2_MARGIN_DEEMPH_LANE2                                \
  0x9a41
#define mmDC_COMBOPHYTXREGS3_MARGIN_DEEMPH_LANE2                                \
  0x9ae1
#define mmDC_COMBOPHYTXREGS4_MARGIN_DEEMPH_LANE2                                \
  0x9b81
#define mmDC_COMBOPHYTXREGS5_MARGIN_DEEMPH_LANE2                                \
  0x9c21
#define mmDC_COMBOPHYTXREGS6_MARGIN_DEEMPH_LANE2                                \
  0x9cc1
#define mmDC_COMBOPHYTXREGS7_MARGIN_DEEMPH_LANE2                                \
  0x9d61
#define mmMARGIN_DEEMPH_LANE3                                                   \
  0x4911
#define mmDC_COMBOPHYTXREGS0_MARGIN_DEEMPH_LANE3                                \
  0x4911
#define mmDC_COMBOPHYTXREGS1_MARGIN_DEEMPH_LANE3                                \
  0x49b1
#define mmDC_COMBOPHYTXREGS2_MARGIN_DEEMPH_LANE3                                \
  0x9a51
#define mmDC_COMBOPHYTXREGS3_MARGIN_DEEMPH_LANE3                                \
  0x9af1
#define mmDC_COMBOPHYTXREGS4_MARGIN_DEEMPH_LANE3                                \
  0x9b91
#define mmDC_COMBOPHYTXREGS5_MARGIN_DEEMPH_LANE3                                \
  0x9c31
#define mmDC_COMBOPHYTXREGS6_MARGIN_DEEMPH_LANE3                                \
  0x9cd1
#define mmDC_COMBOPHYTXREGS7_MARGIN_DEEMPH_LANE3                                \
  0x9d71
#define mmCMD_BUS_GLOBAL_FOR_TX_LANE0                                           \
  0x48e2
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x48e2
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x4982
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9a22
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9ac2
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9b62
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9c02
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9ca2
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_GLOBAL_FOR_TX_LANE0                        \
  0x9d42
#define mmCMD_BUS_GLOBAL_FOR_TX_LANE1                                           \
  0x48f2
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x48f2
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x4992
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9a32
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9ad2
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9b72
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9c12
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9cb2
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_GLOBAL_FOR_TX_LANE1                        \
  0x9d52
#define mmCMD_BUS_GLOBAL_FOR_TX_LANE2                                           \
  0x4902
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x4902
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x49a2
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9a42
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9ae2
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9b82
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9c22
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9cc2
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_GLOBAL_FOR_TX_LANE2                        \
  0x9d62
#define mmCMD_BUS_GLOBAL_FOR_TX_LANE3                                           \
  0x4912
#define mmDC_COMBOPHYTXREGS0_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x4912
#define mmDC_COMBOPHYTXREGS1_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x49b2
#define mmDC_COMBOPHYTXREGS2_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9a52
#define mmDC_COMBOPHYTXREGS3_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9af2
#define mmDC_COMBOPHYTXREGS4_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9b92
#define mmDC_COMBOPHYTXREGS5_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9c32
#define mmDC_COMBOPHYTXREGS6_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9cd2
#define mmDC_COMBOPHYTXREGS7_CMD_BUS_GLOBAL_FOR_TX_LANE3                        \
  0x9d72
#define mmTX_DISP_RFU0_LANE0                                                    \
  0x48e3
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU0_LANE0                                 \
  0x48e3
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU0_LANE0                                 \
  0x4983
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU0_LANE0                                 \
  0x9a23
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU0_LANE0                                 \
  0x9ac3
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU0_LANE0                                 \
  0x9b63
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU0_LANE0                                 \
  0x9c03
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU0_LANE0                                 \
  0x9ca3
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU0_LANE0                                 \
  0x9d43
#define mmTX_DISP_RFU0_LANE1                                                    \
  0x48f3
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU0_LANE1                                 \
  0x48f3
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU0_LANE1                                 \
  0x4993
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU0_LANE1                                 \
  0x9a33
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU0_LANE1                                 \
  0x9ad3
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU0_LANE1                                 \
  0x9b73
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU0_LANE1                                 \
  0x9c13
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU0_LANE1                                 \
  0x9cb3
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU0_LANE1                                 \
  0x9d53
#define mmTX_DISP_RFU0_LANE2                                                    \
  0x4903
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU0_LANE2                                 \
  0x4903
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU0_LANE2                                 \
  0x49a3
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU0_LANE2                                 \
  0x9a43
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU0_LANE2                                 \
  0x9ae3
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU0_LANE2                                 \
  0x9b83
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU0_LANE2                                 \
  0x9c23
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU0_LANE2                                 \
  0x9cc3
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU0_LANE2                                 \
  0x9d63
#define mmTX_DISP_RFU0_LANE3                                                    \
  0x4913
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU0_LANE3                                 \
  0x4913
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU0_LANE3                                 \
  0x49b3
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU0_LANE3                                 \
  0x9a53
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU0_LANE3                                 \
  0x9af3
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU0_LANE3                                 \
  0x9b93
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU0_LANE3                                 \
  0x9c33
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU0_LANE3                                 \
  0x9cd3
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU0_LANE3                                 \
  0x9d73
#define mmTX_DISP_RFU1_LANE0                                                    \
  0x48e4
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU1_LANE0                                 \
  0x48e4
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU1_LANE0                                 \
  0x4984
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU1_LANE0                                 \
  0x9a24
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU1_LANE0                                 \
  0x9ac4
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU1_LANE0                                 \
  0x9b64
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU1_LANE0                                 \
  0x9c04
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU1_LANE0                                 \
  0x9ca4
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU1_LANE0                                 \
  0x9d44
#define mmTX_DISP_RFU1_LANE1                                                    \
  0x48f4
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU1_LANE1                                 \
  0x48f4
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU1_LANE1                                 \
  0x4994
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU1_LANE1                                 \
  0x9a34
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU1_LANE1                                 \
  0x9ad4
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU1_LANE1                                 \
  0x9b74
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU1_LANE1                                 \
  0x9c14
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU1_LANE1                                 \
  0x9cb4
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU1_LANE1                                 \
  0x9d54
#define mmTX_DISP_RFU1_LANE2                                                    \
  0x4904
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU1_LANE2                                 \
  0x4904
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU1_LANE2                                 \
  0x49a4
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU1_LANE2                                 \
  0x9a44
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU1_LANE2                                 \
  0x9ae4
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU1_LANE2                                 \
  0x9b84
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU1_LANE2                                 \
  0x9c24
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU1_LANE2                                 \
  0x9cc4
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU1_LANE2                                 \
  0x9d64
#define mmTX_DISP_RFU1_LANE3                                                    \
  0x4914
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU1_LANE3                                 \
  0x4914
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU1_LANE3                                 \
  0x49b4
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU1_LANE3                                 \
  0x9a54
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU1_LANE3                                 \
  0x9af4
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU1_LANE3                                 \
  0x9b94
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU1_LANE3                                 \
  0x9c34
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU1_LANE3                                 \
  0x9cd4
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU1_LANE3                                 \
  0x9d74
#define mmTX_DISP_RFU2_LANE0                                                    \
  0x48e5
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU2_LANE0                                 \
  0x48e5
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU2_LANE0                                 \
  0x4985
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU2_LANE0                                 \
  0x9a25
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU2_LANE0                                 \
  0x9ac5
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU2_LANE0                                 \
  0x9b65
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU2_LANE0                                 \
  0x9c05
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU2_LANE0                                 \
  0x9ca5
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU2_LANE0                                 \
  0x9d45
#define mmTX_DISP_RFU2_LANE1                                                    \
  0x48f5
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU2_LANE1                                 \
  0x48f5
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU2_LANE1                                 \
  0x4995
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU2_LANE1                                 \
  0x9a35
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU2_LANE1                                 \
  0x9ad5
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU2_LANE1                                 \
  0x9b75
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU2_LANE1                                 \
  0x9c15
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU2_LANE1                                 \
  0x9cb5
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU2_LANE1                                 \
  0x9d55
#define mmTX_DISP_RFU2_LANE2                                                    \
  0x4905
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU2_LANE2                                 \
  0x4905
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU2_LANE2                                 \
  0x49a5
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU2_LANE2                                 \
  0x9a45
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU2_LANE2                                 \
  0x9ae5
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU2_LANE2                                 \
  0x9b85
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU2_LANE2                                 \
  0x9c25
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU2_LANE2                                 \
  0x9cc5
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU2_LANE2                                 \
  0x9d65
#define mmTX_DISP_RFU2_LANE3                                                    \
  0x4915
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU2_LANE3                                 \
  0x4915
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU2_LANE3                                 \
  0x49b5
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU2_LANE3                                 \
  0x9a55
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU2_LANE3                                 \
  0x9af5
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU2_LANE3                                 \
  0x9b95
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU2_LANE3                                 \
  0x9c35
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU2_LANE3                                 \
  0x9cd5
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU2_LANE3                                 \
  0x9d75
#define mmTX_DISP_RFU3_LANE0                                                    \
  0x48e6
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU3_LANE0                                 \
  0x48e6
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU3_LANE0                                 \
  0x4986
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU3_LANE0                                 \
  0x9a26
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU3_LANE0                                 \
  0x9ac6
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU3_LANE0                                 \
  0x9b66
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU3_LANE0                                 \
  0x9c06
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU3_LANE0                                 \
  0x9ca6
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU3_LANE0                                 \
  0x9d46
#define mmTX_DISP_RFU3_LANE1                                                    \
  0x48f6
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU3_LANE1                                 \
  0x48f6
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU3_LANE1                                 \
  0x4996
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU3_LANE1                                 \
  0x9a36
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU3_LANE1                                 \
  0x9ad6
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU3_LANE1                                 \
  0x9b76
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU3_LANE1                                 \
  0x9c16
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU3_LANE1                                 \
  0x9cb6
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU3_LANE1                                 \
  0x9d56
#define mmTX_DISP_RFU3_LANE2                                                    \
  0x4906
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU3_LANE2                                 \
  0x4906
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU3_LANE2                                 \
  0x49a6
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU3_LANE2                                 \
  0x9a46
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU3_LANE2                                 \
  0x9ae6
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU3_LANE2                                 \
  0x9b86
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU3_LANE2                                 \
  0x9c26
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU3_LANE2                                 \
  0x9cc6
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU3_LANE2                                 \
  0x9d66
#define mmTX_DISP_RFU3_LANE3                                                    \
  0x4916
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU3_LANE3                                 \
  0x4916
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU3_LANE3                                 \
  0x49b6
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU3_LANE3                                 \
  0x9a56
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU3_LANE3                                 \
  0x9af6
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU3_LANE3                                 \
  0x9b96
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU3_LANE3                                 \
  0x9c36
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU3_LANE3                                 \
  0x9cd6
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU3_LANE3                                 \
  0x9d76
#define mmTX_DISP_RFU4_LANE0                                                    \
  0x48e7
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU4_LANE0                                 \
  0x48e7
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU4_LANE0                                 \
  0x4987
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU4_LANE0                                 \
  0x9a27
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU4_LANE0                                 \
  0x9ac7
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU4_LANE0                                 \
  0x9b67
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU4_LANE0                                 \
  0x9c07
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU4_LANE0                                 \
  0x9ca7
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU4_LANE0                                 \
  0x9d47
#define mmTX_DISP_RFU4_LANE1                                                    \
  0x48f7
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU4_LANE1                                 \
  0x48f7
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU4_LANE1                                 \
  0x4997
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU4_LANE1                                 \
  0x9a37
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU4_LANE1                                 \
  0x9ad7
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU4_LANE1                                 \
  0x9b77
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU4_LANE1                                 \
  0x9c17
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU4_LANE1                                 \
  0x9cb7
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU4_LANE1                                 \
  0x9d57
#define mmTX_DISP_RFU4_LANE2                                                    \
  0x4907
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU4_LANE2                                 \
  0x4907
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU4_LANE2                                 \
  0x49a7
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU4_LANE2                                 \
  0x9a47
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU4_LANE2                                 \
  0x9ae7
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU4_LANE2                                 \
  0x9b87
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU4_LANE2                                 \
  0x9c27
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU4_LANE2                                 \
  0x9cc7
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU4_LANE2                                 \
  0x9d67
#define mmTX_DISP_RFU4_LANE3                                                    \
  0x4917
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU4_LANE3                                 \
  0x4917
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU4_LANE3                                 \
  0x49b7
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU4_LANE3                                 \
  0x9a57
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU4_LANE3                                 \
  0x9af7
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU4_LANE3                                 \
  0x9b97
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU4_LANE3                                 \
  0x9c37
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU4_LANE3                                 \
  0x9cd7
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU4_LANE3                                 \
  0x9d77
#define mmTX_DISP_RFU5_LANE0                                                    \
  0x48e8
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU5_LANE0                                 \
  0x48e8
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU5_LANE0                                 \
  0x4988
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU5_LANE0                                 \
  0x9a28
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU5_LANE0                                 \
  0x9ac8
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU5_LANE0                                 \
  0x9b68
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU5_LANE0                                 \
  0x9c08
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU5_LANE0                                 \
  0x9ca8
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU5_LANE0                                 \
  0x9d48
#define mmTX_DISP_RFU5_LANE1                                                    \
  0x48f8
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU5_LANE1                                 \
  0x48f8
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU5_LANE1                                 \
  0x4998
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU5_LANE1                                 \
  0x9a38
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU5_LANE1                                 \
  0x9ad8
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU5_LANE1                                 \
  0x9b78
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU5_LANE1                                 \
  0x9c18
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU5_LANE1                                 \
  0x9cb8
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU5_LANE1                                 \
  0x9d58
#define mmTX_DISP_RFU5_LANE2                                                    \
  0x4908
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU5_LANE2                                 \
  0x4908
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU5_LANE2                                 \
  0x49a8
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU5_LANE2                                 \
  0x9a48
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU5_LANE2                                 \
  0x9ae8
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU5_LANE2                                 \
  0x9b88
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU5_LANE2                                 \
  0x9c28
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU5_LANE2                                 \
  0x9cc8
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU5_LANE2                                 \
  0x9d68
#define mmTX_DISP_RFU5_LANE3                                                    \
  0x4918
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU5_LANE3                                 \
  0x4918
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU5_LANE3                                 \
  0x49b8
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU5_LANE3                                 \
  0x9a58
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU5_LANE3                                 \
  0x9af8
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU5_LANE3                                 \
  0x9b98
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU5_LANE3                                 \
  0x9c38
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU5_LANE3                                 \
  0x9cd8
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU5_LANE3                                 \
  0x9d78
#define mmTX_DISP_RFU6_LANE0                                                    \
  0x48e9
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU6_LANE0                                 \
  0x48e9
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU6_LANE0                                 \
  0x4989
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU6_LANE0                                 \
  0x9a29
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU6_LANE0                                 \
  0x9ac9
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU6_LANE0                                 \
  0x9b69
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU6_LANE0                                 \
  0x9c09
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU6_LANE0                                 \
  0x9ca9
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU6_LANE0                                 \
  0x9d49
#define mmTX_DISP_RFU6_LANE1                                                    \
  0x48f9
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU6_LANE1                                 \
  0x48f9
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU6_LANE1                                 \
  0x4999
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU6_LANE1                                 \
  0x9a39
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU6_LANE1                                 \
  0x9ad9
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU6_LANE1                                 \
  0x9b79
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU6_LANE1                                 \
  0x9c19
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU6_LANE1                                 \
  0x9cb9
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU6_LANE1                                 \
  0x9d59
#define mmTX_DISP_RFU6_LANE2                                                    \
  0x4909
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU6_LANE2                                 \
  0x4909
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU6_LANE2                                 \
  0x49a9
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU6_LANE2                                 \
  0x9a49
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU6_LANE2                                 \
  0x9ae9
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU6_LANE2                                 \
  0x9b89
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU6_LANE2                                 \
  0x9c29
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU6_LANE2                                 \
  0x9cc9
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU6_LANE2                                 \
  0x9d69
#define mmTX_DISP_RFU6_LANE3                                                    \
  0x4919
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU6_LANE3                                 \
  0x4919
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU6_LANE3                                 \
  0x49b9
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU6_LANE3                                 \
  0x9a59
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU6_LANE3                                 \
  0x9af9
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU6_LANE3                                 \
  0x9b99
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU6_LANE3                                 \
  0x9c39
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU6_LANE3                                 \
  0x9cd9
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU6_LANE3                                 \
  0x9d79
#define mmTX_DISP_RFU7_LANE0                                                    \
  0x48ea
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU7_LANE0                                 \
  0x48ea
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU7_LANE0                                 \
  0x498a
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU7_LANE0                                 \
  0x9a2a
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU7_LANE0                                 \
  0x9aca
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU7_LANE0                                 \
  0x9b6a
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU7_LANE0                                 \
  0x9c0a
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU7_LANE0                                 \
  0x9caa
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU7_LANE0                                 \
  0x9d4a
#define mmTX_DISP_RFU7_LANE1                                                    \
  0x48fa
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU7_LANE1                                 \
  0x48fa
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU7_LANE1                                 \
  0x499a
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU7_LANE1                                 \
  0x9a3a
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU7_LANE1                                 \
  0x9ada
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU7_LANE1                                 \
  0x9b7a
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU7_LANE1                                 \
  0x9c1a
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU7_LANE1                                 \
  0x9cba
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU7_LANE1                                 \
  0x9d5a
#define mmTX_DISP_RFU7_LANE2                                                    \
  0x490a
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU7_LANE2                                 \
  0x490a
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU7_LANE2                                 \
  0x49aa
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU7_LANE2                                 \
  0x9a4a
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU7_LANE2                                 \
  0x9aea
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU7_LANE2                                 \
  0x9b8a
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU7_LANE2                                 \
  0x9c2a
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU7_LANE2                                 \
  0x9cca
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU7_LANE2                                 \
  0x9d6a
#define mmTX_DISP_RFU7_LANE3                                                    \
  0x491a
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU7_LANE3                                 \
  0x491a
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU7_LANE3                                 \
  0x49ba
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU7_LANE3                                 \
  0x9a5a
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU7_LANE3                                 \
  0x9afa
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU7_LANE3                                 \
  0x9b9a
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU7_LANE3                                 \
  0x9c3a
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU7_LANE3                                 \
  0x9cda
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU7_LANE3                                 \
  0x9d7a
#define mmTX_DISP_RFU8_LANE0                                                    \
  0x48eb
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU8_LANE0                                 \
  0x48eb
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU8_LANE0                                 \
  0x498b
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU8_LANE0                                 \
  0x9a2b
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU8_LANE0                                 \
  0x9acb
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU8_LANE0                                 \
  0x9b6b
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU8_LANE0                                 \
  0x9c0b
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU8_LANE0                                 \
  0x9cab
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU8_LANE0                                 \
  0x9d4b
#define mmTX_DISP_RFU8_LANE1                                                    \
  0x48fb
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU8_LANE1                                 \
  0x48fb
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU8_LANE1                                 \
  0x499b
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU8_LANE1                                 \
  0x9a3b
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU8_LANE1                                 \
  0x9adb
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU8_LANE1                                 \
  0x9b7b
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU8_LANE1                                 \
  0x9c1b
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU8_LANE1                                 \
  0x9cbb
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU8_LANE1                                 \
  0x9d5b
#define mmTX_DISP_RFU8_LANE2                                                    \
  0x490b
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU8_LANE2                                 \
  0x490b
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU8_LANE2                                 \
  0x49ab
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU8_LANE2                                 \
  0x9a4b
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU8_LANE2                                 \
  0x9aeb
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU8_LANE2                                 \
  0x9b8b
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU8_LANE2                                 \
  0x9c2b
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU8_LANE2                                 \
  0x9ccb
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU8_LANE2                                 \
  0x9d6b
#define mmTX_DISP_RFU8_LANE3                                                    \
  0x491b
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU8_LANE3                                 \
  0x491b
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU8_LANE3                                 \
  0x49bb
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU8_LANE3                                 \
  0x9a5b
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU8_LANE3                                 \
  0x9afb
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU8_LANE3                                 \
  0x9b9b
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU8_LANE3                                 \
  0x9c3b
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU8_LANE3                                 \
  0x9cdb
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU8_LANE3                                 \
  0x9d7b
#define mmTX_DISP_RFU9_LANE0                                                    \
  0x48ec
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU9_LANE0                                 \
  0x48ec
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU9_LANE0                                 \
  0x498c
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU9_LANE0                                 \
  0x9a2c
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU9_LANE0                                 \
  0x9acc
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU9_LANE0                                 \
  0x9b6c
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU9_LANE0                                 \
  0x9c0c
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU9_LANE0                                 \
  0x9cac
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU9_LANE0                                 \
  0x9d4c
#define mmTX_DISP_RFU9_LANE1                                                    \
  0x48fc
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU9_LANE1                                 \
  0x48fc
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU9_LANE1                                 \
  0x499c
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU9_LANE1                                 \
  0x9a3c
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU9_LANE1                                 \
  0x9adc
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU9_LANE1                                 \
  0x9b7c
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU9_LANE1                                 \
  0x9c1c
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU9_LANE1                                 \
  0x9cbc
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU9_LANE1                                 \
  0x9d5c
#define mmTX_DISP_RFU9_LANE2                                                    \
  0x490c
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU9_LANE2                                 \
  0x490c
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU9_LANE2                                 \
  0x49ac
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU9_LANE2                                 \
  0x9a4c
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU9_LANE2                                 \
  0x9aec
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU9_LANE2                                 \
  0x9b8c
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU9_LANE2                                 \
  0x9c2c
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU9_LANE2                                 \
  0x9ccc
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU9_LANE2                                 \
  0x9d6c
#define mmTX_DISP_RFU9_LANE3                                                    \
  0x491c
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU9_LANE3                                 \
  0x491c
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU9_LANE3                                 \
  0x49bc
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU9_LANE3                                 \
  0x9a5c
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU9_LANE3                                 \
  0x9afc
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU9_LANE3                                 \
  0x9b9c
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU9_LANE3                                 \
  0x9c3c
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU9_LANE3                                 \
  0x9cdc
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU9_LANE3                                 \
  0x9d7c
#define mmTX_DISP_RFU10_LANE0                                                   \
  0x48ed
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU10_LANE0                                \
  0x48ed
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU10_LANE0                                \
  0x498d
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU10_LANE0                                \
  0x9a2d
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU10_LANE0                                \
  0x9acd
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU10_LANE0                                \
  0x9b6d
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU10_LANE0                                \
  0x9c0d
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU10_LANE0                                \
  0x9cad
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU10_LANE0                                \
  0x9d4d
#define mmTX_DISP_RFU10_LANE1                                                   \
  0x48fd
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU10_LANE1                                \
  0x48fd
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU10_LANE1                                \
  0x499d
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU10_LANE1                                \
  0x9a3d
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU10_LANE1                                \
  0x9add
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU10_LANE1                                \
  0x9b7d
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU10_LANE1                                \
  0x9c1d
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU10_LANE1                                \
  0x9cbd
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU10_LANE1                                \
  0x9d5d
#define mmTX_DISP_RFU10_LANE2                                                   \
  0x490d
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU10_LANE2                                \
  0x490d
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU10_LANE2                                \
  0x49ad
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU10_LANE2                                \
  0x9a4d
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU10_LANE2                                \
  0x9aed
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU10_LANE2                                \
  0x9b8d
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU10_LANE2                                \
  0x9c2d
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU10_LANE2                                \
  0x9ccd
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU10_LANE2                                \
  0x9d6d
#define mmTX_DISP_RFU10_LANE3                                                   \
  0x491d
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU10_LANE3                                \
  0x491d
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU10_LANE3                                \
  0x49bd
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU10_LANE3                                \
  0x9a5d
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU10_LANE3                                \
  0x9afd
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU10_LANE3                                \
  0x9b9d
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU10_LANE3                                \
  0x9c3d
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU10_LANE3                                \
  0x9cdd
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU10_LANE3                                \
  0x9d7d
#define mmTX_DISP_RFU11_LANE0                                                   \
  0x48ee
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU11_LANE0                                \
  0x48ee
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU11_LANE0                                \
  0x498e
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU11_LANE0                                \
  0x9a2e
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU11_LANE0                                \
  0x9ace
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU11_LANE0                                \
  0x9b6e
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU11_LANE0                                \
  0x9c0e
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU11_LANE0                                \
  0x9cae
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU11_LANE0                                \
  0x9d4e
#define mmTX_DISP_RFU11_LANE1                                                   \
  0x48fe
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU11_LANE1                                \
  0x48fe
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU11_LANE1                                \
  0x499e
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU11_LANE1                                \
  0x9a3e
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU11_LANE1                                \
  0x9ade
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU11_LANE1                                \
  0x9b7e
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU11_LANE1                                \
  0x9c1e
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU11_LANE1                                \
  0x9cbe
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU11_LANE1                                \
  0x9d5e
#define mmTX_DISP_RFU11_LANE2                                                   \
  0x490e
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU11_LANE2                                \
  0x490e
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU11_LANE2                                \
  0x49ae
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU11_LANE2                                \
  0x9a4e
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU11_LANE2                                \
  0x9aee
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU11_LANE2                                \
  0x9b8e
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU11_LANE2                                \
  0x9c2e
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU11_LANE2                                \
  0x9cce
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU11_LANE2                                \
  0x9d6e
#define mmTX_DISP_RFU11_LANE3                                                   \
  0x491e
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU11_LANE3                                \
  0x491e
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU11_LANE3                                \
  0x49be
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU11_LANE3                                \
  0x9a5e
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU11_LANE3                                \
  0x9afe
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU11_LANE3                                \
  0x9b9e
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU11_LANE3                                \
  0x9c3e
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU11_LANE3                                \
  0x9cde
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU11_LANE3                                \
  0x9d7e
#define mmTX_DISP_RFU12_LANE0                                                   \
  0x48ef
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU12_LANE0                                \
  0x48ef
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU12_LANE0                                \
  0x498f
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU12_LANE0                                \
  0x9a2f
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU12_LANE0                                \
  0x9acf
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU12_LANE0                                \
  0x9b6f
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU12_LANE0                                \
  0x9c0f
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU12_LANE0                                \
  0x9caf
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU12_LANE0                                \
  0x9d4f
#define mmTX_DISP_RFU12_LANE1                                                   \
  0x48ff
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU12_LANE1                                \
  0x48ff
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU12_LANE1                                \
  0x499f
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU12_LANE1                                \
  0x9a3f
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU12_LANE1                                \
  0x9adf
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU12_LANE1                                \
  0x9b7f
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU12_LANE1                                \
  0x9c1f
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU12_LANE1                                \
  0x9cbf
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU12_LANE1                                \
  0x9d5f
#define mmTX_DISP_RFU12_LANE2                                                   \
  0x490f
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU12_LANE2                                \
  0x490f
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU12_LANE2                                \
  0x49af
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU12_LANE2                                \
  0x9a4f
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU12_LANE2                                \
  0x9aef
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU12_LANE2                                \
  0x9b8f
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU12_LANE2                                \
  0x9c2f
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU12_LANE2                                \
  0x9ccf
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU12_LANE2                                \
  0x9d6f
#define mmTX_DISP_RFU12_LANE3                                                   \
  0x491f
#define mmDC_COMBOPHYTXREGS0_TX_DISP_RFU12_LANE3                                \
  0x491f
#define mmDC_COMBOPHYTXREGS1_TX_DISP_RFU12_LANE3                                \
  0x49bf
#define mmDC_COMBOPHYTXREGS2_TX_DISP_RFU12_LANE3                                \
  0x9a5f
#define mmDC_COMBOPHYTXREGS3_TX_DISP_RFU12_LANE3                                \
  0x9aff
#define mmDC_COMBOPHYTXREGS4_TX_DISP_RFU12_LANE3                                \
  0x9b9f
#define mmDC_COMBOPHYTXREGS5_TX_DISP_RFU12_LANE3                                \
  0x9c3f
#define mmDC_COMBOPHYTXREGS6_TX_DISP_RFU12_LANE3                                \
  0x9cdf
#define mmDC_COMBOPHYTXREGS7_TX_DISP_RFU12_LANE3                                \
  0x9d7f
#define mmCOMMON_MAR_DEEMPH_NOM                                                 \
  0x48c3
#define mmDC_COMBOPHYCMREGS0_COMMON_MAR_DEEMPH_NOM                              \
  0x48c3
#define mmDC_COMBOPHYCMREGS1_COMMON_MAR_DEEMPH_NOM                              \
  0x4963
#define mmDC_COMBOPHYCMREGS2_COMMON_MAR_DEEMPH_NOM                              \
  0x9a03
#define mmDC_COMBOPHYCMREGS3_COMMON_MAR_DEEMPH_NOM                              \
  0x9aa3
#define mmDC_COMBOPHYCMREGS4_COMMON_MAR_DEEMPH_NOM                              \
  0x9b43
#define mmDC_COMBOPHYCMREGS5_COMMON_MAR_DEEMPH_NOM                              \
  0x9be3
#define mmDC_COMBOPHYCMREGS6_COMMON_MAR_DEEMPH_NOM                              \
  0x9c83
#define mmDC_COMBOPHYCMREGS7_COMMON_MAR_DEEMPH_NOM                              \
  0x9d23
#define mmCOMMON_LANE_PWRMGMT                                                   \
  0x48c4
#define mmDC_COMBOPHYCMREGS0_COMMON_LANE_PWRMGMT                                \
  0x48c4
#define mmDC_COMBOPHYCMREGS1_COMMON_LANE_PWRMGMT                                \
  0x4964
#define mmDC_COMBOPHYCMREGS2_COMMON_LANE_PWRMGMT                                \
  0x9a04
#define mmDC_COMBOPHYCMREGS3_COMMON_LANE_PWRMGMT                                \
  0x9aa4
#define mmDC_COMBOPHYCMREGS4_COMMON_LANE_PWRMGMT                                \
  0x9b44
#define mmDC_COMBOPHYCMREGS5_COMMON_LANE_PWRMGMT                                \
  0x9be4
#define mmDC_COMBOPHYCMREGS6_COMMON_LANE_PWRMGMT                                \
  0x9c84
#define mmDC_COMBOPHYCMREGS7_COMMON_LANE_PWRMGMT                                \
  0x9d24
#define mmCOMMON_TXCNTRL                                                        \
  0x48c5
#define mmDC_COMBOPHYCMREGS0_COMMON_TXCNTRL                                     \
  0x48c5
#define mmDC_COMBOPHYCMREGS1_COMMON_TXCNTRL                                     \
  0x4965
#define mmDC_COMBOPHYCMREGS2_COMMON_TXCNTRL                                     \
  0x9a05
#define mmDC_COMBOPHYCMREGS3_COMMON_TXCNTRL                                     \
  0x9aa5
#define mmDC_COMBOPHYCMREGS4_COMMON_TXCNTRL                                     \
  0x9b45
#define mmDC_COMBOPHYCMREGS5_COMMON_TXCNTRL                                     \
  0x9be5
#define mmDC_COMBOPHYCMREGS6_COMMON_TXCNTRL                                     \
  0x9c85
#define mmDC_COMBOPHYCMREGS7_COMMON_TXCNTRL                                     \
  0x9d25
#define mmCOMMON_TMDP                                                           \
  0x48c6
#define mmDC_COMBOPHYCMREGS0_COMMON_TMDP                                        \
  0x48c6
#define mmDC_COMBOPHYCMREGS1_COMMON_TMDP                                        \
  0x4966
#define mmDC_COMBOPHYCMREGS2_COMMON_TMDP                                        \
  0x9a06
#define mmDC_COMBOPHYCMREGS3_COMMON_TMDP                                        \
  0x9aa6
#define mmDC_COMBOPHYCMREGS4_COMMON_TMDP                                        \
  0x9b46
#define mmDC_COMBOPHYCMREGS5_COMMON_TMDP                                        \
  0x9be6
#define mmDC_COMBOPHYCMREGS6_COMMON_TMDP                                        \
  0x9c86
#define mmDC_COMBOPHYCMREGS7_COMMON_TMDP                                        \
  0x9d26
#define mmCOMMON_LANE_RESETS                                                    \
  0x48c7
#define mmDC_COMBOPHYCMREGS0_COMMON_LANE_RESETS                                 \
  0x48c7
#define mmDC_COMBOPHYCMREGS1_COMMON_LANE_RESETS                                 \
  0x4967
#define mmDC_COMBOPHYCMREGS2_COMMON_LANE_RESETS                                 \
  0x9a07
#define mmDC_COMBOPHYCMREGS3_COMMON_LANE_RESETS                                 \
  0x9aa7
#define mmDC_COMBOPHYCMREGS4_COMMON_LANE_RESETS                                 \
  0x9b47
#define mmDC_COMBOPHYCMREGS5_COMMON_LANE_RESETS                                 \
  0x9be7
#define mmDC_COMBOPHYCMREGS6_COMMON_LANE_RESETS                                 \
  0x9c87
#define mmDC_COMBOPHYCMREGS7_COMMON_LANE_RESETS                                 \
  0x9d27
#define mmCOMMON_ZCALCODE_CTRL                                                  \
  0x48c8
#define mmDC_COMBOPHYCMREGS0_COMMON_ZCALCODE_CTRL                               \
  0x48c8
#define mmDC_COMBOPHYCMREGS1_COMMON_ZCALCODE_CTRL                               \
  0x4968
#define mmDC_COMBOPHYCMREGS2_COMMON_ZCALCODE_CTRL                               \
  0x9a08
#define mmDC_COMBOPHYCMREGS3_COMMON_ZCALCODE_CTRL                               \
  0x9aa8
#define mmDC_COMBOPHYCMREGS4_COMMON_ZCALCODE_CTRL                               \
  0x9b48
#define mmDC_COMBOPHYCMREGS5_COMMON_ZCALCODE_CTRL                               \
  0x9be8
#define mmDC_COMBOPHYCMREGS6_COMMON_ZCALCODE_CTRL                               \
  0x9c88
#define mmDC_COMBOPHYCMREGS7_COMMON_ZCALCODE_CTRL                               \
  0x9d28
#define mmCOMMON_DISP_RFU1                                                      \
  0x48c9
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU1                                   \
  0x48c9
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU1                                   \
  0x4969
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU1                                   \
  0x9a09
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU1                                   \
  0x9aa9
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU1                                   \
  0x9b49
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU1                                   \
  0x9be9
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU1                                   \
  0x9c89
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU1                                   \
  0x9d29
#define mmCOMMON_DISP_RFU2                                                      \
  0x48ca
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU2                                   \
  0x48ca
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU2                                   \
  0x496a
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU2                                   \
  0x9a0a
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU2                                   \
  0x9aaa
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU2                                   \
  0x9b4a
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU2                                   \
  0x9bea
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU2                                   \
  0x9c8a
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU2                                   \
  0x9d2a
#define mmCOMMON_DISP_RFU3                                                      \
  0x48cb
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU3                                   \
  0x48cb
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU3                                   \
  0x496b
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU3                                   \
  0x9a0b
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU3                                   \
  0x9aab
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU3                                   \
  0x9b4b
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU3                                   \
  0x9beb
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU3                                   \
  0x9c8b
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU3                                   \
  0x9d2b
#define mmCOMMON_DISP_RFU4                                                      \
  0x48cc
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU4                                   \
  0x48cc
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU4                                   \
  0x496c
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU4                                   \
  0x9a0c
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU4                                   \
  0x9aac
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU4                                   \
  0x9b4c
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU4                                   \
  0x9bec
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU4                                   \
  0x9c8c
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU4                                   \
  0x9d2c
#define mmCOMMON_DISP_RFU5                                                      \
  0x48cd
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU5                                   \
  0x48cd
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU5                                   \
  0x496d
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU5                                   \
  0x9a0d
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU5                                   \
  0x9aad
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU5                                   \
  0x9b4d
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU5                                   \
  0x9bed
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU5                                   \
  0x9c8d
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU5                                   \
  0x9d2d
#define mmCOMMON_DISP_RFU6                                                      \
  0x48ce
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU6                                   \
  0x48ce
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU6                                   \
  0x496e
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU6                                   \
  0x9a0e
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU6                                   \
  0x9aae
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU6                                   \
  0x9b4e
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU6                                   \
  0x9bee
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU6                                   \
  0x9c8e
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU6                                   \
  0x9d2e
#define mmCOMMON_DISP_RFU7                                                      \
  0x48cf
#define mmDC_COMBOPHYCMREGS0_COMMON_DISP_RFU7                                   \
  0x48cf
#define mmDC_COMBOPHYCMREGS1_COMMON_DISP_RFU7                                   \
  0x496f
#define mmDC_COMBOPHYCMREGS2_COMMON_DISP_RFU7                                   \
  0x9a0f
#define mmDC_COMBOPHYCMREGS3_COMMON_DISP_RFU7                                   \
  0x9aaf
#define mmDC_COMBOPHYCMREGS4_COMMON_DISP_RFU7                                   \
  0x9b4f
#define mmDC_COMBOPHYCMREGS5_COMMON_DISP_RFU7                                   \
  0x9bef
#define mmDC_COMBOPHYCMREGS6_COMMON_DISP_RFU7                                   \
  0x9c8f
#define mmDC_COMBOPHYCMREGS7_COMMON_DISP_RFU7                                   \
  0x9d2f
#define mmFREQ_CTRL0                                                            \
  0x4920
#define mmDC_COMBOPHYPLLREGS0_FREQ_CTRL0                                        \
  0x4920
#define mmDC_COMBOPHYPLLREGS1_FREQ_CTRL0                                        \
  0x49c0
#define mmDC_COMBOPHYPLLREGS2_FREQ_CTRL0                                        \
  0x9a60
#define mmDC_COMBOPHYPLLREGS3_FREQ_CTRL0                                        \
  0x9b00
#define mmDC_COMBOPHYPLLREGS4_FREQ_CTRL0                                        \
  0x9ba0
#define mmDC_COMBOPHYPLLREGS5_FREQ_CTRL0                                        \
  0x9c40
#define mmDC_COMBOPHYPLLREGS6_FREQ_CTRL0                                        \
  0x9ce0
#define mmDC_COMBOPHYPLLREGS7_FREQ_CTRL0                                        \
  0x9d80
#define mmFREQ_CTRL1                                                            \
  0x4921
#define mmDC_COMBOPHYPLLREGS0_FREQ_CTRL1                                        \
  0x4921
#define mmDC_COMBOPHYPLLREGS1_FREQ_CTRL1                                        \
  0x49c1
#define mmDC_COMBOPHYPLLREGS2_FREQ_CTRL1                                        \
  0x9a61
#define mmDC_COMBOPHYPLLREGS3_FREQ_CTRL1                                        \
  0x9b01
#define mmDC_COMBOPHYPLLREGS4_FREQ_CTRL1                                        \
  0x9ba1
#define mmDC_COMBOPHYPLLREGS5_FREQ_CTRL1                                        \
  0x9c41
#define mmDC_COMBOPHYPLLREGS6_FREQ_CTRL1                                        \
  0x9ce1
#define mmDC_COMBOPHYPLLREGS7_FREQ_CTRL1                                        \
  0x9d81
#define mmFREQ_CTRL2                                                            \
  0x4922
#define mmDC_COMBOPHYPLLREGS0_FREQ_CTRL2                                        \
  0x4922
#define mmDC_COMBOPHYPLLREGS1_FREQ_CTRL2                                        \
  0x49c2
#define mmDC_COMBOPHYPLLREGS2_FREQ_CTRL2                                        \
  0x9a62
#define mmDC_COMBOPHYPLLREGS3_FREQ_CTRL2                                        \
  0x9b02
#define mmDC_COMBOPHYPLLREGS4_FREQ_CTRL2                                        \
  0x9ba2
#define mmDC_COMBOPHYPLLREGS5_FREQ_CTRL2                                        \
  0x9c42
#define mmDC_COMBOPHYPLLREGS6_FREQ_CTRL2                                        \
  0x9ce2
#define mmDC_COMBOPHYPLLREGS7_FREQ_CTRL2                                        \
  0x9d82
#define mmFREQ_CTRL3                                                            \
  0x4923
#define mmDC_COMBOPHYPLLREGS0_FREQ_CTRL3                                        \
  0x4923
#define mmDC_COMBOPHYPLLREGS1_FREQ_CTRL3                                        \
  0x49c3
#define mmDC_COMBOPHYPLLREGS2_FREQ_CTRL3                                        \
  0x9a63
#define mmDC_COMBOPHYPLLREGS3_FREQ_CTRL3                                        \
  0x9b03
#define mmDC_COMBOPHYPLLREGS4_FREQ_CTRL3                                        \
  0x9ba3
#define mmDC_COMBOPHYPLLREGS5_FREQ_CTRL3                                        \
  0x9c43
#define mmDC_COMBOPHYPLLREGS6_FREQ_CTRL3                                        \
  0x9ce3
#define mmDC_COMBOPHYPLLREGS7_FREQ_CTRL3                                        \
  0x9d83
#define mmBW_CTRL_COARSE                                                        \
  0x4924
#define mmDC_COMBOPHYPLLREGS0_BW_CTRL_COARSE                                    \
  0x4924
#define mmDC_COMBOPHYPLLREGS1_BW_CTRL_COARSE                                    \
  0x49c4
#define mmDC_COMBOPHYPLLREGS2_BW_CTRL_COARSE                                    \
  0x9a64
#define mmDC_COMBOPHYPLLREGS3_BW_CTRL_COARSE                                    \
  0x9b04
#define mmDC_COMBOPHYPLLREGS4_BW_CTRL_COARSE                                    \
  0x9ba4
#define mmDC_COMBOPHYPLLREGS5_BW_CTRL_COARSE                                    \
  0x9c44
#define mmDC_COMBOPHYPLLREGS6_BW_CTRL_COARSE                                    \
  0x9ce4
#define mmDC_COMBOPHYPLLREGS7_BW_CTRL_COARSE                                    \
  0x9d84
#define mmBW_CTRL_FINE                                                          \
  0x4925
#define mmDC_COMBOPHYPLLREGS0_BW_CTRL_FINE                                      \
  0x4925
#define mmDC_COMBOPHYPLLREGS1_BW_CTRL_FINE                                      \
  0x49c5
#define mmDC_COMBOPHYPLLREGS2_BW_CTRL_FINE                                      \
  0x9a65
#define mmDC_COMBOPHYPLLREGS3_BW_CTRL_FINE                                      \
  0x9b05
#define mmDC_COMBOPHYPLLREGS4_BW_CTRL_FINE                                      \
  0x9ba5
#define mmDC_COMBOPHYPLLREGS5_BW_CTRL_FINE                                      \
  0x9c45
#define mmDC_COMBOPHYPLLREGS6_BW_CTRL_FINE                                      \
  0x9ce5
#define mmDC_COMBOPHYPLLREGS7_BW_CTRL_FINE                                      \
  0x9d85
#define mmCAL_CTRL                                                              \
  0x4926
#define mmDC_COMBOPHYPLLREGS0_CAL_CTRL                                          \
  0x4926
#define mmDC_COMBOPHYPLLREGS1_CAL_CTRL                                          \
  0x49c6
#define mmDC_COMBOPHYPLLREGS2_CAL_CTRL                                          \
  0x9a66
#define mmDC_COMBOPHYPLLREGS3_CAL_CTRL                                          \
  0x9b06
#define mmDC_COMBOPHYPLLREGS4_CAL_CTRL                                          \
  0x9ba6
#define mmDC_COMBOPHYPLLREGS5_CAL_CTRL                                          \
  0x9c46
#define mmDC_COMBOPHYPLLREGS6_CAL_CTRL                                          \
  0x9ce6
#define mmDC_COMBOPHYPLLREGS7_CAL_CTRL                                          \
  0x9d86
#define mmLOOP_CTRL                                                             \
  0x4927
#define mmDC_COMBOPHYPLLREGS0_LOOP_CTRL                                         \
  0x4927
#define mmDC_COMBOPHYPLLREGS1_LOOP_CTRL                                         \
  0x49c7
#define mmDC_COMBOPHYPLLREGS2_LOOP_CTRL                                         \
  0x9a67
#define mmDC_COMBOPHYPLLREGS3_LOOP_CTRL                                         \
  0x9b07
#define mmDC_COMBOPHYPLLREGS4_LOOP_CTRL                                         \
  0x9ba7
#define mmDC_COMBOPHYPLLREGS5_LOOP_CTRL                                         \
  0x9c47
#define mmDC_COMBOPHYPLLREGS6_LOOP_CTRL                                         \
  0x9ce7
#define mmDC_COMBOPHYPLLREGS7_LOOP_CTRL                                         \
  0x9d87
#define mmDEBUG0                                                                \
  0x4928
#define mmDC_COMBOPHYPLLREGS0_DEBUG0                                            \
  0x4928
#define mmDC_COMBOPHYPLLREGS1_DEBUG0                                            \
  0x49c8
#define mmDC_COMBOPHYPLLREGS2_DEBUG0                                            \
  0x9a68
#define mmDC_COMBOPHYPLLREGS3_DEBUG0                                            \
  0x9b08
#define mmDC_COMBOPHYPLLREGS4_DEBUG0                                            \
  0x9ba8
#define mmDC_COMBOPHYPLLREGS5_DEBUG0                                            \
  0x9c48
#define mmDC_COMBOPHYPLLREGS6_DEBUG0                                            \
  0x9ce8
#define mmDC_COMBOPHYPLLREGS7_DEBUG0                                            \
  0x9d88
#define mmVREG_CFG                                                              \
  0x4929
#define mmDC_COMBOPHYPLLREGS0_VREG_CFG                                          \
  0x4929
#define mmDC_COMBOPHYPLLREGS1_VREG_CFG                                          \
  0x49c9
#define mmDC_COMBOPHYPLLREGS2_VREG_CFG                                          \
  0x9a69
#define mmDC_COMBOPHYPLLREGS3_VREG_CFG                                          \
  0x9b09
#define mmDC_COMBOPHYPLLREGS4_VREG_CFG                                          \
  0x9ba9
#define mmDC_COMBOPHYPLLREGS5_VREG_CFG                                          \
  0x9c49
#define mmDC_COMBOPHYPLLREGS6_VREG_CFG                                          \
  0x9ce9
#define mmDC_COMBOPHYPLLREGS7_VREG_CFG                                          \
  0x9d89
#define mmOBSERVE0                                                              \
  0x492a
#define mmDC_COMBOPHYPLLREGS0_OBSERVE0                                          \
  0x492a
#define mmDC_COMBOPHYPLLREGS1_OBSERVE0                                          \
  0x49ca
#define mmDC_COMBOPHYPLLREGS2_OBSERVE0                                          \
  0x9a6a
#define mmDC_COMBOPHYPLLREGS3_OBSERVE0                                          \
  0x9b0a
#define mmDC_COMBOPHYPLLREGS4_OBSERVE0                                          \
  0x9baa
#define mmDC_COMBOPHYPLLREGS5_OBSERVE0                                          \
  0x9c4a
#define mmDC_COMBOPHYPLLREGS6_OBSERVE0                                          \
  0x9cea
#define mmDC_COMBOPHYPLLREGS7_OBSERVE0                                          \
  0x9d8a
#define mmOBSERVE1                                                              \
  0x492b
#define mmDC_COMBOPHYPLLREGS0_OBSERVE1                                          \
  0x492b
#define mmDC_COMBOPHYPLLREGS1_OBSERVE1                                          \
  0x49cb
#define mmDC_COMBOPHYPLLREGS2_OBSERVE1                                          \
  0x9a6b
#define mmDC_COMBOPHYPLLREGS3_OBSERVE1                                          \
  0x9b0b
#define mmDC_COMBOPHYPLLREGS4_OBSERVE1                                          \
  0x9bab
#define mmDC_COMBOPHYPLLREGS5_OBSERVE1                                          \
  0x9c4b
#define mmDC_COMBOPHYPLLREGS6_OBSERVE1                                          \
  0x9ceb
#define mmDC_COMBOPHYPLLREGS7_OBSERVE1                                          \
  0x9d8b
#define mmDFT_OUT                                                               \
  0x492c
#define mmDC_COMBOPHYPLLREGS0_DFT_OUT                                           \
  0x492c
#define mmDC_COMBOPHYPLLREGS1_DFT_OUT                                           \
  0x49cc
#define mmDC_COMBOPHYPLLREGS2_DFT_OUT                                           \
  0x9a6c
#define mmDC_COMBOPHYPLLREGS3_DFT_OUT                                           \
  0x9b0c
#define mmDC_COMBOPHYPLLREGS4_DFT_OUT                                           \
  0x9bac
#define mmDC_COMBOPHYPLLREGS5_DFT_OUT                                           \
  0x9c4c
#define mmDC_COMBOPHYPLLREGS6_DFT_OUT                                           \
  0x9cec
#define mmDC_COMBOPHYPLLREGS7_DFT_OUT                                           \
  0x9d8c
#define mmPLL_WRAP_CNTRL1                                                       \
  0x495e
#define mmDC_COMBOPHYPLLREGS0_PLL_WRAP_CNTRL1                                   \
  0x495e
#define mmDC_COMBOPHYPLLREGS1_PLL_WRAP_CNTRL1                                   \
  0x49fe
#define mmDC_COMBOPHYPLLREGS2_PLL_WRAP_CNTRL1                                   \
  0x9a9e
#define mmDC_COMBOPHYPLLREGS3_PLL_WRAP_CNTRL1                                   \
  0x9b3e
#define mmDC_COMBOPHYPLLREGS4_PLL_WRAP_CNTRL1                                   \
  0x9bde
#define mmDC_COMBOPHYPLLREGS5_PLL_WRAP_CNTRL1                                   \
  0x9c7e
#define mmDC_COMBOPHYPLLREGS6_PLL_WRAP_CNTRL1                                   \
  0x9d1e
#define mmDC_COMBOPHYPLLREGS7_PLL_WRAP_CNTRL1                                   \
  0x9dbe
#define mmPLL_WRAP_CNTRL                                                        \
  0x495f
#define mmDC_COMBOPHYPLLREGS0_PLL_WRAP_CNTRL                                    \
  0x495f
#define mmDC_COMBOPHYPLLREGS1_PLL_WRAP_CNTRL                                    \
  0x49ff
#define mmDC_COMBOPHYPLLREGS2_PLL_WRAP_CNTRL                                    \
  0x9a9f
#define mmDC_COMBOPHYPLLREGS3_PLL_WRAP_CNTRL                                    \
  0x9b3f
#define mmDC_COMBOPHYPLLREGS4_PLL_WRAP_CNTRL                                    \
  0x9bdf
#define mmDC_COMBOPHYPLLREGS5_PLL_WRAP_CNTRL                                    \
  0x9c7f
#define mmDC_COMBOPHYPLLREGS6_PLL_WRAP_CNTRL                                    \
  0x9d1f
#define mmDC_COMBOPHYPLLREGS7_PLL_WRAP_CNTRL                                    \
  0x9dbf
#define mmPPLL_VREG_CFG                                                         \
  0x1700
#define mmDC_DISPLAYPLLREGS0_PPLL_VREG_CFG                                      \
  0x1700
#define mmDC_DISPLAYPLLREGS1_PPLL_VREG_CFG                                      \
  0x172a
#define mmDC_DISPLAYPLLREGS2_PPLL_VREG_CFG                                      \
  0x1754
#define mmPPLL_MODE_CNTL                                                        \
  0x1701
#define mmDC_DISPLAYPLLREGS0_PPLL_MODE_CNTL                                     \
  0x1701
#define mmDC_DISPLAYPLLREGS1_PPLL_MODE_CNTL                                     \
  0x172b
#define mmDC_DISPLAYPLLREGS2_PPLL_MODE_CNTL                                     \
  0x1755
#define mmPPLL_FREQ_CTRL0                                                       \
  0x1702
#define mmDC_DISPLAYPLLREGS0_PPLL_FREQ_CTRL0                                    \
  0x1702
#define mmDC_DISPLAYPLLREGS1_PPLL_FREQ_CTRL0                                    \
  0x172c
#define mmDC_DISPLAYPLLREGS2_PPLL_FREQ_CTRL0                                    \
  0x1756
#define mmPPLL_FREQ_CTRL1                                                       \
  0x1703
#define mmDC_DISPLAYPLLREGS0_PPLL_FREQ_CTRL1                                    \
  0x1703
#define mmDC_DISPLAYPLLREGS1_PPLL_FREQ_CTRL1                                    \
  0x172d
#define mmDC_DISPLAYPLLREGS2_PPLL_FREQ_CTRL1                                    \
  0x1757
#define mmPPLL_FREQ_CTRL2                                                       \
  0x1704
#define mmDC_DISPLAYPLLREGS0_PPLL_FREQ_CTRL2                                    \
  0x1704
#define mmDC_DISPLAYPLLREGS1_PPLL_FREQ_CTRL2                                    \
  0x172e
#define mmDC_DISPLAYPLLREGS2_PPLL_FREQ_CTRL2                                    \
  0x1758
#define mmPPLL_FREQ_CTRL3                                                       \
  0x1705
#define mmDC_DISPLAYPLLREGS0_PPLL_FREQ_CTRL3                                    \
  0x1705
#define mmDC_DISPLAYPLLREGS1_PPLL_FREQ_CTRL3                                    \
  0x172f
#define mmDC_DISPLAYPLLREGS2_PPLL_FREQ_CTRL3                                    \
  0x1759
#define mmPPLL_BW_CTRL_COARSE                                                   \
  0x1706
#define mmDC_DISPLAYPLLREGS0_PPLL_BW_CTRL_COARSE                                \
  0x1706
#define mmDC_DISPLAYPLLREGS1_PPLL_BW_CTRL_COARSE                                \
  0x1730
#define mmDC_DISPLAYPLLREGS2_PPLL_BW_CTRL_COARSE                                \
  0x175a
#define mmPPLL_BW_CTRL_FINE                                                     \
  0x1708
#define mmDC_DISPLAYPLLREGS0_PPLL_BW_CTRL_FINE                                  \
  0x1708
#define mmDC_DISPLAYPLLREGS1_PPLL_BW_CTRL_FINE                                  \
  0x1732
#define mmDC_DISPLAYPLLREGS2_PPLL_BW_CTRL_FINE                                  \
  0x175c
#define mmPPLL_CAL_CTRL                                                         \
  0x1709
#define mmDC_DISPLAYPLLREGS0_PPLL_CAL_CTRL                                      \
  0x1709
#define mmDC_DISPLAYPLLREGS1_PPLL_CAL_CTRL                                      \
  0x1733
#define mmDC_DISPLAYPLLREGS2_PPLL_CAL_CTRL                                      \
  0x175d
#define mmPPLL_LOOP_CTRL                                                        \
  0x170a
#define mmDC_DISPLAYPLLREGS0_PPLL_LOOP_CTRL                                     \
  0x170a
#define mmDC_DISPLAYPLLREGS1_PPLL_LOOP_CTRL                                     \
  0x1734
#define mmDC_DISPLAYPLLREGS2_PPLL_LOOP_CTRL                                     \
  0x175e
#define mmPPLL_REFCLK_CNTL                                                      \
  0x1718
#define mmDC_DISPLAYPLLREGS0_PPLL_REFCLK_CNTL                                   \
  0x1718
#define mmDC_DISPLAYPLLREGS1_PPLL_REFCLK_CNTL                                   \
  0x1742
#define mmDC_DISPLAYPLLREGS2_PPLL_REFCLK_CNTL                                   \
  0x176c
#define mmPPLL_CLKOUT_CNTL                                                      \
  0x1719
#define mmDC_DISPLAYPLLREGS0_PPLL_CLKOUT_CNTL                                   \
  0x1719
#define mmDC_DISPLAYPLLREGS1_PPLL_CLKOUT_CNTL                                   \
  0x1743
#define mmDC_DISPLAYPLLREGS2_PPLL_CLKOUT_CNTL                                   \
  0x176d
#define mmPPLL_DFT_CNTL                                                         \
  0x171a
#define mmDC_DISPLAYPLLREGS0_PPLL_DFT_CNTL                                      \
  0x171a
#define mmDC_DISPLAYPLLREGS1_PPLL_DFT_CNTL                                      \
  0x1744
#define mmDC_DISPLAYPLLREGS2_PPLL_DFT_CNTL                                      \
  0x176e
#define mmPPLL_ANALOG_CNTL                                                      \
  0x171b
#define mmDC_DISPLAYPLLREGS0_PPLL_ANALOG_CNTL                                   \
  0x171b
#define mmDC_DISPLAYPLLREGS1_PPLL_ANALOG_CNTL                                   \
  0x1745
#define mmDC_DISPLAYPLLREGS2_PPLL_ANALOG_CNTL                                   \
  0x176f
#define mmPPLL_POSTDIV                                                          \
  0x171c
#define mmDC_DISPLAYPLLREGS0_PPLL_POSTDIV                                       \
  0x171c
#define mmDC_DISPLAYPLLREGS1_PPLL_POSTDIV                                       \
  0x1746
#define mmDC_DISPLAYPLLREGS2_PPLL_POSTDIV                                       \
  0x1770
#define mmPPLL_DEBUG0                                                           \
  0x1720
#define mmDC_DISPLAYPLLREGS0_PPLL_DEBUG0                                        \
  0x1720
#define mmDC_DISPLAYPLLREGS1_PPLL_DEBUG0                                        \
  0x174a
#define mmDC_DISPLAYPLLREGS2_PPLL_DEBUG0                                        \
  0x1774
#define mmPPLL_OBSERVE0                                                         \
  0x1721
#define mmDC_DISPLAYPLLREGS0_PPLL_OBSERVE0                                      \
  0x1721
#define mmDC_DISPLAYPLLREGS1_PPLL_OBSERVE0                                      \
  0x174b
#define mmDC_DISPLAYPLLREGS2_PPLL_OBSERVE0                                      \
  0x1775
#define mmPPLL_OBSERVE1                                                         \
  0x1722
#define mmDC_DISPLAYPLLREGS0_PPLL_OBSERVE1                                      \
  0x1722
#define mmDC_DISPLAYPLLREGS1_PPLL_OBSERVE1                                      \
  0x174c
#define mmDC_DISPLAYPLLREGS2_PPLL_OBSERVE1                                      \
  0x1776
#define mmPPLL_UPDATE_CNTL                                                      \
  0x1724
#define mmDC_DISPLAYPLLREGS0_PPLL_UPDATE_CNTL                                   \
  0x1724
#define mmDC_DISPLAYPLLREGS1_PPLL_UPDATE_CNTL                                   \
  0x174e
#define mmDC_DISPLAYPLLREGS2_PPLL_UPDATE_CNTL                                   \
  0x1778
#define mmPPLL_OBSERVE0_OUT                                                     \
  0x1725
#define mmDC_DISPLAYPLLREGS0_PPLL_OBSERVE0_OUT                                  \
  0x1725
#define mmDC_DISPLAYPLLREGS1_PPLL_OBSERVE0_OUT                                  \
  0x174f
#define mmDC_DISPLAYPLLREGS2_PPLL_OBSERVE0_OUT                                  \
  0x1779
#define mmPPLL_STATUS_DEBUG1                                                    \
  0x1726
#define mmDC_DISPLAYPLLREGS0_PPLL_STATUS_DEBUG1                                 \
  0x1726
#define mmDC_DISPLAYPLLREGS1_PPLL_STATUS_DEBUG1                                 \
  0x1750
#define mmDC_DISPLAYPLLREGS2_PPLL_STATUS_DEBUG1                                 \
  0x177a
#define mmPPLL_DEBUG_MUX_CNTL                                                   \
  0x1727
#define mmDC_DISPLAYPLLREGS0_PPLL_DEBUG_MUX_CNTL                                \
  0x1727
#define mmDC_DISPLAYPLLREGS1_PPLL_DEBUG_MUX_CNTL                                \
  0x1751
#define mmDC_DISPLAYPLLREGS2_PPLL_DEBUG_MUX_CNTL                                \
  0x177b
#define mmPPLL_DIV_UPDATE_DEBUG                                                 \
  0x1728
#define mmDC_DISPLAYPLLREGS0_PPLL_DIV_UPDATE_DEBUG                              \
  0x1728
#define mmDC_DISPLAYPLLREGS1_PPLL_DIV_UPDATE_DEBUG                              \
  0x1752
#define mmDC_DISPLAYPLLREGS2_PPLL_DIV_UPDATE_DEBUG                              \
  0x177c
#define mmPPLL_STATUS_DEBUG0                                                    \
  0x1729
#define mmDC_DISPLAYPLLREGS0_PPLL_STATUS_DEBUG0                                 \
  0x1729
#define mmDC_DISPLAYPLLREGS1_PPLL_STATUS_DEBUG0                                 \
  0x1753
#define mmDC_DISPLAYPLLREGS2_PPLL_STATUS_DEBUG0                                 \
  0x177d
#define mmCOMP_EN_CTL                                                           \
  0x9dc0
#define mmDPCSTX_PHY_CNTL                                                       \
  0x48d0
#define mmDPCSTX0_DPCSTX_PHY_CNTL                                               \
  0x48d0
#define mmDPCSTX1_DPCSTX_PHY_CNTL                                               \
  0x4970
#define mmDPCSTX2_DPCSTX_PHY_CNTL                                               \
  0x9a10
#define mmDPCSTX3_DPCSTX_PHY_CNTL                                               \
  0x9ab0
#define mmDPCSTX4_DPCSTX_PHY_CNTL                                               \
  0x9b50
#define mmDPCSTX5_DPCSTX_PHY_CNTL                                               \
  0x9bf0
#define mmDPCSTX6_DPCSTX_PHY_CNTL                                               \
  0x9c90
#define mmDPCSTX7_DPCSTX_PHY_CNTL                                               \
  0x9d30
#define mmDPCSTX_TX_CLOCK_CNTL                                                  \
  0x48d1
#define mmDPCSTX0_DPCSTX_TX_CLOCK_CNTL                                          \
  0x48d1
#define mmDPCSTX1_DPCSTX_TX_CLOCK_CNTL                                          \
  0x4971
#define mmDPCSTX2_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9a11
#define mmDPCSTX3_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9ab1
#define mmDPCSTX4_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9b51
#define mmDPCSTX5_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9bf1
#define mmDPCSTX6_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9c91
#define mmDPCSTX7_DPCSTX_TX_CLOCK_CNTL                                          \
  0x9d31
#define mmDPCSTX_TX_CNTL                                                        \
  0x48d3
#define mmDPCSTX0_DPCSTX_TX_CNTL                                                \
  0x48d3
#define mmDPCSTX1_DPCSTX_TX_CNTL                                                \
  0x4973
#define mmDPCSTX2_DPCSTX_TX_CNTL                                                \
  0x9a13
#define mmDPCSTX3_DPCSTX_TX_CNTL                                                \
  0x9ab3
#define mmDPCSTX4_DPCSTX_TX_CNTL                                                \
  0x9b53
#define mmDPCSTX5_DPCSTX_TX_CNTL                                                \
  0x9bf3
#define mmDPCSTX6_DPCSTX_TX_CNTL                                                \
  0x9c93
#define mmDPCSTX7_DPCSTX_TX_CNTL                                                \
  0x9d33
#define mmDPCSTX_CBUS_CNTL                                                      \
  0x48d5
#define mmDPCSTX0_DPCSTX_CBUS_CNTL                                              \
  0x48d5
#define mmDPCSTX1_DPCSTX_CBUS_CNTL                                              \
  0x4975
#define mmDPCSTX2_DPCSTX_CBUS_CNTL                                              \
  0x9a15
#define mmDPCSTX3_DPCSTX_CBUS_CNTL                                              \
  0x9ab5
#define mmDPCSTX4_DPCSTX_CBUS_CNTL                                              \
  0x9b55
#define mmDPCSTX5_DPCSTX_CBUS_CNTL                                              \
  0x9bf5
#define mmDPCSTX6_DPCSTX_CBUS_CNTL                                              \
  0x9c95
#define mmDPCSTX7_DPCSTX_CBUS_CNTL                                              \
  0x9d35
#define mmDPCSTX_REG_ERROR_STATUS                                               \
  0x48d6
#define mmDPCSTX0_DPCSTX_REG_ERROR_STATUS                                       \
  0x48d6
#define mmDPCSTX1_DPCSTX_REG_ERROR_STATUS                                       \
  0x4976
#define mmDPCSTX2_DPCSTX_REG_ERROR_STATUS                                       \
  0x9a16
#define mmDPCSTX3_DPCSTX_REG_ERROR_STATUS                                       \
  0x9ab6
#define mmDPCSTX4_DPCSTX_REG_ERROR_STATUS                                       \
  0x9b56
#define mmDPCSTX5_DPCSTX_REG_ERROR_STATUS                                       \
  0x9bf6
#define mmDPCSTX6_DPCSTX_REG_ERROR_STATUS                                       \
  0x9c96
#define mmDPCSTX7_DPCSTX_REG_ERROR_STATUS                                       \
  0x9d36
#define mmDPCSTX_TX_ERROR_STATUS                                                \
  0x48d7
#define mmDPCSTX0_DPCSTX_TX_ERROR_STATUS                                        \
  0x48d7
#define mmDPCSTX1_DPCSTX_TX_ERROR_STATUS                                        \
  0x4977
#define mmDPCSTX2_DPCSTX_TX_ERROR_STATUS                                        \
  0x9a17
#define mmDPCSTX3_DPCSTX_TX_ERROR_STATUS                                        \
  0x9ab7
#define mmDPCSTX4_DPCSTX_TX_ERROR_STATUS                                        \
  0x9b57
#define mmDPCSTX5_DPCSTX_TX_ERROR_STATUS                                        \
  0x9bf7
#define mmDPCSTX6_DPCSTX_TX_ERROR_STATUS                                        \
  0x9c97
#define mmDPCSTX7_DPCSTX_TX_ERROR_STATUS                                        \
  0x9d37
#define mmDPCSTX_PLL_UPDATE_ADDR                                                \
  0x48d8
#define mmDPCSTX0_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x48d8
#define mmDPCSTX1_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x4978
#define mmDPCSTX2_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9a18
#define mmDPCSTX3_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9ab8
#define mmDPCSTX4_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9b58
#define mmDPCSTX5_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9bf8
#define mmDPCSTX6_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9c98
#define mmDPCSTX7_DPCSTX_PLL_UPDATE_ADDR                                        \
  0x9d38
#define mmDPCSTX_PLL_UPDATE_DATA                                                \
  0x48d9
#define mmDPCSTX0_DPCSTX_PLL_UPDATE_DATA                                        \
  0x48d9
#define mmDPCSTX1_DPCSTX_PLL_UPDATE_DATA                                        \
  0x4979
#define mmDPCSTX2_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9a19
#define mmDPCSTX3_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9ab9
#define mmDPCSTX4_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9b59
#define mmDPCSTX5_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9bf9
#define mmDPCSTX6_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9c99
#define mmDPCSTX7_DPCSTX_PLL_UPDATE_DATA                                        \
  0x9d39
#define mmDPCSTX_INDEX_MODE_ADDR                                                \
  0x48da
#define mmDPCSTX0_DPCSTX_INDEX_MODE_ADDR                                        \
  0x48da
#define mmDPCSTX1_DPCSTX_INDEX_MODE_ADDR                                        \
  0x497a
#define mmDPCSTX2_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9a1a
#define mmDPCSTX3_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9aba
#define mmDPCSTX4_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9b5a
#define mmDPCSTX5_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9bfa
#define mmDPCSTX6_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9c9a
#define mmDPCSTX7_DPCSTX_INDEX_MODE_ADDR                                        \
  0x9d3a
#define mmDPCSTX_INDEX_MODE_DATA                                                \
  0x48db
#define mmDPCSTX0_DPCSTX_INDEX_MODE_DATA                                        \
  0x48db
#define mmDPCSTX1_DPCSTX_INDEX_MODE_DATA                                        \
  0x497b
#define mmDPCSTX2_DPCSTX_INDEX_MODE_DATA                                        \
  0x9a1b
#define mmDPCSTX3_DPCSTX_INDEX_MODE_DATA                                        \
  0x9abb
#define mmDPCSTX4_DPCSTX_INDEX_MODE_DATA                                        \
  0x9b5b
#define mmDPCSTX5_DPCSTX_INDEX_MODE_DATA                                        \
  0x9bfb
#define mmDPCSTX6_DPCSTX_INDEX_MODE_DATA                                        \
  0x9c9b
#define mmDPCSTX7_DPCSTX_INDEX_MODE_DATA                                        \
  0x9d3b
#define mmDPCSTX_DEBUG_CONFIG                                                   \
  0x48dc
#define mmDPCSTX0_DPCSTX_DEBUG_CONFIG                                           \
  0x48dc
#define mmDPCSTX1_DPCSTX_DEBUG_CONFIG                                           \
  0x497c
#define mmDPCSTX2_DPCSTX_DEBUG_CONFIG                                           \
  0x9a1c
#define mmDPCSTX3_DPCSTX_DEBUG_CONFIG                                           \
  0x9abc
#define mmDPCSTX4_DPCSTX_DEBUG_CONFIG                                           \
  0x9b5c
#define mmDPCSTX5_DPCSTX_DEBUG_CONFIG                                           \
  0x9bfc
#define mmDPCSTX6_DPCSTX_DEBUG_CONFIG                                           \
  0x9c9c
#define mmDPCSTX7_DPCSTX_DEBUG_CONFIG                                           \
  0x9d3c
#define mmDPCSTX_TEST_DEBUG_DATA                                                \
  0x48dd
#define mmDPCSTX0_DPCSTX_TEST_DEBUG_DATA                                        \
  0x48dd
#define mmDPCSTX1_DPCSTX_TEST_DEBUG_DATA                                        \
  0x497d
#define mmDPCSTX2_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9a1d
#define mmDPCSTX3_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9abd
#define mmDPCSTX4_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9b5d
#define mmDPCSTX5_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9bfd
#define mmDPCSTX6_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9c9d
#define mmDPCSTX7_DPCSTX_TEST_DEBUG_DATA                                        \
  0x9d3d

#endif /* DCE_11_2_D_H */
