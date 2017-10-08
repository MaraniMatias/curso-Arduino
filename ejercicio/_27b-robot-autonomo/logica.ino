void explorar() {
  short int distanciaMinima = 15;

  // miarar adelante
  moverServo(90);
  short int distancia = leerUltraSonico();

  // cuando el objeto esta a menos de 30 cm, voy hacia atras.
  if (distancia < distanciaMinima) {
    mensaje("Objeto detectado o fuera de rango.");
    detenerse();
    buscarAdondeIr(distanciaMinima);
  } else {
    mover(true, map(distancia, 0, 350, 200, 255));
  }

}

void buscarAdondeIr(short int distanciaMinima) {
  mensaje("mirar Izquierda");
  moverServo(0,200);

  // la funcion leerUltraSonico() devuelve la diastancua al objeto
  // si es 0 puede ser que el objeto este fuera del rango del sensor o a 0 cm.
  if (leerUltraSonico() > distanciaMinima) {
    mensaje("Camino libre");
    girar(true);

  } else {
    mensaje("mirar Dercha");
    moverServo(180,200);

    if (leerUltraSonico() > distanciaMinima) {
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
