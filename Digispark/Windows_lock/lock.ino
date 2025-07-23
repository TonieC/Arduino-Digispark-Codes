#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyPress(0);
  delay(2000);
  DigiKeyboard.sendKeyPress(KEY_L, MOD_GUI_LEFT);
}

void loop() {}
// This code simulates a Windows lock screen action by sending the Windows key + L combination.