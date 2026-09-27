// Compare Two Groupings of an Expression

// challenge icon
// Challenge

// Beginner
// Read integers a, b and c on separate lines. Print a + b * c on the first output line and (a + b) * c on the second. Each input is from 0 to 100.

// End each output line with a newline. Print only the requested output, with no input prompts.


#include <stdio.h>
#include <string.h>
int main(void) {
    int a;
    scanf("%d", &a);
    getchar();
    int b;
    scanf("%d", &b);
    getchar();
    int c;
    scanf("%d", &c);
    getchar();

    // TODO: Print the two expressions, one result per line.
    int one = a+b*c;
    int two = (a+b)*c;
    printf("%d\n%d",one,two);
    return 0;
}
