// src/hw/display.h
#pragma once
#include <Arduino_GFX_Library.h>
#include "hw/pins.h"   // provides BOARD_HW_W, BOARD_HW_H, BOARD_SAFE_INSET

constexpr int HW_W       = BOARD_HW_W;
constexpr int HW_H       = BOARD_HW_H;

// Compile-time UI orientation selector. 1 = landscape redesign, 0 = portrait.
#ifndef BOARD_DISPLAY_LANDSCAPE_UI
#define BOARD_DISPLAY_LANDSCAPE_UI 0
#endif
#define LANDSCAPE_UI (BOARD_DISPLAY_LANDSCAPE_UI)

// Logical-canvas safe-draw region for the rounded/circular AMOLED bezel.
constexpr int SAFE_INSET = BOARD_SAFE_INSET;
constexpr int SAFE_L     = SAFE_INSET;
constexpr int SAFE_T     = SAFE_INSET;
constexpr int SAFE_R     = HW_W - SAFE_INSET;
constexpr int SAFE_B     = HW_H - SAFE_INSET;
constexpr int SAFE_W     = HW_W - 2 * SAFE_INSET;
constexpr int SAFE_H     = HW_H - 2 * SAFE_INSET;

bool hwDisplayInit();
void hwDisplayPush();
void hwDisplayBrightness(uint8_t lvl_0_4);
void hwDisplaySleep(bool off);
Arduino_Canvas* hwCanvas();
