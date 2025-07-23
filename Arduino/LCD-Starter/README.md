# LCD Hello World 👋📺

This sketch demonstrates how to use a 16x2 LCD with an Arduino using the `LiquidCrystal` library. It prints static text on both lines of the display.

## 🧰 Hardware Setup

- LCD 16x2 (HD44780-compatible)
- Connected via **parallel interface** (not I2C)

### 📌 Wiring (Digital Pins)
| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | D12         |
| EN      | D11         |
| D4      | D5          |
| D5      | D4          |
| D6      | D3          |
| D7      | D2          |
| VSS     | GND         |
| VDD     | 5V          |
| VO      | Potentiometer for contrast (center pin to VO) |

> 🧠 Don’t forget a 10k potentiometer between VCC-GND for contrast control on VO.

---

## 🧪 What It Does

- Initializes the LCD on boot
- Prints "Top Line Text" on the first line
- Prints "Bottom Line Text" on the second line
- No loop updates — static text only

---

## 🛠 Requirements

- Arduino UNO/Nano/etc.
- 16x2 LCD (not I2C)
- `LiquidCrystal` library (default in Arduino IDE)

---

## 🧬 Output Preview

Top Line Text
Bottom Line Text


---

## 🧠 Next Steps

Want to:
- Scroll text?
- Show sensor data?
- Add button input?

Fork this and experiment — the LCD is your canvas. 🖼️

---

## 📜 License

MIT — use freely, mod responsibly.