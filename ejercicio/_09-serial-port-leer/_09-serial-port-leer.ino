void setup() {
  Serial.begin(9600);
}

void loop() {
  char value = 0;
  if (Serial.available() > 0) {
    value = Serial.read();
    Serial.print("Msj: ");
    Serial.println(value);
  }
}
