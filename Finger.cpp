/* 
	Finger.cpp - Library for controlling a robotic hand.
	Created by J. C. Strickland, November 17, 2020.
*/
#include "Arduino.h"
#include "Finger.h"

Finger::Finger(int p1, int p2, int p3, int pos) {
	pinMode(proxPin, OUTPUT);
	pinMode(middPin, OUTPUT);
	pinMode(distPin, OUTPUT);
	proxPin = p1;
	middPin = p2;
	distPin = p3;
}

void Finger::recieveAngles() {
	// Add these to a list.
	Serial.readBytesUntil("#", valueProx);
    Serial.readBytesUntil("#", valueMidd);
    Serial.readBytesUntil("#", valueDist);

}

void Finger::mapAngle(int x) {
	return map(x, 0, 1024, 0, 180);
}

void Finger::inputAngles(int a1, int a2, int a3) {
	// Input Angles
}

void Finger::cycle() {
	recieveAngles();
	// Map each angle from the list from recieveAngles().
	mapAngle();
	inputAngles();
}
