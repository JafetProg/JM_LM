#include <iostream>
using namespace std;

//Variables globales
double sueldo; // Variable global para el sueldo
float ventasRealizadas; // Variable global para las ventas realizadas
float sueldoRetenido = 0.15; // Variable global para el porcentaje de sueldo retenido

void SueldoPagar(float ventasRealizadas, float sueldoRetenido)
{
    // Variables locales dentro de la funcion
    // Esta variable es local porque se define dentro de la funcion y no se usa fuera de ella
    double sueldoCalculado = ventasRealizadas * sueldoRetenido; // Variable local para el sueldo calculado

    if (ventasRealizadas >= 1500)
    {
        // Proceso matematico de suma de el total y el numero 125
        double SueldoFinal = sueldoCalculado + 125; // Variable local para el sueldo final

        //Mostrar al vendedor lo que pasa cuando sus ventas realizadas pasan 1500 dollares
        cout << "Has pasado mas de $1500 en ventas realizadas." << endl;
        cout << "Eres elegible para un bono de $125." << endl;
        cout << "El sueldo final obtenido por las ventas realizadas es: $" << SueldoFinal;
    }
    else
    {
        cout << "El sueldo obtenido por las ventas realizadas es: $" << sueldoCalculado << endl;
    }
}

int main()
{
    cout << "Ingrese las ventas realizadas: ";
    cin >> ventasRealizadas;

    SueldoPagar(ventasRealizadas, sueldoRetenido); // Llama la funcion SueldoPagar con argumentos locales

    return 0;
}