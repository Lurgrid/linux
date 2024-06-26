/* SPDX-License-Identifier: GPL-2.0 */
#define  AUD_COMM_EXEC__A                                                  \
  0x1000000
#define    AUD_COMM_EXEC_STOP                                              0x0
#define  FEC_COMM_EXEC__A                                                  \
  0x1C00000
#define    FEC_COMM_EXEC_STOP                                              0x0
#define    FEC_COMM_EXEC_ACTIVE                                            0x1
#define  FEC_DI_COMM_EXEC__A                                               \
  0x1C20000
#define    FEC_DI_COMM_EXEC_STOP                                           0x0
#define  FEC_DI_INPUT_CTL__A                                               \
  0x1C20016
#define  FEC_RS_COMM_EXEC__A                                               \
  0x1C30000
#define    FEC_RS_COMM_EXEC_STOP                                           0x0
#define  FEC_RS_MEASUREMENT_PERIOD__A                                      \
  0x1C30012
#define  FEC_RS_MEASUREMENT_PRESCALE__A                                    \
  0x1C30013
#define FEC_RS_NR_BIT_ERRORS__A                                            \
  0x1C30014
#define  FEC_OC_MODE__A                                                    \
  0x1C40011
#define    FEC_OC_MODE_PARITY__M                                           0x1
#define  FEC_OC_DTO_MODE__A                                                \
  0x1C40014
#define    FEC_OC_DTO_MODE_DYNAMIC__M                                      0x1
#define    FEC_OC_DTO_MODE_OFFSET_ENABLE__M                                0x4
#define  FEC_OC_DTO_PERIOD__A                                              \
  0x1C40015
#define  FEC_OC_DTO_BURST_LEN__A                                           \
  0x1C40018
#define  FEC_OC_FCT_MODE__A                                                \
  0x1C4001A
#define  FEC_OC_FCT_MODE__PRE                                              0x0
#define    FEC_OC_FCT_MODE_RAT_ENA__M                                      0x1
#define    FEC_OC_FCT_MODE_VIRT_ENA__M                                     0x2
#define  FEC_OC_TMD_MODE__A                                                \
  0x1C4001E
#define  FEC_OC_TMD_COUNT__A                                               \
  0x1C4001F
#define  FEC_OC_TMD_HI_MARGIN__A                                           \
  0x1C40020
#define  FEC_OC_TMD_LO_MARGIN__A                                           \
  0x1C40021
#define  FEC_OC_TMD_INT_UPD_RATE__A                                        \
  0x1C40023
#define  FEC_OC_AVR_PARM_A__A                                              \
  0x1C40026
#define  FEC_OC_AVR_PARM_B__A                                              \
  0x1C40027
#define  FEC_OC_RCN_GAIN__A                                                \
  0x1C4002E
#define  FEC_OC_RCN_CTL_RATE_LO__A                                         \
  0x1C40030
#define  FEC_OC_RCN_CTL_STEP_LO__A                                         \
  0x1C40032
#define  FEC_OC_RCN_CTL_STEP_HI__A                                         \
  0x1C40033
#define  FEC_OC_SNC_MODE__A                                                \
  0x1C40040
#define    FEC_OC_SNC_MODE_SHUTDOWN__M                                     0x10
#define  FEC_OC_SNC_LWM__A                                                 \
  0x1C40041
#define  FEC_OC_SNC_HWM__A                                                 \
  0x1C40042
#define  FEC_OC_SNC_UNLOCK__A                                              \
  0x1C40043
#define  FEC_OC_SNC_FAIL_PERIOD__A                                         \
  0x1C40046
#define  FEC_OC_IPR_MODE__A                                                \
  0x1C40048
#define    FEC_OC_IPR_MODE_SERIAL__M                                       0x1
#define    FEC_OC_IPR_MODE_MCLK_DIS_DAT_ABS__M                             0x4
#define    FEC_OC_IPR_MODE_MVAL_DIS_PAR__M                                 0x10
#define  FEC_OC_IPR_INVERT__A                                              \
  0x1C40049
#define    FEC_OC_IPR_INVERT_MD0__M                                        0x1
#define    FEC_OC_IPR_INVERT_MD1__M                                        0x2
#define    FEC_OC_IPR_INVERT_MD2__M                                        0x4
#define    FEC_OC_IPR_INVERT_MD3__M                                        0x8
#define    FEC_OC_IPR_INVERT_MD4__M                                        0x10
#define    FEC_OC_IPR_INVERT_MD5__M                                        0x20
#define    FEC_OC_IPR_INVERT_MD6__M                                        0x40
#define    FEC_OC_IPR_INVERT_MD7__M                                        0x80
#define    FEC_OC_IPR_INVERT_MERR__M                                       0x100
#define    FEC_OC_IPR_INVERT_MSTRT__M                                      0x200
#define    FEC_OC_IPR_INVERT_MVAL__M                                       0x400
#define    FEC_OC_IPR_INVERT_MCLK__M                                       0x800
#define  FEC_OC_OCR_INVERT__A                                              \
  0x1C40052
