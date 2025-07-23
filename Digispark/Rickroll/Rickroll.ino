#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyPress(0);
  delay(3000);

  DigiKeyboard.sendKeyPress(KEY_R, MOD_GUI_LEFT);
  delay(500);
  DigiKeyboard.print("chrome https://youtu.be/dQw4w9WgXcQ");
  DigiKeyboard.sendKeyPress(KEY_ENTER);
}

void loop() {}
