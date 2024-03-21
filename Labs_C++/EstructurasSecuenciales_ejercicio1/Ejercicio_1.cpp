#include <iostream>
using namespace std;

int main()
{
    float examen1, examen2, examen3, examen4, promedio, total;
    cout << "Imprime el porciento del primer examen: ";
    cin >> examen1;

    cout << "Imprime el porciento del segundo examen: ";
    cin >> examen2;

    cout << "Imprime el porciento del tercer examen: ";
    cin >> examen3;

    cout << "Imprime el porciento del cuarto examen: ";
    cin >> examen4;

    total = examen1+examen2+examen3+examen4;

    promedio =total / 400;

    cout << "El promedio del estudiante es: " << promedio;
}