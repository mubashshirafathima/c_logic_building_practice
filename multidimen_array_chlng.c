// <!-- Create a function called printDiagonal that takes a 2D square array (where the number of rows equals the number of columns) and prints the elements on the main diagonal (from top-left to bottom-right).

// The function should:

// Take an integer array and its size as parameters.
// Print each element on the main diagonal (where row index equals column index).
// Separate each element with a space.
// For example, given the array:

// 1 2 3 4 5 6 7 8 9

// The function should print: 1 5 9 -->


#include <stdio.h>

void printDiagonal(int matrix[][100], int size) {

    // Write your code here
    for(int i=0;i<size;i++){
        for (int j=0;j<size;j++){
        if(matrix[i]==matrix[j]){
        printf("%d ",matrix[i][j]);}
        else{
            continue;
        }}
    }
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
    
    printDiagonal(matrix, size);
    
    return 0;
}