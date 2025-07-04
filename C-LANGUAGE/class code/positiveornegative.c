//C program to check whether the given number is C program to check whether the given number is positive or negative
#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    int num; // Variable to store the input number
    printf("Enter a number: "); // Prompt the user for input
    scanf("%d", &num); // Read the input number

    if (num >= 0) { // Check if the number is positive or zero
        printf("Positive number\n"); // Print message for positive numbers
    } else {
        printf("Negative number\n"); // Print message for negative numbers
    }
    
    return 0; // Return success
}