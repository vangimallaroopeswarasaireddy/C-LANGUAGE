//39	Write a C program to print the multiplication tables from 1 to n, each up to 10, based on user input.	03-07-25
// ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n;
    // Prompt the user to enter the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    // Check if the input is a positive integer
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    // Print multiplication tables from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("Multiplication table for %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // New line after each table
    }
    return 0;
}