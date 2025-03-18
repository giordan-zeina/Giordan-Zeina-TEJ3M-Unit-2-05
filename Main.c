/*
  Created by: Giordan Zeina
  Created on: Mar 2025
  Turns a servo motor 180 degrees, then back again
*/

#include <Servo.h>

Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}
