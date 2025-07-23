# Digispark Anti-AFK Script 🎮

This project is a simple Digispark-based USB HID script that simulates keypresses (`W`, `A`, `S`, `D`) to prevent games from detecting you as AFK (Away From Keyboard). Useful for farming idle rewards or keeping your session alive during downtimes.

> ⚠️ **Disclaimer**: Use this tool responsibly and **at your own risk**. Many games strictly prohibit macroing or input simulation. Violating terms of service may lead to account suspension or bans. This project is for educational and prototyping purposes only.

---

## 🧠 How It Works

Using `DigiKeyboard.h`, the code sends synthetic keypresses every few seconds:
- Presses `W`, `A`, `S`, `D` in a loop
- Includes short delays to mimic human-like activity
- Completely plug-and-play once flashed

---

## 🛠 Requirements

- Digispark ATTiny85 (USB development board)
- Arduino IDE with Digispark board support
- `DigiKeyboard` library (bundled with Digispark core)
- Windows PC (Linux/macOS may behave differently with HID)

---

## 🚀 Getting Started

1. Plug in your Digispark via USB.
2. In **Arduino IDE**:
   - Go to **Tools > Board > Digispark (Default - 16.5mhz)**.
3. Upload the code from `anti-afk.ino`.
4. Once uploaded, plug it into your target machine — and let it do its thing.