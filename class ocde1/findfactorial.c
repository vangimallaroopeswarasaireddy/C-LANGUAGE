// C program to find factorial of a given number. 
// ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long for larger results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Calculate factorial
        }
        printf("Factorial of %d = %llu\n", n, factorial); // Print the result
    }

    return 0;
}