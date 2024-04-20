#include <Servo.h>
const int servoPin = 9; 
const int potPin = A0; 
Servo servoMotor;
void setup() {
  servoMotor.attach(servoPin);
}
void loop() {
  int potValue = analogRead(potPin);
  int servoAngle = map(potValue, 0, 1023, 0, 180);
  servoMotor.write(servoAngle);
  delay(10);
}
