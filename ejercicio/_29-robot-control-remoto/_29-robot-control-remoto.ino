// LED indicador
const int STATUS_PIN = 13;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupMototres();
}

void loop() {
  detenerse();
  verValoresControlRemoto();


  // cuando uno pulse algun boton del cntrol remoto tomar ese codio, compararlo y tomar una decicion
}

