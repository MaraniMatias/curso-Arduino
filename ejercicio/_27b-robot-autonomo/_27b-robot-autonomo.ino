/*
   Conexiones

   Motores - Archivo: motores.ino
   pinEncenderMotorA = 5; // pin PWM calble violeta
   pinSentidoMotorA1 = 4; // calbe verde
   pinSentidoMotorA2 = 7; // calbe azul

   pinSentidoMotorB1 = 3; // calbe amarillo
   pinSentidoMotorB2 = 2; // calbe naranja
   pinEncenderMotorB = 6; // pin PWM calbe rojo

   Ultra sonido - Archivo: sensor_ultrasonico.ino
   Necesita la libreia NewPing (https://playground.arduino.cc/Code/NewPing#Download)
   TRIGGER_PIN = A5;   // cable naranja
   ECHO_PIN    = A4;   // cable rojo
   MAX_DISTANCE = 400; // rango maximo del sensor en cm

   Motor Servo - Archivo: servo.ino
   Necesita la libreria Servo.h
   pinServo = 12;
*/

// LED indicador
const int STATUS_PIN = 13;

void setup() {
  pinMode(STATUS_PIN, OUTPUT);
  Serial.begin(9600);

  setupServo() ;
  setupMototres();

  moverServoRangoCompleto();
}

void loop() {
  //verValoresUltraSonico();
  //moverServoRangoCompleto();
  //probarMotores();

  mensaje("HOLA ", leerUltraSonico());

  detenerse();
  moverServo(90);

  explorar();

}

void mensaje(String str, float value) {
  Serial.print(str);
  Serial.print(" ");
  Serial.println(value);
}

void mensaje(String str) {
  Serial.println(str);
}
