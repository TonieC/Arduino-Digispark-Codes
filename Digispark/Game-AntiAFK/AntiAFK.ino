// This code will send key presses to prevent your game from kicking you for being AFK.
// It simulates pressing the W, A, S, and D keys in a loop with
// delays in between to mimic user activity.
// Make sure to use this responsibly and in accordance with the game's terms of service.

#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.sendKeyPress(KEY_W);
  delay(1500);
  DigiKeyboard.sendKeyPress(0);
  delay(500);

  DigiKeyboard.sendKeyPress(KEY_A);
  delay(1500);
  DigiKeyboard.sendKeyPress(0);
  delay(500);

  DigiKeyboard.sendKeyPress(KEY_S);
  delay(1500);
  DigiKeyboard.sendKeyPress(0);
  delay(500);

  DigiKeyboard.sendKeyPress(KEY_D);
  delay(1500);
  DigiKeyboard.sendKeyPress(0);
  delay(500);
}