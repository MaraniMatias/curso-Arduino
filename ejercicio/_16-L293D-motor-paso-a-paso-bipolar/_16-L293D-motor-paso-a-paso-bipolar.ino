const int b[] = {7, 6, 8, 9}; // motor paso a paso, probar combinaciones

void setup() {
  pinMode(0, OUTPUT); // enable
  pinMode(1, OUTPUT); // enable
  pinMode(b[0], OUTPUT);
  pinMode(b[1], OUTPUT);
  pinMode(b[2], OUTPUT);
  pinMode(b[3], OUTPUT);
}

void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);

  for ( int i = 0; i < 4; i++) {
    apagarTodo();
    digitalWrite(b[i], HIGH);
    delay(3);
  }
}

void apagarTodo() {
  digitalWrite(b[0], LOW);
  digitalWrite(b[1], LOW);
  digitalWrite(b[2], LOW);
  digitalWrite(b[3], LOW);
}

