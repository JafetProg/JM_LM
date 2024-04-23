#include <iostream>
using namespace std;

//Variables globales
int numero1 = 10;
int numero2 = 5;

//Declaracion de Funciones
int Sumar();
int Restar();

int main()
{
    cout << "Suma de los numeros: "<< Sumar()<<endl;
    cout << "Resta de los numeros: "<< Restar()<<endl;
    return 0;
}

//Definicion de Funciones
int Sumar()
{
    return numero1+numero2;
}

int Restar()
{
    return numero1-numero2;
}