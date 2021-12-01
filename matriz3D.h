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

    int getNumber(int, int, int);
    inline int getx() {return x;}
    inline int gety() {return y;}
    inline int getz() {return z;}

    void imprimirMatriz();
    void sumaMatrices(Matriz3D, Matriz3D);
};

#endif
