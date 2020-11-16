#include <Servo.h>
class Finger() {
  Servo proximal;
  Servo middle;
  Servo distal;
  int currProx;
  int currMidd;
  int currDist;
  int mapAngles(int x) {
    return map(x, 0, 1024, 0, 180); 
  }
  void inputAngles(int a1, int a2, int a3) {
    // do stuff.
  }
}
