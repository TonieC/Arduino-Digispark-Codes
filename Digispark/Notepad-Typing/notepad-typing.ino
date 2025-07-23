#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyPress(0);
  delay(3000); // Wait 3 seconds after plug-in

  // Open Run
  DigiKeyboard.sendKeyPress(KEY_R, MOD_GUI_LEFT);
  delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyPress(KEY_ENTER);
  delay(1000);

  // Type message
  DigiKeyboard.print("This was typed by a Digispark!");
  DigiKeyboard.sendKeyPress(KEY_ENTER);
}

void loop() {
  // Nothing in loop
}
