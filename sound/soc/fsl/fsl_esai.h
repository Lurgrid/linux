/* SPDX-License-Identifier: GPL-2.0 */
/*
 * fsl_esai.h - ALSA ESAI interface for the Freescale i.MX SoC
 *
 * Copyright (C) 2014 Freescale Semiconductor, Inc.
 *
 * Author: Nicolin Chen <Guangyu.Chen@freescale.com>
 */

#ifndef _FSL_ESAI_DAI_H
#define _FSL_ESAI_DAI_H

/* ESAI Register Map */
#define REG_ESAI_ETDR   0x00
#define REG_ESAI_ERDR   0x04
#define REG_ESAI_ECR    0x08
#define REG_ESAI_ESR    0x0C
#define REG_ESAI_TFCR   0x10
#define REG_ESAI_TFSR   0x14
#define REG_ESAI_RFCR   0x18
#define REG_ESAI_RFSR   0x1C
#define REG_ESAI_xFCR(tx) (tx ? REG_ESAI_TFCR : REG_ESAI_RFCR)
#define REG_ESAI_xFSR(tx) (tx ? REG_ESAI_TFSR : REG_ESAI_RFSR)
#define REG_ESAI_TX0    0x80
#define REG_ESAI_TX1    0x84
#define REG_ESAI_TX2    0x88
#define REG_ESAI_TX3    0x8C
#define REG_ESAI_TX4    0x90
#define REG_ESAI_TX5    0x94
#define REG_ESAI_TSR    0x98
#define REG_ESAI_RX0    0xA0
#define REG_ESAI_RX1    0xA4
#define REG_ESAI_RX2    0xA8
#define REG_ESAI_RX3    0xAC
#define REG_ESAI_SAISR    0xCC
#define REG_ESAI_SAICR    0xD0
#define REG_ESAI_TCR    0xD4
#define REG_ESAI_TCCR   0xD8
#define REG_ESAI_RCR    0xDC
#define REG_ESAI_RCCR   0xE0
#define REG_ESAI_xCR(tx)  (tx ? REG_ESAI_TCR : REG_ESAI_RCR)
#define REG_ESAI_xCCR(tx) (tx ? REG_ESAI_TCCR : REG_ESAI_RCCR)
#define REG_ESAI_TSMA   0xE4
#define REG_ESAI_TSMB   0xE8
#define REG_ESAI_RSMA   0xEC
#define REG_ESAI_RSMB   0xF0
#define REG_ESAI_xSMA(tx) (tx ? REG_ESAI_TSMA : REG_ESAI_RSMA)
#define REG_ESAI_xSMB(tx) (tx ? REG_ESAI_TSMB : REG_ESAI_RSMB)
#define REG_ESAI_PRRC   0xF8
#define REG_ESAI_PCRC   0xFC

/* ESAI Control Register -- REG_ESAI_ECR 0x8 */
#define ESAI_ECR_ETI_SHIFT  19
#define ESAI_ECR_ETI_MASK (1 << ESAI_ECR_ETI_SHIFT)
#define ESAI_ECR_ETI    (1 << ESAI_ECR_ETI_SHIFT)
#define ESAI_ECR_ETO_SHIFT  18
#define ESAI_ECR_ETO_MASK (1 << ESAI_ECR_ETO_SHIFT)
#define ESAI_ECR_ETO    (1 << ESAI_ECR_ETO_SHIFT)
#define ESAI_ECR_ERI_SHIFT  17
#define ESAI_ECR_ERI_MASK (1 << ESAI_ECR_ERI_SHIFT)
#define ESAI_ECR_ERI    (1 << ESAI_ECR_ERI_SHIFT)
#define ESAI_ECR_ERO_SHIFT  16
#define ESAI_ECR_ERO_MASK (1 << ESAI_ECR_ERO_SHIFT)
#define ESAI_ECR_ERO    (1 << ESAI_ECR_ERO_SHIFT)
#define ESAI_ECR_ERST_SHIFT 1
#define ESAI_ECR_ERST_MASK  (1 << ESAI_ECR_ERST_SHIFT)
#define ESAI_ECR_ERST   (1 << ESAI_ECR_ERST_SHIFT)
#define ESAI_ECR_ESAIEN_SHIFT 0
#define ESAI_ECR_ESAIEN_MASK  (1 << ESAI_ECR_ESAIEN_SHIFT)
#define ESAI_ECR_ESAIEN   (1 << ESAI_ECR_ESAIEN_SHIFT)

