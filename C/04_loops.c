#include <stdio.h>

int main() {
    // 1. The 'while' loop
    // Best for when you DON'T know exactly how many times you will loop,
    // but you know the condition to keep going.
    printf("--- WHILE LOOP: Countdown ---\n");
    int count = 5;
    while(count > 0) {
        printf("%d...\n", count);
        count--; // This means count = count - 1 (decrements by 1)
    }
    printf("Liftoff!\n\n");

    // 2. The 'for' loop
    // Best for when you DO know exactly how many times you want to loop.
    // Structure: for(start; condition; update)
    printf("--- FOR LOOP: Counting up ---\n");
    for(int i = 1; i <= 3; i++) {
        printf("Running loop iteration: %d\n", i);
    }
    printf("\n");

    // --- TODO: YOUR TURN! ---
    // Use a 'for' loop to print the multiplication table of 5.
    // It should print:
    // 5 x 1 = 5
    // 5 x 2 = 10
    // ... all the way to 5 x 10 = 50.
    // 
    
    
    printf("--- YOUR TURN: Multiplication Table of 5 ---\n");
    for(int i =1; i<=10; i++){
        int result = 5*i;
        printf("5 x %d = %d\n",i, result);
    }
    

    return 0;
}
