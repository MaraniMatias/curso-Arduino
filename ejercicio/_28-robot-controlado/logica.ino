void segirLinea() {
  detenerse();
  delay(50);

  // Liena debajo el sensor del medio
  if (IRreflexion('C') == lineaBlanca) {
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
