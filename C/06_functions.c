#include <stdio.h>

// 1. A basic function
// Think of a function like a blender. 
// Ingredients go in (parameters), it does some work, and hands you a smoothie (return value).
int add_numbers(int a, int b) {
    int sum = a + b;
    return sum;
}

// --- TODO: YOUR TURN! ---
// Write a function called 'calculate_area'.
// It should accept two integers: 'length' and 'width'.
// It should calculate the area of a rectangle and RETURN the result.

// WRITE YOUR FUNCTION HERE:
int calculate_area(int length, int width){
    int area = length* width;
    return area;
}


int main() {
    printf("--- EXAMPLE ---\n");
    int total = add_numbers(5, 7);
    printf("5 + 7 = %d\n\n", total);

    // TODO: Call your 'calculate_area' function here.
    // Pass it the numbers 8 and 4.
    // Store the result in a variable and print it!
    printf("--- YOUR TURN ---\n");
    int area = calculate_area(8, 4);
    printf("The area of length 8 and width 4 = %d", area);

    return 0;
}
