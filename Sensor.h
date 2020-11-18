/*
Sensor.h – a library to take input from sensors.
*/
#ifndef Sensor_h
#define Sensor_h

#include "Arduino.h"
class Sensor {
  public:
  	Finger(int pin);
	int turnToAngle();
	int writeToSerial();
  private:
	int _pin;
}
#endif
