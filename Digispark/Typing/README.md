# Digispark USB Typing Script ⌨️⚡

This sketch turns your **Digispark ATTiny85** into a USB keyboard that types **"Hello, world!"** every 2 seconds when plugged into a PC. It uses the `DigiKeyboard` library to emulate HID keystrokes.

---

## 🎯 What It Does

- Emulates a USB keyboard
- Types `Hello, world!` followed by `ENTER`
- Repeats every 2 seconds

---

## 🧰 Requirements

| Component      | Description               |
|----------------|---------------------------|
| Digispark      | ATTiny85 development board |
| USB port       | For power + HID emulation |
| Arduino IDE    | With Digispark support    |

---

## 🚀 Uploading the Code

1. Open `digispark_typing.ino` in the **Arduino IDE**
2. Go to **Tools > Board > Digispark (Default - 16.5MHz)**
3. Click **Upload**
4. Wait for the prompt, **then plug in your Digispark**

> 🔌 Digispark waits for upload after being plugged in — not before!

---

## ⚠️ Warnings

- This sketch sends keystrokes automatically. Test it in a **safe environment** (e.g. Notepad).
- Avoid uploading to a Digispark that's permanently plugged in unless you’re ready for the behavior.

---

## 🔧 Modify It

Want to:
- Type other messages?
- Add hotkeys (like Ctrl+Alt+Del)?
- Delay execution until a button is pressed?

You can customize all of that using `DigiKeyboard.print()`, `DigiKeyboard.sendKeyPress()`, and basic I/O logic.

---

## 📜 License

MIT License — clone, tweak, ship.

---

## 🙌 Tip

For stealthier behavior, add a delay in `setup()`:
```cpp
delay(10000); // Wait 10 seconds before typing starts