#define  IQM_COMM_EXEC__A                                                  \
  0x1800000
#define      IQM_COMM_EXEC_B_STOP                                          0x0
#define      IQM_COMM_EXEC_B_ACTIVE                                        0x1
#define  IQM_FS_RATE_OFS_LO__A                                             \
  0x1820010
#define  IQM_FS_ADJ_SEL__A                                                 \
  0x1820014
#define      IQM_FS_ADJ_SEL_B_OFF                                          0x0
#define      IQM_FS_ADJ_SEL_B_QAM                                          0x1
#define      IQM_FS_ADJ_SEL_B_VSB                                          0x2
#define  IQM_FD_RATESEL__A                                                 \
  0x1830010
#define  IQM_RC_RATE_OFS_LO__A                                             \
  0x1840010
#define  IQM_RC_RATE_OFS_LO__W                                             16
#define  IQM_RC_RATE_OFS_LO__M                                             \
  0xFFFF
#define  IQM_RC_RATE_OFS_HI__M                                             0xFF
#define  IQM_RC_ADJ_SEL__A                                                 \
  0x1840014
#define      IQM_RC_ADJ_SEL_B_OFF                                          0x0
#define      IQM_RC_ADJ_SEL_B_QAM                                          0x1
#define      IQM_RC_ADJ_SEL_B_VSB                                          0x2
#define  IQM_RC_STRETCH__A                                                 \
  0x1840016
#define  IQM_CF_COMM_INT_MSK__A                                            \
  0x1860006
#define  IQM_CF_SYMMETRIC__A                                               \
  0x1860010
#define  IQM_CF_MIDTAP__A                                                  \
  0x1860011
#define    IQM_CF_MIDTAP_RE__B                                             0
#define    IQM_CF_MIDTAP_IM__B                                             1
#define  IQM_CF_OUT_ENA__A                                                 \
  0x1860012
#define    IQM_CF_OUT_ENA_QAM__B                                           1
#define    IQM_CF_OUT_ENA_OFDM__M                                          0x4
#define  IQM_CF_ADJ_SEL__A                                                 \
  0x1860013
#define  IQM_CF_SCALE__A                                                   \
  0x1860014
#define  IQM_CF_SCALE_SH__A                                                \
  0x1860015
#define  IQM_CF_SCALE_SH__PRE                                              0x0
#define  IQM_CF_POW_MEAS_LEN__A                                            \
  0x1860017
#define  IQM_CF_DS_ENA__A                                                  \
  0x1860019
#define  IQM_CF_TAP_RE0__A                                                 \
  0x1860020
#define  IQM_CF_TAP_IM0__A                                                 \
  0x1860040
#define  IQM_CF_CLP_VAL__A                                                 \
  0x1860060
#define  IQM_CF_DATATH__A                                                  \
  0x1860061
#define  IQM_CF_PKDTH__A                                                   \
  0x1860062
#define  IQM_CF_WND_LEN__A                                                 \
  0x1860063
#define  IQM_CF_DET_LCT__A                                                 \
  0x1860064
#define  IQM_CF_BYPASSDET__A                                               \
  0x1860067
#define  IQM_AF_COMM_EXEC__A                                               \
  0x1870000
#define    IQM_AF_COMM_EXEC_ACTIVE                                         0x1
#define  IQM_AF_CLKNEG__A                                                  \
  0x1870012
#define    IQM_AF_CLKNEG_CLKNEGDATA__M                                     0x2
#define      IQM_AF_CLKNEG_CLKNEGDATA_CLK_ADC_DATA_POS                     0x0
#define      IQM_AF_CLKNEG_CLKNEGDATA_CLK_ADC_DATA_NEG                     0x2
#define  IQM_AF_START_LOCK__A                                              \
  0x187001B
#define  IQM_AF_PHASE0__A                                                  \
  0x187001C
#define  IQM_AF_PHASE1__A                                                  \
  0x187001D
#define  IQM_AF_PHASE2__A                                                  \
  0x187001E
#define  IQM_AF_CLP_LEN__A                                                 \
  0x1870023
#define  IQM_AF_CLP_TH__A                                                  \
  0x1870024
#define  IQM_AF_SNS_LEN__A                                                 \
  0x1870026
#define  IQM_AF_AGC_IF__A                                                  \
  0x1870028
#define  IQM_AF_AGC_RF__A                                                  \
  0x1870029
#define  IQM_AF_PDREF__A                                                   \
  0x187002B
#define  IQM_AF_PDREF__M                                                   0x1F
#define  IQM_AF_STDBY__A                                                   \
  0x187002C
#define      IQM_AF_STDBY_STDBY_ADC_STANDBY                                0x2
#define      IQM_AF_STDBY_STDBY_AMP_STANDBY                                0x4
#define      IQM_AF_STDBY_STDBY_PD_STANDBY                                 0x8
#define      IQM_AF_STDBY_STDBY_TAGC_IF_STANDBY                            0x10
#define      IQM_AF_STDBY_STDBY_TAGC_RF_STANDBY                            0x20
#define  IQM_AF_AMUX__A                                                    \
  0x187002D
