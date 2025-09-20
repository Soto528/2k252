#pragma once
#include "Figura.hpp"

class Circulo : public Figura
{
private:
  double radio;

public:
  Circulo(double r = 10): radio(r) {}
  double LeerArea() const override
  {
    return 3.141559 * radio * radio;
  }
  double Leerperimetro() const override
  {
    return 2 * 3.141559 * radio;
  }
};

