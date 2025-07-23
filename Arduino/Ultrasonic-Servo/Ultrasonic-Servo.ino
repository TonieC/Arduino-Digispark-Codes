// This code triggers a servo motor based on object proximity using an ultrasonic sensor.

#include <Servo.h>

Servo myServo;
const int trigPin = 7;
const int echoPin = 8;

long duration;
int distance;

void setup() {
  myServo.attach(13);        // Servo signal pin connected to D13
  pinMode(trigPin, OUTPUT);  // Trig pin of ultrasonic sensor
  pinMode(echoPin, INPUT);   // Echo pin of ultrasonic sensor
  Serial.begin(9600);        // Start serial communication for debugging
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo duration and convert to distance in cm
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Debug output
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Control servo position based on distance
  if (distance <= 10) {
    myServo.write(0);      // Close position
  } else if (distance <= 20) {
    myServo.write(90);     // Half-open position
  } else {
    myServo.write(180);    // Fully open
  }

  delay(5000); // Wait 5 seconds before next reading
}