#define    IQM_AF_AMUX_SIGNAL2ADC                                          0x1
#define  IQM_AF_UPD_SEL__A                                                 \
  0x187002F
#define  IQM_AF_INC_LCT__A                                                 \
  0x1870034
#define  IQM_AF_INC_BYPASS__A                                              \
  0x1870036
#define  OFDM_CP_COMM_EXEC__A                                              \
  0x2800000
#define    OFDM_CP_COMM_EXEC_STOP                                          0x0
#define  OFDM_EC_SB_PRIOR__A                                               \
  0x3410013
#define    OFDM_EC_SB_PRIOR_HI                                             0x0
#define    OFDM_EC_SB_PRIOR_LO                                             0x1
#define OFDM_EC_VD_ERR_BIT_CNT__A                                          \
  0x3420017
#define OFDM_EC_VD_IN_BIT_CNT__A                                           \
  0x3420018
#define  OFDM_EQ_TOP_TD_TPS_CONST__A                                       \
  0x3010054
#define  OFDM_EQ_TOP_TD_TPS_CONST__M                                       0x3
#define    OFDM_EQ_TOP_TD_TPS_CONST_64QAM                                  0x2
#define  OFDM_EQ_TOP_TD_TPS_CODE_HP__A                                     \
  0x3010056
#define  OFDM_EQ_TOP_TD_TPS_CODE_HP__M                                     0x7
#define    OFDM_EQ_TOP_TD_TPS_CODE_LP_7_8                                  0x4
#define  OFDM_EQ_TOP_TD_SQR_ERR_I__A                                       \
  0x301005E
#define  OFDM_EQ_TOP_TD_SQR_ERR_Q__A                                       \
  0x301005F
#define  OFDM_EQ_TOP_TD_SQR_ERR_EXP__A                                     \
  0x3010060
#define  OFDM_EQ_TOP_TD_REQ_SMB_CNT__A                                     \
  0x3010061
#define  OFDM_EQ_TOP_TD_TPS_PWR_OFS__A                                     \
  0x3010062
#define  OFDM_LC_COMM_EXEC__A                                              \
  0x3800000
#define    OFDM_LC_COMM_EXEC_STOP                                          0x0
#define  OFDM_SC_COMM_EXEC__A                                              \
  0x3C00000
#define    OFDM_SC_COMM_EXEC_STOP                                          0x0
#define  OFDM_SC_COMM_STATE__A                                             \
  0x3C00001
#define  OFDM_SC_RA_RAM_PARAM0__A                                          \
  0x3C20040
#define  OFDM_SC_RA_RAM_PARAM1__A                                          \
  0x3C20041
#define  OFDM_SC_RA_RAM_CMD_ADDR__A                                        \
  0x3C20042
#define  OFDM_SC_RA_RAM_CMD__A                                             \
  0x3C20043
#define    OFDM_SC_RA_RAM_CMD_NULL                                         0x0
#define    OFDM_SC_RA_RAM_CMD_PROC_START                                   0x1
#define    OFDM_SC_RA_RAM_CMD_SET_PREF_PARAM                               0x3
#define    OFDM_SC_RA_RAM_CMD_PROGRAM_PARAM                                0x4
#define    OFDM_SC_RA_RAM_CMD_GET_OP_PARAM                                 0x5
#define    OFDM_SC_RA_RAM_CMD_USER_IO                                      0x6
#define    OFDM_SC_RA_RAM_CMD_SET_TIMER                                    0x7
#define    OFDM_SC_RA_RAM_CMD_SET_ECHO_TIMING                              0x8
#define    OFDM_SC_RA_RAM_SW_EVENT_RUN_NMASK__M                            0x1
#define    OFDM_SC_RA_RAM_LOCKTRACK_MIN                                    0x1
#define  OFDM_SC_RA_RAM_OP_PARAM__A                                        \
  0x3C20048
#define    OFDM_SC_RA_RAM_OP_PARAM_MODE__M                                 0x3
#define      OFDM_SC_RA_RAM_OP_PARAM_MODE_2K                               0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_MODE_8K                               0x1
#define      OFDM_SC_RA_RAM_OP_PARAM_GUARD_32                              0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_GUARD_16                              0x4
#define      OFDM_SC_RA_RAM_OP_PARAM_GUARD_8                               0x8
#define      OFDM_SC_RA_RAM_OP_PARAM_GUARD_4                               0xC
#define      OFDM_SC_RA_RAM_OP_PARAM_CONST_QPSK                            0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_CONST_QAM16                           0x10
#define      OFDM_SC_RA_RAM_OP_PARAM_CONST_QAM64                           0x20
#define      OFDM_SC_RA_RAM_OP_PARAM_HIER_NO                               0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_HIER_A1                               0x40
#define      OFDM_SC_RA_RAM_OP_PARAM_HIER_A2                               0x80
#define      OFDM_SC_RA_RAM_OP_PARAM_HIER_A4                               0xC0
#define      OFDM_SC_RA_RAM_OP_PARAM_RATE_1_2                              0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_RATE_2_3                              0x200
#define      OFDM_SC_RA_RAM_OP_PARAM_RATE_3_4                              0x400
#define      OFDM_SC_RA_RAM_OP_PARAM_RATE_5_6                              0x600
#define      OFDM_SC_RA_RAM_OP_PARAM_RATE_7_8                              0x800
#define      OFDM_SC_RA_RAM_OP_PARAM_PRIO_HI                               0x0
#define      OFDM_SC_RA_RAM_OP_PARAM_PRIO_LO                               \
  0x1000
