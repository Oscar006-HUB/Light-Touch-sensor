
const int ledPin = 5;  // LED connected to GPIO9
const int touchSensorPin = 4;  // GPIO4

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  int touchValue = touchRead(4);  // Read the capacitance value of T0 (GPIO4)

  // Threshold may vary depending on environment
  if (touchValue < 30) {  // Adjust this value based on testing
    digitalWrite(ledPin, HIGH);  // Turn LED ON when touched
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED OFF when not touched
  }

  delay(100);  // Small delay for stability
}