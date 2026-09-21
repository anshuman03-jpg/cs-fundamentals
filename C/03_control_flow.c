#include <stdio.h>

int main() {
    int menu_choice = 3; // Simulating a user typing '3'

    printf("=== STUDENT RECORD SYSTEM ===\n");
    printf("1. Add a new student\n");
    printf("2. View all students\n");
    printf("3. Delete a student\n");
    printf("4. Exit\n");
    printf("-----------------------------\n");
    printf("User selected: %d\n\n", menu_choice);

    // switch-case is much cleaner than multiple if-else statements for menus!
    switch(menu_choice) {
        case 1:
            printf("Action: Opening 'Add Student' screen...\n");
            break; // Break is CRITICAL! If you forget it, C will run case 2 as well.
            
        case 2:
            printf("Action: Fetching student database...\n");
            break;
            
        // --- TODO: YOUR TURN! ---
        // 1. Write the code for 'case 3:' to print a deletion message and 'break;'.
        // 2. Write the code for 'case 4:' to print "Exiting program..." and 'break;'.
        // 3. Write a 'default:' case. This triggers if the user enters a bad number (like 9). 
        //    Have it print "Invalid choice. Please try again."
        case 3:
            printf("Action: Deleting student...\n");
            break;
        
        case 4:
            printf("Action: Exiting program...\n");
            break;
        
        default:
            printf("Error. Invalid choice. Please try again.\n");
        
    }

    return 0;
}