/* ESAI Status Register -- REG_ESAI_ESR 0xC */
#define ESAI_ESR_TINIT_SHIFT  10
#define ESAI_ESR_TINIT_MASK (1 << ESAI_ESR_TINIT_SHIFT)
#define ESAI_ESR_TINIT    (1 << ESAI_ESR_TINIT_SHIFT)
#define ESAI_ESR_RFF_SHIFT  9
#define ESAI_ESR_RFF_MASK (1 << ESAI_ESR_RFF_SHIFT)
#define ESAI_ESR_RFF    (1 << ESAI_ESR_RFF_SHIFT)
#define ESAI_ESR_TFE_SHIFT  8
#define ESAI_ESR_TFE_MASK (1 << ESAI_ESR_TFE_SHIFT)
#define ESAI_ESR_TFE    (1 << ESAI_ESR_TFE_SHIFT)
#define ESAI_ESR_TLS_SHIFT  7
#define ESAI_ESR_TLS_MASK (1 << ESAI_ESR_TLS_SHIFT)
#define ESAI_ESR_TLS    (1 << ESAI_ESR_TLS_SHIFT)
#define ESAI_ESR_TDE_SHIFT  6
#define ESAI_ESR_TDE_MASK (1 << ESAI_ESR_TDE_SHIFT)
#define ESAI_ESR_TDE    (1 << ESAI_ESR_TDE_SHIFT)
#define ESAI_ESR_TED_SHIFT  5
#define ESAI_ESR_TED_MASK (1 << ESAI_ESR_TED_SHIFT)
#define ESAI_ESR_TED    (1 << ESAI_ESR_TED_SHIFT)
#define ESAI_ESR_TD_SHIFT 4
#define ESAI_ESR_TD_MASK  (1 << ESAI_ESR_TD_SHIFT)
#define ESAI_ESR_TD   (1 << ESAI_ESR_TD_SHIFT)
#define ESAI_ESR_RLS_SHIFT  3
#define ESAI_ESR_RLS_MASK (1 << ESAI_ESR_RLS_SHIFT)
#define ESAI_ESR_RLS    (1 << ESAI_ESR_RLS_SHIFT)
#define ESAI_ESR_RDE_SHIFT  2
#define ESAI_ESR_RDE_MASK (1 << ESAI_ESR_RDE_SHIFT)
#define ESAI_ESR_RDE    (1 << ESAI_ESR_RDE_SHIFT)
#define ESAI_ESR_RED_SHIFT  1
#define ESAI_ESR_RED_MASK (1 << ESAI_ESR_RED_SHIFT)
#define ESAI_ESR_RED    (1 << ESAI_ESR_RED_SHIFT)
#define ESAI_ESR_RD_SHIFT 0
#define ESAI_ESR_RD_MASK  (1 << ESAI_ESR_RD_SHIFT)
#define ESAI_ESR_RD   (1 << ESAI_ESR_RD_SHIFT)

/*
 * Transmit FIFO Configuration Register -- REG_ESAI_TFCR 0x10
 * Receive FIFO Configuration Register -- REG_ESAI_RFCR 0x18
 */
#define ESAI_xFCR_TIEN_SHIFT  19
#define ESAI_xFCR_TIEN_MASK (1 << ESAI_xFCR_TIEN_SHIFT)
#define ESAI_xFCR_TIEN    (1 << ESAI_xFCR_TIEN_SHIFT)
#define ESAI_xFCR_REXT_SHIFT  19
#define ESAI_xFCR_REXT_MASK (1 << ESAI_xFCR_REXT_SHIFT)
#define ESAI_xFCR_REXT    (1 << ESAI_xFCR_REXT_SHIFT)
#define ESAI_xFCR_xWA_SHIFT 16
#define ESAI_xFCR_xWA_WIDTH 3
#define ESAI_xFCR_xWA_MASK  (((1 << ESAI_xFCR_xWA_WIDTH) - 1) << \
    ESAI_xFCR_xWA_SHIFT)
