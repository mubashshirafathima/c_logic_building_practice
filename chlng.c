// challenge icon
// Challenge

// Easy
// Write a function called findSecondLargest that finds the second largest element in an integer array.

// Your function should:

// Take an integer array and its size as parameters
// Return the second largest element
// Handle the special case where all elements are the same (return the same value)
// Example:

// For array [3, 8, 2, 10, 5], the second largest is 8
// For array [7, 7, 7], the second largest is also 7


#include <stdio.h>

// Write your findSecondLargest function here

int findSecondLargest(int numbers[],int size){
    int gold=0;
    int silver=0;
    for(int i=0;i<size;i++){
         if(numbers[i]>gold){
            silver=gold;
            gold=numbers[i];
         }
         else if(numbers[i]<gold){
            if((numbers[i] > silver)){
                silver=numbers[i];
            }
         }

         }
         return silver;
    }


int main() {
    int size;
    scanf("%d", &size);
    
    int numbers[size];
    
    // Read array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Call your function and print the result
    int secondLargest = findSecondLargest(numbers, size);
    printf("%d", secondLargest);
    
    return 0;
}

//HONESTLY SOLVING THIS MADE MY HEAD SPIN AT THE SPEED OF 200KMPH AT 360 DEGREE ANGLEEE...DAMN...