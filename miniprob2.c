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

#include <stdio.h>

int power(int x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*(power(x,n-1));
    }
}
int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    
    printf("%d", power(x, n));
    return 0;
}