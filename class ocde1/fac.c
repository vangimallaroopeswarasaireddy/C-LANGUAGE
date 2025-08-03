//44	C Program to find factorial of given number.	04-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n, factorial = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is a positive integer
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Print the result
    printf("Factorial of %d is %d.\n", n, factorial);
    
    return 0;
}