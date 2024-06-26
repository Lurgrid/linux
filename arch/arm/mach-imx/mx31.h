/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __MACH_MX31_H__
#define __MACH_MX31_H__

#define MX31_AIPS1_BASE_ADDR    0x43f00000
#define MX31_AIPS1_SIZE     SZ_1M
#define MX31_SPBA0_BASE_ADDR    0x50000000
#define MX31_SPBA0_SIZE     SZ_1M
#define MX31_AIPS2_BASE_ADDR    0x53f00000
#define MX31_AIPS2_SIZE     SZ_1M
#define MX31_AVIC_BASE_ADDR   0x68000000
#define MX31_AVIC_SIZE      SZ_1M
#define MX31_X_MEMC_BASE_ADDR   0xb8000000
#define MX31_X_MEMC_SIZE    SZ_64K

#define MX31_IO_P2V(x)      IMX_IO_P2V(x)

#endif /* ifndef __MACH_MX31_H__ */
