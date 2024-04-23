import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double totalSueldoBruto = 0.0;
        double totalSueldoNeto = 0.0;
        double totalOvertimePay = 0.0;
        double totalOvertimeHours = 0.0;

        int contador = 1;
        do {
            double sueldoBruto;
            double sueldoNeto;
            double pagoPorHora;
            double horasTrabajadas;
            double horasOvertime;

            System.out.printf("Ingrese el pago por hora de empleado #%d: ", contador);
            pagoPorHora = scanner.nextDouble();

            System.out.printf("Ingrese las horas que ha trabajado el empleado #%d: ", contador);
            horasTrabajadas = scanner.nextDouble();

            if (horasTrabajadas > 40) {
                horasOvertime = horasTrabajadas - 40;
                sueldoBruto = pagoPorHora * 40 + (horasOvertime * pagoPorHora * 2);
                System.out.printf("El sueldo Bruto de el empleado #%d es: $%.2f%n", contador, sueldoBruto);
            } else {
                sueldoBruto = pagoPorHora * horasTrabajadas;
                System.out.printf("El sueldo Bruto de el empleado #%d es: $%.2f%n", contador, sueldoBruto);
                horasOvertime = 0; // No hay horas overtime
            }

            totalSueldoBruto += sueldoBruto;
            sueldoNeto = sueldoBruto - (sueldoBruto * 0.07);
            totalSueldoNeto += sueldoNeto;
            totalOvertimeHours += horasOvertime;
            totalOvertimePay += horasOvertime * pagoPorHora * 2;

            System.out.printf("El sueldo Neto de el empleado #%d es: $%.2f%n", contador, sueldoNeto);
            
            contador++;
        } while (contador <= 3);

        System.out.printf("%nTotal pagado en nomina: $%.2f%n", totalSueldoNeto);
        System.out.printf("Total pagado en horas overtime: $%.2f%n", totalOvertimePay);
        System.out.printf("Total de horas overtime trabajadas por los empleados: %.2f horas%n", totalOvertimeHours);

        scanner.close();
    }
}
