// Create a function named sumArray that takes two arguments:

// An integer array (arr).
// An integer (size) representing the size of the array.
// The function should calculate and return the sum of all elements in the array.

// Then, in the main function:

// Read an integer n (the size of the array).
// Read n integers and store them in an array.
// Call the sumArray function with the array.
// Print the sum in the format: "Sum: X" (where X is the sum).

#include <stdio.h>

// Write your sumArray function here
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        
        // printf(" sum at ith iteration %d\n",sum);
    }
    return sum;
}

int main() {
    int size;
    scanf("%d", &size);
    // printf("size taken %d\n",size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        // printf("array insert %d\n",arr[i]);
    }
    
    // Call the sumArray function and print the result

   int result=sumArray(arr,size);
   printf("Sum: %d",result);
    return 0;
}