#define ESAI_xFCR_xWA(v)  (((8 - ((v) >> 2)) << \
    ESAI_xFCR_xWA_SHIFT) & ESAI_xFCR_xWA_MASK)
#define ESAI_xFCR_xFWM_SHIFT  8
#define ESAI_xFCR_xFWM_WIDTH  8
#define ESAI_xFCR_xFWM_MASK (((1 << ESAI_xFCR_xFWM_WIDTH) - 1) << \
    ESAI_xFCR_xFWM_SHIFT)
#define ESAI_xFCR_xFWM(v) ((((v) - 1) << \
    ESAI_xFCR_xFWM_SHIFT) & ESAI_xFCR_xFWM_MASK)
#define ESAI_xFCR_xE_SHIFT  2
#define ESAI_xFCR_TE_WIDTH  6
#define ESAI_xFCR_RE_WIDTH  4
#define ESAI_xFCR_TE_MASK (((1 << ESAI_xFCR_TE_WIDTH) - 1) << \
    ESAI_xFCR_xE_SHIFT)
#define ESAI_xFCR_RE_MASK (((1 << ESAI_xFCR_RE_WIDTH) - 1) << \
    ESAI_xFCR_xE_SHIFT)
#define ESAI_xFCR_TE(x)   ((ESAI_xFCR_TE_MASK >> \
  (ESAI_xFCR_TE_WIDTH - x)) & ESAI_xFCR_TE_MASK)
#define ESAI_xFCR_RE(x)   ((ESAI_xFCR_RE_MASK >> \
  (ESAI_xFCR_RE_WIDTH - x)) & ESAI_xFCR_RE_MASK)
#define ESAI_xFCR_xFR_SHIFT 1
#define ESAI_xFCR_xFR_MASK  (1 << ESAI_xFCR_xFR_SHIFT)
#define ESAI_xFCR_xFR   (1 << ESAI_xFCR_xFR_SHIFT)
#define ESAI_xFCR_xFEN_SHIFT  0
#define ESAI_xFCR_xFEN_MASK (1 << ESAI_xFCR_xFEN_SHIFT)
#define ESAI_xFCR_xFEN    (1 << ESAI_xFCR_xFEN_SHIFT)

/*
 * Transmit FIFO Status Register -- REG_ESAI_TFSR 0x14
 * Receive FIFO Status Register --REG_ESAI_RFSR 0x1C
 */
#define ESAI_xFSR_NTFO_SHIFT  12
#define ESAI_xFSR_NRFI_SHIFT  12
#define ESAI_xFSR_NTFI_SHIFT  8
#define ESAI_xFSR_NRFO_SHIFT  8
#define ESAI_xFSR_NTFx_WIDTH  3
#define ESAI_xFSR_NRFx_WIDTH  2
#define ESAI_xFSR_NTFO_MASK (((1 << ESAI_xFSR_NTFx_WIDTH) - 1) << \
    ESAI_xFSR_NTFO_SHIFT)
#define ESAI_xFSR_NTFI_MASK (((1 << ESAI_xFSR_NTFx_WIDTH) - 1) << \
    ESAI_xFSR_NTFI_SHIFT)
#define ESAI_xFSR_NRFO_MASK (((1 << ESAI_xFSR_NRFx_WIDTH) - 1) << \
    ESAI_xFSR_NRFO_SHIFT)
#define ESAI_xFSR_NRFI_MASK (((1 << ESAI_xFSR_NRFx_WIDTH) - 1) << \
    ESAI_xFSR_NRFI_SHIFT)
#define ESAI_xFSR_xFCNT_SHIFT 0
#define ESAI_xFSR_xFCNT_WIDTH 8
#define ESAI_xFSR_xFCNT_MASK  (((1 << ESAI_xFSR_xFCNT_WIDTH) - 1) << \
    ESAI_xFSR_xFCNT_SHIFT)

/* ESAI Transmit Slot Register -- REG_ESAI_TSR 0x98 */
#define ESAI_TSR_SHIFT    0
#define ESAI_TSR_WIDTH    24
#define ESAI_TSR_MASK   (((1 << ESAI_TSR_WIDTH) - 1) << ESAI_TSR_SHIFT)

