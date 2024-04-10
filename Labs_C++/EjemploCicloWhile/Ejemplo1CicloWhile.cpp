#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Introduce un numero (0 para terminar): ";
    cin >> numero; //Linea de codigo que le pide al usuario ingresar un numero

    while (numero != 0)
    {
        cout << "Has introducido el numero: " << numero << endl;
        cout << "Introduce un numero (0 para terminar): ";
        cin >> numero;

        numero = numero + 1;
    }
    //Loop condicional que permite al usuario introducir un numero hasta que el numero 0 sea ingresado

    return 0;
}