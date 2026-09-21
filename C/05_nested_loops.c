#include <stdio.h>

int main() {
    // 1. Nested Loops (A loop inside a loop)
    // Think of this like a digital clock. 
    // The inner loop (minutes) has to do a full 3 steps before the outer loop (hours) moves 1 step!
    
    printf("--- NESTED LOOPS: The Clock Concept ---\n");
    for(int hours = 1; hours <= 2; hours++) {
        for(int minutes = 1; minutes <= 3; minutes++) {
            printf("Hour %d, Minute %d\n", hours, minutes);
        }
    }
    printf("\n");

    // --- TODO: YOUR TURN! ---
    // Use nested loops to print a "square" of stars (*) that is 4 rows high and 4 columns wide.
    // It should look exactly like this:
    // ****
    // ****
    // ****
    // ****
    //
    // HINT: 
    // for(int row = 1; row <= 4; row++) {
    //     for(int col = 1; col <= 4; col++) {
    //         printf("*"); // Prints a star without moving to a new line
    //     }
    //     printf("\n"); // After 4 stars are printed, move to the next row
    // }
    
    printf("--- YOUR TURN: 4x4 Star Square ---\n");
    for(int row = 1; row <= 4; row++) {
        for(int col = 1; col <= 4; col++) {
            printf("* "); 
        }
        printf("\n");
    }

    return 0;
}
