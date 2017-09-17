const int b[] = {0, 1, 2, 3};

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(b[0], OUTPUT);
  pinMode(b[2], OUTPUT);
  pinMode(b[3], OUTPUT);
  pinMode(b[1], OUTPUT);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(b[i], HIGH);
    delay(24);
    digitalWrite(b[i], LOW);
    delay(24);
  }
}
