/* 
	Finger.h - Library for controlling a robotic hand.
	Created by J. C. Strickland, November 17, 2020.
*/
#ifndef Finger_h
#define Finger_h

#include "Arduino.h"
class Finger {
  public:
    Finger(int p1, int p2, int p3, int pos);
    void cycle();
  private:
    void recieveAngles(); // Look at serial for sensor data.
    void mapAngle(int x); // Take sensor data and map it to an angle.
    void outputAngles();  // Output angles to servos.
    int proxPin;
    int middPin;
    int distPin;   
}

#endif
