//Program to find greatest of three numbers
#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    int a, b, c; // Declare three integer variables
    printf("Enter three numbers: "); // Prompt the user for input
    scanf("%d %d %d", &a, &b, &c); // Read the three numbers

    // Compare the numbers to find the greatest
    if (a >= b && a >= c) {
        printf("Greatest number is: %d\n", a); // If a is greatest
    } else if (b >= a && b >= c) {
        printf("Greatest number is: %d\n", b); // If b is greatest
    } else {
        printf("Greatest number is: %d\n", c); // If c is greatest
    }

    return 0; // Return success
}