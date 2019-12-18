const int pinClock = 5;  // Azul
const int pinUpDown = 4; // Blanco
const int pinReset = 3;  // Amarillo

void setup() {
  pinMode(pinClock, OUTPUT);
  pinMode(pinUpDown, OUTPUT);
  pinMode(pinReset, OUTPUT);
}

void loop() {
  digitalWrite(pinReset, LOW); digitalWrite(pinReset, HIGH); digitalWrite(pinReset, LOW);
  count();
}

void count() {
  digitalWrite(pinUpDown, HIGH);
  digitalWrite(pinUpDown, LOW);
  
  digitalWrite(pinUpDown, HIGH);
  for (int i = 0; i < 30; i++) {
    updatecount();
    delay(250);
  }

  delay(500);

  digitalWrite(pinUpDown, LOW);
  for (int j = 0; j < 30; j++) {
    updatecount();
    delay(250);
  }
}

void updatecount() {
  digitalWrite(pinClock, LOW);
  digitalWrite(pinClock, HIGH);
}

