#include <iostream>
#include "Figura.hpp"
#include "Cuadrado.cpp"
#include "Circulo.cpp"
#include "Triangulo.hpp"
using namespace std;

int main( int argc, char const *argv[])
{
    Figura* f;
    Figura* c;
    Figura* t;
    f = new Cuadrado();
    c= new Circulo();
    t = new Triangulo();
// cuadrado
    cout << "Cuadrado-Area:" << f->LeerArea()<< endl;
    cout << "Cuadrado-Perimetro:" << f->Leerperimetro()<< endl;
// circulo
    cout << "Circulo-Area:" << c->LeerArea()<< endl;
    cout << "Circulo-Perimetro:" << c->Leerperimetro()<< endl;
// Triangulo
    cout << "Triangulo - Area: " << t->LeerArea() << endl;
    cout << "Triangulo - Perimetro: " << t->Leerperimetro() << endl;

    return 0;
}