// Print a Two-Line Parcel Label

// challenge icon
// Challenge

// Beginner
// Read an item name on the first line and an integer quantity on the second. Print Item: followed by the name, then Quantity: followed by the quantity on the next line. Each colon is followed by one space. The name contains 1-60 ASCII letters and internal spaces. Quantity is from 0 to 1000.

// End each output line with a newline. Print only the requested output, with no input prompts.

#include <stdio.h>
#include <string.h>
int main(void) {
    char name[256];
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\r\n")] = 0;
    int quantity;
    scanf("%d", &quantity);
    getchar();

    // TODO: Print the item name and quantity on their labeled lines.

    printf("Item: %s\n",name);
    printf("Quantity: %d",quantity);
    return 0;
}

