using System;

namespace EstructuraSimple
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ingrese la antiguedad del empleado (en años):");
            int antiguedad = Convert.ToInt32(Console.ReadLine()); 
            // Proceso de convertir el valor de ReadLine en un valor de int

            if (antiguedad >= 5)
            {
               Console.WriteLine ("Es elegible para el bono,recibirá $1000.") ;
            }

            if (antiguedad < 5)
            {
                Console.WriteLine ("El empleado no es elegible para el bono." );
            }

            Console.ReadKey();
        }  
    }
}
