// Copyright 2023 n (@LOMIALOMIA)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define RGBLIGHT_LAYERS // 機能の有効化
#define RGBLED_NUM 17 // LEDの個数 
#define RGBLIGHT_MAX_LAYERS 2
