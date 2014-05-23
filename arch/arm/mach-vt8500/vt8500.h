/*
 * VIA SoC core
 *
 * Copyright (C) 2014 VIA Embedded
 * Gergely Imreh <imrehg@gmail.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2 or later. This program is licensed "as is"
 * without any warranty of any kind, whether express or implied.
 */

#ifndef __VT8500_H
#define __VT8500_H

/* SoC I/O descriptors */
#define VT8500_REGS_PHYS_BASE  0xD8000000
#define VT8500_REGS_VIRT_BASE  0xF8000000
#define VT8500_REGS_SIZE  0x00390000

/* Registers in GPIO Controller */
#define VT8500_GPIO_MUX_REG  0x200

/* Registers in Power Management Controller */
#define VT8500_HCR_REG  0x12
#define VT8500_PMSR_REG  0x60

/* Legacy */
#define VT8500_LEGACY_GPIO_BASE  0xD8110000
#define VT8500_LEGACY_PMC_BASE  0xD8130000

#endif /* __VT8500_H */
