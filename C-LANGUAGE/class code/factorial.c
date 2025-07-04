//C Program to find factorial of a given number
#include <stdio.h>
//CH.SC.U4CSE24050

int factorial(int n) {
    if (n == 0 || n == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive case: n * factorial of (n-1)
}

int main() {
    int num;
    printf("Enter a number: ");// Prompt the user for input
    // Read the input number
    scanf("%d", &num);// If the number is negative, factorial is not defined

    if (num < 0) {      // Check if the number is negative
        // Print an error message
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}