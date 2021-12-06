#include <iostream>

#include "matriz3D.h"

int main() {
  int mayor, menor;
  int x, y, z; 

  Matriz3D mtres1(2, 3, 4);
  Matriz3D mtres2(2, 3, 4);
  Matriz3D mtres3(2, 3, 4);
  mtres3.sumaMatrices(&mtres1, &mtres2);
  mtres3.obtenerMayoryMenor(mayor, menor);
  std::cout << "Mayor: " << mayor << std::endl;
  std::cout << "Menor: " << menor << std::endl;
  mtres3.obtenerIndices(74, x, y, z);
  std::cout << "Indice del numero 74: "<< x <<";" << y<< ";" << z<< std::endl;
  mtres3.insertarValor(0, 1, 1, 1);


  mtres1.imprimirMatriz();
  mtres2.imprimirMatriz();
  mtres3.imprimirMatriz();
  return 0;
} 
