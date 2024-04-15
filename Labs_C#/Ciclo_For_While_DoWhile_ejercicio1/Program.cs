using System;

class Program
{
    static void Main()
    {
        int i = 1;
        string nombre;
        string apellido;
        //Declarar los valores que seran usados en ester programa

        Console.Write("Ingrese su nombre: ");
        nombre = Console.ReadLine();
        //Pedirle al usuario su nombre

        Console.Write("Ingrese su apellido: ");
        apellido = Console.ReadLine();
        //Pedirle al usuario su apellido
        while (i <= 10)
        {
            Console.WriteLine($"Hola {nombre} {apellido}");
            i++;
        }
        //Repetir el mensaje Hola con el nombre y apellido de el usuario
        
        Console.ReadLine();
        Console.ReadKey();

    }
}
