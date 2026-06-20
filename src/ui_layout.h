// src/ui_layout.h
// Compile-time layout constants for the two supported UI orientations.
// LANDSCAPE_UI == 0  -> original 184×224 portrait AMOLED layout.
// LANDSCAPE_UI == 1  -> redesigned 160×128 landscape Xueersi layout.
#pragma once
#include "hw/display.h"

#if LANDSCAPE_UI

// Header / footer bands (160×128 safe area is 144×112).
constexpr int UI_HEADER_H        = 18;   // top title/page-number bar
constexpr int UI_FOOTER_H        = 24;   // HUD / clock / scroll hint bar
constexpr int UI_CONTENT_TOP     = UI_HEADER_H;
constexpr int UI_CONTENT_BOTTOM  = HW_H - UI_FOOTER_H; // 104

// Clock is shown in the footer in landscape.
constexpr int UI_CLOCK_H         = UI_FOOTER_H;
constexpr int UI_CLOCK_TOP       = HW_H - UI_CLOCK_H;       // 104
constexpr int UI_CLOCK_TIME_CY   = HW_H - 16;               // 112, size-2 h=16
constexpr int UI_CLOCK_DATE_CY   = HW_H - 4;                // 124, size-1 h=8

// Info / Pet panels: header at the top, content below.
constexpr int UI_INFO_TITLE_Y    = 4;
constexpr int UI_INFO_TOP        = UI_INFO_TITLE_Y + 24;    // 28
constexpr int UI_INFO_CLEAR_TOP  = 0;
constexpr int UI_PET_TITLE_Y     = 4;
constexpr int UI_PET_TOP         = UI_HEADER_H;             // 18
constexpr int UI_PET_CLEAR_TOP   = 0;

// Approval bottom overlay.
constexpr int UI_APPROVAL_H      = 52;
constexpr int UI_APPROVAL_TOOL_Y_SHORT = 16;
constexpr int UI_APPROVAL_TOOL_Y_LONG  = 24;
constexpr int UI_APPROVAL_HINT_Y       = 32;
constexpr int UI_APPROVAL_ACTION_Y     = 40;

// HUD transcript.
constexpr int UI_HUD_LINES       = 2;
constexpr int UI_HUD_LH          = 10;

// Menus: use full safe width and a smaller row height so 10 settings fit.
constexpr int UI_MENU_MW         = SAFE_W;                  // 144
constexpr int UI_MENU_ROW_H      = 10;
constexpr int UI_MENU_HEADER_H   = 12;
constexpr int UI_MENU_HINT_H     = 12;

// Pet rendering in landscape: keep everything scaled to fit in the content area.
constexpr int UI_PEEK_TOP        = UI_CONTENT_BOTTOM;       // 104
constexpr int UI_HOME_GIF_TOP    = UI_PEEK_TOP;
constexpr int UI_BUDDY_Y_BASE    = 24;
constexpr int UI_BUDDY_Y_OVERLAY = 6;
constexpr int UI_BUDDY_HOME_SCALE= 1;
constexpr int UI_BUDDY_CHAR_H    = 8;
constexpr int UI_BUDDY_CLEAR_H   = UI_BUDDY_Y_BASE + 5 * UI_BUDDY_CHAR_H + 12;

// Text-mode character (animated text frames instead of GIFs).
constexpr int UI_TEXT_PEEK_CY    = UI_PEEK_TOP / 2;
constexpr int UI_TEXT_HOME_CY    = UI_HOME_GIF_TOP / 2;

// Boot / transfer screens.
constexpr int UI_BOOT_Y_OFFSET   = 12;
constexpr int UI_TRANSFER_Y      = HW_H / 2;

#else // --------------------------------------------------------------------- portrait

constexpr int UI_HEADER_H        = 0;
constexpr int UI_FOOTER_H        = 34;   // SHOW(3)*LH(10)+4
constexpr int UI_CONTENT_TOP     = 0;
constexpr int UI_CONTENT_BOTTOM  = HW_H - UI_FOOTER_H; // 190

// Portrait clock occupies the lower part of the screen (y >= 140).
constexpr int UI_CLOCK_H         = HW_H - 140;
constexpr int UI_CLOCK_TOP       = 140;
constexpr int UI_CLOCK_TIME_CY   = 160;   // size-3 h=24
constexpr int UI_CLOCK_DATE_CY   = SAFE_B - 21;

// Info / Pet panels keep the original y=70 split.
constexpr int UI_INFO_TITLE_Y    = 72;
constexpr int UI_INFO_TOP        = 70;
constexpr int UI_INFO_CLEAR_TOP  = UI_INFO_TOP;
constexpr int UI_PET_TITLE_Y     = 70;
constexpr int UI_PET_TOP         = 70;
constexpr int UI_PET_CLEAR_TOP   = 70;

constexpr int UI_APPROVAL_H      = 78;
constexpr int UI_APPROVAL_TIMER_Y      = 4;
constexpr int UI_APPROVAL_TOOL_Y_SHORT = 14;
constexpr int UI_APPROVAL_TOOL_Y_LONG  = 18;
constexpr int UI_APPROVAL_HINT_Y       = 34;
constexpr int UI_APPROVAL_ACTION_Y     = 58;

constexpr int UI_HUD_LINES       = 3;
constexpr int UI_HUD_LH          = 10;

constexpr int UI_MENU_MW         = 118;
constexpr int UI_MENU_ROW_H      = 14;
constexpr int UI_MENU_HEADER_H   = 16;
constexpr int UI_MENU_HINT_H     = 14;

constexpr int UI_PEEK_TOP        = 70;
constexpr int UI_HOME_GIF_TOP    = 140;
constexpr int UI_BUDDY_Y_BASE    = 30;
constexpr int UI_BUDDY_Y_OVERLAY = 6;
constexpr int UI_BUDDY_HOME_SCALE= 2;
constexpr int UI_BUDDY_CHAR_H    = 8;
constexpr int UI_BUDDY_CLEAR_H   = UI_BUDDY_Y_BASE + 5 * UI_BUDDY_CHAR_H + 12;

constexpr int UI_TEXT_PEEK_CY    = 35;
constexpr int UI_TEXT_HOME_CY    = 60;

constexpr int UI_BOOT_Y_OFFSET   = 12;
constexpr int UI_TRANSFER_Y      = 90;

#endif
