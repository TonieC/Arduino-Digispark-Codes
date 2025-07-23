# Ultrasonic Sensor + Servo Motor 🚗📡

This Arduino sketch controls a servo motor using distance data from an **HC-SR04 ultrasonic sensor**. It's a basic smart-response system — when an object approaches, the servo rotates to different angles based on proximity.

---

## 🎯 Features

- Detects objects using ultrasonic pulses
- Moves the servo based on how close an object is:
  - ≤ 10 cm → 0°
  - 11–20 cm → 90°
  - > 20 cm → 180°
- Logs distance to the serial monitor for easy debugging

---

## 🧰 Hardware Required

| Component           | Description                     |
|---------------------|---------------------------------|
| Arduino (UNO/Nano)  | Microcontroller board           |
| HC-SR04             | Ultrasonic distance sensor      |
| Servo motor (SG90)  | Standard hobby servo            |
| Jumper wires        | For connections                 |
| Breadboard (opt)    | For prototyping                 |

---

## 🔌 Wiring Guide

### HC-SR04 to Arduino:
| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| TRIG        | D7          |
| ECHO        | D8          |

### Servo to Arduino:
| Servo Wire | Arduino Pin |
|------------|-------------|
| Orange     | D13         |
| Red        | 5V          |
| Brown      | GND         |

---

## 📦 How It Works

1. Sensor sends an ultrasonic pulse.
2. Echo reflects off an object and returns.
3. The sketch calculates distance and moves the servo accordingly.
4. The system pauses 5 seconds between reads to avoid jittery motion.

---

## 🚀 Getting Started

1. Upload `ultrasonic_servo.ino` to your board.
2. Open the serial monitor at **9600 baud** to see distance logs.
3. Place objects near the sensor to test servo reactions.

---

## 🧠 Use Cases

- Smart garbage bins (lid opens when you approach)
- Touchless doors
- Object-based automation
- Robotics / AI obstacle interaction

---

## 📜 License

MIT License — open for everyone to use, improve, or remix.

---

