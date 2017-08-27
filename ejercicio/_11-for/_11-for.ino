const int pinLEDs[] = {8, 9, 10, 11, 12, 13};
//         posicion -> 0, 1,  2,  3,  4,  5,

void setup() {
  // i = 8
  for (int i = 8; i <= 13; i=i+1 ) { 
     pinMode(i, OUTPUT);
  }
}
void loop() {
  // i = 0
  for (int i = 0 ; i <= 5; i++ ) {
     digitalWrite( pinLEDs[i], HIGH);
     delay(753);
     digitalWrite( pinLEDs[i], LOW);
  }
}
