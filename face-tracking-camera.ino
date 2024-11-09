#include <Servo.h>
#include "pins.h"

String input;
int xServerAngle;
int yServerAngle;

Servo xAxis;
Servo yAxis;

void setup() {
  xServerAngle = 90;
  yServerAngle = 90;

  xAxis.attach(X_AXIS_PIN);
  yAxis.attach(Y_AXIS_PIN);

  xAxis.write(xServerAngle);
  yAxis.write(yServerAngle);

  Serial.begin(SERIAL_PORT);
}

void loop() {
  while(Serial.available()) {
    input = Serial.readStringUntil('\n');
    int x = input.substring(0, input.indexOf(',')).toInt();
    int y = input.substring(input.indexOf(',') + 1).toInt();

    xServerAngle = getAngle(x, xServerAngle);
    yServerAngle = getAngle(y, yServerAngle);

    xAxis.write(xServerAngle);
    yAxis.write(yServerAngle);
  }
}

int getAngle(int step, int position) {
  int angle =  step + position;
  return angle < 0 ? 0 : (angle > MAX_ANGLE ? MAX_ANGLE : angle);
}
