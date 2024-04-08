#include <iostream>
using namespace std;

int main()
{
    int suma = 0;

    for (int i = 1; i <= 10; i++) // Ciclo de for Que sumara los numeros del 1 al 10
    {
        suma = suma +i;
        
    }
    cout << "La suma de los numeros del 1 al 10 es: " << suma<<endl; 
    // Monstrarle al usuario la suma de los numeros del 1 al 10
    
    return 0;
}