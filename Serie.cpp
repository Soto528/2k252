#include<iostream>
#include "Serie.hpp"
using namespace std;

int main()
{
    Serie s;
    cout << "Estado inicial:" << endl;
    s.MostrarEstado();
    cout << "Encendiendo..." << endl;
    s.Encender();
    s.MostrarEstado();
    cout << "Apagando..." << endl;
    s.Apagar();
    s.MostrarEstado();
    return 0;
}