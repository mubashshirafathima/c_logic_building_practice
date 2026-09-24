// Create a recursive function named power that calculates x raised to the power of n (x^n).

// The function should:

// Take two integers: x (base) and n (exponent)
// Use recursion to calculate x^n
// Handle the case when n is 0 (return 1)
// Handle positive exponents only
// Examples:

// power(2, 3) should return 8 (2^3 = 2×2×2 = 8)
// power(5, 2) should return 25 (5^2 = 5×5 = 25)
// power(7, 0) should return 1 (any number raised to 0 equals 1)

// SOLUTION

#include <stdio.h> //header for printf anf scanf

int power(int x, int n){ //integer function with two int variables
    if(n==0){ //checks if n is zero or not 
        return 1;//if zero returns 1, this is known as base of the recursive function, basically a condition when to stop the recursive function. 
    }
    else{
        return x*(power(x,n-1)); //Give me the current number x, and multiply it by whatever the result is when I do this exact same math with one less n
    }
}
int main() {
    int x, n; //var declarations
    scanf("%d %d", &x, &n); //takes inputs for x and n from user
    
    printf("%d", power(x, n));//printing the final result of function. 
    return 0;
}