#include <iostream>
using namespace std;

int main()
{
    float velocidad, tiempo;
    cout << "Ingrese la velocidad promedio en que viajaba: ";
    cin >> velocidad;
    cout << "Ingrese el tiempo que se tomo en llegar: ";
    cin >> tiempo;
    float distance = velocidad * tiempo;
    cout << "La distancia viajada es: "<< distance;
}