import java.util.Scanner;

public class App
{
    public static void main(String[] args) throws Exception
    {
        Scanner Input = new Scanner (System.in);

        int i;
        float examen;
        double Total = 0;

        for (i=1;i <= 4;i++)
        {
            System.out.print("Ingrese el porcentaje obtenido en el examen #"+i+": ");
            examen = Input.nextFloat();
            Total = Total + examen;
        }

        double PromedioTotal = Total/4;
        System.out.println("El promedio total del estudiante es: "+PromedioTotal);
    }
}
