//# Librerias
#include <Servo.h>       // Motor servo, el azul :D

//# Configuraci
Servo motorServo;
const int pinServo = 12;

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
  delay(1000);
}

void moverServo(short int pos, short int esperar) {
  motorServo.write(pos);
  delay(esperar >= 5 ? esperar : 10 );
}
void moverServo(short int pos) {
  motorServo.write(pos);
}

