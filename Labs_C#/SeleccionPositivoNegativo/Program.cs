using system;
namespace SeleccionPositivoNegativo
class program 
{
    static void main(string[] args)
    {
        Console.Write("Introduce un numero:");
        int numero = int.Parse(Console.ReadLine());
        
        if (numero > 0)
        {
            Console.WriteLine("El numero es positivio");
        }
    }
}