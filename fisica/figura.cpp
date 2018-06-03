#include "figura.h"

Figura::Figura()
{
    masa = 0.0;
    gravedad = -9.81;
}
double Figura::getPeso(){
    return masa*gravedad;
}
double Figura::getPesoX(double angulo){
    return 1.0;
}
double Figura::getPesoY(double angulo){
    return 1.0;
}
void Figura::setMasa(double m){
    masa = m;
}
double Figura::getMasa(){
    return masa;
}
