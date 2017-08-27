const int pinLEDs[] = {8, 9, 10, 11, 12, 13};
//         posicion -> 0, 1,  2,  3,  4,  5,

void setup() {
  for (int i = 8; i <= 13; i=i+1 ) { 
     pinMode(i, OUTPUT);
  }
}
void loop() {
  int i = 0; 
  while ( i<=5 ) {
    digitalWrite( pinLEDs[i], HIGH);
    delay(753);
    digitalWrite( pinLEDs[i], LOW);
    i++;
  }
  /*
  do {
    //CODIGO .... 
  } while ( );
  */
}
