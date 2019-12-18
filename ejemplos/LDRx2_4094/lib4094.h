int libPin4094[] = { -1, -1, -1};

void setup4094(int pinData, int pinClock, int pinStrober ) {
  libPin4094[0] = pinData;
  libPin4094[1] = pinClock;
  libPin4094[2] = pinStrober;
  pinMode(libPin4094[0], OUTPUT);// pinData
  pinMode(libPin4094[1], OUTPUT);// pinClock
  pinMode(libPin4094[2], OUTPUT);// pinStrober
}

/*void write4094(String data) {
  if (libPin4094[0] != -1 && libPin4094[1] != -1 && libPin4094[2] != -1) {
    digitalWrite(libPin4094[2], HIGH);
    for (int i = 0; i < 8; i++) {
      digitalWrite(libPin4094[1], LOW);
      digitalWrite(libPin4094[0], data[i] == '1' ? HIGH : LOW);
      digitalWrite(libPin4094[1], HIGH);
    }
    digitalWrite(libPin4094[1], LOW);
  }
}*/


void write4094(String data) {
  if (libPin4094[0] != -1 && libPin4094[1] != -1 && libPin4094[2] != -1) {

    digitalWrite(libPin4094[2], HIGH);
    for (int i = 4; i >= 0; i--) {
      digitalWrite(libPin4094[1], LOW);
      digitalWrite(libPin4094[0], data[i] == '1' ? HIGH : LOW);
      digitalWrite(libPin4094[1], HIGH);
    }
    for (int i = 4; i < 8; i++) {
      digitalWrite(libPin4094[1], LOW);
      digitalWrite(libPin4094[0], data[i] == '1' ? HIGH : LOW);
      digitalWrite(libPin4094[1], HIGH);
    }
    digitalWrite(libPin4094[1], LOW);

  }
}

void off4094(){
  digitalWrite(libPin4094[2], HIGH);
  write4094("00000000");
  digitalWrite(libPin4094[2], LOW);
}
