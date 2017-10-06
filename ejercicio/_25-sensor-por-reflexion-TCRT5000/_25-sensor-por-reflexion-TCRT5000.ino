const int linea0 = 0;
const int linea1 = 1;
const int linea2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(linea0, INPUT);
  pinMode(linea1, INPUT);
  pinMode(linea2, INPUT);
}

void loop() {
  delay(100);
  Serial.print("sensor 1 ");
  Serial.println(digitalRead(linea0));
  Serial.print("sensor 2 ");
  Serial.println( digitalRead(linea1));
  Serial.print("sensor 3 ");
  Serial.println( digitalRead(linea2));
}
