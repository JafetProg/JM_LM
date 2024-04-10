using System;

namespace Ejemplo1CicloWhile
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int numero;

            Console.WriteLine("Introduce un numero(0 para terminar): ");
            numero = Int32.Parse(Console.ReadLine());

            while (numero != 0)
            {
                Console.WriteLine("Has introducido el numero: " + numero);
                Console.WriteLine("Introduce un numero(0 para terminar): ");
                numero = Int32.Parse(Console.ReadLine());
            }

            Console.ReadKey();
        }
    }

}
