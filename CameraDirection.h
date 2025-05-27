#ifndef CameraDirection_h
#define CameraDirection_h

#include "Arduino.h"
#include <Servo.h>

class CameraDirection {
  public:
    Servo xAxis;
    Servo yAxis;
    CameraDirection(int xPin, int yPin);
    void setAngle(Servo &axis, int ang);
};

#endif
