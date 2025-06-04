#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Escriba un numero del 1 al 7 para saber el dia de la semana" << endl;
    cin >> num;

    if (num == 1)
    {
        cout << "1 es Lunes" << endl;
    }

    else if (num == 2)
    {
        cout << "2 es Martes" << endl;
    }

    else if (num == 3)
    {
        cout << "3 es Miercoles" << endl;
    }

    else if (num == 4)
    {
        cout << "4 es Jueves" << endl;
    }

    else if (num == 5)
    {
        cout << "5 es Viernes" << endl;
    }

    else if (num == 6)
    {
        cout << "6 es Sabado" << endl;
    }

    else if (num == 7)
    {
        cout << "7 es Domingo" << endl;
    }

    else 
    {
        cout << "Numero no valido"<< endl;
    }

    return 0;
}
