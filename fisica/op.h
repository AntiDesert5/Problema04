#ifndef OP_H
#define OP_H
#include "figura.h"
#include "anguloobt.h"


class Op
{
public:
    Op(Figura,anguloObt,double);
    double Resultado();
private:
    double Us;
    Figura figura;
    anguloObt angvalor;
};

#endif // OP_H
