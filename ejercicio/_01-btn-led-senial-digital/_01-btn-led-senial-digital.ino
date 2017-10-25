int const led = 13;
int const btn = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int val = digitalRead(btn);
  digitalWrite(led, val);
}
