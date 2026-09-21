#include <stdio.h>

// --- DAY 7: REVISION DAY (Combine everything) ---
// Task: Prime Number Checker
// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

// TODO: Write a function called 'is_prime'
// 1. It must take an 'int num' as a parameter.
// 2. It must return an 'int' (1 if it is prime, 0 if it is NOT prime).
// 3. Inside, use a loop to check if 'num' is divisible by any number between 2 and (num - 1).
//    If it is divisible (remainder == 0), return 0 immediately.
//    If the loop finishes without finding any divisors, return 1.

// WRITE YOUR FUNCTION HERE:
int is_prime(int num){
    for(int i = 2; i< num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("--- PRIME NUMBER CHECKER ---\n");
    
    int num1 = 7;
    int num2 = 10;
    int num3 = 9;
    
    
    if (is_prime(num1) == 1) {
        printf("%d is a Prime Number!\n", num1);
    } else {
        printf("%d is NOT a Prime Number!\n", num1);
    }

    if (is_prime(num2) == 1) {
        printf("%d is a Prime Number!\n", num2);
    } else {
        printf("%d is NOT a Prime Number!\n", num2);
    }

    if (is_prime(num3) == 1) {
        printf("%d is a Prime Number!\n", num3);
    } else {
        printf("%d is NOT a Prime Number!\n", num3);
    }
    
    return 0;
}
