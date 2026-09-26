#include <stdio.h>
#include <string.h>

// --- STRUCTURES (Custom Data Types) ---
// Normally, variables hold one thing: int (number), char (letter).
// What if we want to represent a "Car"? A car has a brand (string), a year (int), and a price (float).
// We use a 'struct' to group these together into a brand new data type!

struct Car {
    char brand[50];
    int year;
    float price;
};

// --- TODO 1: Create your own struct! ---
// Create a struct called 'Student'
// It should have:
// 1. A char array for 'name' (size 50)
// 2. An int for 'age'
// 3. A float for 'gpa'

// WRITE YOUR STRUCT HERE:
struct Student {
    char name[50];
    int age;
    float gpa;
};




int main() {
    printf("--- EXAMPLE ---\n");
    // We create a variable of type 'struct Car'
    struct Car myCar;
    
    // We use the "dot" operator (.) to access the variables inside the struct
    strcpy(myCar.brand, "Toyota"); // We use strcpy to put words into string arrays in C
    myCar.year = 2022;
    myCar.price = 25000.50;
    
    printf("My car is a %d %s worth $%.2f\n\n", myCar.year, myCar.brand, myCar.price);

    // --- TODO 2: YOUR TURN! ---
    printf("--- YOUR TURN ---\n");
    // 1. Create a variable of type 'struct Student' (e.g., struct Student student1;)
    // 2. Use strcpy to give them a name.
    // 3. Assign an age and a GPA.
    // 4. Print out their details!
    
    // WRITE YOUR CODE HERE:
    struct Student s1;
    strcpy(s1.name, "Anshuman Duragkar");
    s1.age = 19;
    s1.gpa = 9.01;

    printf("Name of student is %s. age %d and has scored %2.f gpa.\n", s1.name, s1.age, s1.gpa);

    

    return 0;
}
