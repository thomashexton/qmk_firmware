# Ieneko58O

58-key (5x12 ortholinear) unibody by [Daraku-Neko](https://darakuneko.booth.pm/items/7339196).
Board definition vendored from <https://github.com/darakuneko/keyboard/tree/main/qmk/ieneko58o>
(GPL-2.0-or-later) because it is not in mainline QMK.

* MCU: STM32L432, `stm32-dfu` bootloader
* Bottom row: `1U 1U 1U 1U | 2U | 2U | 1U 1U 1U 1U` (matrix `4,4` and `4,6` unused)

## Flashing

    qmk flash -kb ieneko58o -km thomashexton

Enter DFU by holding **BOOT** and tapping **RESET** (or shorting the pads), then
`QK_BOOT` via the `Q`+`'` combo once a build with combos is on the board.
