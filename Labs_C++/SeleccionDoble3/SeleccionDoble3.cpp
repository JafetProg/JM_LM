#include <iostream>
using namespace std;

int main()
{
    int compraTotal;
    int tarjetaMembresia;

    cout << "Ingrese el total de su compra: "; 
    cin >> compraTotal; //Pedirle al usuario su compra total

    cout << "Tiene una tarjeta de membresia?(1(si) o 2(no) ): ";
    cin >> tarjetaMembresia; //Pedirle al usuario su tarjeta de membresia

    if(compraTotal >= 150 || tarjetaMembresia == 1)
    {
        cout << "Eres elegible para el descuento. " << endl;
    }
    // Si se ingrese un numer mayor o igual a 150 el mensaje sera monstrado
    // Si se ingresia 1(si) el mensaje sera monstrado
    
    else
    {
        cout << "No eres elegible para el descuento. " << endl;
    }
    // Sino se ingrese un numero mayor a 150 o el numero 1(si) el mensaje sera monstrado

    return 0;
}