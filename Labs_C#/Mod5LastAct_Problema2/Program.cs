using System;

namespace Mod5LastAct_Problema2
{

    class Program
    {
        static void Main(string[] args)
        {
            int i;
            double Temperatura;
            double Total_Temperatura = 0;


            for (i = 1; i <= 12;i++)
            {
                Console.WriteLine("Ingrese la temperatura recogida durante el Mes #"+i+": ");
                Temperatura = Convert.ToDouble (Console.ReadLine());

                Total_Temperatura = Total_Temperatura + Temperatura;
            }

            double Promedio_Total = Total_Temperatura / 12;
            Console.WriteLine("El promedio total de las temperaturas recogidas durante los meses del ano es: "+Promedio_Total);

            Console.ReadKey();
        }
    }
}