/*
Input - takes sensor data and Serializes it
Strickland & Quinlan 
16/11/2020

*/
#ifndef Input_h
#define Input_h

#include "Arduino.h"
class Input{
	// READING VALUES
	int proxValue = digitalRead(PROX);
  int midValue = digitalRead(MID);
  int distValue = digitalRead(DIST);
	
	// SETUP VARIABLES
  int PROX; // Proximal pin number
  int MID; // Middle pin number
  int DIST; // Distal pin number
  int position; // Finger position on hand:
                // 1 = Thumb
                // 2 = Index
                // 3 = Middle
                // 4 = Ring
                // 5 = Pinky
  Input(int pinP, int pinM, int pinD, int pos) {
    PROX = pinP;
    MID = pinM
    DIST = pinD;
    position = pos;
  }
	// Read the values from the fingers.
  void readValues() {
    proxValue = digitalRead(PROX);
    midValue = digitalRead(MID);
    distValue = digitalRead(DIST);
  }
	// Write the values from the fingers to the Serial line.
  void writeValues() {
		Serial.println(String(proxValue) + "#" + String(midValue) + "#" + String(distValue));
  }
	void cycle() {
		readValues();
		writeValues();
	}
}
#endif
