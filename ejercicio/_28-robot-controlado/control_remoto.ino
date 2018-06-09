// # Librerías
// Sensor infrarrojo para control remoto
#include <IRremote.h>    // http://z3t0.github.io/Arduino-IRremote/

// # Configuración
const int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results controlRemoto;

// Para guardar el último valor leído.
long int ultimoValor;

void setupControl() {
  irrecv.enableIRIn(); // Infrarrojo control remoto
}

// Muestra y leer los códigos de los botones.
void verValoresControlRemoto() {
  if (irrecv.decode(&controlRemoto)) {
    ultimoValor = controlRemoto.value;

    // Mostrar valores útiles.
    if (controlRemoto.value != CODE_CIERRE_BOTON) {
      Serial.print("Código del botón: ");
      Serial.println(controlRemoto.value);
    }

    irrecv.resume();
  }
}

long int ControlRemoto() {
  long int rta = ultimoValor;
  ultimoValor = 0;
  return rta;
}
