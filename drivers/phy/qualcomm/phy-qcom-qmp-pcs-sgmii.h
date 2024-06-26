/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Linaro Limited
 */

#ifndef QCOM_PHY_QMP_PCS_SGMII_H_
#define QCOM_PHY_QMP_PCS_SGMII_H_

#define QPHY_PCS_PHY_START        0x000
#define QPHY_PCS_POWER_DOWN_CONTROL     0x004
#define QPHY_PCS_SW_RESET       0x008
#define QPHY_PCS_LINE_RESET_TIME      0x00c
#define QPHY_PCS_TX_LARGE_AMP_DRV_LVL     0x020
#define QPHY_PCS_TX_SMALL_AMP_DRV_LVL     0x028
#define QPHY_PCS_PCS_READY_STATUS     0x094
#define QPHY_PCS_TX_MID_TERM_CTRL1      0x0d8
#define QPHY_PCS_TX_MID_TERM_CTRL2      0x0dc
#define QPHY_PCS_SGMII_MISC_CTRL8     0x118

#endif
