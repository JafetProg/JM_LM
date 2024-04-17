using System;

class Program
{
    static void Main()
    {
        int i = 1;
        double examen;
        double Total = 0;

        while(i <= 4)
        {
            Console.WriteLine("Ingrese el porciento obtenido en el examen numero#"+i+": ");
            examen = Convert.ToDouble(Console.ReadLine());
            Total = Total + examen;
            i++;
        }

        double PromedioTotal = Total / 4;
        Console.WriteLine("El promedio total del estudiante es: "+PromedioTotal);

        Console.ReadKey();
    }
}
