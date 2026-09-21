#include <stdio.h>

int main() {
    // 1. Declare the variables (Getting our boxes ready)
    int age = 20;
    float cgpa = 8.5;
    char grade = 'A';

    // 2. Print them out using Format Specifiers
    // %d is for decimal integers
    // %f is for floating-point decimals
    // %c is for characters
    printf("My age is: %d\n", age);
    printf("My CGPA is: %.1f\n", cgpa); // The .1 tells C to only print 1 decimal place!
    printf("My current grade is: %c\n", grade);

    // --- TODO: YOUR TURN! ---
    // 1. Create an 'int' variable called 'graduationYear' and set it to your graduation year.
    // 2. Create a 'char' variable called 'favoriteLetter' and set it to the first letter of your name.
    // 3. Print both of them out using printf and the correct % specifiers!
    int graduationYear = 2029;
    char favoriteLetter = "A";
    

    return 0;
}
