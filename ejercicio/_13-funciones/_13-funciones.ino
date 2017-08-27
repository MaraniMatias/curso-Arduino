const int pinLEDs[] = {8, 10, 12};

void setup() {
  Serial.begin(9600);
  pinMode(pinLEDs[0], OUTPUT);
  pinMode(pinLEDs[1], OUTPUT);
  pinMode(pinLEDs[2], OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char value = leer();
    selec( value );
  }
}

char leer() {
  char value = Serial.read();
  Serial.print("Msj: ");
  Serial.println(value);
  return value;
}

void selec(char valor) {
  switch (valor) {
    case '1':
      digitalWrite( pinLEDs[0], HIGH);
      break;
    case '2':
      digitalWrite( pinLEDs[1], HIGH);
      break;
    case '3':
      digitalWrite( pinLEDs[2], HIGH);
      break;
    default:
      Serial.println("Solo valores 0, 1, 2, 3: ");
      ledOff();
      break;
  }
}

void ledOff () {
  digitalWrite( pinLEDs[0], LOW);
  digitalWrite( pinLEDs[1], LOW);
  digitalWrite( pinLEDs[2], LOW);
}
