#include <iostream>
using namespace std;

int main()
{
    int i;
    string nombre;
    string apellido;//Declarando los valores que seran usados en este programa

    cout << "Entre su nombre: ";
    cin >> nombre;//Pedirle al usuario que ingrese su nombre

    cout << "Entre su apelido: ";
    cin >> apellido;// Pedirle al usuario que ingrese su apellido

    for (i = 1; i <= 10;i++)
    {
        cout << "Hola "<< nombre <<" "<< apellido << endl;
    }
    //Proceso de repetir el mensaje Hola y el nombre y apellido de el usuario

    return 0;
}