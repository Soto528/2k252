#include <iostream>
using namespace std;

int main() {
    int enteros[3];
    double decimales[3];
    long double largos[3];

    // Mostrar tamaños
    cout << " Tamaños:\n";
    cout << "  sizeof(int): " << sizeof(int) << " bytes\n";
    cout << "  sizeof(double): " << sizeof(double) << " bytes\n";
    cout << "  sizeof(long double): " << sizeof(long double) << " bytes\n\n";

    // Mostrar direcciones
    cout << " Direcciones de memoria:\n";

    cout << "\n int:\n";
    cout << "  &enteros[0]: " << (void*)&enteros[0] << endl;
    cout << "  &enteros[1]: " << (void*)&enteros[1] << endl;
    cout << "  Diferencia: " << ((char*)&enteros[1] - (char*)&enteros[0]) << " bytes\n";

    cout << "\n double:\n";
    cout << "  &decimales[0]: " << (void*)&decimales[0] << endl;
    cout << "  &decimales[1]: " << (void*)&decimales[1] << endl;
    cout << "  Diferencia: " << ((char*)&decimales[1] - (char*)&decimales[0]) << " bytes\n";

    cout << "\n long double:\n";
    cout << "  &largos[0]: " << (void*)&largos[0] << endl;
    cout << "  &largos[1]: " << (void*)&largos[1] << endl;
    cout << "  Diferencia: " << ((char*)&largos[1] - (char*)&largos[0]) << " bytes\n";

    return 0;
}
