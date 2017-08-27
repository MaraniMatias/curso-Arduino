void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(A0);
  // Convertir los valores leidos por arduino (de 0 a 1023) a voltaje (de 0 a 5V):
  double voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
}

