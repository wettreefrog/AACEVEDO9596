// Alexander Acevedo
// M4 Hands-On Test
// Date: October 9, 2025
// This program asks the user to enter a temperature in Fahrenheit and categorizes
// the weather using decision structures. It also handles negative temperatures.
import java.util.Scanner;

{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the temperature in Fahrenheit: ");
        double temperature = input.nextDouble();

        // Decision structure to categorize temperature
        if (temperature < 0) {
            System.out.println("Unusual input detected. Double-check your entry.");
        } else if (temperature < 32) {
            System.out.println("Freezing – bundle up!");
        } else if (temperature <= 50) {
            System.out.println("Cold – wear a jacket.");
        } else if (temperature <= 70) {
            System.out.println("Mild – a light sweater will do.");
        } else if (temperature <= 90) {
            System.out.println("Warm – enjoy the day.");
        } else {
            System.out.println("Hot – stay hydrated!");
        }

        // Example test cases
        System.out.println("\nTesting examples:");
        System.out.println("Temperature: 28 → Freezing – bundle up!");
        System.out.println("Temperature: 65 → Mild – a light sweater will do.");
        System.out.println("Temperature: -10 → Unusual input detected. Double-check your entry.");

        input.close();
    }
}
