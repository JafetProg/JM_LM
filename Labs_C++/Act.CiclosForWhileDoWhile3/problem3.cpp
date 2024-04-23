#include <iostream>
using namespace std;

int main()
{
    double totalSueldoBruto = 0.0;
    double totalSueldoNeto = 0.0;
    double totalOvertimePay = 0.0;
    double totalOvertimeHours = 0.0;

    for (int i = 1; i <= 3; i++)
    {
        double sueldoBruto;
        double sueldoNeto;
        double pagoPorHora;
        double horasTrabajadas;
        double horasOvertime;

        cout << "Ingrese el pago por hora de empleado #" << i << ": ";
        cin >> pagoPorHora;

        cout << "Ingrese las horas que ha trabajado el empleado #" << i << ": ";
        cin >> horasTrabajadas;

        if (horasTrabajadas > 40)
        {
            horasOvertime = horasTrabajadas - 40;
            sueldoBruto = pagoPorHora * 40 + (horasOvertime * pagoPorHora * 2);
            cout << "El sueldo Bruto de el empleado #" << i << " es: $" << sueldoBruto << endl;
        }
        else
        {
            sueldoBruto = pagoPorHora * horasTrabajadas;
            cout << "El sueldo Bruto de el empleado #" << i << " es: $" << sueldoBruto << endl;
            horasOvertime = 0; //Ninguna hora overtime
        }

        totalSueldoBruto += sueldoBruto;
        sueldoNeto = sueldoBruto - (sueldoBruto * 0.07);
        totalSueldoNeto += sueldoNeto;
        totalOvertimeHours += horasOvertime;
        totalOvertimePay += horasOvertime * pagoPorHora * 2;

        cout << "El sueldo Neto de el empleado #" << i << " es: $" << sueldoNeto << endl;
    }

    cout << "\nTotal pagado en nomina: $" << totalSueldoNeto << endl;
    cout << "Total pagado en horas overtime: $" << totalOvertimePay << endl;
    cout << "Total de horas overtime trabajadas por los empleados: " << totalOvertimeHours << " horas" << endl;

    return 0;
}
