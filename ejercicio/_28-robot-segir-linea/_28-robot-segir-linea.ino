// LED indicador
const int STATUS_PIN = 13;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupMototres();
}

void loop() {
  //verValoresIRreflexion();
  short int velocidad = 100;
  detenerse();

 //Liena debajo el sensor del medio
  if (IRreflexion('D') == 0 && IRreflexion('C') == 1 && IRreflexion('I') == 0) {
    mover(true, velocidad);
  }

  // Para girar adonde esta la linea
  if (IRreflexion('D') == 1) {
    girar(true, velocidad / 2);
  }
  if (IRreflexion('I') == 1) {
    girar(false, velocidad / 2);
  }
  
}


