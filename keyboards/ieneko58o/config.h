/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Vendored from https://github.com/darakuneko/keyboard (qmk/ieneko58o).
 * The upstream VIAL_* defines are dropped — this build is plain QMK. */

#pragma once

#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 1
#define WS2812_PWM_COMPLEMENTARY_OUTPUT
#define WS2812_DMA_STREAM STM32_DMA1_STREAM6
#define WS2812_DMA_CHANNEL 7
