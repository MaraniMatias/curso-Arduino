int libPin4017[] = { -1, -1};

void setup4017(int pinReset, int pinClock) {
  libPin4017[0] = pinReset;
  libPin4017[1] = pinClock;
  pinMode(libPin4017[0], OUTPUT);// pinReset
  pinMode(libPin4017[1], OUTPUT);// pintClock
}

void reset4017() {
  digitalWrite(libPin4017[0], LOW); digitalWrite(libPin4017[0], HIGH); digitalWrite(libPin4017[0], LOW);
}
void add4017() {
  digitalWrite(libPin4017[1], LOW); digitalWrite(libPin4017[1], HIGH); digitalWrite(libPin4017[1], LOW);
}

void add4017(int c) {
  for (int i = 0; i < c; i++) {
    add4017();
  }
}

void on4017(int pin) {
  if ( pin >= 0) { // numero mayoe a 10 pasa por acarreo
    reset4017();
    add4017(pin);
  }
}
