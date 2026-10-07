public class Day18_Methods {
    
    // 1. A basic method (just like a void function in C)
    public static void sayHello() {
        System.out.println("Hello from a Method!");
    }
    
    // 2. A method that takes parameters and returns a value
    public static int addNumbers(int a, int b) {
        return a + b;
    }
    
    public static void main(String[] args) {
        
        System.out.println("--- EXAMPLES ---");
        // Calling methods is exactly the same as C!
        sayHello();
        
        int result = addNumbers(5, 10);
        System.out.println("5 + 10 = " + result);
        
        
        System.out.println("-------------------------");
        
        // Testing multiply method
        int product = multiplyNumbers(5, 6);
        System.out.println("5 * 6 = " + product);
        
    }
    
    // Multiplies two integers and returns the result
    public static int multiplyNumbers(int x, int y){
        return x*y;
    }
    
}
