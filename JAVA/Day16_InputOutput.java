import java.util.Scanner;

public class Day16_InputOutput {
    public static void main(String[] args) {
        
        // Using Scanner to read from System.in (keyboard)
        Scanner myScanner = new Scanner(System.in);
        
        System.out.print("Enter your favorite number: ");
        int favNumber = myScanner.nextInt();
        
        // String concatenation
        System.out.println("Wow, " + favNumber + " is a great number!");
        System.out.println("-------------------------");
        
        // Reading float values
        System.out.print("What is your GPA? ");
        float gpa = myScanner.nextFloat();
        System.out.println("Nice, you've scored " + gpa + " GPA.");        
        myScanner.close();
    }
}
