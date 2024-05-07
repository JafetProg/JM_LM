#include <iostream>
using namespace std;

int main()
{
    int n;
    double suma = 0;
    // Pedirle al usuario que ingrese el numero de elementos en el arreglo
    cout << "Ingrese el numero de elementos que estaran en el arreglo(1-100): ";
    cin >> n;

    // Asegurar que n este en el rango de 1 al 100
    if (n < 1 || n > 100)
    {
        cout << "El numero ingresado debe ser de el 1 al 100." <<endl;
    }

    int arreglo[n];
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
        suma = suma+arreglo[i];
    }

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}