/*
 * Keyboard class input driver for keyboards connected to an NvEc compliant
 * embedded controller
 *
 * Copyright (c) 2009, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _TEGRA_NVEC_KEYTABLE_H_
#define _TEGRA_NVEC_KEYTABLE_H_

#include <linux/input.h>


static unsigned short code_tab_102us[] = {
	/* 0x00 */
	KEY_GRAVE,
	KEY_ESC,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	KEY_0,
	KEY_MINUS,
	KEY_EQUAL,
	KEY_BACKSPACE,
	KEY_TAB,
	/* 0x10 */
	KEY_Q,
	KEY_W,
	KEY_E,
	KEY_R,
	KEY_T,
	KEY_Y,
	KEY_U,
	KEY_I,
	KEY_O,
	KEY_P,
	KEY_LEFTBRACE,
	KEY_RIGHTBRACE,
	KEY_ENTER,
	KEY_LEFTCTRL,
	KEY_A,
	KEY_S,
	/* 0x20 */
	KEY_D,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_SEMICOLON,
	KEY_APOSTROPHE,
	KEY_GRAVE,
	KEY_LEFTSHIFT,
	KEY_BACKSLASH,
	KEY_Z,
	KEY_X,
	KEY_C,
	KEY_V,
	/* 0x30 */
	KEY_B,
	KEY_N,
	KEY_M,
	KEY_COMMA,
	KEY_DOT,
	KEY_SLASH,
	KEY_RIGHTSHIFT,
	KEY_KPASTERISK,
	KEY_LEFTALT,
	KEY_SPACE,
	KEY_CAPSLOCK,
	KEY_F1,
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	/* 0x40 */
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_FN,
	/* VK_SCROLL */
	0,
	KEY_KP7,
	KEY_KP8,
	KEY_KP9,
	KEY_KPMINUS,
	KEY_KP4,
	KEY_KP5,
	KEY_KP6,
	KEY_KPPLUS,
	KEY_KP1,
	/* 0x50 */
	KEY_KP2,
	KEY_KP3,
	KEY_KP0,
	KEY_KPDOT,
	/* VK_SNAPSHOT */
	0, /* KEY_MENU, */
	KEY_POWER,
	/* VK_OEM_102 */
	KEY_102ND,
	KEY_F11,
	KEY_F12,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	/* 0x60 */
	0,
	0,
	0,
	0, /* KEY_SEARCH, */
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	/* 0x70 */
	0,
	0,
	0,
	KEY_KP5,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	KEY_KP9,
};

static unsigned short extcode_tab_us102[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	/* 0x10 */
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	/* VK_MEDIA_NEXT_TRACK */
	0,
	0,
	0,
	/* VK_RETURN */
	0,
	KEY_RIGHTCTRL,
	0,
	0,
	/* 0x20 */
	KEY_MUTE,
	/* VK_LAUNCH_APP1 */
	0,
	/* VK_MEDIA_PLAY_PAUSE */
	0,
	0,
	/* VK_MEDIA_STOP */
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	/* 0x30 */
	KEY_VOLUMEUP,
	0,
	/* VK_BROWSER_HOME */
	0,
	0,
	0,
	/* VK_DIVIDE */
	KEY_KPSLASH,
	0,
	/* VK_SNAPSHOT */
	KEY_SYSRQ,
	/* VK_RMENU */
	KEY_RIGHTALT,
	/* VK_OEM_NV_BACKLIGHT_UP */
	0,
	/* VK_OEM_NV_BACKLIGHT_DN */
	0,
	/* VK_OEM_NV_BACKLIGHT_AUTOTOGGLE */
	0,
	/* VK_OEM_NV_POWER_INFO */
	0,
	/* VK_OEM_NV_WIFI_TOGGLE */
	0,
	/* VK_OEM_NV_DISPLAY_SELECT */
	0,
	/* VK_OEM_NV_AIRPLANE_TOGGLE */
	0,
	/* 0x40 */
	0,
	KEY_LEFT,
	0,
	0,
	0,
	0,
	0, /* KEY_CANCEL, */
	KEY_HOME,
	KEY_UP,
	KEY_PAGEUP,
	0,
	KEY_LEFT,
	0,
	KEY_RIGHT,
	0,
	KEY_END,
	/* 0x50 */
	KEY_DOWN,
	KEY_PAGEDOWN,
	KEY_INSERT,
	KEY_DELETE,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	KEY_LEFTMETA,
	0,
	KEY_ESC,
	KEY_KPMINUS,
	0,
	0,
	0,
	0,
	0,
	0,
	/* VK_BROWSER_SEARCH */
	0,
	/* VK_BROWSER_FAVORITES */
	0,
	/* VK_BROWSER_REFRESH */
	0,
	/* VK_BROWSER_STOP */
	0,
	/* VK_BROWSER_FORWARD */
	0,
	/* VK_BROWSER_BACK */
	0,
	/* VK_LAUNCH_APP2 */
	0,
	/* VK_LAUNCH_MAIL */
	0,
	/* VK_LAUNCH_MEDIA_SELECT */
	0,
};

static unsigned short *code_tabs[] = { code_tab_102us, extcode_tab_us102 };

#endif /* _TEGRA_NVEC_KEYTABLE_H_ */
