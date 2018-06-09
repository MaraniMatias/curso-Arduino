// Sensores infrarrojos por reflexión
// Cuando esto pines envían cero
const int pinIRDerecho = 8;
const int pinIRCentro = 9;
const int pinSIRZquierdo = 10;

void setupIRreflexion() {
  pinMode(pinIRDerecho, INPUT);
  pinMode(pinIRCentro, INPUT);
  pinMode(pinSIRZquierdo, INPUT);
}

void verValoresIRreflexion() {
  Serial.println("verValoresIRreflexion");
  Serial.print("D ");
  Serial.println(digitalRead(pinIRDerecho));
  Serial.print("C ");
  Serial.println(digitalRead(pinIRCentro));
  Serial.print("I ");
  Serial.println(digitalRead(pinSIRZquierdo));
}


// IRreflexion, devuelve 0 o 1
// indica cuando el has infrarrojo regresa al sensor.
//
// el parámetro 'sensor' puede ser 'D','C','I'; para indicar que sensor queremos leer.
int IRreflexion(char sensor) {

  short int rta = 0;
  switch (sensor) {
    case 'D':
      rta = !digitalRead(pinIRDerecho);
    break;
    case 'C':
      rta = !digitalRead(pinIRCentro);
    break;
    case 'I':
      rta = !digitalRead(pinSIRZquierdo);
    break;
    default:
      rta = 0;
    break;
  }

  mensaje("Leer sensor por reflexión ", sensor, " - valor: ", rta);
  return rta;
}
