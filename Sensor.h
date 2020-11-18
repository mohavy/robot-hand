/*
	Sensor.h – a library to get input from flex sensors.
	Created by J. C Strickland, 18 Nov. 2020
*/
#ifndef Sensor_h
#define Sensor_h

#include "Arduino.h"
class Sensor {
  public:
  	Finger(int pin);
	int readSensor();
	int mapAngle(int data);
	void writeToSerial(int angle);
  private:
	int _pin;
	int currentValue;
}
#endif
// Oh my gosh if these tabs don't work I swear I'm going to use spaces. - 11:41am
// God almighty I'm going to use spaces. – 11:43am
