// https://github.com/z3t0/Arduino-IRremote
const int pinLed = 13;
const int pinInf1 = 11;
//const int pinInf2 = 2;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinInf1 , INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinLed, !digitalRead(pinInf1));
}
