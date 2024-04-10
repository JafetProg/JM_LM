#include <iostream>
#include <string>
using namespace std;

int main()
{
    float sumaCalificaciones = 0;
    float promedio;
    string nombreEstudiante;
    float calificacionEstudiante; 
    int i; // Declarar los valores que seran usados en este programa
    
    for (i = 1; i<=10; i++)
    {
        cout << "Estudiante #" << i <<":" << endl;
        cout << "Ingrese el nombre del estudiante:";
        cin >> nombreEstudiante; 

        cout << "Ingrese la puntuacion obtenida: " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante; 

        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;
    }
    //Loop que permite al usuario el nombre del estudiante y que permite ingresar la puntuacion obtenida

    promedio = sumaCalificaciones / i;
    cout << "El promedio general de las calificaciones : " << "del grupo es:" << promedio;
    //Linea que permite calcular el promedio general de las calificaciones del grupo 


    return 0;
}