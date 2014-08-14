#include <Servo.h>

Servo awesomeServo;

int const potPin = A0;
int potVal;
int angle;

void setup() {
  awesomeServo.attach(9);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.println(angle);
  awesomeServo.write(angle);
  delay(15);
}
