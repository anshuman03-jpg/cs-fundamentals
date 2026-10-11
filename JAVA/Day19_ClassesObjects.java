// University Lab: Object-Oriented Banking System

class BankAccount {
    // 1. State (Data)
    String accountHolder;
    double balance;
    
    // 2. Behavior (Methods with internal logic)
    public void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            System.out.println("Deposited $" + amount + ". New balance: $" + balance);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }
    
    public void withdraw(double amount) {
        // Withdrawal: ensure enough balance
        if (amount <= balance) {
            balance = balance - amount;
            System.out.println(amount + " withdrawn successfully. New balance: $" + balance);
        } else {
            System.out.println("Insufficient funds!");
        }
    }
}

public class Day19_ClassesObjects {
    public static void main(String[] args) {
        
        BankAccount acc1 = new BankAccount();
        acc1.accountHolder = "Anshuman";
        acc1.balance = 500.0;
        
        System.out.println("Account: " + acc1.accountHolder);
        acc1.deposit(150.0); // Should become 650.0
        
        System.out.println("-------------------------");
        acc1.withdraw(660);
        acc1.withdraw(200);
        
        // Practice: Implement the withdraw method
        // 1. Write the logic inside the withdraw() method above:
        //    - Check if the requested amount is less than or equal to the balance.
        //    - If true, subtract it and print the new balance.
        //    - If false, print "Insufficient funds!"
        // 2. Test it by calling acc1.withdraw(200.0) here.
        // 3. Test it again by calling acc1.withdraw(1000.0) to trigger the error.
        
        
    }
}
