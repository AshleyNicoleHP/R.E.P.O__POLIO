#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuantos terminos de la serie de Fibonacci quieres ver? ";
    cin >> N;

    int a = 0, b = 1; // primeros dos términos
    int contador = 0;

    cout << "Serie de Fibonacci: ";

    while (contador < N) {
        cout << a << " " << endl;
        int siguiente = a + b;
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}