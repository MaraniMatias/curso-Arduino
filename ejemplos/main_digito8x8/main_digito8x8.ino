#include "libDigito8x8.h"
const int pintClock = 0;  // Maron
const int pinData = 1;    // Amarrillo
const int pinStrober = 2; // Verde

void setup() {
  setup4094(pinData, pintClock, pinStrober ); // indicar los pines
  off4094();
}

void loop() {

  diagonal(300);
  off4094();      delay(100);
  cruz(200);
  off4094();      delay(100);
  cuadradoPlus(100);
  cuadrado(75);
  cuadradoPlus(100);
  off4094();      delay(100);

  for (int i = 48; i <= 90; i++) {
    digito6x4( i );
  }
}


void cuadradoPlus(int _time) {
  for (long int i = 0; i < _time / 4; i++) {
    writeDigito("10011000", "10000000");
    writeDigito("10011000", "01000000");
    writeDigito("10011000", "00100000");
    writeDigito("10011000", "00010000");
    writeDigito("10011000", "00001000");
    writeDigito("10011000", "00000100");
    writeDigito("10011000", "00000010");
    writeDigito("10011000", "00000001");

    //writeDigito("10000000", "00011001");
    writeDigito("01000000", "00011001");
    writeDigito("00100000", "00011001");
    writeDigito("00010000", "00011001");
    writeDigito("00001000", "00011001");
    writeDigito("00000100", "00011001");
    writeDigito("00000010", "00011001");
    writeDigito("00000001", "00011001");

    writeDigito("10000000", "10011000");
    writeDigito("01000000", "10011000");
    writeDigito("00100000", "10011000");
    writeDigito("00010000", "10011000");
    writeDigito("00001000", "10011000");
    writeDigito("00000100", "10011000");
    writeDigito("00000010", "10011000");
    writeDigito("00000001", "10011000");

    //writeDigito("00000001", "10011000");
    writeDigito("00011001", "01000000");
    writeDigito("00011001", "00100000");
    writeDigito("00011001", "00010000");
    writeDigito("00011001", "00001000");
    writeDigito("00011001", "00000100");
    writeDigito("00011001", "00000010");
    writeDigito("00011001", "00000001");
  }
}


void cuadrado(int _time) {
  for (long int i = 0; i < _time / 4; i++) {
    writeDigito("10000000", "10000000");
    writeDigito("10000000", "01000000");
    writeDigito("10000000", "00100000");
    writeDigito("10000000", "00010000");
    writeDigito("10000000", "00001000");
    writeDigito("10000000", "00000100");
    writeDigito("10000000", "00000010");
    writeDigito("10000000", "00000001");
    //writeDigito("10000000", "00000001");
    writeDigito("01000000", "00000001");
    writeDigito("00100000", "00000001");
    writeDigito("00010000", "00000001");
    writeDigito("00001000", "00000001");
    writeDigito("00000100", "00000001");
    writeDigito("00000010", "00000001");
    writeDigito("00000001", "00000001");

    writeDigito("10000000", "10000000");
    writeDigito("01000000", "10000000");
    writeDigito("00100000", "10000000");
    writeDigito("00010000", "10000000");
    writeDigito("00001000", "10000000");
    writeDigito("00000100", "10000000");
    writeDigito("00000010", "10000000");
    writeDigito("00000001", "10000000");
    //writeDigito("00000001", "10000000");
    writeDigito("00000001", "01000000");
    writeDigito("00000001", "00100000");
    writeDigito("00000001", "00010000");
    writeDigito("00000001", "00001000");
    writeDigito("00000001", "00000100");
    writeDigito("00000001", "00000010");
    writeDigito("00000001", "00000001");
  }
}

void cruz(int _time) {
  writeDigito("10000001", "10000001"); delay(_time);
  writeDigito("01000010", "01000010"); delay(_time);
  writeDigito("00100100", "00100100"); delay(_time);
  writeDigito("00011000", "00011000"); delay(_time);
}

void diagonal(int _time) {
  writeDigito("10000000", "10000000"); delay(_time);
  writeDigito("01000000", "01000000"); delay(_time);
  writeDigito("00100000", "00100000"); delay(_time);
  writeDigito("00010000", "00010000"); delay(_time);
  writeDigito("00001000", "00001000"); delay(_time);
  writeDigito("00000100", "00000100"); delay(_time);
  writeDigito("00000010", "00000010"); delay(_time);
  writeDigito("00000001", "00000001"); delay(_time);
}
