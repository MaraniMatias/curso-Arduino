#include <NewPing.h>

#define TRIGGER_PIN  A5   // pin trigger del sensot ultrasonico.
#define ECHO_PIN     A4  // pin echo del sensor ultrasonico.
#define MAX_DISTANCE 400 // Maxima distancia que puede medir el sensor ultrasonico

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
