#include <iostream>
#include <cmath> //Libreria que permite utilizar varias funciones matematicas
using namespace std;

const double PI = 3.14; // Definir variable global y constante

double calcularAreaCirculo(double radio); //Definir Funcion

int main()
{
    double radio;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    if (radio < 0)
    {
        cout << "El radio ingresado no es valido. Por favor, introduce un valor de radio no negativo." << endl;
    }
    else
    {
        double area = calcularAreaCirculo(radio); //Llama a la funcion

        cout << "El area del circulo con radio de " << radio << " es: " << area << endl;
    }

    return 0;
}

double calcularAreaCirculo(double radio)
{
    return PI * pow(radio, 2); //Calculando el area del circulo (pow funcion para elevar la potencia de un numero)
}