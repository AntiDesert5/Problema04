#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
public:
    Figura();
    double getPeso();
    double getPesoX(double);
    double getPesoY(double);
    void setMasa(double);
    double getMasa();
private:
    double masa;
    double gravedad;

};

#endif // FIGURA_H
