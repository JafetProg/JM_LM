#include <iostream>
using namespace std;

int main()
{
    char MiembroTeatro;
    int numEntradas;

    cout << "Eres miembro del teatro?(Si(S) o No(N)): "; 
    cin >> MiembroTeatro; // Preguntar al usuario si es miembro

    cout << "Cuantas veces haz entrado al teatro?: ";
    cin >> numEntradas; //Pedirle al usuario las veces que ha entrado

    if(MiembroTeatro == 'S')
    {
        if(numEntradas > 5)
        {
            cout << "Se aplicara un descuento de 15%" << endl;
        }

        else
        {
            cout << "Se aplicara un descuento de 10%" << endl;
        }
    }

    else 
    {
        if(numEntradas > 10)
        {
            cout << "Se aplicara un descuento de 5%" << endl;
        }

        else
        {
            cout << "No eres elegible para un descuento"<< endl;
        }
    }

    return 0;
}