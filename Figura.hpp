#pragma once 


class Figura
{
    public: 
       Figura() {}
       ~Figura() {}
       virtual double LeerArea() const = 0;
       virtual double Leerperimetro() const = 0;
};