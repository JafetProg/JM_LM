#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    float Temperatura;// Declarar los valores que seran usados en este programa
    float total_Temperatura; //Variable para almacenar la suma de todas las temperaturas
    while(i <= 12)
    {
        cout << "Ingrese la Temperatura recogida durante el Mes#"<< i << ":";
        cin >> Temperatura;// Pedirle al usuario que ingrese la temperatura recogida
        // durante el mes indicado por el valor de i
        total_Temperatura = total_Temperatura + Temperatura; // Sumar la temperatura actual al total
        i++; // incrementar i despues de cada iteracion
    }

    double promedio_total = total_Temperatura / 12; //Calcular el promedio total

    cout << "El promedio total de las temperaturas recogidas durante los meses de el ano es: "<< promedio_total;

    return 0;
}