const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  int val = random(0, 255) ;
  // value to 8 bits (0 to 255)
  analogWrite(ledPin, val);

  delay(500);
  analogWrite(ledPin, 0);
  delay(500);
}
/*
Primero solo la funcion, depues el random
*/
