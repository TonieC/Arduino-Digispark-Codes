#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyPress(0); // Just to ensure initialization
}

void loop() {
  DigiKeyboard.print("Hello, world!");
  DigiKeyboard.sendKeyPress(KEY_ENTER);
  delay(2000); // Wait 2 seconds before typing again
}
