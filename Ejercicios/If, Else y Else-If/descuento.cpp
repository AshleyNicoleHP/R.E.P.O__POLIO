#include <iostream>

using namespace std;

int main()
{
    int compra, desc;

    cout << "Ingrese el monto de la compra:" << endl;
    cin >> compra;

    if (compra >= 100)
    {
        cout << "Se le a aplicado un descuento por su compra, ya que es mayor a 100 dolares" << endl;
        desc = compra - (compra * 20.0 / 100);
        cout << "Asi queda el precio a su compra: " << desc << endl;
    }
    else
    {
        cout << "No se le aplicara descuento a su compra" << endl;
        cout << "Asi queda el precio a su compra: " << compra << endl;
    }

    return 0;
}