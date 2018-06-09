// # Librerias
// Sensor infrafojo para control remoto
#include <IRremote.h>    // http://z3t0.github.io/Arduino-IRremote/

// # Configuracion
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results controlRemoto;
long int ultimoValor;

void setupControl() {
  irrecv.enableIRIn(); // Infrarojo control remoto
}

void verValoresControlRemoto() {
  if (irrecv.decode(&controlRemoto)) {
    Serial.print("Codigo del boton: ");
    ultimoValor = controlRemoto.value;
    Serial.println(controlRemoto.value);
    irrecv.resume();
  }
}

long int ControlRemoto() {
  long int rta = ultimoValor;
  ultimoValor = 0;
  return rta;
}
