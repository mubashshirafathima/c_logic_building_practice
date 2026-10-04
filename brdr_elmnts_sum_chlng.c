// Create a function called sumBoundary that calculates the sum of all elements on the boundary of a square matrix (first and last rows, first and last columns).

// The function should:

// Take a square matrix (2D array) and its size as parameters
// Return the sum of all elements that appear on the boundary
// For example, given the 3x3 matrix:

// 1 2 3
// 4 5 6
// 7 8 9
// The boundary elements are 1, 2, 3, 6, 9, 8, 7, 4 (without counting any element twice).

// Your function should return 40 (the sum of these elements).

#include <stdio.h>
int sum=0;
// Function to calculate the sum of boundary elements
int sumBoundary(int matrix[][100], int size) {
    // Write your code here
    //loop for top row border elements
    for(int i=0;i<1;i++){
    for(int j=0;j<size;j++){
        // printf("top row %d\n",matrix[i][j]);
        sum+=matrix[i][j];
    }
    }
    //loop for bottom row border elements
    for(int i=size-1;i<size;i++){
        for(int j=0;j<size;j++){
            // printf("bottom loop i and j: %d %d ",i,j);
            // printf("bottom row %d\n",matrix[i][j]);
        sum+=matrix[i][j];
        }
    }
    //loop for left row elemnts excluding top and bottom..
    for(int i=1;i<size-1;i++ ){
        for(int j=0;j<1;j++){
            // printf("left row %d\n",matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
    //loop for right row elements excluding top and bottom..
    for(int i=1;i<size-1;i++ ){
        for(int j=size-1;j<size;j++){
            // printf("right row %d\n",matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int matrix[100][100];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int result = sumBoundary(matrix, size);
    printf("%d\n", result);
    
    return 0;
}

