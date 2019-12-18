#include <Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(12);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // desde 0 a 180 grados
    myservo.write(pos);
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1) { // desde 180 a 0 grados
    myservo.write(pos);
    delay(10);
  }
}
