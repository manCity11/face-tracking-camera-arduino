#include "Position.h"

Position::Position(String input) {
  x = input.substring(0, input.indexOf(',')).toInt();
  y = input.substring(input.indexOf(',') + 1).toInt();
}
