#include <LiquidCrystal.h>

// Initialize the library with the interface pins: rs, enable, d4, d5, d6, d7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); // Set up the LCD's number of columns and rows
  lcd.setCursor(0, 0);
  lcd.print("Top Line Text");
  lcd.setCursor(0, 1);
  lcd.print("Bottom Line Text");
}

void loop() {
  // Nothing to update continuously
}