#define    OFDM_SC_RA_RAM_OP_AUTO_MODE__M                                  0x1
#define    OFDM_SC_RA_RAM_OP_AUTO_GUARD__M                                 0x2
#define    OFDM_SC_RA_RAM_OP_AUTO_CONST__M                                 0x4
#define    OFDM_SC_RA_RAM_OP_AUTO_HIER__M                                  0x8
#define    OFDM_SC_RA_RAM_OP_AUTO_RATE__M                                  0x10
#define  OFDM_SC_RA_RAM_LOCK__A                                            \
  0x3C2004B
#define    OFDM_SC_RA_RAM_LOCK_DEMOD__M                                    0x1
#define    OFDM_SC_RA_RAM_LOCK_FEC__M                                      0x2
#define    OFDM_SC_RA_RAM_LOCK_MPEG__M                                     0x4
#define    OFDM_SC_RA_RAM_LOCK_NODVBT__M                                   0x8
#define  OFDM_SC_RA_RAM_BE_OPT_DELAY__A                                    \
  0x3C2004D
#define  OFDM_SC_RA_RAM_BE_OPT_INIT_DELAY__A                               \
  0x3C2004E
#define  OFDM_SC_RA_RAM_ECHO_THRES__A                                      \
  0x3C2004F
#define    OFDM_SC_RA_RAM_ECHO_THRES_8K__B                                 0
#define    OFDM_SC_RA_RAM_ECHO_THRES_8K__M                                 0xFF
#define    OFDM_SC_RA_RAM_ECHO_THRES_2K__B                                 8
#define    OFDM_SC_RA_RAM_ECHO_THRES_2K__M                                 \
  0xFF00
#define  OFDM_SC_RA_RAM_CONFIG__A                                          \
  0x3C20050
#define    OFDM_SC_RA_RAM_CONFIG_NE_FIX_ENABLE__M                          0x800
#define  OFDM_SC_RA_RAM_FR_THRES_8K__A                                     \
  0x3C2007D
#define  OFDM_SC_RA_RAM_NI_INIT_2K_PER_LEFT__A                             \
  0x3C200E0
#define  OFDM_SC_RA_RAM_NI_INIT_2K_PER_RIGHT__A                            \
  0x3C200E1
#define  OFDM_SC_RA_RAM_NI_INIT_8K_PER_LEFT__A                             \
  0x3C200E3
#define  OFDM_SC_RA_RAM_NI_INIT_8K_PER_RIGHT__A                            \
  0x3C200E4
#define  OFDM_SC_RA_RAM_SRMM_FIX_FACT_8K__A                                \
  0x3C200F8
#define  QAM_COMM_EXEC__A                                                  \
  0x1400000
#define    QAM_COMM_EXEC_STOP                                              0x0
#define    QAM_COMM_EXEC_ACTIVE                                            0x1
#define    QAM_TOP_ANNEX_A                                                 0x0
#define    QAM_TOP_ANNEX_C                                                 0x2
#define  QAM_SL_ERR_POWER__A                                               \
  0x1430017
#define  QAM_DQ_QUAL_FUN0__A                                               \
  0x1440018
#define  QAM_DQ_QUAL_FUN1__A                                               \
  0x1440019
#define  QAM_DQ_QUAL_FUN2__A                                               \
  0x144001A
#define  QAM_DQ_QUAL_FUN3__A                                               \
  0x144001B
#define  QAM_DQ_QUAL_FUN4__A                                               \
  0x144001C
#define  QAM_DQ_QUAL_FUN5__A                                               \
  0x144001D
#define  QAM_LC_MODE__A                                                    \
  0x1450010
#define  QAM_LC_QUAL_TAB0__A                                               \
  0x1450018
#define  QAM_LC_QUAL_TAB1__A                                               \
  0x1450019
#define  QAM_LC_QUAL_TAB2__A                                               \
  0x145001A
#define  QAM_LC_QUAL_TAB3__A                                               \
  0x145001B
#define  QAM_LC_QUAL_TAB4__A                                               \
  0x145001C
#define  QAM_LC_QUAL_TAB5__A                                               \
  0x145001D
#define  QAM_LC_QUAL_TAB6__A                                               \
  0x145001E
#define  QAM_LC_QUAL_TAB8__A                                               \
  0x145001F
#define  QAM_LC_QUAL_TAB9__A                                               \
  0x1450020
#define  QAM_LC_QUAL_TAB10__A                                              \
  0x1450021
#define  QAM_LC_QUAL_TAB12__A                                              \
  0x1450022
