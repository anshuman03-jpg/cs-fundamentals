public class Day21_StringAndWrappers {
    public static void main(String[] args) {
        
        System.out.println("--- Wrapper Classes ---"); 
        // 1. Primitive Type (Fast, just pure data, but no methods)
        int primitiveInt = 5;
        
        // 2. Wrapper Class (An Object shell holding an int, has powerful built-in methods!)
        Integer objectInt = 10; 
        Double objectDouble = 5.5;
        
        // The most useful Wrapper method: Converting Strings to Math!
        String numberStr = "250";
        int parsedNumber = Integer.parseInt(numberStr); 
        System.out.println("Parsed number + 50 = " + (parsedNumber + 50));
        
        
        System.out.println("\n--- The String Class ---");
        // 3. String Methods (Because String is an Object, it comes with tools)
        String message = "Java is Object-Oriented!";
        
        System.out.println("Original: " + message);
        System.out.println("Uppercase: " + message.toUpperCase());
        System.out.println("Length: " + message.length()); // Notice length is a method () in Java Strings
        
        System.out.println("\n-------------------------");
        
        // Parsing String into Integer to compute age
        String variable = "2007";
        int numb = Integer.parseInt(variable);
        int age = 2026 - numb;
        System.out.println(age);
    }
}
