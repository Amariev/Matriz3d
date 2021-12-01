#include <iostream>

#include "matriz3D.h"
#include "matriz4D.h"

int main() {
  Matriz3D mtres1(2, 3, 4);
  Matriz3D mtres2(2, 3, 4);
  Matriz3D mtres3(2, 3, 4);
  // mtres3.sumaMatrices(mtres1, mtres2);

  mtres1.imprimirMatriz();
  mtres2.imprimirMatriz();
  mtres3.imprimirMatriz();
  return 0;
} 
