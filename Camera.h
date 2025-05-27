#ifndef Camera_h
#define Camera_h

#include "Arduino.h"

class Camera {
  public:
    int x;
    int y;
    Camera(int ang);
    void setAngle(int &axis, int inc);
};

#endif
