#include "op.h"

Op::Op(Figura a,anguloObt ang, double coef)
{
    figura =a;
    Us=coef;
    angvalor=ang;
}
double Op::Resultado(){
    return figura.getPeso()*sin(angvalor.getAngulo())/Us - figura.getPeso()*cos(angvalor.getAngulo());
}