/* Serial Audio Interface Status Register -- REG_ESAI_SAISR 0xCC */
#define ESAI_SAISR_TODFE_SHIFT  17
#define ESAI_SAISR_TODFE_MASK (1 << ESAI_SAISR_TODFE_SHIFT)
#define ESAI_SAISR_TODFE  (1 << ESAI_SAISR_TODFE_SHIFT)
#define ESAI_SAISR_TEDE_SHIFT 16
#define ESAI_SAISR_TEDE_MASK  (1 << ESAI_SAISR_TEDE_SHIFT)
#define ESAI_SAISR_TEDE   (1 << ESAI_SAISR_TEDE_SHIFT)
#define ESAI_SAISR_TDE_SHIFT  15
#define ESAI_SAISR_TDE_MASK (1 << ESAI_SAISR_TDE_SHIFT)
#define ESAI_SAISR_TDE    (1 << ESAI_SAISR_TDE_SHIFT)
#define ESAI_SAISR_TUE_SHIFT  14
#define ESAI_SAISR_TUE_MASK (1 << ESAI_SAISR_TUE_SHIFT)
#define ESAI_SAISR_TUE    (1 << ESAI_SAISR_TUE_SHIFT)
#define ESAI_SAISR_TFS_SHIFT  13
#define ESAI_SAISR_TFS_MASK (1 << ESAI_SAISR_TFS_SHIFT)
#define ESAI_SAISR_TFS    (1 << ESAI_SAISR_TFS_SHIFT)
#define ESAI_SAISR_RODF_SHIFT 10
#define ESAI_SAISR_RODF_MASK  (1 << ESAI_SAISR_RODF_SHIFT)
#define ESAI_SAISR_RODF   (1 << ESAI_SAISR_RODF_SHIFT)
#define ESAI_SAISR_REDF_SHIFT 9
#define ESAI_SAISR_REDF_MASK  (1 << ESAI_SAISR_REDF_SHIFT)
#define ESAI_SAISR_REDF   (1 << ESAI_SAISR_REDF_SHIFT)
#define ESAI_SAISR_RDF_SHIFT  8
#define ESAI_SAISR_RDF_MASK (1 << ESAI_SAISR_RDF_SHIFT)
#define ESAI_SAISR_RDF    (1 << ESAI_SAISR_RDF_SHIFT)
#define ESAI_SAISR_ROE_SHIFT  7
#define ESAI_SAISR_ROE_MASK (1 << ESAI_SAISR_ROE_SHIFT)
#define ESAI_SAISR_ROE    (1 << ESAI_SAISR_ROE_SHIFT)
#define ESAI_SAISR_RFS_SHIFT  6
#define ESAI_SAISR_RFS_MASK (1 << ESAI_SAISR_RFS_SHIFT)
#define ESAI_SAISR_RFS    (1 << ESAI_SAISR_RFS_SHIFT)
#define ESAI_SAISR_IF2_SHIFT  2
#define ESAI_SAISR_IF2_MASK (1 << ESAI_SAISR_IF2_SHIFT)
#define ESAI_SAISR_IF2    (1 << ESAI_SAISR_IF2_SHIFT)
#define ESAI_SAISR_IF1_SHIFT  1
#define ESAI_SAISR_IF1_MASK (1 << ESAI_SAISR_IF1_SHIFT)
#define ESAI_SAISR_IF1    (1 << ESAI_SAISR_IF1_SHIFT)
#define ESAI_SAISR_IF0_SHIFT  0
#define ESAI_SAISR_IF0_MASK (1 << ESAI_SAISR_IF0_SHIFT)
#define ESAI_SAISR_IF0    (1 << ESAI_SAISR_IF0_SHIFT)

