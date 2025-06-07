#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Introduce dos números enteros: ";
    cin >> a >> b;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    cout << "El MCD es: " << a << endl;

    return 0;
}