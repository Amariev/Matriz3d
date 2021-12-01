#include "matriz3D.h"
#include <cstdlib>
#include <iostream> 

Matriz3D::Matriz3D()
{
  x = 3; y = 4; z =2;
  this->matriz3D = new int **[x];
  for(int i = 0; i < x ; i++){
    this->matriz3D[i] = new int *[y];
    for (int j = 0; j < y; j++) {
      this->matriz3D[i][j] = new int[z];
      for(int k = 0; k < z;k++){
        this->matriz3D[i][j][k] = 0;
      }
    }
  }
}

Matriz3D::Matriz3D(int x_, int y_, int z_) : x(x_), y(y_), z(z_) 
{
  srand(time(NULL));
  this->matriz3D = new int **[x];
  for(int i = 0; i < x ; i++){
    this->matriz3D[i] = new int *[y]{};
    for (int j = 0; j < y; j++) {
      this->matriz3D[i][j] = new int[z]{};
      for(int k = 0; k < z;k++){
        this->matriz3D[i][j][k] = rand() % 100;
      }
    }
  } 
}

Matriz3D::~Matriz3D() 
{
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      delete [] matriz3D[i][j]; 
    }
    delete[] matriz3D[i];
  }
  delete[] matriz3D;
}

void Matriz3D::imprimirMatriz(){
  for (int i = 0; i < x; i++) {
    std::cout << "\t Camada n°" << i+1 << std::endl;
    for (int j = 0; j < x; j++) {
      for(int k = 0; k < z;k++){
        std::cout << "\t" << matriz3D[i][j][k] << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
}
