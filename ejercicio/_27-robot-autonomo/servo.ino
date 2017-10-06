//# Librerias
#include <Servo.h>       // Motor servo, el azul :D

//# Configuraci
Servo motorServo;
const int pinServo = 9;

void setupServo() {
  motorServo.attach(pinServo); // Servo
}

void moverServoRangoCompleto() {
  int pos = 0;
  for (pos = 0; pos <= 180; pos += 1) { // desde 0 a 180 grados
    motorServo.write(pos);
    delay(5);
  }
  for (pos = 180; pos >= 0; pos -= 1) { // desde 180 a 0 grados
    motorServo.write(pos);
    delay(5);
  }
}

void moverServo(short int pos) {
  motorServo.write(pos);
}

