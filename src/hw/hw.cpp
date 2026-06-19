#include "hw/hw.h"
#include <Arduino.h>
#include <Wire.h>

static void die(const char* what) {
  Serial.printf("hwInit FAIL: %s\n", what);
  while (1) delay(1000);
}

void hwInit() {
  Serial.begin(115200);
  delay(500);
  Serial.println("\n=== claude-buddy boot ===");

  Wire.begin(PIN_I2C_SDA, PIN_I2C_SCL);
  Wire.setClock(400000);

  if (!hwExpanderInit())  die("expander");
#if BOARD_LCD_RST_VIA_PMU
  // 2.16 has no LCD_RST GPIO; the panel is reset by power-cycling
  // AXP ALDO3. PMU must be initialised before the display.
  if (!hwPowerInit())     die("power");
  // ALDO3 power-cycle resets the panel (50 ms low between two highs).
  // s_pmu.enableALDO3() in powerInit left it enabled; toggle it here.
  #if BOARD_HAS_AXP2101
  hwPmuRef()->disableALDO3();
  delay(50);
  hwPmuRef()->enableALDO3();
  delay(50);
  #endif
#endif
  // Toggles PIN_TP_RESET on all boards; PIN_LCD_RESET only on non-PMU
  // boards (gated inside the function via BOARD_LCD_RST_VIA_PMU).
  hwExpanderResetSequence();
  if (!hwDisplayInit())   die("display");
#if !BOARD_LCD_RST_VIA_PMU
  #if BOARD_HAS_AXP2101
  if (!hwPowerInit())     die("power");
  #endif
#endif
  if (!hwInputInit())     die("input");
#if BOARD_HAS_IMU
  if (!hwImuInit())       die("imu");
#endif
  if (!hwRtcInit())       die("rtc");
#if BOARD_HAS_AUDIO_CODEC || BOARD_HAS_BUZZER
  if (!hwAudioInit())     die("audio");
#endif

  Serial.println("hwInit OK");
}
