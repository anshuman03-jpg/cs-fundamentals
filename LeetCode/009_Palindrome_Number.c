#include <stdio.h>
#include <stdbool.h>

/*
=========================================
 LEETCODE #9: Palindrome Number (Easy)
=========================================
Given an integer x, return true if x is a palindrome, and false otherwise.
A palindrome is a number that reads the same backward as forward.

Example 1:
Input: x = 121
Output: true (121 reads as 121 from left to right and from right to left).

Example 2:
Input: x = -121
Output: false (From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome).

Example 3:
Input: x = 10
Output: false (Reads 01 from right to left. Therefore it is not a palindrome).
*/

// LeetCode's exact function signature:
bool isPalindrome(int x) {
    // TODO: Write your logic here!
    
    // HINT 1: Negative numbers can NEVER be palindromes (because of the minus sign). 
    //         You can instantly return false if x < 0.
    
    // HINT 2: You need to reverse the number 'x'. 
    //         Use a while loop! Extract the last digit using (x % 10), 
    //         and chop off the last digit using (x / 10).
    
    // HINT 3: Store the reversed number in a variable (e.g., long reversed_num).
    //         If the reversed_num is exactly equal to the original x, return true!
    int original = x;
    int remainder, reversed =0;
    while (x!=0 && x>0){
        remainder = x%10;
        reversed = reversed*10 + remainder;
        x/=10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
        return true;
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return false; // placeholder
}

// --- Local Testing (LeetCode hides this part from you) ---
int main() {
    printf("Test 1 (121): %s\n", isPalindrome(121) ? "Passed" : "Failed");
    printf("Test 2 (-121): %s\n", !isPalindrome(-121) ? "Passed" : "Failed");
    printf("Test 3 (10): %s\n", !isPalindrome(10) ? "Passed" : "Failed");
    return 0;
}