#define  QAM_LC_QUAL_TAB15__A                                              \
  0x1450023
#define  QAM_LC_QUAL_TAB16__A                                              \
  0x1450024
#define  QAM_LC_QUAL_TAB20__A                                              \
  0x1450025
#define  QAM_LC_QUAL_TAB25__A                                              \
  0x1450026
#define  QAM_LC_LPF_FACTORP__A                                             \
  0x1450028
#define  QAM_LC_LPF_FACTORI__A                                             \
  0x1450029
#define  QAM_LC_RATE_LIMIT__A                                              \
  0x145002A
#define  QAM_LC_SYMBOL_FREQ__A                                             \
  0x145002B
#define  QAM_SY_TIMEOUT__A                                                 \
  0x1470011
#define  QAM_SY_TIMEOUT__PRE                                               \
  0x3A98
#define  QAM_SY_SYNC_LWM__A                                                \
  0x1470012
#define  QAM_SY_SYNC_AWM__A                                                \
  0x1470013
#define  QAM_SY_SYNC_HWM__A                                                \
  0x1470014
#define  QAM_SY_SP_INV__A                                                  \
  0x1470017
#define    QAM_SY_SP_INV_SPECTRUM_INV_DIS                                  0x0
#define  SCU_COMM_EXEC__A                                                  \
  0x800000
#define    SCU_COMM_EXEC_STOP                                              0x0
#define    SCU_COMM_EXEC_ACTIVE                                            0x1
#define    SCU_COMM_EXEC_HOLD                                              0x2
#define  SCU_RAM_DRIVER_DEBUG__A                                           \
  0x831EBF
#define  SCU_RAM_QAM_FSM_STEP_PERIOD__A                                    \
  0x831EC4
#define  SCU_RAM_GPIO__A                                                   \
  0x831EC7
#define      SCU_RAM_GPIO_HW_LOCK_IND_DISABLE                              0x0
#define  SCU_RAM_AGC_CLP_CTRL_MODE__A                                      \
  0x831EC8
#define  SCU_RAM_FEC_ACCUM_PKT_FAILURES__A                                 \
  0x831ECB
#define  SCU_RAM_FEC_PRE_RS_BER_FILTER_SH__A                               \
  0x831F05
#define  SCU_RAM_AGC_FAST_SNS_CTRL_DELAY__A                                \
  0x831F15
#define  SCU_RAM_AGC_KI_CYCLEN__A                                          \
  0x831F17
#define  SCU_RAM_AGC_SNS_CYCLEN__A                                         \
  0x831F18
#define  SCU_RAM_AGC_RF_SNS_DEV_MAX__A                                     \
  0x831F19
#define  SCU_RAM_AGC_RF_SNS_DEV_MIN__A                                     \
  0x831F1A
#define  SCU_RAM_AGC_RF_MAX__A                                             \
  0x831F1B
#define  SCU_RAM_AGC_CONFIG__A                                             \
  0x831F24
#define    SCU_RAM_AGC_CONFIG_DISABLE_RF_AGC__M                            0x1
#define    SCU_RAM_AGC_CONFIG_DISABLE_IF_AGC__M                            0x2
#define    SCU_RAM_AGC_CONFIG_INV_IF_POL__M                                0x100
#define    SCU_RAM_AGC_CONFIG_INV_RF_POL__M                                0x200
#define  SCU_RAM_AGC_KI__A                                                 \
  0x831F25
#define    SCU_RAM_AGC_KI_RF__B                                            4
#define    SCU_RAM_AGC_KI_RF__M                                            0xF0
#define    SCU_RAM_AGC_KI_IF__B                                            8
#define    SCU_RAM_AGC_KI_IF__M                                            0xF00
#define  SCU_RAM_AGC_KI_RED__A                                             \
  0x831F26
#define    SCU_RAM_AGC_KI_RED_RAGC_RED__B                                  2
#define    SCU_RAM_AGC_KI_RED_RAGC_RED__M                                  0xC
#define    SCU_RAM_AGC_KI_RED_IAGC_RED__B                                  4
#define    SCU_RAM_AGC_KI_RED_IAGC_RED__M                                  0x30
#define  SCU_RAM_AGC_KI_INNERGAIN_MIN__A                                   \
  0x831F27
#define  SCU_RAM_AGC_KI_MINGAIN__A                                         \
  0x831F28
#define  SCU_RAM_AGC_KI_MAXGAIN__A                                         \
  0x831F29
#define  SCU_RAM_AGC_KI_MAXMINGAIN_TH__A                                   \
  0x831F2A
#define  SCU_RAM_AGC_KI_MIN__A                                             \
  0x831F2B
#define  SCU_RAM_AGC_KI_MAX__A                                             \
  0x831F2C
#define  SCU_RAM_AGC_CLP_SUM__A                                            \
  0x831F2D
#define  SCU_RAM_AGC_CLP_SUM_MIN__A                                        \
  0x831F2E
#define  SCU_RAM_AGC_CLP_SUM_MAX__A                                        \
  0x831F2F
