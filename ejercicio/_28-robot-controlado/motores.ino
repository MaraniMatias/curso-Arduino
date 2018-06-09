// Configuracion para manejar los 4 motores corriente continua.
// Los manejaremos de apares, para un lado y para el otro pero de a dos.

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

// funcion que recive dos parametros, sentido y velocidad
void mover(boolean sentido, short int velocidad) {
  mensaje("Avanzar o Retroceder");
  
  // Si la velocidad no pertenece al intervalo [150,255], 
  // la establecemos en 0
  // Con valores menores a 150, el robot no se mueve.
  // Como usamos un pin PWM no puede superar el valor 255.
 
  if (velocidad < 150 && velocidad > 255) {
    // Ponemos en 0 para evitar que quede haciendo fuerza.
    velocidad = 0;
  }

  analogWrite(pinEncenderMotorA, velocidad);
  analogWrite(pinEncenderMotorB, velocidad);
  
  // sentido puede ser ture o false
  if (sentido) {
    digitalWrite(pinSentidoMotorA1, LOW);   // LADO B ->
    digitalWrite(pinSentidoMotorA2, HIGH);  // LADO B <-
    digitalWrite(pinSentidoMotorB1, LOW);   // LADO A ->
    digitalWrite(pinSentidoMotorB2, HIGH);  // LADO A <-
  } else {
    digitalWrite(pinSentidoMotorA1, HIGH);  // LADO B ->
    digitalWrite(pinSentidoMotorA2, LOW);   // LADO B <-
    digitalWrite(pinSentidoMotorB1, HIGH);  // LADO A ->
    digitalWrite(pinSentidoMotorB2, LOW);   // LADO A <-
  }
}

// funcion que recive dos parametros, sentido y velocidad
void girar(boolean sentido, short int velocidad) {
  mensaje("Girar.");

  // Si la velocidad no pertenece al intervalo [150,255], 
  // la establecemos en 0
  // Con valores menores a 150, el robot no se mueve.
  // Como usamos un pin PWM no puede superar el valor 255.
 
  if (velocidad < 150 && velocidad > 255) {
    // Ponemos en 0 para evitar que quede haciendo fuerza.
    velocidad = 0;
  }
  
  analogWrite(pinEncenderMotorA, velocidad);
  analogWrite(pinEncenderMotorB, velocidad);

  // sentido puede ser ture o false
  if (sentido) {
    digitalWrite(pinSentidoMotorA1, LOW);   // LADO B ->
    digitalWrite(pinSentidoMotorA2, HIGH);  // LADO B <-
    digitalWrite(pinSentidoMotorB1, HIGH);  // LADO A ->
    digitalWrite(pinSentidoMotorB2, LOW);   // LADO A <-
  } else {
    digitalWrite(pinSentidoMotorA1, HIGH);  // LADO B ->
    digitalWrite(pinSentidoMotorA2, LOW);   // LADO B <-
    digitalWrite(pinSentidoMotorB1, LOW);   // LADO A ->
    digitalWrite(pinSentidoMotorB2, HIGH);  // LADO A <-
  }
}

// funcion para detener el robot
void detenerse() {
  mensaje("Detenido");
  
  digitalWrite(pinEncenderMotorA, LOW);
  digitalWrite(pinEncenderMotorB, LOW);

  digitalWrite(pinSentidoMotorA1, LOW);
  digitalWrite(pinSentidoMotorA2, LOW);
  digitalWrite(pinSentidoMotorB1, LOW);
  digitalWrite(pinSentidoMotorB2, LOW);
}

// funcion que recive un parametro, sentido
void mover(boolean sentido) {
  mensaje("Avanzar o Retroceder");
  
  digitalWrite(pinEncenderMotorA, HIGH);
  digitalWrite(pinEncenderMotorB, HIGH);
  digitalWrite(pinSentidoMotorA1, !sentido);  // LADO B ->
  digitalWrite(pinSentidoMotorA2, sentido);   // LADO B <-
  digitalWrite(pinSentidoMotorB1, !sentido);  // LADO A ->
  digitalWrite(pinSentidoMotorB2, sentido);   // LADO A <-
}

// funcion que recive un parametro, sentido
void girar(boolean sentido) {
  mensaje("Girar.");
  
  digitalWrite(pinEncenderMotorA, HIGH);
  digitalWrite(pinEncenderMotorB, HIGH);
  digitalWrite(pinSentidoMotorA1, !sentido);  // LADO B ->
  digitalWrite(pinSentidoMotorA2, sentido);   // LADO B <-
  digitalWrite(pinSentidoMotorB1, sentido);   // LADO A ->
  digitalWrite(pinSentidoMotorB2, !sentido);  // LADO A <-
}

// Esta funcion es usada para probar
// las conexiones de los motores.
void probarMotores() {
  girar(false, 200);
  delay(1000);
  mover(false, 200);
  delay(1000);
  mover(true, 200);
  delay(500);
  girar(true, 200);
  delay(500);

  detenerse();
  delay(4000);
}
