#include <Servo.h>
class Finger() {
  // Variable definitions
  // Servo definitions
  Servo proximal;
  Servo middle;
  Servo distal;
  // Current values for proximal, middle and distal parts of the finger.
  int currProx;
  int currMidd;
  int currDist;

  // Incoming values for proximal, middle and distal. For use in the recieveAngles() function.
  byte valueProx;
  byte valueMidd;
  byte valueDist;
  // Takes sensor values and turns them into angle values for the effector. 
  int mapAngles(int x) {
    return map(x, 0, 1024, 0, 180); 
  }
  // Recieves angles from the Serial
  void recieveAngles() {
    Serial.readBytesUntil("#", valueProx);
    Serial.readBytesUntil("#", valueMidd);
    Serial.readBytesUntil("#", valueDist);
  }
  // Inputs values to the servos.
  void inputAngles(int a1, int a2, int a3) {

  }
}
