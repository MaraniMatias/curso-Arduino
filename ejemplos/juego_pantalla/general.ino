void precentacion() {
  cruz(200, true);
  for (int i = 58; i >= 48; i--) {
    digito6x4(i);
  }
  cruz(100, false);
  off4094();      delay(100);
}

void cruz(int _time, bool sent) {
  if (sent) {
    writeDigito("10000001", "10000001"); delay(_time);
    writeDigito("01000010", "01000010"); delay(_time);
    writeDigito("00100100", "00100100"); delay(_time);
    writeDigito("00011000", "00011000"); delay(_time);
  } else {
    writeDigito("00011000", "00011000"); delay(_time);
    writeDigito("00100100", "00100100"); delay(_time);
    writeDigito("01000010", "01000010"); delay(_time);
    writeDigito("10000001", "10000001"); delay(_time);
  }
}

void setCountUp() {
  digitalWrite(pinUpDownContador, HIGH);
  digitalWrite(pinUpDownContador, LOW);
  digitalWrite(pinUpDownContador, HIGH);
}
void setCountDown() {
  digitalWrite(pinUpDownContador, LOW);
  digitalWrite(pinUpDownContador, HIGH);
  digitalWrite(pinUpDownContador, LOW);
}
void updateCount() {
  digitalWrite(pinClockContador, LOW);
  digitalWrite(pinClockContador, HIGH);
}
void resetCount() {
  digitalWrite(pinResetContador, LOW);
  digitalWrite(pinResetContador, HIGH);
  digitalWrite(pinResetContador, LOW);
}
/*
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
*/
