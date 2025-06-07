#include <iostream>

using namespace std;

int main()
{
    int n;

    do
    {
        cout << "ingrese un numero entre 1 y 10" << endl;
        cin >> n;

    } while (n > 10);
    {
        cout << "Haz ingresado correctarmente el numero" << endl;
    }

    return 0;
}