/* Serial Audio Interface Control Register -- REG_ESAI_SAICR 0xD0 */
#define ESAI_SAICR_ALC_SHIFT  8
#define ESAI_SAICR_ALC_MASK (1 << ESAI_SAICR_ALC_SHIFT)
#define ESAI_SAICR_ALC    (1 << ESAI_SAICR_ALC_SHIFT)
#define ESAI_SAICR_TEBE_SHIFT 7
#define ESAI_SAICR_TEBE_MASK  (1 << ESAI_SAICR_TEBE_SHIFT)
#define ESAI_SAICR_TEBE   (1 << ESAI_SAICR_TEBE_SHIFT)
#define ESAI_SAICR_SYNC_SHIFT 6
#define ESAI_SAICR_SYNC_MASK  (1 << ESAI_SAICR_SYNC_SHIFT)
#define ESAI_SAICR_SYNC   (1 << ESAI_SAICR_SYNC_SHIFT)
#define ESAI_SAICR_OF2_SHIFT  2
#define ESAI_SAICR_OF2_MASK (1 << ESAI_SAICR_OF2_SHIFT)
#define ESAI_SAICR_OF2    (1 << ESAI_SAICR_OF2_SHIFT)
#define ESAI_SAICR_OF1_SHIFT  1
#define ESAI_SAICR_OF1_MASK (1 << ESAI_SAICR_OF1_SHIFT)
#define ESAI_SAICR_OF1    (1 << ESAI_SAICR_OF1_SHIFT)
#define ESAI_SAICR_OF0_SHIFT  0
#define ESAI_SAICR_OF0_MASK (1 << ESAI_SAICR_OF0_SHIFT)
#define ESAI_SAICR_OF0    (1 << ESAI_SAICR_OF0_SHIFT)

/*
 * Transmit Control Register -- REG_ESAI_TCR 0xD4
 * Receive Control Register -- REG_ESAI_RCR 0xDC
 */
#define ESAI_xCR_xLIE_SHIFT 23
#define ESAI_xCR_xLIE_MASK  (1 << ESAI_xCR_xLIE_SHIFT)
#define ESAI_xCR_xLIE   (1 << ESAI_xCR_xLIE_SHIFT)
#define ESAI_xCR_xIE_SHIFT  22
#define ESAI_xCR_xIE_MASK (1 << ESAI_xCR_xIE_SHIFT)
#define ESAI_xCR_xIE    (1 << ESAI_xCR_xIE_SHIFT)
#define ESAI_xCR_xEDIE_SHIFT  21
#define ESAI_xCR_xEDIE_MASK (1 << ESAI_xCR_xEDIE_SHIFT)
#define ESAI_xCR_xEDIE    (1 << ESAI_xCR_xEDIE_SHIFT)
#define ESAI_xCR_xEIE_SHIFT 20
#define ESAI_xCR_xEIE_MASK  (1 << ESAI_xCR_xEIE_SHIFT)
#define ESAI_xCR_xEIE   (1 << ESAI_xCR_xEIE_SHIFT)
#define ESAI_xCR_xPR_SHIFT  19
#define ESAI_xCR_xPR_MASK (1 << ESAI_xCR_xPR_SHIFT)
#define ESAI_xCR_xPR    (1 << ESAI_xCR_xPR_SHIFT)
#define ESAI_xCR_PADC_SHIFT 17
#define ESAI_xCR_PADC_MASK  (1 << ESAI_xCR_PADC_SHIFT)
#define ESAI_xCR_PADC   (1 << ESAI_xCR_PADC_SHIFT)
#define ESAI_xCR_xFSR_SHIFT 16
#define ESAI_xCR_xFSR_MASK  (1 << ESAI_xCR_xFSR_SHIFT)
#define ESAI_xCR_xFSR   (1 << ESAI_xCR_xFSR_SHIFT)
#define ESAI_xCR_xFSL_SHIFT 15
#define ESAI_xCR_xFSL_MASK  (1 << ESAI_xCR_xFSL_SHIFT)
#define ESAI_xCR_xFSL   (1 << ESAI_xCR_xFSL_SHIFT)
#define ESAI_xCR_xSWS_SHIFT 10
#define ESAI_xCR_xSWS_WIDTH 5
#define ESAI_xCR_xSWS_MASK  (((1 << ESAI_xCR_xSWS_WIDTH) - 1) << \
    ESAI_xCR_xSWS_SHIFT)
#define ESAI_xCR_xSWS(s, \
      w) ((w \
  < 24 ? (s - w + ((w - 8) >> 2)) : (s \
  < 32 ? 0x1e : 0x1f)) << ESAI_xCR_xSWS_SHIFT)
