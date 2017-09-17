int const led = 13;
int const tiempo = 1000;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(tiempo);
  digitalWrite(led, LOW);
  delay(tiempo);
}
/*
  Contar del entorno
  Primero directo con nro de pin, 13.
  Agregar variables globales.
  Transformarlas en constante.
*/
