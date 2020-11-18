/*
  Sensor.cpp – a library to get input from flex sensors.
  Created by J. C. Strickland, 18 Nov. 2020
*/
#include "Arduino.h"    // Include the default Arduino header file
#include "Sensor.h"     // Include the header file for this class

Sensor::Sensor(int pin) {
  pinMode(_pin, INPUT); // Set the input pin to input.
  _pin = pin;           // Make the given pin the pin the lib uses.
}
Sensor::readSensor() {
  currentValue = analogRead(_pin);  // Make the current value the value read on the sensor.
  return currentValue;              // Return the current value.
  
}
Sensor::mapAngle(int data) {        // Map the angle between 0 and 90 degrees
  return map(data, 0, 1024, 0, 90); // Return the angle between 0 and 90 degrees
}

Sensor::writeToSerial(int angle) {  // Write the inputted angle to serial
   Serial.println(currentValue)     // Print the angle to serial.
}