#define ESAI_xCR_xMOD_SHIFT 8
#define ESAI_xCR_xMOD_WIDTH 2
#define ESAI_xCR_xMOD_MASK  (((1 << ESAI_xCR_xMOD_WIDTH) - 1) << \
    ESAI_xCR_xMOD_SHIFT)
#define ESAI_xCR_xMOD_ONDEMAND  (0x1 << ESAI_xCR_xMOD_SHIFT)
#define ESAI_xCR_xMOD_NETWORK (0x1 << ESAI_xCR_xMOD_SHIFT)
#define ESAI_xCR_xMOD_AC97  (0x3 << ESAI_xCR_xMOD_SHIFT)
#define ESAI_xCR_xWA_SHIFT  7
#define ESAI_xCR_xWA_MASK (1 << ESAI_xCR_xWA_SHIFT)
#define ESAI_xCR_xWA    (1 << ESAI_xCR_xWA_SHIFT)
#define ESAI_xCR_xSHFD_SHIFT  6
#define ESAI_xCR_xSHFD_MASK (1 << ESAI_xCR_xSHFD_SHIFT)
#define ESAI_xCR_xSHFD    (1 << ESAI_xCR_xSHFD_SHIFT)
#define ESAI_xCR_xE_SHIFT 0
#define ESAI_xCR_TE_WIDTH 6
#define ESAI_xCR_RE_WIDTH 4
#define ESAI_xCR_TE_MASK  (((1 << ESAI_xCR_TE_WIDTH) - 1) << ESAI_xCR_xE_SHIFT)
#define ESAI_xCR_RE_MASK  (((1 << ESAI_xCR_RE_WIDTH) - 1) << ESAI_xCR_xE_SHIFT)
#define ESAI_xCR_TE(x)    ((ESAI_xCR_TE_MASK >> \
  (ESAI_xCR_TE_WIDTH - x)) & ESAI_xCR_TE_MASK)
#define ESAI_xCR_RE(x)    ((ESAI_xCR_RE_MASK >> \
  (ESAI_xCR_RE_WIDTH - x)) & ESAI_xCR_RE_MASK)

/*
 * Transmit Clock Control Register -- REG_ESAI_TCCR 0xD8
 * Receive Clock Control Register -- REG_ESAI_RCCR 0xE0
 */
#define ESAI_xCCR_xHCKD_SHIFT 23
#define ESAI_xCCR_xHCKD_MASK  (1 << ESAI_xCCR_xHCKD_SHIFT)
#define ESAI_xCCR_xHCKD   (1 << ESAI_xCCR_xHCKD_SHIFT)
#define ESAI_xCCR_xFSD_SHIFT  22
#define ESAI_xCCR_xFSD_MASK (1 << ESAI_xCCR_xFSD_SHIFT)
#define ESAI_xCCR_xFSD    (1 << ESAI_xCCR_xFSD_SHIFT)
#define ESAI_xCCR_xCKD_SHIFT  21
#define ESAI_xCCR_xCKD_MASK (1 << ESAI_xCCR_xCKD_SHIFT)
#define ESAI_xCCR_xCKD    (1 << ESAI_xCCR_xCKD_SHIFT)
#define ESAI_xCCR_xHCKP_SHIFT 20
#define ESAI_xCCR_xHCKP_MASK  (1 << ESAI_xCCR_xHCKP_SHIFT)
#define ESAI_xCCR_xHCKP   (1 << ESAI_xCCR_xHCKP_SHIFT)
#define ESAI_xCCR_xFSP_SHIFT  19
#define ESAI_xCCR_xFSP_MASK (1 << ESAI_xCCR_xFSP_SHIFT)
#define ESAI_xCCR_xFSP    (1 << ESAI_xCCR_xFSP_SHIFT)
#define ESAI_xCCR_xCKP_SHIFT  18
#define ESAI_xCCR_xCKP_MASK (1 << ESAI_xCCR_xCKP_SHIFT)
#define ESAI_xCCR_xCKP    (1 << ESAI_xCCR_xCKP_SHIFT)
#define ESAI_xCCR_xFP_SHIFT 14
#define ESAI_xCCR_xFP_WIDTH 4
#define ESAI_xCCR_xFP_MASK  (((1 << ESAI_xCCR_xFP_WIDTH) - 1) << \
    ESAI_xCCR_xFP_SHIFT)
