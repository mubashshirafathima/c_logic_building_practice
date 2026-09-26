// Create a program that:

// Declares a function prototype for a function named calculateArea that takes two integers (length and width) and returns an integer.
// Implements the function to calculate and return the area (length × width).
// In the main function, it gets two integers from the user, calls calculateArea, and prints the result.

// SOLUTION

#include <stdio.h>

// Write your function prototype here
int calculateArea(int length, int width);

int main() {
    // Declare and read variables
    int length,width,area;
     scanf("%d",&length);
    scanf("%d",&width);
    // Call your function and print the result here
    area=calculateArea( length, width);
    printf("%d",area);
    return 0;
}

// Implement your function here
int calculateArea(int length, int width){
    int area=length*width;
    return area;

}