void digito6x4(char value) {
  switch (value) {
    case '0': cero6x4(200); break;
    case '1': uno6x4(200); break;
    case '2': dos6x4(200); break;
    case '3': tres6x4(200); break;
    case '4': cuatro6x4(200); break;
    case '5': cinco6x4(200); break;
    case '6': seis6x4(200); break;
    case '7': siete6x4(200); break;
    case '8': ocho6x4(200); break;
    case '9': nueve6x4(200); break;
/*    
    case 'A': A6x4(200); break;
    case 'B': B6x4(200); break;
    case 'C': C6x4(200); break;
    case 'D': D6x4(200); break;
    case 'E': E6x4(200); break;
    case 'F': F6x4(200); break;
    case 'G': G6x4(200); break;
    case 'H': H6x4(200); break;
    case 'I': I6x4(200); break;
    case 'J': J6x4(200); break;
    case 'K': K6x4(200); break;
    case 'L': L6x4(200); break;
    case 'M': M6x4(200); break;
    case 'N': N6x4(200); break;
    case 'O': O6x4(200); break;
    case 'P': P6x4(200); break;
    case 'Q': Q6x4(200); break;
    case 'R': R6x4(200); break;
    case 'S': S6x4(200); break;
    case 'T': T6x4(200); break;
    case 'U': U6x4(200); break;
    case 'V': V6x4(200); break;
    case 'W': W6x4(200); break;
    case 'X': X6x4(200); break;
    case 'Y': Y6x4(200); break;
    case 'Z': Z6x4(200); break;
*/
    default: off4094();  break;
  }
}
/*
void Z6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("--1-----", "--1-----");
    writeDigito("---1----", "---1----");
    writeDigito("----1---", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("--1111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void Y6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("---11---", "--1-----");
    writeDigito("---11---", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void X6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-1----1-", "-1------");
    writeDigito("-1----1-", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void W6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1--1--", "-1------");
    writeDigito("-11--11--", "--1-----");
    writeDigito("-1-11-1-", "---1----");
    writeDigito("-1----1-", "----1---");
    writeDigito("-1----1-", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void V6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("-1----1-", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void U6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--1--1--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void T6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---1----", "-1------");
    writeDigito("---1----", "--1-----");
    writeDigito("---1----", "---1----");
    writeDigito("---1----", "----1---");
    writeDigito("---1----", "-----1--");
    writeDigito("-11111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void S6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("---1----", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void Q6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--11-1--", "-1------");
    writeDigito("-1--1----","--1-----");
    writeDigito("-1-1-1---","---1----");
    writeDigito("-1---1--", "----1---");
    writeDigito("-1---1--", "-----1--");
    writeDigito("--111---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void R6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1--1--", "-1------");
    writeDigito("--1-1---", "--1-----");
    writeDigito("--11----", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--111---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void P6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1-----", "-1------");
    writeDigito("--1-----", "--1-----");
    writeDigito("--1-----", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--111---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void O6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void N6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-1----1-", "-1------");
    writeDigito("-1---11-", "--1-----");
    writeDigito("-1--1-1-", "---1----");
    writeDigito("-1-1--1-", "----1---");
    writeDigito("-11---1-", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void M6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-1----1-", "-1------");
    writeDigito("-1----1-", "--1-----");
    writeDigito("-1----1-", "---1----");
    writeDigito("-1-11-1-", "----1---");
    writeDigito("-11--11-", "-----1--");
    writeDigito("-1----1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void L6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("--1-----", "--1-----");
    writeDigito("--1-----", "---1----");
    writeDigito("--1-----", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("--1-----", "------1-");
    writeDigito("--------", "-------1");
  }
}
void K6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-1---1-", "-1------");
    writeDigito("-1--1--", "--1-----");
    writeDigito("-1-1---", "---1----");
    writeDigito("-111---", "----1---");
    writeDigito("-1--1--", "-----1--");
    writeDigito("-1---1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void J6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("-----1--", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("----11--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void I6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---111--", "-1------");
    writeDigito("----1---", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("----1---", "----1---");
    writeDigito("----1---", "-----1--");
    writeDigito("---111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void H6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1--1--", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--1111--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--1--1-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void G6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1-11--", "---1----");
    writeDigito("--1-----", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void F6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1-----", "-1------");
    writeDigito("--1-----", "--1-----");
    writeDigito("--1-----", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("--1111-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void E6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("--1-----", "--1-----");
    writeDigito("--1-----", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("--1111-", "------1-");
    writeDigito("--------", "-------1");
  }
}
void D6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111--", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--1--1-", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void C6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11--", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1-----", "---1----");
    writeDigito("--1----", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void B6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111--", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("--111--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("--111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void A6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1--1--", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1111--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
*/
void nueve6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("----1---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("---111-", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void ocho6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("---11--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void siete6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---1----", "-1------");
    writeDigito("---1----", "--1-----");
    writeDigito("---1---", "---1----");
    writeDigito("----1--", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("--1111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void seis6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("--1----", "-----1--");
    writeDigito("---111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void cinco6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("--1111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void cuatro6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-----1--", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("--1111--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("---1-1--", "-----1--");
    writeDigito("----11--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void tres6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("--111---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void dos6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("---1----", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("-----1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void uno6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("----1---", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("----1---", "----1---");
    writeDigito("--1-1---", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void cero6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--11-1--", "---1----");
    writeDigito("--1-11--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
