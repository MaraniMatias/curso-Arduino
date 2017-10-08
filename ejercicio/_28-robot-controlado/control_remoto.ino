
//# Librerias
#include <IRremote.h>    // Sensor infrafojo para control remoto

//# Configuracion
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results controlRemoto;
long int ultimoValor;

void setupControl() {
  irrecv.enableIRIn(); // Infrarojo control remoto
}

void verValoresControlRemoto() {
  if (irrecv.decode(&controlRemoto))    {
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
