#ifndef MATRIZ3D_H_
#define MATRIZ3D_H_

#include <ctime>

class Matriz3D
{
  protected:
    int ***matriz3D;
    int x, y, z;
  public:
    Matriz3D();
    Matriz3D(int, int, int);
    ~Matriz3D();

    void imprimirMatriz();
};

#endif
