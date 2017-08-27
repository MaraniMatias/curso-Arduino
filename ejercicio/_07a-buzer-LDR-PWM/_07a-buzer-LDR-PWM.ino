const int zunPin = 9;
const int ldrPin = A0;

void setup() {
  pinMode(zunPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int val = analogRead(ldrPin);
  // map(este valor, es min, es max, valor del mini, valor del max);
  tono = map(val, 0, 1023, 0, 255);
  tomo(zunPin,tono,20); //20 miliseg
  analogWrite(9, val);

  delay(10);
}
