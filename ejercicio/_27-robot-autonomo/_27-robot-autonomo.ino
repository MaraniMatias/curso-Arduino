// LED indicador
const int STATUS_PIN = 13;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupServo() ;
  setupMototres();
}

void loop() {
  //verValoresUltraSonico();
  //moverServoRangoCompleto();

  detenerse();
  moverServo(90);
  explorar();
}

void explorar() {
  // miarar adelante
  moverServo(90);

  short int distancia = leerUltraSonico();

  // cuando el objeto esta a menos de 30 cm, voy hacia atras.
  if (distancia < 10) {

    detenerse();
    buscarAdondeIr();

  } else {
    Serial.println("Avanzar");

    // la funcion map, es como la regla de tres simple :D
    short int velocidad = map(distancia, 0, 200, 0, 255);
    // si la distancia es 0, la velocidad sera 0
    mover(true, velocidad);

  }

}

void buscarAdondeIr() {
  // mirar Izquierda
  moverServo(0);
  delay(200);

  // la funcion leerUltraSonico() devuelve la diastancua al objeto
  // si es 0 puede ser que el objeto este fuera del rango del sensor o a 0 cm.
  if (leerUltraSonico() > 10) {
    girar(true, 125);
  } else {
    // mirar Dercha
    moverServo(180);
    delay(200);
    
    if (leerUltraSonico() > 10) {
      
      girar(false, 125);
      
    } else {
      
      Serial.println("Retroceder");
      // si no encuentro adonde ir, retrocedo
      mover(false, 20);
      delay(200); // como no tengo sensores atras, solo me muevo un poco
      detenerse();
      
    }
  }

}// termina la funcion buscarAdondeIr

