void objetivo(int posicion) {
  String objetoDisplay = "--------";
  objetoDisplay[posicion] = '1';
  writeDigito(objetoDisplay, "-------1");
}

void actualizarDisplay() {
  String  naveDisplay = "--------";
  naveDisplay[posiNave - 1] = '1';
  naveDisplay[posiNave] = '1';
  naveDisplay[posiNave + 1] = '1';

  String  objetivoDisplay = "--------";
  objetivoDisplay[posiObjetivo] = '1';

  if (disparar) {
    String piroDisplay = "--------";
    piroDisplay[posiNave] = '1';

    for (int i = 0; i < 80; i++) {
      writeDigito(naveDisplay, "1-------");
      writeDigito( i < 10 ? piroDisplay : "--------" , "-1------");
      writeDigito( i > 10 && i < 20 ? piroDisplay : "--------", "--1-----");
      writeDigito( i > 20 && i < 30 ? piroDisplay : "--------", "---1----");
      writeDigito( i > 30 && i < 40 ? piroDisplay : "--------", "----1---");
      writeDigito( i > 40 && i < 50 ? piroDisplay : "--------", "-----1--");
      writeDigito( i > 50 && i < 60 ? piroDisplay : "--------", "------1-");
      writeDigito( i > 60 && i < 70 ? posiObjetivo == posiNave ? objetivoDisplay : piroDisplay : "--------", "-------1");
    }
    if (posiObjetivo == posiNave) {
      if (point < 99) {
        nivelUP(point);
        point++;
        setCountUp();
        updateCount();
        segInicial = millis();
      }
      nuevoObjetivo = true;

    } else if (point > 0) {
      point--;
      setCountDown();
      updateCount();
    }
  } else {
    writeDigito(naveDisplay, "1-------");
    if (point > 2) {
      int segAhora = millis();
      int segTrans = segAhora - segInicial;
      writeDigito(segTrans > 6000 && segTrans < 7000 ?  objetivoDisplay : "--------", "-1------");
      writeDigito(segTrans > 5000 && segTrans < 6000 ?  objetivoDisplay : "--------", "--1-----");
      writeDigito(segTrans > 4000 && segTrans < 5000 ?  objetivoDisplay : "--------", "---1----");
      writeDigito(segTrans > 3000 && segTrans < 4000 ?  objetivoDisplay : "--------", "----1---");
      writeDigito(segTrans > 2000 && segTrans < 3000 ?  objetivoDisplay : "--------", "-----1--");
      writeDigito(segTrans > 1000 && segTrans < 2000 ?  objetivoDisplay : "--------", "------1-");
      writeDigito(segTrans < 1000 ?  objetivoDisplay : "--------", "-------1");
      if (segTrans > 7200) {
        if (posiNave - 1 <= posiObjetivo && posiObjetivo <= posiNave + 1 ) {
          writeDigito("--------", "1-------"); delay(300);
          nuevoObjetivo = true;
        }
        segInicial = millis();
      }
    } else {
      writeDigito(objetivoDisplay, "-------1");
    }
  }

}

void nivelUP(int point) {
  switch (point) {
    case 2:
      cruz(200, true);
      digito6x4('1');
      cruz(100, false);
      break;
    case 5:
      cruz(200, true);
      digito6x4('2');
      cruz(100, false);
      break;
  }
}
