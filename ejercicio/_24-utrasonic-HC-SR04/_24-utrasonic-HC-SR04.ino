#include <NewPing.h>

#define TRIGGER_PIN  4   // Arduino pin para trigger pin del sensot ultrasonico.
#define ECHO_PIN     5   // Arduino pin tied to echo pin del sensor ultrasonico.
#define MAX_DISTANCE 200 // Maxima distancia que puede medir el sensor ultrasonico

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  unsigned int uS = sonar.ping(); // Enviar ping y devuelve el tiempo que tarda en llegar el eco, en microsegundos(uS).
  Serial.print("Ping: ");
  Serial.print(uS / US_ROUNDTRIP_CM); // Si el resultado es 0, fuera de rango, nunca volvio el eco.
  Serial.println("cm");
}
