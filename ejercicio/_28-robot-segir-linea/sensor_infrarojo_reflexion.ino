// Sensores infrarojos por reflexion
// Cuando esto pines envian cero
const int pinIRDerecho = 3;
const int pinIRCentro = 4;
const int pinSIRZquierdo = 5;

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
// indaica cuando el has infrarojo regresa al sensor
//
// int sensor puede ser 'D','C','I' ; para indicar que sensor queremos leer.
int IRreflexion (char sensor) {

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

  Serial.print("Leer sensor por reflexion ");
  Serial.print(sensor);
  Serial.print(" - valor: ");
  Serial.println(rta);

  return rta;
}

