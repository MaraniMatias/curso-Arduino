#include "lib4094.h"
const int pinData = 0;    // Amarrillo
const int pintClock = 1;  // Maron
const int pinStrober = 2; // Verde

void setup() {
  setup4094(pinData, pintClock, pinStrober ); // indicar los pines
}

void loop() {
  barrido1(200); 
  parpadeo();
  barrido2(200);
}

void parpadeo() {
  write4094("11111111");
  delay(250);
  write4094("00000000");
  delay(250);
  write4094("11111111");
  delay(250);
}

void barrido2(int velocidad) {
  write4094("10000000"); delay(velocidad);
  write4094("11000000"); delay(velocidad);
  write4094("01100000"); delay(velocidad);
  write4094("00110000"); delay(velocidad);
  write4094("00011000"); delay(velocidad);
  write4094("00001100"); delay(velocidad);
  write4094("00000110"); delay(velocidad);
  write4094("00000011"); delay(velocidad);
  write4094("00000001"); delay(velocidad);
  write4094("00000000"); delay(velocidad * 2);
}

void barrido1(int velocidad) {
  write4094("10000000"); delay(velocidad);
  write4094("01000000"); delay(velocidad);
  write4094("00100000"); delay(velocidad);
  write4094("00010000"); delay(velocidad);
  write4094("00001000"); delay(velocidad);
  write4094("00000100"); delay(velocidad);
  write4094("00000010"); delay(velocidad);
  write4094("00000001"); delay(velocidad);
  write4094("00000000"); delay(velocidad * 2);
}
