//Configuracion para manejar los 4 motores corriente continua.
//Los manejaremos de apares, para un lado y para el otro pero de a dos.

const int pinEncenderMotorA = 10; // pin PWM calble violeta
const int pinSentidoMotorA1 = A4; // calbe verde
const int pinSentidoMotorA2 = A5; // calbe azul

const int pinEncenderMotorB = 11; // pin PWM calbe rojo
const int pinSentidoMotorB1 = A2; // calbe amarillo
const int pinSentidoMotorB2 = A3; // calbe naranja

void setupMototres() {
  pinMode(pinEncenderMotorA, OUTPUT);
  pinMode(pinEncenderMotorB, OUTPUT);
  pinMode(pinSentidoMotorA1, OUTPUT);
  pinMode(pinSentidoMotorA2, OUTPUT);
  pinMode(pinSentidoMotorB1, OUTPUT);
  pinMode(pinSentidoMotorB2, OUTPUT);
}

void girar(boolean sentido, short int velocidad) {
  Serial.println("girar.");
  detenerse(); // por precaucion para no quemar motores
  velocidad = velocidad <= 255 ? velocidad : 0; // por precaucion

  if (sentido) {
    digitalWrite(pinSentidoMotorA1, HIGH);
    digitalWrite(pinSentidoMotorA2, LOW);
    digitalWrite(pinSentidoMotorB1, LOW);
    digitalWrite(pinSentidoMotorB2, HIGH);
  } else {
    digitalWrite(pinSentidoMotorA1, LOW);
    digitalWrite(pinSentidoMotorA2, HIGH);
    digitalWrite(pinSentidoMotorB1, HIGH);
    digitalWrite(pinSentidoMotorB2, LOW);
  }

  analogWrite(pinEncenderMotorA, velocidad); // usamos los pines PWM para jugar con la velocidad
  analogWrite(pinEncenderMotorB, velocidad); // usamos los pines PWM para jugar con la velocidad

}

void mover(boolean sentido, short int velocidad) {
  detenerse(); // por precaucion para no quemar motores
  velocidad = velocidad <= 255 ? velocidad : 0; // por precaucion

  if (sentido) {
    digitalWrite(pinSentidoMotorA1, HIGH);
    digitalWrite(pinSentidoMotorA2, LOW);
    digitalWrite(pinSentidoMotorB1, HIGH);
    digitalWrite(pinSentidoMotorB2, LOW);
  } else {
    digitalWrite(pinSentidoMotorA1, LOW);
    digitalWrite(pinSentidoMotorA2, HIGH);
    digitalWrite(pinSentidoMotorB1, LOW);
    digitalWrite(pinSentidoMotorB2, HIGH);
  }

  analogWrite(pinEncenderMotorA, velocidad); // usamos los pines PWM para jugar con la velocidad
  analogWrite(pinEncenderMotorB, velocidad); // usamos los pines PWM para jugar con la velocidad

}

void detenerse() {
  Serial.println("DETENIDO.");
  digitalWrite(pinEncenderMotorA, LOW);
  digitalWrite(pinEncenderMotorB, LOW);
  digitalWrite(pinSentidoMotorA1, LOW);
  digitalWrite(pinSentidoMotorA2, LOW);
  digitalWrite(pinSentidoMotorB1, LOW);
  digitalWrite(pinSentidoMotorB2, LOW);
}
