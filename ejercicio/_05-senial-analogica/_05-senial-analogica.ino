int const ledVerde = 0;
int const ledAmarillo = 1;
int const potenPin = A0;

void setup() {
  pinMode(potenPin, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
}

void loop() {
  int value = analogRead(potenPin);

  // primero solo el if
  if (value >= 1023) {
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledVerde, HIGH);
  }
  // por ultimo despues del anidado
  else if (value >= 500) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
  }
  // agregar el else para apagar
  else {
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledVerde, LOW);
  }
}
