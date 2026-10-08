// <!-- Create a function named modifyArray that takes:

// An integer array (arr)
// An integer (size) representing the size of the array
// An integer (value) to add to each element
// The function should add the given value to each element in the array. Then:

// In the main function, read an integer n (the size of the array)
// Read n integers and store them in an array
// Read an integer k (the value to add to each element)
// Call the modifyArray function
// Print the modified array elements separated by spaces -->

#include <stdio.h>

// Write your modifyArray function here
int modifyArray(int arr[], int n,int k){
    int newelmnt=0;
    for(int i=0;i<n;i++){
        newelmnt=arr[i]+k;
        printf("%d ",newelmnt);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    // Call the modifyArray function and print the result
    int result=modifyArray(arr,n,k);    return 0;
}