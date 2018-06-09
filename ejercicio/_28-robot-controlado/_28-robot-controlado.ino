/**
 *  | Botón |  Funciones                                                  |
 *  | ----- | ----------------------------------------------------------- |
 *  | 100+  | Velocidad 1                                                 |
 *  | 200+  | Velocidad 2                                                 |
 *  | >||   | Seguir linea o dejar de seguir                              |
 *  | CH-   | Dejar de Seguir linea                                       |
 *  | CH    | Seguir linea negra o blanca (Predeterminado, sigue blanca)  |
 *  | CH+   | Comenzar a Seguir linea                                     |
 *  |   2   | Avanzar                                                     |
 *  |   4   | Girar Izquierda                                             |
 *  |   5   | Detenerse                                                   |
 *  |   6   | Girar Derecha                                               |
 *  |   8   | Retroceder                                                  |
 */
/*
 *  Conexiones

 *  Motores - Archivo: motores.ino
 *  pinEncenderMotorA = 6; // pin PWM cable violeta
 *  pinSentidoMotorA1 = 4; // cable verde
 *  pinSentidoMotorA2 = 7; // cable azul

 *  pinSentidoMotorB1 = 3; // cable amarillo
 *  pinSentidoMotorB2 = 2; // cable naranja
 *  pinEncenderMotorB = 5; // pin PWM cable rojo

 *  Infrarrojo Reflexión - Archivo: sensor_infrarojo_reflexiron
 *  Son como botones, reciben un pulso positivo
 *  pinIRDerecho = 8;
 *  pinIRCentro = 9;
 *  pinSIRZquierdo = 10;

 *  Control Remoto - Archivo: control_remoto.ino
 *  Necesita la librería IRremote.h (http://z3t0.github.io/Arduino-IRremote/)
 *  RECV_PIN = 11;
*/

// Cargo las constantes para los botones del control remoto
#include "codigos_botones.h"

// LED indicador
const int STATUS_PIN    = 13;

boolean linea_blanca    = true;
boolean seguir_linea    = false;

short int velocidad     = 180;
short int tiempo        = 150; // Delay esperando que termine de girar o avanzar

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  //  Funciones de configuración para motores y el control.
  // Uso funciones para que quede más limpio y el código
  // relacionado con motores en archivos motores,
  // código relacionado con control remoto en el archivo correspondiente.
  setupMototres();
  setupControl();
}

void loop() {
  // Funciones que escriben en el puerto serie.
  // Para ver los mensajes ir a Herramientas -> Monitor Serie
  // verValoresIRreflexion();
  // No solo muestra, también permite leer.
  verValoresControlRemoto();

  // Elegir acción a tomar según el botón pulsado
  switch (ControlRemoto()) {

    case 0: // Esperando un botón...
      // Evitar llegar al default cuando no se pulsa botón.
    break;

    case BOTON_100:             // 100+
      mensaje("Velocidad 200");
      velocidad = 200;
    break;

    case BOTON_200:             // 200+
      mensaje("Velocidad 255");
      velocidad = 255;
    break;

    case BOTON_PLAY_PAUSE:      // >||
      mensaje("Seguir Linea");
      detenerse();

      // Guardo la ultima predicción
      seguir_linea = !seguir_linea;
    break;

    case BOTON_CH_MAS:          // ch+
      seguir_linea = true;
    break;

    case BOTON_CH:              // ch
      linea_blanca = !linea_blanca;
    break;

    case BOTON_CH_MENOS:        // ch-
      seguir_linea = false;
      detenerse();
    break;

    case BOTON_2:               // 2
      mover(true, velocidad);
      delay(tiempo);
    break;

    case BOTON_4:               // 4
      girar(false, 200);
      delay(tiempo);
    break;

    case BOTON_5:               // 5
      seguir_linea = false;
      detenerse();
    break;

    case BOTON_6:               // 6
      girar(true, 200);
      delay(tiempo);
    break;

    case BOTON_8:               // 8
      mover(false, velocidad);
      delay(tiempo);
    break;

    case BOTON_VOL_MENOS:       // Vol-
      tiempo = tiempo - 50;
    break;

    case BOTON_VOL_MAS:         // Vol+
      tiempo = tiempo + 50;
    break;

    case BOTON_EQ:              // EQ
      seguir_linea = false;
      detenerse();
      probarMotores();
    break;

    default:
      mensaje("Botón sin acción asociada.");
    break;
  }

  if (seguir_linea) {
    seguirlinea();
  }

}
