// Create a function named swapElements that takes:

// An integer array
// The size of the array
// Two indices: index1 and index2
// The function should swap the values at the two indices and then print the array in the format: "element0 element1 … elementN"

// For example, if the array is [10, 20, 30, 40, 50] and you swap indices 1 and 3, the resulting array should be [10, 40, 30, 20, 50]


#include <stdio.h>

void swapElements(int arr[], int size, int index1, int index2) {
    // Write your code here
    int a=arr[index1];
    int b= arr[index2];
    arr[index1]=b;
    arr[index2]=a;
    for(int i=0; i<size; i++){
 printf("%d ",arr[i]);
    }
    
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index1, index2;
    scanf("%d %d", &index1, &index2);
    
    swapElements(arr, size, index1, index2);
    
    return 0;
}