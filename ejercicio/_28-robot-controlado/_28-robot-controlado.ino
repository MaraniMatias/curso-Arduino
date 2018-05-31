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
  //verValoresIRreflexion();
  verValoresControlRemoto();


  switch (ControlRemoto()) {
    case 16750695: // 100x
      mensaje("Velocidad 200");
      velocidad = 200;
      break;
    case 16756815: //200+
      mensaje("Velocidad 255");
      velocidad = 255;
      break;
    case 16761405: // >||
      mensaje("Segur Linea");
      detenerse();
      segirlinea = !segirlinea;
      break;
    case 16716015: // 4
      girar(false, 200);
      delay(200);
      break;
    case 16718055: // 2
      mover(true, velocidad);
      delay(200);
      break;
    case 16734885: // 6
      girar(true, 200);
      delay(200);
      break;
    case 16730805: // 8
      mover(false, velocidad);
      delay(200);
      break;
    case 16769565: // ch+
      segirlinea = true;
      break;
    case 16753245: // ch-
      segirlinea = false;
      break;
    default:
      mensaje("boton no contemplado");
      break;
  }

  if (segirlinea) {
    segirLinea();
  } else {
    detenerse();
  }

}


