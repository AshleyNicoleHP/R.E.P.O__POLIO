#include <iostream>

using namespace std;

int main() {
    int numero;

    // Pedir al usuario que ingrese un número
    cout << "Introduce un número para ver su tabla de multiplicar: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar del 1 al 10
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}