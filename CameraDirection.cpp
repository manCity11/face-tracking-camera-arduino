#include "pins.h"
#include "Arduino.h"
#include "CameraDirection.h"

CameraDirection::CameraDirection(int xPin, int yPin) {
  xAxis.attach(xPin);
  yAxis.attach(yPin);

  xAxis.write(MAX_ANGLE / 2);
  yAxis.write(MAX_ANGLE / 2);
}

void CameraDirection::setAngle(Servo &axis, int ang) {
  axis.write(ang);
}