#define  SCU_RAM_AGC_CLP_CYCLEN__A                                         \
  0x831F30
#define  SCU_RAM_AGC_CLP_CYCCNT__A                                         \
  0x831F31
#define  SCU_RAM_AGC_CLP_DIR_TO__A                                         \
  0x831F32
#define  SCU_RAM_AGC_CLP_DIR_WD__A                                         \
  0x831F33
#define  SCU_RAM_AGC_CLP_DIR_STP__A                                        \
  0x831F34
#define  SCU_RAM_AGC_SNS_SUM__A                                            \
  0x831F35
#define  SCU_RAM_AGC_SNS_SUM_MIN__A                                        \
  0x831F36
#define  SCU_RAM_AGC_SNS_SUM_MAX__A                                        \
  0x831F37
#define  SCU_RAM_AGC_SNS_CYCCNT__A                                         \
  0x831F38
#define  SCU_RAM_AGC_SNS_DIR_TO__A                                         \
  0x831F39
#define  SCU_RAM_AGC_SNS_DIR_WD__A                                         \
  0x831F3A
#define  SCU_RAM_AGC_SNS_DIR_STP__A                                        \
  0x831F3B
#define  SCU_RAM_AGC_INGAIN_TGT__A                                         \
  0x831F3D
#define  SCU_RAM_AGC_INGAIN_TGT_MIN__A                                     \
  0x831F3E
#define  SCU_RAM_AGC_INGAIN_TGT_MAX__A                                     \
  0x831F3F
#define  SCU_RAM_AGC_IF_IACCU_HI__A                                        \
  0x831F40
#define  SCU_RAM_AGC_IF_IACCU_LO__A                                        \
  0x831F41
#define  SCU_RAM_AGC_IF_IACCU_HI_TGT__A                                    \
  0x831F42
#define  SCU_RAM_AGC_IF_IACCU_HI_TGT_MIN__A                                \
  0x831F43
#define  SCU_RAM_AGC_IF_IACCU_HI_TGT_MAX__A                                \
  0x831F44
#define  SCU_RAM_AGC_RF_IACCU_HI__A                                        \
  0x831F45
#define  SCU_RAM_AGC_RF_IACCU_LO__A                                        \
  0x831F46
#define  SCU_RAM_AGC_RF_IACCU_HI_CO__A                                     \
  0x831F47
#define  SCU_RAM_QAM_FSM_MEDIAN_AV_MULT__A                                 \
  0x831F84
#define  SCU_RAM_QAM_FSM_RADIUS_AV_LIMIT__A                                \
  0x831F85
#define  SCU_RAM_QAM_FSM_LCAVG_OFFSET1__A                                  \
  0x831F86
#define  SCU_RAM_QAM_FSM_LCAVG_OFFSET2__A                                  \
  0x831F87
#define  SCU_RAM_QAM_FSM_LCAVG_OFFSET3__A                                  \
  0x831F88
#define  SCU_RAM_QAM_FSM_LCAVG_OFFSET4__A                                  \
  0x831F89
#define  SCU_RAM_QAM_FSM_LCAVG_OFFSET5__A                                  \
  0x831F8A
#define  SCU_RAM_QAM_FSM_RTH__A                                            \
  0x831F8E
#define  SCU_RAM_QAM_FSM_FTH__A                                            \
  0x831F8F
#define  SCU_RAM_QAM_FSM_PTH__A                                            \
  0x831F90
#define  SCU_RAM_QAM_FSM_MTH__A                                            \
  0x831F91
#define  SCU_RAM_QAM_FSM_CTH__A                                            \
  0x831F92
#define  SCU_RAM_QAM_FSM_QTH__A                                            \
  0x831F93
#define  SCU_RAM_QAM_FSM_RATE_LIM__A                                       \
  0x831F94
#define  SCU_RAM_QAM_FSM_FREQ_LIM__A                                       \
  0x831F95
#define  SCU_RAM_QAM_FSM_COUNT_LIM__A                                      \
  0x831F96
#define  SCU_RAM_QAM_LC_CA_COARSE__A                                       \
  0x831F97
#define  SCU_RAM_QAM_LC_CA_FINE__A                                         \
  0x831F99
#define  SCU_RAM_QAM_LC_CP_COARSE__A                                       \
  0x831F9A
#define  SCU_RAM_QAM_LC_CP_MEDIUM__A                                       \
  0x831F9B
#define  SCU_RAM_QAM_LC_CP_FINE__A                                         \
  0x831F9C
#define  SCU_RAM_QAM_LC_CI_COARSE__A                                       \
  0x831F9D
#define  SCU_RAM_QAM_LC_CI_MEDIUM__A                                       \
  0x831F9E
#define  SCU_RAM_QAM_LC_CI_FINE__A                                         \
  0x831F9F
#define  SCU_RAM_QAM_LC_EP_COARSE__A                                       \
  0x831FA0
#define  SCU_RAM_QAM_LC_EP_MEDIUM__A                                       \
  0x831FA1
#define  SCU_RAM_QAM_LC_EP_FINE__A                                         \
  0x831FA2
