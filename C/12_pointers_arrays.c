#include <stdio.h>

int main() {
    // --- POINTERS AND ARRAYS ---
    // Secret of C: The name of an array is ACTUALLY a pointer to its first element!
    
    int numbers[3] = {10, 20, 30};
    
    printf("--- EXAMPLE ---\n");
    printf("Address of first element (&numbers[0]): %p\n", &numbers[0]);
    printf("Value of the array name  (numbers)    : %p\n", numbers); // They are exactly the same!
    
    // Pointer Arithmetic
    // If we add 1 to a pointer, it automatically jumps to the NEXT element in memory.
    int *ptr = numbers;
    printf("\nFirst element : %d\n", *ptr);
    printf("Second element: %d\n", *(ptr + 1)); // Jumps exactly 4 bytes forward to the next int!
    
    // --- TODO: YOUR TURN! ---
    int grades[4] = {85, 92, 78, 90};
    int *grade_ptr = grades;
    
    // Write a 'for' loop that runs from i = 0 to i < 4.
    // Inside the loop, use POINTER ARITHMETIC to print all 4 grades.
    // RULE: Do NOT use standard array syntax like grades[i].
    // Hint: Use *(grade_ptr + i) to get the value.
    
    printf("\n--- YOUR TURN ---\n");
    // WRITE YOUR CODE HERE:
    for(int i = 0; i< 4; i++){
        printf("%d  ", *(grade_ptr+i));
    }
    
    

    return 0;
}
