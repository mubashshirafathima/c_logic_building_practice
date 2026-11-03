// rorate matrix to 90 degree and find the target eelemnt functions


void rotateMatrix(int original[][10], int rotated[][10], int size) {
    // Your code here
    for(int j=0;j<size;j++){
        for(int i=size-1;i>=0;i--){
    rotated[j][size-1-i] = original[i][j];
        }
    }
}

int findElement(int matrix[][10], int size, int target) {
    // Your code here
    // printf("%d",target);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(matrix[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
