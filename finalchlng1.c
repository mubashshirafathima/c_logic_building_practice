// challenge icon
// Challenge

// Easy
// Write a program to process student grades. Implement the following logic:

// calculateAverage: Return the mean of all grades as a float.
// findHighestGrade: Return the maximum integer found in the array.
// determineLetterGrade: Map scores to letters:
// Between 90-100: A
// Between 80-89: B
// Between 70-79: C
// Between 60-69: D
// Below 60: F

#include <stdio.h>

// Function prototypes
float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);
float avg=0;
// char grade; 
float calculateAverage(int grades[], int size) {
    // TODO: Calculate and return the average grade
    for(int i=0;i<size;i++){
        avg+=grades[i];
    }
    avg=avg/size;
    return avg;
}

int findHighestGrade(int grades[], int size) {
    // TODO: Find and return the highest grade
    int gold=0;
    for(int i=0;i<size;i++){
      if(grades[i]>gold){
        gold=grades[i];
      }
    }
    return gold;
}

char determineLetterGrade(int grade) {
    // TODO: Determine and return the letter grade
     if(grade>=90 && grade<=100){
        return 'A';
     }
     else if(grade>=80 && grade<=89){
        return 'B';
     }
     else if(grade>=70 && grade<=79){
        return 'C';
     }
     else if(grade>=60 && grade<=69){
        return 'D';
     }
     else if(grade<60){
        return 'F';
     }
    }

int main() {
    int size;
    scanf("%d", &size);
    int grades[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &grades[i]);
    }
    
    // Calculate and display the average grade
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);
    
    // Find and display the highest grade
    int highest = findHighestGrade(grades, size);
    printf("Highest grade: %d\n", highest);
    
    // Display letter grade for each numerical grade
    printf("\nStudent Grades:\n");
    for (int i = 0; i < size; i++) {
        char letterGrade = determineLetterGrade(grades[i]);
        printf("Student %d: %d - %c\n", i+1, grades[i], letterGrade);
    }
    
    return 0;
}