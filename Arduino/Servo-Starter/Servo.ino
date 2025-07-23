#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(13); // Connect servo signal pin to D13
}

void loop() {
  servo.write(0);    // Move to 0 degrees
  delay(5000);       // Wait 5 seconds

  servo.write(90);   // Move to 90 degrees
  delay(5000);       // Wait 5 seconds

  servo.write(180);  // Move to 180 degrees
  delay(5000);       // Wait 5 seconds
}
