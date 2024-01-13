#include <Arduino.h>

// put function declarations here:
#define ANALOG_PIN D1

void setup() {
  Serial.begin(115200);  // Start serial communication at 115200 baud
}

void loop() {
  int adcValue = analogRead(ANALOG_PIN);  // Read the analog value
  float voltage = (adcValue / 4095.0) * 3.3;  // Convert to voltage

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);  // Wait for a second before reading again
}
