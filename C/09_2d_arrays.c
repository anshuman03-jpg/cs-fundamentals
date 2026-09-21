#include <stdio.h>

int main() {
    // --- 2D ARRAYS (Matrices) ---
    // If a 1D array is a row of apartments, a 2D array is an entire grid (rows and columns).
    
    // This creates a 2x3 grid (2 rows, 3 columns)
    int grid[2][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };

    printf("--- EXAMPLE: Accessing 2D Array ---\n");
    printf("Item at Row 1, Column 2 is: %d\n\n", grid[1][2]); // Should print 6

    // --- TODO: YOUR TURN! ---
    int my_matrix[3][3] = {{9, 8, 7},{6, 5, 4},{3, 2, 1}};

    // Use a nested loop (a loop inside a loop, like we did on Day 5) 
    // to print this 3x3 matrix in a perfect grid format!
    // 
    // It should look like this in the terminal:
    // 9 8 7
    // 6 5 4
    // 3 2 1
    
    printf("--- YOUR TURN: Print the Matrix ---\n");
    // WRITE YOUR CODE HERE:
    for(int row = 0; row< 3; row++){
        for(int column = 0; column <3; column++){
            printf("%d ", my_matrix[row][column]);
        }
        printf("\n");
    }


    return 0;
}
