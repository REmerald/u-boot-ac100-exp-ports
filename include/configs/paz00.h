/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2010-2012 NVIDIA CORPORATION.  All rights reserved.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <linux/sizes.h>
#include "tegra20-common.h"

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"Compal Paz00"

/* Board-specific serial config */
#define CONFIG_TEGRA_ENABLE_UARTA
#define CONFIG_SYS_NS16550_COM1		NV_PA_APB_UARTA_BASE

#define CONFIG_MACH_TYPE		MACH_TYPE_PAZ00

/* Environment in eMMC, at the end of 2nd "boot sector" */
#define CONFIG_ENV_OFFSET (-CONFIG_ENV_SIZE)
#define CONFIG_SYS_MMC_ENV_DEV 0
#define CONFIG_SYS_MMC_ENV_PART 2

/* USB Host support */
#define CONFIG_USB_EHCI_TEGRA

/* USB networking support */

/* Keyboard support */
#define CONFIG_KEYBOARD
#define CONFIG_TEGRA_NVEC_KEYBOARD
/* NVEC support */
#define CONFIG_TEGRA_I2C
#define CONFIG_CMD_I2C
#define CONFIG_SYS_I2C_INIT_BOARD
#define CONFIG_TEGRA_NVEC
#define BOARD_EXTRA_ENV_SETTINGS \
	"i2c dev 0" "\0" \
	"i2c dev 1" "\0" \
	"i2c dev 2" "\0"

#include "tegra-common-post.h"

#endif /* __CONFIG_H */
