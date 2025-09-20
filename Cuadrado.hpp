#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "Figura.hpp"

class Cuadrado : public Figura
{
private:
    double lado;

public:
    Cuadrado(double l = 2.0) : lado(l) {}
    double LeerArea() const override { return lado * lado; }
    double Leerperimetro() const override { return 4 * lado; }
};

#endif // CUADRADO_HPP
