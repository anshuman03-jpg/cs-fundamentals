import java.util.Scanner;

public class Day17_ControlFlow {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
         
       System.out.print("What is the secret password? ");
        String password = scanner.nextLine();
        
        // Comparing objects requires .equals() instead of ==
        if (password.equals("OpenSesame")) {
            System.out.println("Access Granted!");
        } else {
            System.out.println("Access Denied.");
        }

        System.out.println("-------------------------");
        
        // Loop until correct PIN is entered
        int pin = 0;
        while(pin ==0){
            System.out.print("Enter your phone's password: ");
            String pass = scanner.nextLine();

        if (pass.equals("1234")) {
            System.out.println("Access Granted!");
            System.out.println("Phone unlocked!");
            break;
        } else {
            System.out.println("Access Denied.");
        }
        }
        scanner.close();
    }
}