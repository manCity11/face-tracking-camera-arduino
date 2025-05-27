#include "Arduino.h"
#include "Camera.h"
#include "pins.h"

Camera::Camera(int ang) {
  x = ang;
  y = ang;
}

void Camera::setAngle(int &axis, int inc) {
  int aCompute = axis + inc;
  axis = aCompute < MIN_ANGLE ? MIN_ANGLE : aCompute > MAX_ANGLE ? MAX_ANGLE : aCompute;
}
