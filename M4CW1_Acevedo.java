import java.util.Scanner;

public class M4CW1_Acevedo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables (following the provided pseudocode)
        int majors;            // Number of CS majors
        int nonmajors;         // Number of nonmajors
        double total;          // Total number of students
        double percentMajors;  // Percentage of CS majors
        double percentNonmajors; // Percentage of nonmajors

        // Get the number of majors.
        System.out.print("Enter the number of students majoring in CS: ");
        while (!scanner.hasNextInt()) {
            System.out.print("Please enter a whole number for majors: ");
            scanner.next();
        }
        majors = scanner.nextInt();

        // Get the number of nonmajors.
        System.out.print("Enter the number of non-computer science students: ");
        while (!scanner.hasNextInt()) {
            System.out.print("Please enter a whole number for nonmajors: ");
            scanner.next();
        }
        nonmajors = scanner.nextInt();

        // Calculate the total number of students.
        total = majors + nonmajors;

        if (total == 0) {
            System.out.println("No students were entered. Percentages are undefined (0/0).");
        } else {
            // Calculate the percentage of majors.
            percentMajors = (majors / total) * 100.0;

            // Calculate the percentage of nonmajors.
            percentNonmajors = (nonmajors / total) * 100.0;

            // Display the results with two decimal places.
            System.out.printf("Majors: %.2f%%%n", percentMajors);
            System.out.printf("Nonmajors: %.2f%%%n", percentNonmajors);
        }

        scanner.close();
    }
}
