#include <stdio.h>
#include <string.h> // This gives us helpful string tools!

int main() {
    // --- STRINGS IN C ---
    // In Python or Java, a String is a special object.
    // In C, a string is literally just an Array of characters (char).
    // The most important rule: C always secretly adds a '\0' (Null Terminator) 
    // at the very end of the array so it knows where the word stops!
    
    char name[] = "Anshuman"; 
    
    printf("--- EXAMPLE: Printing Strings ---\n");
    // We use %s to print a full string
    printf("Hello, %s!\n", name);
    
    // We can also measure its length using strlen() from <string.h>
    int length = strlen(name);
    printf("Your name has %d letters.\n\n", length);


    // --- TODO: YOUR TURN! ---
    char secret_word[] = "Programming";
    
    // 1. Create an integer variable to keep track of how many 'r's you find (start at 0).
    // 2. Use a 'for' loop to iterate through the 'secret_word'. 
    //    (Hint: The loop should run from 0 up to strlen(secret_word)).
    // 3. Inside the loop, use an 'if' statement to check if the current letter is 'r'.
    //    (Hint: if (secret_word[i] == 'r'))
    // 4. If it is, add 1 to your counter.
    // 5. Finally, print out how many 'r's were found!
    
    printf("--- YOUR TURN: Letter Counter ---\n");
    // WRITE YOUR CODE HERE:
    int count  = 0;
    for(int i = 0; i<= strlen(secret_word); i++){
        if(secret_word[i]=='r'){
            count++;
        }
    }
    printf("There are %d r's in the word Programming.\n", count);
    

    return 0;
}
