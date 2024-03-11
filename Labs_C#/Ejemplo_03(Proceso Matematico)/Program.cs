using System;

class program
{
    static void Main()
    {
        double num1,num2,media;

        Console.Write("Introduzca el primer numero: ");
        num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Introduzca el segundo numero:");
        num2 = Convert.ToDouble(Console.ReadLine());

        media = (num1+num2)/2;
        
        Console.WriteLine("La media es:"+ media);
    }
}