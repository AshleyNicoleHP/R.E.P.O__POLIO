#include <iostream>
using namespace std;

int main()
{
    int nota;

    cout << "Ingrese su nota (1 al 100): ";
    cin >> nota;

    if (nota >= 60)
    {
        cout << "Aprobado" << endl;
    }
    else
    {
        cout << "Reprobado" << endl;
    }

    return 0;
}