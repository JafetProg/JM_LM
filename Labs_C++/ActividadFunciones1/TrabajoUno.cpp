#include <iostream>
using namespace std;

void SueldoPagar(float a, float b)
{
    float total = a*b; //Declarar el valor total

    if( b >= 1500)
    {
        float SueldoFinal = total + 125;// Proceso matematico de suma de el total y el numero 125

        cout << "Has pasado mas de $1500 en ventas realizadas." << endl;
        cout << "Eres elegible para un bono de $125."<< endl;
        cout << "El Sueldo final obtenido por las ventas realizadas es: "<<"$"<<SueldoFinal;
        //Mostrar al vendedor lo que pasa si sus ventas realizadas pasan 1500 dollares
    }
    else
    {
        cout << "El sueldo obtenido por las ventas realizadas es: " <<"$"<<total<<endl;
    }
    
}
//Funcion Para Encontrar el sueldo a pagar para el vendedor

int main()
{
    float ventasRealizadas;
    float sueldoRetenido = 0.15;
    cout << "Ingrese las ventas realizadas: ";
    cin >> ventasRealizadas;

    SueldoPagar(sueldoRetenido, ventasRealizadas); //Llama la funcion

    return 0;
}