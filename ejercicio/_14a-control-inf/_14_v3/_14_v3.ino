// https://github.com/z3t0/Arduino-IRremote
#include <IRremote.h>     // Importamos la librería a usar
#include <IRremoteInt.h>  // Importamos la librería a usar

int RECV_PIN = 11;
int STATUS_PIN = 13;

// la librería nos pide incluir esta lineas
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  pinMode(STATUS_PIN,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results))    {
    Serial.println(results.value);
    // Mostrando los valores que devuelve `results.value` podemos ver el código del botón que presionamos.
    if (results.value == 1477816464) { // cuando es el botón con código 1477816464
      digitalWrite(STATUS_PIN,HIGH);
    }
    if (results.value ==  374608567) { // cuando es el botón con código 374608567

      digitalWrite(STATUS_PIN,LOW);
    }
    irrecv.resume();
  }
}
