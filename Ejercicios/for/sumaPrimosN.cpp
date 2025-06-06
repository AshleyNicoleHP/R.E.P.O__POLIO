#include <iostream>

using namespace std;

int main()
{
    int n, suma=0;

    cout << "Ingrese un numero" << endl;
    cin >> n;

        for (int i = 0; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los primeros " << n << " numeros naturales es: "<< endl;
    cout << suma << endl;

    return 0;
}