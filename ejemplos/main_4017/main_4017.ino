#include "lib4017.h"
const int pinClock = 0; // amarillo
const int pinReset = 1; // verde

void setup() {
  setup4017(pinReset, pinClock);
}

void loop() {
  barrido1(500);
  delay(500);
  barrido2(200);
  delay(500);
  barrido3(200);
  delay(500);
  prender3led();
  delay(500);
}

void barrido1(int velocidad) {
  reset4017();
  on4017(0); delay(velocidad); // emciende un pin en particular
  on4017(1); delay(velocidad);
  on4017(2); delay(velocidad);
  on4017(3); delay(velocidad);
  on4017(4); delay(velocidad);
  on4017(5); delay(velocidad);
  on4017(6); delay(velocidad);
  on4017(7); delay(velocidad);
  on4017(8); delay(velocidad);
  on4017(9); delay(velocidad);
}

void barrido2(int velocidad) {
  for (int i = 0; i < 10; i++) {
    add4017(); delay(velocidad); // agrega 1 pulso
  }
  reset4017();
}

void barrido3(int velocidad) {
  for (int i = 0; i < 10; i++) {
    add4017(2); delay(velocidad); // agrega 2 pulso
  }
  reset4017();
}

void prender3led() {
  for (int i = 0; i < 100; i++) {
    on4017(5); delay(5);
    on4017(6); delay(5);
    on4017(7); delay(5);
  }
  reset4017();
}

