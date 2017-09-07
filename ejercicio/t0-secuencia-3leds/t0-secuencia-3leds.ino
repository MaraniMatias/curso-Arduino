const int _time = 500;
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(0, HIGH);
  delay(_time / 2);
  digitalWrite(1, HIGH);
  digitalWrite(0, LOW);
  delay(_time);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  delay(_time * 2);
  digitalWrite(2, LOW);
}
