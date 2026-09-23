// Recursion Basics

// Challenge
// Create a function named sumToN that uses recursion to calculate the sum of numbers from 1 to n.

// For example:

// sumToN(3) should return 6 (1 + 2 + 3)
// sumToN(5) should return 15 (1 + 2 + 3 + 4 + 5)
// Your function should:

// Use a base case when n is 1 (return 1)
// Otherwise, return n plus the sum of numbers from 1 to (n-1)

// SOLUTION:
#include <stdio.h>

// Write your sumToN function here
int sumToN(int n){
    if(n<=1){return 1;}
    else {
        return n+sumToN(n-1);
    }
}
// Don't change the main() function
int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", sumToN(n));
    return 0;
}