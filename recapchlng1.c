// Creates a function called processMatrix that takes the matrix and its size as parameters and doing the following:

// Calculates the sum of all elements in the matrix
// Calculates the sum of diagonal elements (both main and anti-diagonal)
// print the following information with appropriate labels:

// “Sum of all elements: [value]”
// “Sum of main diagonal: [value]”
// "Sum of anti-diagonal: [value]"

#include <stdio.h>

void processMatrix(int matrix[][3], int size) {
    int total_sum=0;
    // int size=3;
    int main_diagonal_sum=0;
    int anti_diagonal_sum=0;
    // Write your code here
    for(int i=0;i<size;i++){
        for (int j=0;j<size;j++){
        total_sum=total_sum+(matrix[i][j]);
        if(matrix[i]==matrix[j]){
            main_diagonal_sum+=matrix[i][j];
        }
        else{continue;}
        }
    }
    anti_diagonal_sum=anti_diagonal_sum+matrix[0][2]+matrix[1][1]+matrix[2][0];
    printf("Sum of all elements: %d\n", total_sum);
    printf("Sum of main diagonal: %d\n", main_diagonal_sum);
    printf("Sum of anti-diagonal: %d\n", anti_diagonal_sum);

}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    processMatrix(matrix, 3);
    
    return 0;
}