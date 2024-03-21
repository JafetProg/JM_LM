#include <iostream>
using namespace std;

int main()
{
    int numerador , denomidador , resultado;
    
    cout << "ingrese el numerador: ";
    cin >> denomidador;

    cout << "Ingrese el denominador: ";
    cin >> denomidador;

    try
    {
       if (denomidador == 0) 
         {
            throw "División por cero no permitida"; // mensaje que describe el problem
         }
         resultado = numerador / denomidador;
         cout << "Resultado:"<< resultado << endl;
    }
    catch (const char*mensaje)
    {
        cout <<"Excepción capturada: "<< mensaje<< endl;
    }
    
    return 0;
}