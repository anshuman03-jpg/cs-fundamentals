#include <stdio.h>
#include <stdlib.h> // CRITICAL: Required for malloc and free

int main() {
    // --- DYNAMIC MEMORY ALLOCATION ---
    // Normally, arrays are "Static". You have to know the exact size before the program runs.
    // We use malloc to ask the computer for memory ON THE FLY.
    
    printf("--- EXAMPLE ---\n");
    // We ask for exactly enough bytes to hold 3 integers.
    // sizeof(int) tells the computer how big one integer is (usually 4 bytes).
    int *dynamic_arr = (int*)malloc(3 * sizeof(int));
    
    // Always check if the computer actually gave you the memory!
    if (dynamic_arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Now we can use it just like a normal array!
    dynamic_arr[0] = 10;
    dynamic_arr[1] = 20;
    printf("Item 0: %d, Item 1: %d\n", dynamic_arr[0], dynamic_arr[1]);
    
    // RULE: If you borrow memory using malloc, you MUST give it back using free()!
    // Otherwise, you get a "Memory Leak" which slows down your PC.
    free(dynamic_arr);
    printf("Memory freed!\n\n");


    // --- TODO: YOUR TURN! ---
    // 1. Use malloc to allocate memory for an array of 5 floats.
    //    (Hint: float *my_floats = (float*)malloc(5 * sizeof(float)); )
    // 2. Put the number 3.14 into the very first slot (index 0).
    // 3. Print out that slot to prove it worked.
    // 4. Use free() to give the memory back!
    
    printf("--- YOUR TURN ---\n");
    // WRITE YOUR CODE HERE:

    float *my_floats = (float*)malloc(5*sizeof(float));
    if(my_floats == NULL){
        printf("Memoryy allocation failed!\n");
        return 1;
    }

    my_floats[0]= 3.14;
    printf("First item : %.2f \n", my_floats[0]);

    free(my_floats);
    printf("Memory freed!\n");

    return 0;
}
