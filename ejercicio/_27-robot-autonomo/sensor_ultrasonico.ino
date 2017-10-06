//# Librerias
#include <NewPing.h>     // UltraSonic

//# Configuracion
const int TRIGGER_PIN = 7;   // cable naranja
const int ECHO_PIN    = 6;   // cable rojo
const int MAX_DISTANCE = 300; // rnago maximo del sensor en cm
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void verValoresUltraSonico() {
  delay(50);
  unsigned int uS = sonar.ping(); // tiempo que tarde en rebotar la ondea ultrasonica, en micro seg
  Serial.print("Ping: ");
  Serial.print(uS / US_ROUNDTRIP_CM); //en cm, si es 0 fure de rango
  Serial.println("cm");
}

short int leerUltraSonico() {
  delay(50);
  return sonar.ping() / US_ROUNDTRIP_CM;
}

