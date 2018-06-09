/*
   Conexiones

   Motores - Archivo: motores.ino
   pinEncenderMotorA = 6; // pin PWM calble violeta
   pinSentidoMotorA1 = 4; // calbe verde
   pinSentidoMotorA2 = 7; // calbe azul

   pinSentidoMotorB1 = 3; // calbe amarillo
   pinSentidoMotorB2 = 2; // calbe naranja
   pinEncenderMotorB = 5; // pin PWM calbe rojo

   Infrarojo Reflexion - Archivo: rarojo_reflexion
   Son como botones, reciben un pulso positivo
   pinIRDerecho = 8;
   pinIRCentro = 9;
   pinSIRZquierdo = 10;

   Control Remoto - Archivo: control_remoto.ino
   Necesita la libreria IRremote.h (http://z3t0.github.io/Arduino-IRremote/)
   RECV_PIN = 11;
*/
// Cargo las constantes para los botones del control remoto 
#include "codigos_botones.h"

// LED indicador
const int STATUS_PIN = 13;

boolean lineaBlanca = true;
boolean segirlinea = false;
short int velocidad = 180;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupMototres();
  setupControl();
}

void loop() {
  // Funciones que escriben en el puerto serie.
  // Para ver los mensajes ir a Heramientas -> Monitor Serie
  // verValoresIRreflexion();
  // verValoresControlRemoto();

  // Elegir accion a tomar según el boton pulsado
  switch (ControlRemoto()) {
    case BOTON_100:             // 100+
      mensaje("Velocidad 200");
      velocidad = 200;
      break;
    case BOTON_200:             // 200+
      mensaje("Velocidad 255");
      velocidad = 255;
      break;
    case BOTON_PLAY_PAUSE:      // >||
      mensaje("Segur Linea");
      detenerse();
      segirlinea = !segirlinea;
      break;
    case BOTON_4:               // 4
      girar(false, 200);
      delay(200);
      break;
    case BOTON_2:               // 2
      mover(true, velocidad);
      delay(200);
      break;
    case BOTON_6:               // 6
      girar(true, 200);
      delay(200);
      break;
    case BOTON_8:               // 8
      mover(false, velocidad);
      delay(200);
      break;
    case BOTON_CH_MAS:          // ch+
      segirlinea = true;
      break;
    case BOTON_CH_MENOS:        // ch-
      segirlinea = false;
      break;
    case BOTON_EQ:             // EQ
      probarMotores();
      break;
    default:
      break;
  }

  if (segirlinea) {
    segirLinea();
  } else {
    detenerse();
  }

}
