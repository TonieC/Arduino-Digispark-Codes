#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyPress(0);
  delay(3000);
}

void loop() {
  DigiKeyboard.sendKeyPress(KEY_A);
  delay(100);
  DigiKeyboard.sendKeyPress(KEY_S);
  delay(100);
  DigiKeyboard.sendKeyPress(KEY_D);
  delay(100);
}
