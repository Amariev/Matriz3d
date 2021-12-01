#ifndef MATRIZ4D_H_
#define MATRIZ4D_H_

#include "matriz3D.h"

class Matriz4D : public Matriz3D
{
  protected:
    int * cuarta;
  public:
    Matriz4D();
    ~Matriz4D();
};

#endif
