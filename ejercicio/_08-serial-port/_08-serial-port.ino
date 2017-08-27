int const potenPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(potenPin, INPUT);
}

void loop() {
  int value = analogRead(potenPin);
  Serial.println(value);
}
