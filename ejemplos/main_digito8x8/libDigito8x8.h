int libPin4094[] = { -1, -1, -1};

void setup4094(int pinData, int pinClock, int pinStrober ) {
  libPin4094[0] = pinData;
  libPin4094[1] = pinClock;
  libPin4094[2] = pinStrober;
  pinMode(libPin4094[0], OUTPUT);// pinData
  pinMode(libPin4094[1], OUTPUT);// pinClock
  pinMode(libPin4094[2], OUTPUT);// pinStrober
}

void writeData(int value) {
  if (libPin4094[0] != -1 && libPin4094[1] != -1 && libPin4094[2] != -1) {
    digitalWrite(libPin4094[1], LOW);
    digitalWrite(libPin4094[0], value);
    digitalWrite(libPin4094[1], HIGH);
  }
}

void writeX(String data) {
  writeData(data[7] == '1' ? HIGH : LOW);
  writeData(data[6] == '1' ? HIGH : LOW);
  writeData(data[5] == '1' ? HIGH : LOW);
  writeData(data[4] == '1' ? HIGH : LOW);
  writeData(data[0] == '1' ? HIGH : LOW);
  writeData(data[1] == '1' ? HIGH : LOW);
  writeData(data[2] == '1' ? HIGH : LOW);
  writeData(data[3] == '1' ? HIGH : LOW);
}

void writeY(String data) {
  writeData(data[0] == '1' ? HIGH : LOW);
  writeData(data[1] == '1' ? HIGH : LOW);
  writeData(data[2] == '1' ? HIGH : LOW);
  writeData(data[3] == '1' ? HIGH : LOW);

  writeData(data[7] == '1' ? HIGH : LOW);
  writeData(data[6] == '1' ? HIGH : LOW);
  writeData(data[5] == '1' ? HIGH : LOW);
  writeData(data[4] == '1' ? HIGH : LOW);
}

writeDigito(String x, String y) {
  digitalWrite(libPin4094[2], LOW);
  writeX(x); writeY(y);
  digitalWrite(libPin4094[2], HIGH);
}

void off4094() {
  digitalWrite(libPin4094[2], LOW);
  for (int i = 0; i < 16; i++) {
    writeData(LOW);
  }
  digitalWrite(libPin4094[2], HIGH);
}
