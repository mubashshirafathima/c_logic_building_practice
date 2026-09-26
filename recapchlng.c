

// Write a C program that implements a simple calculator using functions. Your program should:

// Implement the following functions:
// add(int a, int b): returns the sum of a and b
// subtract(int a, int b): returns the difference between a and b
// multiply(int a, int b): returns the product of a and b
// divide(int a, int b): returns the quotient of a divided by b (handle division by zero)
// Implement a function calculate(int a, int b, char operation) that takes two integers and an operation character (+, -, *, /) as arguments, calls the appropriate function, and returns the result.
// In the main function, read two integers and a character separated by spaces (e.g. 10 5 +); the character will be one of the operator signs, or the character q, if you read q, end the program. Use scanf("%d %d %c", &a, &b, &op) to read the input.
// Use the calculate function to perform the operation and display the result
// Handle invalid operations and division by zero by printing Invalid input


#include <stdio.h>
#include <stdlib.h>
// Declare your functions here
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int calculate(int a, int b, char op);

int main() {
    // Your code here
    int a,b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if(op=='q'){
        return 0;
    }
    else{
    int result1=calculate(a,b,op);
    printf("%d",result1);
    }
    return 0;
}

// Implement your functions here
int add(int a, int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Invalid input");
        exit(0); 
    }
    return a / b;
}
int calculate(int a, int b, char op){
 switch(op){
 case '+':
    return add( a,b);
    
 case '-':
    return subtract(a,b);
    
 case '*':
    return multiply(a,b);
 case '/':
    return divide(a,b);   

}
return 0;
}