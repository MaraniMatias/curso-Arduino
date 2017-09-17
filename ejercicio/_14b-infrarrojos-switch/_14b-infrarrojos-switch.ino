const int pinLed = 13;
const int pinInf1 = 1;
const int pinInf2 = 2;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinInf1 , INPUT);
  pinMode(pinInf2 , INPUT);
}

void loop() {

  if (digitalRead(pinInf1) == HIGH || digitalRead(pinInf2) == HIGH) {
    digitalWrite(pinLed, HIGH);
  } else     {
    digitalWrite(pinLed, LOW);
  }
}
