void explorar() {
  // miarar adelante
  moverServo(90);
  short int distancia = leerUltraSonico();

  // cuando el objeto esta a menos de 30 cm, voy hacia atras.
  if (distancia < 15) {
    mensaje("Objeto detectado o fuera de rango.");
    detenerse();
    buscarAdondeIr();
  } else {
    mover(true, 200);
  }

}

void buscarAdondeIr() {
  mensaje("mirar Izquierda");
  moverServo(0);
  delay(200);

  // la funcion leerUltraSonico() devuelve la diastancua al objeto
  // si es 0 puede ser que el objeto este fuera del rango del sensor o a 0 cm.
  if (leerUltraSonico() > 10) {
    mensaje("Camino libre");
    girar(true);
    
  } else {
    mensaje("mirar Dercha");
    moverServo(180);
    delay(200);

    if (leerUltraSonico() > 15) {
      mensaje("Camino libre");
      girar(false);

    } else {
      mensaje("Retroceder.");
      // si no encuentro adonde ir, retrocedo
      mover(false, 150);
      delay(200); // como no tengo sensores atras, solo me muevo un poco
      detenerse();
    }
  }
}
