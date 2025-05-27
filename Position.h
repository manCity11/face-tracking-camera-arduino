#ifndef Position_h
#define Position_h

#include "Arduino.h"

class Position {
  public:
    int x;
    int y;
    Position(String input);
};

#endif