#define  SCU_RAM_QAM_LC_EI_COARSE__A                                       \
  0x831FA3
#define  SCU_RAM_QAM_LC_EI_MEDIUM__A                                       \
  0x831FA4
#define  SCU_RAM_QAM_LC_EI_FINE__A                                         \
  0x831FA5
#define  SCU_RAM_QAM_LC_CF_COARSE__A                                       \
  0x831FA6
#define  SCU_RAM_QAM_LC_CF_MEDIUM__A                                       \
  0x831FA7
#define  SCU_RAM_QAM_LC_CF_FINE__A                                         \
  0x831FA8
#define  SCU_RAM_QAM_LC_CF1_COARSE__A                                      \
  0x831FA9
#define  SCU_RAM_QAM_LC_CF1_MEDIUM__A                                      \
  0x831FAA
#define  SCU_RAM_QAM_LC_CF1_FINE__A                                        \
  0x831FAB
#define  SCU_RAM_QAM_SL_SIG_POWER__A                                       \
  0x831FAC
#define  SCU_RAM_QAM_EQ_CMA_RAD0__A                                        \
  0x831FAD
#define  SCU_RAM_QAM_EQ_CMA_RAD1__A                                        \
  0x831FAE
#define  SCU_RAM_QAM_EQ_CMA_RAD2__A                                        \
  0x831FAF
#define  SCU_RAM_QAM_EQ_CMA_RAD3__A                                        \
  0x831FB0
#define  SCU_RAM_QAM_EQ_CMA_RAD4__A                                        \
  0x831FB1
#define  SCU_RAM_QAM_EQ_CMA_RAD5__A                                        \
  0x831FB2
#define      SCU_RAM_QAM_LOCKED_LOCKED_DEMOD_LOCKED                        \
  0x4000
#define      SCU_RAM_QAM_LOCKED_LOCKED_LOCKED                              \
  0x8000
#define      SCU_RAM_QAM_LOCKED_LOCKED_NEVER_LOCK                          \
  0xC000
#define  SCU_RAM_AGC_FAST_CLP_CTRL_DELAY__A                                \
  0x831FEA
#define  SCU_RAM_DRIVER_VER_HI__A                                          \
  0x831FEB
#define  SCU_RAM_DRIVER_VER_LO__A                                          \
  0x831FEC
#define  SCU_RAM_PARAM_15__A                                               \
  0x831FED
#define  SCU_RAM_PARAM_0__A                                                \
  0x831FFC
#define  SCU_RAM_COMMAND__A                                                \
  0x831FFD
#define    SCU_RAM_COMMAND_CMD_DEMOD_RESET                                 0x1
#define    SCU_RAM_COMMAND_CMD_DEMOD_SET_ENV                               0x2
#define    SCU_RAM_COMMAND_CMD_DEMOD_SET_PARAM                             0x3
#define    SCU_RAM_COMMAND_CMD_DEMOD_START                                 0x4
#define    SCU_RAM_COMMAND_CMD_DEMOD_GET_LOCK                              0x5
#define    SCU_RAM_COMMAND_CMD_DEMOD_STOP                                  0x9
#define      SCU_RAM_COMMAND_STANDARD_QAM                                  0x200
#define      SCU_RAM_COMMAND_STANDARD_OFDM                                 0x400
#define  SIO_TOP_COMM_KEY__A                                               \
  0x41000F
#define    SIO_TOP_COMM_KEY_KEY                                            \
  0xFABA
#define  SIO_TOP_JTAGID_LO__A                                              \
  0x410012
#define  SIO_HI_RA_RAM_RES__A                                              \
  0x420031
#define  SIO_HI_RA_RAM_CMD__A                                              \
  0x420032
#define    SIO_HI_RA_RAM_CMD_RESET                                         0x2
#define    SIO_HI_RA_RAM_CMD_CONFIG                                        0x3
#define    SIO_HI_RA_RAM_CMD_BRDCTRL                                       0x7
#define  SIO_HI_RA_RAM_PAR_1__A                                            \
  0x420033
#define      SIO_HI_RA_RAM_PAR_1_PAR1_SEC_KEY                              \
  0x3945
#define  SIO_HI_RA_RAM_PAR_2__A                                            \
  0x420034
#define    SIO_HI_RA_RAM_PAR_2_CFG_DIV__M                                  0x7F
#define      SIO_HI_RA_RAM_PAR_2_BRD_CFG_OPEN                              0x0
#define      SIO_HI_RA_RAM_PAR_2_BRD_CFG_CLOSED                            0x4
#define  SIO_HI_RA_RAM_PAR_3__A                                            \
  0x420035
#define    SIO_HI_RA_RAM_PAR_3_CFG_DBL_SDA__M                              0x7F
#define    SIO_HI_RA_RAM_PAR_3_CFG_DBL_SCL__B                              7
#define      SIO_HI_RA_RAM_PAR_3_ACP_RW_READ                               0x0
#define      SIO_HI_RA_RAM_PAR_3_ACP_RW_WRITE                              0x8
#define  SIO_HI_RA_RAM_PAR_4__A                                            \
  0x420036
