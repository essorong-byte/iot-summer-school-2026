# Potentiometer Dynamic LED Control System

An embedded C++ firmware application that dynamically modulates an LED's blinking frequency based on real-time analog input data from a potentiometer, complete with automated data logging over the Serial Monitor interface.

---

## 🛠️ Hardware Required

To reproduce this project, you will need the following components:
* **1x** Arduino UNO (Nano or Mega will also work)
* **1x** 10kΩ Potentiometer
* **1x** LED (Any color)
* **1x** 220Ω Resistor (To limit current to the LED)
* **1x** Breadboard
* **Solid-core Jumper Wires**

---

## 🔌 Circuit Diagram Description

Since a visual schematic tool isn't open right now, follow these exact wiring paths to build your circuit layout on your physical breadboard or simulation canvas (Wokwi/Tinkercad):

1. **LED Subcircuit:**
   - Connect the long positive leg (**Anode**) of your LED to Arduino **Digital Pin 13**.
   - Connect the short negative leg (**Cathode**) of your LED to one side of the **220Ω resistor**.
   - Connect the remaining side of the resistor to the Arduino **GND** pin.

2. **Potentiometer Subcircuit:**
   - Connect the left outer terminal (Pin 1) of the 10kΩ potentiometer to Arduino **5V**.
   - Connect the right outer terminal (Pin 3) of the potentiometer to Arduino **GND**.
   - Connect the middle adjustable terminal (Pin 2 / Wiper) directly to Arduino **Analog Input Pin A0**.

---

## 🚀 How to Upload Code

1. Install the latest version of the **Arduino IDE** or open an online simulation tool like **Wokwi** or **Tinkercad**.
2. Clone or copy the source code found in your `led_blink.ino` file.
3. Connect your Arduino hardware to your computer using a compatible USB cable.
4. Launch the Arduino IDE, open your sketch, navigate to **Tools > Board**, and select **Arduino UNO**.
5. Go to **Tools > Port** and select the active COM port assigned to your plugged-in board.
6. Click the **Upload** arrow icon button in the top-left corner of the IDE workspace.

---

## 📊 Expected Output

* **Hardware Action:** Twisting the knob of your potentiometer changes the voltage reading on pin A0. Rotating it completely clockwise increases the loop delay (slowing down the flash rate), while rotating it counter-clockwise speeds the blinking loop up to rapid execution.
* **Serial Monitor Output:** Open your Serial Monitor (set at `9600` baud rate). You will see a scrolling live string logging the total runtime counts tracking execution:
  ```text
  Blink count: 1
  Blink count: 2
  Blink count: 3
