//Configuracion para manejar los 4 motores corriente continua.
//Los manejaremos de apares, para un lado y para el otro pero de a dos.

const int pinEncenderMotorA = 5; // pin PWM calble violeta
const int pinSentidoMotorA1 = 4; // calbe verde
const int pinSentidoMotorA2 = 7; // calbe azul

const int pinSentidoMotorB1 = 3; // calbe amarillo
const int pinSentidoMotorB2 = 2; // calbe naranja
const int pinEncenderMotorB = 6; // pin PWM calbe rojo

void setupMototres() {
  pinMode(pinEncenderMotorA, OUTPUT);
  pinMode(pinEncenderMotorB, OUTPUT);
  pinMode(pinSentidoMotorA1, OUTPUT);
  pinMode(pinSentidoMotorA2, OUTPUT);
  pinMode(pinSentidoMotorB1, OUTPUT);
  pinMode(pinSentidoMotorB2, OUTPUT);
}

void mover(boolean sentido, short int velocidad) {
  velocidad = velocidad <= 255 ? velocidad : 0;
  mensaje("Moverse a ");

  analogWrite(pinEncenderMotorA, velocidad);
  analogWrite(pinEncenderMotorB, velocidad);

  digitalWrite(pinSentidoMotorA1, !sentido);// LADO B ->
  digitalWrite(pinSentidoMotorA2, sentido); // LADO B <-
  digitalWrite(pinSentidoMotorB1, !sentido); // LADO A ->
  digitalWrite(pinSentidoMotorB2, sentido); // LADO A <-
}

void girar(boolean sentido) {
  mensaje("Girar.");

  digitalWrite(pinEncenderMotorA, HIGH);
  digitalWrite(pinEncenderMotorB, HIGH);

  digitalWrite(pinSentidoMotorA1, !sentido);// LADO B ->
  digitalWrite(pinSentidoMotorA2, sentido); // LADO B <-
  digitalWrite(pinSentidoMotorB1, sentido); // LADO A ->
  digitalWrite(pinSentidoMotorB2, !sentido); // LADO A <-

  delay(500); // mener girando por medio segundo
}

void detenerse() {
  mensaje("Detenido");
  digitalWrite(pinEncenderMotorA, LOW);
  digitalWrite(pinEncenderMotorB, LOW);

  digitalWrite(pinSentidoMotorA1, LOW);
  digitalWrite(pinSentidoMotorA2, LOW);
  digitalWrite(pinSentidoMotorB1, LOW);
  digitalWrite(pinSentidoMotorB2, LOW);
}

void probarMotores() {

  girar(false);
  delay(1000);
  mover(false, 200);
  delay(1000);
  mover(true, 200);
  delay(500);
  girar(true);
  delay(500);

  detenerse();
  delay(4000);
}

