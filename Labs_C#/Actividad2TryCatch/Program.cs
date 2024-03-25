using System;

namespace Actividad2TryCatch
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int entero = Convert.ToInt32(Console.ReadLine());
            }
            catch (System.Exception)
            {
                Console.WriteLine("No se inserto un numero entero.");
            }
        }
    }
}
Console.ReadKey();