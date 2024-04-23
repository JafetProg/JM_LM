using System;

class Program
{
    static void Main(string[] args)
    {
        double totalSueldoBruto = 0.0;
        double totalSueldoNeto = 0.0;
        double totalOvertimePay = 0.0;
        double totalOvertimeHours = 0.0;

        int contador = 1;
        while (contador <= 3)
        {
            double sueldoBruto;
            double sueldoNeto;
            double pagoPorHora;
            double horasTrabajadas;
            double horasOvertime;

            Console.Write($"Ingrese el pago por hora de empleado #{contador}: ");
            pagoPorHora = double.Parse(Console.ReadLine());

            Console.Write($"Ingrese las horas que ha trabajado el empleado #{contador}: ");
            horasTrabajadas = double.Parse(Console.ReadLine());

            if (horasTrabajadas > 40)
            {
                horasOvertime = horasTrabajadas - 40;
                sueldoBruto = pagoPorHora * 40 + (horasOvertime * pagoPorHora * 2);
                Console.WriteLine($"El sueldo Bruto de el empleado #{contador} es: ${sueldoBruto}");
            }
            else
            {
                sueldoBruto = pagoPorHora * horasTrabajadas;
                Console.WriteLine($"El sueldo Bruto de el empleado #{contador} es: ${sueldoBruto}");
                horasOvertime = 0; // No hay horas overtime
            }

            totalSueldoBruto += sueldoBruto;
            sueldoNeto = sueldoBruto - (sueldoBruto * 0.07);
            totalSueldoNeto += sueldoNeto;
            totalOvertimeHours += horasOvertime;
            totalOvertimePay += horasOvertime * pagoPorHora * 2;

            Console.WriteLine($"El sueldo Neto de el empleado #{contador} es: ${sueldoNeto}");
            
            contador++;
        }

        Console.WriteLine($"\nTotal pagado en nomina: ${totalSueldoNeto}");
        Console.WriteLine($"Total pagado en horas overtime: ${totalOvertimePay}");
        Console.WriteLine($"Total de horas overtime trabajadas por los empleados: {totalOvertimeHours} horas");

        Console.ReadKey();
    }
}