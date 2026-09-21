#include <stdio.h>
#include <stdbool.h>

/*
=========================================
 LEETCODE #231: Power of Two (Easy)
=========================================
*/

// LeetCode's exact function signature:
bool isPowerOfTwo(int n) {
    // 1. 0 and negative numbers can never be powers of 2
    if (n <= 0) {
        return false;
    }
    
    // 2. As long as it divides perfectly by 2, keep cutting it in half
    while (n % 2 == 0) {
        n = n / 2;
    }
    
    // 3. If we successfully cut it all the way down to exactly 1, it's true!
    if (n == 1) {
        return true;
    } else {
        return false;
    }
}

// --- Local Testing ---
int main() {
    printf("Test 1 (16): %s\n", isPowerOfTwo(16) ? "Passed" : "Failed");
    printf("Test 2 (3): %s\n", !isPowerOfTwo(3) ? "Passed" : "Failed");
    printf("Test 3 (1): %s\n", isPowerOfTwo(1) ? "Passed" : "Failed");
    printf("Test 4 (0): %s\n", !isPowerOfTwo(0) ? "Passed" : "Failed");
    return 0;
}
