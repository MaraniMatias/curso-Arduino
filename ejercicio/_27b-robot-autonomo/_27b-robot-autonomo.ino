// LED indicador
const int STATUS_PIN = 13;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupServo() ;
  setupMototres();

  moverServoRangoCompleto();
}

void loop() {
  //verValoresUltraSonico();
  //moverServoRangoCompleto();
  //probarMotores();

  mensaje("HOLA ", leerUltraSonico());

  detenerse();
  moverServo(90);

  explorar();

}

void mensaje(String str, float value) {
  Serial.print(str);
  Serial.print(" ");
  Serial.println(value);
}

void mensaje(String str) {
  Serial.println(str);
}
