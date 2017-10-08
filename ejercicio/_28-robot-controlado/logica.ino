void segirLinea() {
  detenerse();
  delay(50);
  
  //Liena debajo el sensor del medio
  if ( IRreflexion('C') == lineaBlanca ) {
    //if (IRreflexion('D') == !lineaBlanca && IRreflexion('C') == lineaBlanca && IRreflexion('I') == !lineaBlanca) {
    mover(true);
    delay(50);
  } else {
    // Para girar adonde esta la linea
    if (IRreflexion('D') == lineaBlanca && IRreflexion('I') != lineaBlanca) {
      girar(true);
      delay(50);
    }
    if (IRreflexion('D') != lineaBlanca && IRreflexion('I') == lineaBlanca) {
      girar(false);
      delay(50);
    }
  }

}


void mensaje(String str, float value) {
  Serial.print(str);
  Serial.print(" ");
  Serial.println(value);
}
void mensaje(String str, char value, String str1, int value1) {
  Serial.print(str);
  Serial.print(" ");
  Serial.print(value1);
  Serial.print(" ");
  Serial.print(str1);
  Serial.print(" ");
  Serial.println(value1);
}
void mensaje(String str) {
  Serial.println(str);
}
