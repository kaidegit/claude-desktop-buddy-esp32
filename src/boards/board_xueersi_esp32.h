// src/boards/board_xueersi_esp32.h
#pragma once

// Xueersi ESP32 (ESP32-WROVER-B, 4 MB Flash, no PSRAM).
// Display: ST7735 160×128 SPI TFT.
#define LCD_W_PHYS  160
#define LCD_H_PHYS  128

// Logical canvas matches the panel 1:1.
#define BOARD_HW_W        160
#define BOARD_HW_H        128

#define BOARD_SAFE_INSET  8

// SPI to ST7735
#define PIN_LCD_CS      5
#define PIN_LCD_SCLK   18
#define PIN_LCD_MOSI   23
#define PIN_LCD_DC      4
#define PIN_LCD_RESET  19

// I2C bus present but unpopulated on this board.
#define PIN_I2C_SDA    21
#define PIN_I2C_SCL    15

// No touch controller.
#define PIN_TP_INT     -1
#define PIN_TP_RESET   -1

// Passive buzzer on GPIO14 (no ES8311 / I2S codec).
#define PIN_BUZZER     14

// Buttons
#define PIN_KEY1       34   // active-low
#define PIN_KEY2       12   // active-low

// Capability flags
#define BOARD_HAS_PSRAM            0
#define BOARD_HAS_TCA9554          0
#define BOARD_HAS_PCF85063         0
#define BOARD_HAS_PA_CTRL          0
#define BOARD_HAS_AXP2101          0
#define BOARD_LCD_RST_VIA_PMU      0
#define BOARD_AXP_PWRON_4S_OFF     0
#define BOARD_DISPLAY_CO5300       0
#define BOARD_DISPLAY_LETTERBOX    0
#define BOARD_TOUCH_CST92XX        0
#define BOARD_BTN_SWAP_AB          0
#define BOARD_BTN_THIRD            0
#define BOARD_KEY1_ACTIVE_HIGH     0
#define BOARD_HAS_KEY2             1
#define BOARD_HAS_KEY_BOOT         0
#define BOARD_HAS_TOUCH            0
#define BOARD_HAS_AUDIO_CODEC      0
#define BOARD_HAS_BUZZER           1
#define BOARD_HAS_IMU              0
#define BOARD_AXP_ENABLE_AUX_LDOS  0

// Display flags
#define BOARD_DISPLAY_SH8601_VENDOR_INIT  0
#define BOARD_DISPLAY_ST7735              1
#define BOARD_DISPLAY_OFFSET_X            0
#define BOARD_DISPLAY_OFFSET_Y            0
#define BOARD_DISPLAY_SCALE               1
#define BOARD_DISPLAY_PUSH_STREAMED       0
#define BOARD_CO5300_COL_OFFSET           0
// ST7735 native is 128×160 portrait; rotation=3 gives 160×128 landscape
// with a 90° counter-clockwise orientation vs rotation=1.
#define BOARD_DISPLAY_ROTATION            3
#define BOARD_CO5300_MADCTL               0

// UI orientation: Xueersi is a landscape 160×128 panel.
#define BOARD_DISPLAY_LANDSCAPE_UI 1

#define BOARD_DISABLE_SLEEP 1

// Credits-page hardware identification (two short lines).
#define BOARD_MODEL_LINE1  "Xueersi ESP32"
#define BOARD_MODEL_LINE2  ""
