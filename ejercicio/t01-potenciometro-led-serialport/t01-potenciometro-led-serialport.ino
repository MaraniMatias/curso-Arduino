const int pot = A0;
const int led = 10;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  int valorAnalogo = analogRead(pot);
  Serial.println(valorAnalogo);

  valorAnalogo = map(valorAnalogo, 0, 1023, 0, 255);

  analogWrite(led, valorAnalogo);
}
