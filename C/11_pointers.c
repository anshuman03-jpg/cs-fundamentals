#include <stdio.h>

int main() {
    // --- POINTERS IN C ---
    // A regular variable holds data (like a box holding a shoe).
    // A pointer holds an ADDRESS (like a piece of paper with the box's location written on it).
    
    int age = 19;
    
    // The '&' symbol means "Address of".
    // We are giving the 'age_pointer' the exact memory address of where 'age' lives.
    int *age_pointer = &age; 
    
    printf("--- EXAMPLE ---\n");
    printf("Value of age: %d\n", age);
    printf("Memory address of age: %p\n", age_pointer);
    
    // The '*' symbol (when not declaring a variable) means "Go to the address and get the value".
    // This is called "Dereferencing".
    printf("Value found at that address: %d\n\n", *age_pointer);

    // --- TODO: YOUR TURN! ---
    float gpa = 8.5;
    
    // 1. Create a pointer for the 'gpa' variable. (Hint: float *gpa_pointer = ...)
    // 2. Print the memory address of 'gpa' using the pointer and the %p format specifier.
    // 3. Print the actual value of 'gpa' by "dereferencing" your pointer using the '*' symbol and %f.
    
    printf("--- YOUR TURN ---\n");
    // WRITE YOUR CODE HERE:
    
    

    return 0;
}
