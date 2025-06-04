#include <iostream>

using namespace std;

int main()
{
    string contra, contra2;
    string usuario, usuario2;

    cout << "establesca su usuario" << endl;
    cin >> usuario;

    cout << "establesca su contrasena" << endl;
    cin >> contra;

    cout << "--- A estaplecido su usuario y contrasena exitosamente ---" << endl;
    cout << "ingrese su usuario" << endl;
    cin >> usuario2;

    cout << "ingrese su contrasena" << endl;
    cin >> contra2;

    if (contra2 == contra && usuario2 == usuario)
    {
        cout << "Ingreso correctamente su informacion!!" << endl;
    }

    else
    {
        cout << "Esta incorrecto usuario o contrasena, intentelo de nuevo" << endl;
    }

    return 0;
}