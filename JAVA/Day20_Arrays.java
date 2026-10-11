public class Day20_Arrays {
    public static void main(String[] args) {
        // 1️⃣ Simple int array
        int[] numbers = {10, 20, 30, 40, 50};
        System.out.println("--- Int Array ---");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Index " + i + ": " + numbers[i]);
        }

        // 2️⃣ Array of objects – BankAccount from previous day
        BankAccount[] accounts = new BankAccount[3];
        // Initialise each BankAccount
        accounts[0] = new BankAccount();
        accounts[0].accountHolder = "Alice";
        accounts[0].balance = 1000.0;

        accounts[1] = new BankAccount();
        accounts[1].accountHolder = "Bob";
        accounts[1].balance = 250.0;

        accounts[2] = new BankAccount();
        accounts[2].accountHolder = "Charlie";
        accounts[2].balance = 750.0;

        System.out.println("\n--- BankAccount Array ---");
        for (BankAccount acc : accounts) {
            System.out.println(acc.accountHolder + " has $" + acc.balance);
        }

        // 3️⃣ Modify an element in the array
        accounts[1].deposit(100.0); // Bob deposits $100
        System.out.println("\nAfter deposit, Bob's balance: $" + accounts[1].balance);
    }
}
