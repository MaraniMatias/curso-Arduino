int const led = 13;
int const btn = 0;
int const tiempo = 1000;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int val = digitalRead(btn);
  digitalWrite(led, val);
}
