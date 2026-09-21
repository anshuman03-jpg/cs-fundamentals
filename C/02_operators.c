#include <stdio.h>

int main() {
    int total_classes = 40;
    int classes_attended = 32;
    int exam_score = 75; // out of 100

    // 1. Arithmetic Operators
    // Notice we put (float) in front of classes_attended. 
    // This is called "Type Casting". If we divide two ints, C throws away the decimal!
    float attendance_percentage = ((float)classes_attended / total_classes) * 100;
    
    printf("Attendance: %.1f%%\n", attendance_percentage);
    printf("Exam Score: %d\n", exam_score);
    printf("--------------------\n");

    // --- TODO: YOUR TURN! ---
    // A student passes the semester IF:
    // 1. Their attendance is >= 75.0
    // AND
    // 2. Their exam_score is >= 40
    //
    // Use an 'if-else' statement and the Logical AND operator (&&).
    // If they pass, print "Student Passed!". Otherwise, print "Student Failed!".
    
    if( attendance_percentage >= 75 && exam_score >=40){
        printf("Student passed.\n");
    }
    else{
        printf("Student failed.\n");
    }

    return 0;
}
