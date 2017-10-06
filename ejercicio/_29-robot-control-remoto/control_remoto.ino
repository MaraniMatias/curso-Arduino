
//# Librerias
#include <IRremote.h>    // Sensor infrafojo para control remoto

//# Configuracion
const int RECV_PIN = 8;
IRrecv irrecv(RECV_PIN);
decode_results controlRemoto;

void setupControl() {
  irrecv.enableIRIn(); // Infrarojo control remoto
}

void verValoresControlRemoto() {
  if (irrecv.decode(&controlRemoto))    {
  Serial.print("Codigo del boton: ");
    Serial.println(controlRemoto.value);
    irrecv.resume();
  }
}
