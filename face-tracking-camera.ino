#include "pins.h"
#include <Servo.h>
#include "Camera.h"
#include "Position.h"
#include "CameraDirection.h"

Camera* c;
String input;
CameraDirection* cd;

void setup() {
  Serial.begin(SERIAL_PORT);
  c = new Camera(MAX_ANGLE / 2);
  cd = new CameraDirection(X_AXIS_PIN, Y_AXIS_PIN);
}

void loop() {
  while(Serial.available()) {
    input = Serial.readStringUntil('\n');
    Position p(input);

    c->setAngle(c->x, p.x);
    c->setAngle(c->y, p.y);

    cd->setAngle(cd->xAxis, c->x);
    cd->setAngle(cd->yAxis, c->y);
  }
}
