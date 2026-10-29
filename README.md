# ESP32 Touch-Activated Light

Uses the ESP32's built-in capacitive touch sensing to switch on an LED when you touch a wire — the human body changes the pin's capacitance.

## Hardware
- ESP32 development board
- LED + resistor on GPIO 5
- Bare wire (touch pad) on GPIO 4 (touch channel T0)

## How it works
`touchRead(4)` returns a lower value when the wire is touched. Below the threshold (30) the LED turns on; otherwise it stays off. Adjust the threshold for your setup.

## Usage
1. Open `TOUCH_MY_BODY.ino` in the Arduino IDE with ESP32 board support installed.
2. Select your board and port, then upload.
3. Touch the wire to light the LED.

## License

Released under the [MIT License](LICENSE).