#define ESAI_xCCR_xFP(v)  ((((v) - 1) << \
    ESAI_xCCR_xFP_SHIFT) & ESAI_xCCR_xFP_MASK)
#define ESAI_xCCR_xDC_SHIFT     9
#define ESAI_xCCR_xDC_WIDTH 5
#define ESAI_xCCR_xDC_MASK  (((1 << ESAI_xCCR_xDC_WIDTH) - 1) << \
    ESAI_xCCR_xDC_SHIFT)
#define ESAI_xCCR_xDC(v)  ((((v) - 1) << \
    ESAI_xCCR_xDC_SHIFT) & ESAI_xCCR_xDC_MASK)
#define ESAI_xCCR_xPSR_SHIFT  8
#define ESAI_xCCR_xPSR_MASK (1 << ESAI_xCCR_xPSR_SHIFT)
#define ESAI_xCCR_xPSR_BYPASS (1 << ESAI_xCCR_xPSR_SHIFT)
#define ESAI_xCCR_xPSR_DIV8 (0 << ESAI_xCCR_xPSR_SHIFT)
#define ESAI_xCCR_xPM_SHIFT     0
#define ESAI_xCCR_xPM_WIDTH     8
#define ESAI_xCCR_xPM_MASK  (((1 << ESAI_xCCR_xPM_WIDTH) - 1) << \
    ESAI_xCCR_xPM_SHIFT)
#define ESAI_xCCR_xPM(v)  ((((v) - 1) << \
    ESAI_xCCR_xPM_SHIFT) & ESAI_xCCR_xPM_MASK)

/* Transmit Slot Mask Register A/B -- REG_ESAI_TSMA/B 0xE4 ~ 0xF0 */
#define ESAI_xSMA_xS_SHIFT  0
#define ESAI_xSMA_xS_WIDTH  16
#define ESAI_xSMA_xS_MASK (((1 << ESAI_xSMA_xS_WIDTH) - 1) << \
    ESAI_xSMA_xS_SHIFT)
#define ESAI_xSMA_xS(v)   ((v) & ESAI_xSMA_xS_MASK)
#define ESAI_xSMB_xS_SHIFT  0
#define ESAI_xSMB_xS_WIDTH  16
#define ESAI_xSMB_xS_MASK (((1 << ESAI_xSMB_xS_WIDTH) - 1) << \
    ESAI_xSMB_xS_SHIFT)
#define ESAI_xSMB_xS(v)   (((v) >> ESAI_xSMA_xS_WIDTH) & ESAI_xSMB_xS_MASK)

/* Port C Direction Register -- REG_ESAI_PRRC 0xF8 */
#define ESAI_PRRC_PDC_SHIFT 0
#define ESAI_PRRC_PDC_WIDTH 12
#define ESAI_PRRC_PDC_MASK  (((1 << ESAI_PRRC_PDC_WIDTH) - 1) << \
    ESAI_PRRC_PDC_SHIFT)
#define ESAI_PRRC_PDC(v)  ((v) & ESAI_PRRC_PDC_MASK)

/* Port C Control Register -- REG_ESAI_PCRC 0xFC */
#define ESAI_PCRC_PC_SHIFT  0
#define ESAI_PCRC_PC_WIDTH  12
#define ESAI_PCRC_PC_MASK (((1 << ESAI_PCRC_PC_WIDTH) - 1) << \
    ESAI_PCRC_PC_SHIFT)
#define ESAI_PCRC_PC(v)   ((v) & ESAI_PCRC_PC_MASK)

#define ESAI_GPIO   0xfff

/* ESAI clock source */
#define ESAI_HCKT_FSYS    0
#define ESAI_HCKT_EXTAL   1
#define ESAI_HCKR_FSYS    2
#define ESAI_HCKR_EXTAL   3

/* ESAI clock divider */
#define ESAI_TX_DIV_PSR   0
#define ESAI_TX_DIV_PM    1
#define ESAI_TX_DIV_FP    2
#define ESAI_RX_DIV_PSR   3
#define ESAI_RX_DIV_PM    4
#define ESAI_RX_DIV_FP    5
#endif /* _FSL_ESAI_DAI_H */
