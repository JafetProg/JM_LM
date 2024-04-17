import java.util.Scanner;

public class App
{
    public static void main (String[]args) throws Exception
    {
        Scanner input = new Scanner (System.in);

        int i = 1;
        float Temperatura;
        double Total_Temperatura = 0;
        //Declarar los valores que seran usados en este programa

        do {
            System.out.print("Ingrese la temperatura recogida durante el Mes #"+i+":"+" ");
            Temperatura = input.nextFloat();// Pedirle al usuario que ingrese la temperatura de cada mes
            Total_Temperatura = Total_Temperatura + Temperatura; //Sumar la temperatura actual al acumulador
            i++;//Incrementar i despues de cada iteracion
        }
        
        while (i <= 12);

        input.close();

        double Promedio_Total = Total_Temperatura / 12;
        System.out.println("El promedio total recogido durante los meses del ano es: "+Promedio_Total);
    }
}