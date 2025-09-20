#pragma once
#include "Figura.hpp"

class Triangulo : public Figura
{
private:
    double base;
    double altura;

public:
    Triangulo(double b = 10, double h = 5) : base(b), altura(h) {}

    double LeerArea() const override
    {
        return (base * altura) / 2.0;
    }

    double Leerperimetro() const override
    {
      
        return 3 * base;
    }
};
