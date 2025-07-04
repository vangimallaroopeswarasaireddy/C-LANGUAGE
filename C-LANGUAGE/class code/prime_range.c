#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)// Check divisibility from 2 to sqrt(n)
        if (n % i == 0) return 0;// If n is divisible by any number, it is not prime
    return 1;
}

int main() {// Main function to find prime numbers in a given range
    int start, end;// Declare variables for start and end of the range
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d:\n", start, end);// Prompt the user for input and display the range
    for (int i = start; i <= end; i++)
        if (isPrime(i)) printf("%d ", i);// Check each number in the range and print if it is prime
    // Display the prime numbers found in the range
    printf("\n");
    return 0;
}