#define  SIO_HI_RA_RAM_PAR_5__A                                            \
  0x420037
#define      SIO_HI_RA_RAM_PAR_5_CFG_SLV0_SLAVE                            0x1
#define    SIO_HI_RA_RAM_PAR_5_CFG_SLEEP__M                                0x8
#define      SIO_HI_RA_RAM_PAR_5_CFG_SLEEP_ZZZ                             0x8
#define  SIO_HI_RA_RAM_PAR_6__A                                            \
  0x420038
#define  SIO_CC_PLL_LOCK__A                                                \
  0x450012
#define  SIO_CC_PWD_MODE__A                                                \
  0x450015
#define      SIO_CC_PWD_MODE_LEVEL_NONE                                    0x0
#define      SIO_CC_PWD_MODE_LEVEL_OFDM                                    0x1
#define      SIO_CC_PWD_MODE_LEVEL_CLOCK                                   0x2
#define      SIO_CC_PWD_MODE_LEVEL_PLL                                     0x3
#define      SIO_CC_PWD_MODE_LEVEL_OSC                                     0x4
#define  SIO_CC_SOFT_RST__A                                                \
  0x450016
#define    SIO_CC_SOFT_RST_OFDM__M                                         0x1
#define    SIO_CC_SOFT_RST_SYS__M                                          0x2
#define    SIO_CC_SOFT_RST_OSC__M                                          0x4
#define  SIO_CC_UPDATE__A                                                  \
  0x450017
#define    SIO_CC_UPDATE_KEY                                               \
  0xFABA
#define  SIO_OFDM_SH_OFDM_RING_ENABLE__A                                   \
  0x470010
#define    SIO_OFDM_SH_OFDM_RING_ENABLE_OFF                                0x0
#define    SIO_OFDM_SH_OFDM_RING_ENABLE_ON                                 0x1
#define  SIO_OFDM_SH_OFDM_RING_STATUS__A                                   \
  0x470012
#define    SIO_OFDM_SH_OFDM_RING_STATUS_DOWN                               0x0
#define    SIO_OFDM_SH_OFDM_RING_STATUS_ENABLED                            0x1
#define  SIO_BL_COMM_EXEC__A                                               \
  0x480000
#define    SIO_BL_COMM_EXEC_ACTIVE                                         0x1
#define  SIO_BL_STATUS__A                                                  \
  0x480010
#define  SIO_BL_MODE__A                                                    \
  0x480011
#define    SIO_BL_MODE_DIRECT                                              0x0
#define    SIO_BL_MODE_CHAIN                                               0x1
#define  SIO_BL_ENABLE__A                                                  \
  0x480012
#define    SIO_BL_ENABLE_ON                                                0x1
#define  SIO_BL_TGT_HDR__A                                                 \
  0x480014
#define  SIO_BL_TGT_ADDR__A                                                \
  0x480015
#define  SIO_BL_SRC_ADDR__A                                                \
  0x480016
#define  SIO_BL_SRC_LEN__A                                                 \
  0x480017
#define  SIO_BL_CHAIN_ADDR__A                                              \
  0x480018
#define  SIO_BL_CHAIN_LEN__A                                               \
  0x480019
#define  SIO_PDR_MON_CFG__A                                                \
  0x7F0010
#define  SIO_PDR_UIO_IN_HI__A                                              \
  0x7F0015
#define  SIO_PDR_UIO_OUT_LO__A                                             \
  0x7F0016
#define  SIO_PDR_OHW_CFG__A                                                \
  0x7F001F
#define    SIO_PDR_OHW_CFG_FREF_SEL__M                                     0x3
#define  SIO_PDR_GPIO_CFG__A                                               \
  0x7F0021
#define  SIO_PDR_MSTRT_CFG__A                                              \
  0x7F0025
#define  SIO_PDR_MERR_CFG__A                                               \
  0x7F0026
#define  SIO_PDR_MCLK_CFG__A                                               \
  0x7F0028
#define    SIO_PDR_MCLK_CFG_DRIVE__B                                       3
#define  SIO_PDR_MVAL_CFG__A                                               \
  0x7F0029
#define  SIO_PDR_MD0_CFG__A                                                \
  0x7F002A
#define    SIO_PDR_MD0_CFG_DRIVE__B                                        3
#define  SIO_PDR_MD1_CFG__A                                                \
  0x7F002B
#define  SIO_PDR_MD2_CFG__A                                                \
  0x7F002C
#define  SIO_PDR_MD3_CFG__A                                                \
  0x7F002D
#define  SIO_PDR_MD4_CFG__A                                                \
  0x7F002F
#define  SIO_PDR_MD5_CFG__A                                                \
  0x7F0030
#define  SIO_PDR_MD6_CFG__A                                                \
  0x7F0031
#define  SIO_PDR_MD7_CFG__A                                                \
  0x7F0032
#define  SIO_PDR_SMA_RX_CFG__A                                             \
  0x7F0037
#define  SIO_PDR_SMA_TX_CFG__A                                             \
  0x7F0038
