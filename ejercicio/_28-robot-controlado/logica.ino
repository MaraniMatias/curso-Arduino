void seguirlinea() {
  detenerse();
  delay(50);

  // Linea debajo el sensor del medio
  if (IRreflexion('C') == linea_blanca) {
    mover(true);
    delay(30);
  } else {

    // Para girar adonde esta la linea
    if (IRreflexion('D') == linea_blanca && IRreflexion('I') != linea_blanca) {
      girar(true);
      delay(70);
    }
    if (IRreflexion('D') != linea_blanca && IRreflexion('I') == linea_blanca) {
      girar(false);
      delay(70);
    }

  }

}
