#include <stdio.h>

int main() {
    // --- 1. ARRAY BASICS ---
    // An array is like an apartment building for variables. 
    // Instead of making int score1, int score2, int score3... we put them in one building!
    
    int scores[4] = {85, 92, 78, 90}; // Array of 4 integers
    
    printf("--- EXAMPLE: Reading an Array ---\n");
    // Remember: Arrays in C always start at index 0, not 1!
    for(int i = 0; i < 4; i++) {
        printf("Score at index %d is: %d\n", i, scores[i]);
    }
    printf("\n");

    // --- TODO: YOUR TURN! ---
    int prices[5] = {10, 25, 5, 50, 10};
    int total_cost = 0;

    // 1. Write a 'for' loop to go through every item in the 'prices' array.
    // 2. Add each item to the 'total_cost' variable.
    // 3. Print out the final 'total_cost' after the loop finishes (it should be 100).
    
    // WRITE YOUR CODE HERE:
    for(int i = 0; i<5; i++){
        total_cost  += prices[i];
    }
    printf("Total cost is %d", total_cost);
    

    return 0;
}
