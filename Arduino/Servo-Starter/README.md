# Servo Sweep Test 🔄

This Arduino sketch demonstrates how to rotate a servo motor to **three preset angles** — 0°, 90°, and 180° — with a 5-second delay between each movement. It's a simple diagnostic or demonstration tool for testing servo functionality.

---

## 🎯 What It Does

- Moves a servo to 0°
- Waits 5 seconds
- Moves to 90°
- Waits 5 seconds
- Moves to 180°
- Repeats the cycle

---

## 🧰 Hardware Required

| Component           | Description                  |
|---------------------|------------------------------|
| Arduino (UNO/Nano)  | Any compatible board         |
| SG90 Servo motor    | Or any 180° hobby servo      |
| Jumper wires        | For connections              |
| Power source        | Use external 5V for stability if needed

---

## 🔌 Wiring Guide

| Servo Wire | Arduino Pin |
|------------|-------------|
| Orange     | D13 (signal)|
| Red        | 5V          |
| Brown      | GND         |

> ⚠️ *Servos can draw high current! Consider using an external 5V power source (with shared GND) if your servo jitters or resets the Arduino.*

---

## 🚀 Uploading

1. Open `servo.ino` in the Arduino IDE
2. Select your board from **Tools > Board**
3. Upload the code
4. Watch the servo rotate every 5 seconds

---

## 📦 Use Cases

- Servo calibration or testing
- Intro to servo control
- Visual output for interactive sensors

---

## 📜 License

MIT — modify, reuse, remix.

---

