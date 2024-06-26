/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022 MediaTek Inc.
 * Author: Chun-Jie Chen <chun-jie.chen@mediatek.com>
 */

#ifndef __SOC_MEDIATEK_MT8186_PM_DOMAINS_H
#define __SOC_MEDIATEK_MT8186_PM_DOMAINS_H

#include "mtk-pm-domains.h"
#include <dt-bindings/power/mt8186-power.h>

/*
 * MT8186 power domain support
 */

static const struct scpsys_domain_data scpsys_domain_data_mt8186[] = {
  [MT8186_POWER_DOMAIN_MFG0] = {
    .name = "mfg0",
    .sta_mask = BIT(2),
    .ctl_offs = 0x308,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF | MTK_SCPD_DOMAIN_SUPPLY,
  },
  [MT8186_POWER_DOMAIN_MFG1] = {
    .name = "mfg1",
    .sta_mask = BIT(3),
    .ctl_offs = 0x30c,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_MFG1_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_MFG1_STEP2,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_MFG1_STEP3,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_MFG1_STEP4,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF | MTK_SCPD_DOMAIN_SUPPLY,
  },
  [MT8186_POWER_DOMAIN_MFG2] = {
    .name = "mfg2",
    .sta_mask = BIT(4),
    .ctl_offs = 0x310,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_MFG3] = {
    .name = "mfg3",
    .sta_mask = BIT(5),
    .ctl_offs = 0x314,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_SSUSB] = {
    .name = "ssusb",
    .sta_mask = BIT(20),
    .ctl_offs = 0x9F0,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_ACTIVE_WAKEUP,
  },
  [MT8186_POWER_DOMAIN_SSUSB_P1] = {
    .name = "ssusb_p1",
    .sta_mask = BIT(19),
    .ctl_offs = 0x9F4,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_ACTIVE_WAKEUP,
  },
  [MT8186_POWER_DOMAIN_DIS] = {
    .name = "dis",
    .sta_mask = BIT(21),
    .ctl_offs = 0x354,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_DIS_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_DIS_STEP2,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
    },
  },
  [MT8186_POWER_DOMAIN_IMG] = {
    .name = "img",
    .sta_mask = BIT(13),
    .ctl_offs = 0x334,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_IMG_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_IMG_STEP2,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_IMG2] = {
    .name = "img2",
    .sta_mask = BIT(14),
    .ctl_offs = 0x338,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_IPE] = {
    .name = "ipe",
    .sta_mask = BIT(15),
    .ctl_offs = 0x33C,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_IPE_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_IPE_STEP2,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_CAM] = {
    .name = "cam",
    .sta_mask = BIT(23),
    .ctl_offs = 0x35C,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_CAM_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_CAM_STEP2,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_CAM_RAWA] = {
    .name = "cam_rawa",
    .sta_mask = BIT(24),
    .ctl_offs = 0x360,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_CAM_RAWB] = {
    .name = "cam_rawb",
    .sta_mask = BIT(25),
    .ctl_offs = 0x364,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_VENC] = {
    .name = "venc",
    .sta_mask = BIT(18),
    .ctl_offs = 0x348,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_VENC_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_VENC_STEP2,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_VDEC] = {
    .name = "vdec",
    .sta_mask = BIT(16),
    .ctl_offs = 0x340,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_VDEC_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_VDEC_STEP2,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_WPE] = {
    .name = "wpe",
    .sta_mask = BIT(0),
    .ctl_offs = 0x3F8,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_2_WPE_STEP1,
          MT8186_TOP_AXI_PROT_EN_2_SET,
          MT8186_TOP_AXI_PROT_EN_2_CLR,
          MT8186_TOP_AXI_PROT_EN_2_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_2_WPE_STEP2,
          MT8186_TOP_AXI_PROT_EN_2_SET,
          MT8186_TOP_AXI_PROT_EN_2_CLR,
          MT8186_TOP_AXI_PROT_EN_2_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_CONN_ON] = {
    .name = "conn_on",
    .sta_mask = BIT(1),
    .ctl_offs = 0x304,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_1_CONN_ON_STEP1,
          MT8186_TOP_AXI_PROT_EN_1_SET,
          MT8186_TOP_AXI_PROT_EN_1_CLR,
          MT8186_TOP_AXI_PROT_EN_1_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP2,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP3,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP4,
          MT8186_TOP_AXI_PROT_EN_SET,
          MT8186_TOP_AXI_PROT_EN_CLR,
          MT8186_TOP_AXI_PROT_EN_STA),
    },
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF | MTK_SCPD_ACTIVE_WAKEUP,
  },
  [MT8186_POWER_DOMAIN_CSIRX_TOP] = {
    .name = "csirx_top",
    .sta_mask = BIT(6),
    .ctl_offs = 0x318,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .caps = MTK_SCPD_KEEP_DEFAULT_OFF,
  },
  [MT8186_POWER_DOMAIN_ADSP_AO] = {
    .name = "adsp_ao",
    .sta_mask = BIT(17),
    .ctl_offs = 0x9FC,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
  },
  [MT8186_POWER_DOMAIN_ADSP_INFRA] = {
    .name = "adsp_infra",
    .sta_mask = BIT(10),
    .ctl_offs = 0x9F8,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
  },
  [MT8186_POWER_DOMAIN_ADSP_TOP] = {
    .name = "adsp_top",
    .sta_mask = BIT(31),
    .ctl_offs = 0x3E4,
    .pwr_sta_offs = 0x16C,
    .pwr_sta2nd_offs = 0x170,
    .sram_pdn_bits = BIT(8),
    .sram_pdn_ack_bits = BIT(12),
    .bp_cfg = {
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_3_ADSP_TOP_STEP1,
          MT8186_TOP_AXI_PROT_EN_3_SET,
          MT8186_TOP_AXI_PROT_EN_3_CLR,
          MT8186_TOP_AXI_PROT_EN_3_STA),
      BUS_PROT_WR_IGN(INFRA,
          MT8186_TOP_AXI_PROT_EN_3_ADSP_TOP_STEP2,
          MT8186_TOP_AXI_PROT_EN_3_SET,
          MT8186_TOP_AXI_PROT_EN_3_CLR,
          MT8186_TOP_AXI_PROT_EN_3_STA),
    },
    .caps = MTK_SCPD_SRAM_ISO | MTK_SCPD_ACTIVE_WAKEUP,
  },
};

static const struct scpsys_soc_data mt8186_scpsys_data = {
  .domains_data = scpsys_domain_data_mt8186,
  .num_domains = ARRAY_SIZE(scpsys_domain_data_mt8186),
};

#endif /* __SOC_MEDIATEK_MT8186_PM_DOMAINS_H */
