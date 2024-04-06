#include <iostream>
using namespace std;

int main ()
{
    int tipo_instrumento;

    cout << "Ingrese el tipo de instrumento para ver su descuento." <<endl;
    cout <<"1.Guitarra, 2.Piano, 3.Bateria, 4.Violin, 5.Flauta: ";
    cin >> tipo_instrumento;

    switch(tipo_instrumento)
    {
        case 1: //Guitara
        cout << "El Descuento de la Guitara es 10%."<<endl;
        break;

        case 2: //Piano
        cout << "El Descuento del Piano es 15%."<<endl;
        break;

        case 3: //Bateria
        cout << "El Descuento de la Bateria es 20%."<<endl;
        break;

        case 4: //Violin
        cout << "El Descuento de el Violin es 12%" <<endl;
        break;

        case 5: //Flauta
        cout << "El Descuento de la Flauta es 8%" <<endl;

        default: //En caso de que el usuario ingrese un instrumento desconocido
        cout << "El instrumento que has ingresado no es reconocido. Intente de nuevo."<<endl;
    }

    return 0;
}