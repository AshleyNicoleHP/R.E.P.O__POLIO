#include <iostream>

using namespace std;

int main()
{
    int consumo, precio;

    cout << "Ingrese el consumo de kWh " << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        precio = consumo * 0.25;
        cout << "Su tarifa es baja: " << precio << endl;
    }

    else if (100 > consumo < 200)
    {
        precio = consumo * 0.25;
        cout << "Su tarifa es media: " << precio << endl;
    }
        else if (consumo > 200)
    {
        precio = consumo * 0.25;
        cout << "Su tarifa es Alta: " << precio << endl;
    }

    return 0;
}
