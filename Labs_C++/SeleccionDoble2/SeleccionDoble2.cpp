#include <iostream>
using namespace std;

int main ()
{
    int estadoTarjeta;

    cout << "Ingrese el estado de su tarjeta de biblioteca (1 para activo y cualquier otro para inactivo).";
    cin >> estadoTarjeta;

    if (estadoTarjeta == 1)
    {
        //Tarjeta activa
        cout << "Su tarjeta esta activa. Usted puede realizar prestamos."
        << endl;
    }

    else
    {
        //Tarjeta Inactiva
        cout << "Su tarjeta esta inactiva. no se permiten prestamos."
        << endl;
    }
    return 0;
}