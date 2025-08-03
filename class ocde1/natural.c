//35	C program to find sum of first n natural numbers.	27-06-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // Check if the input is a positive integer
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    // Calculate the sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is %d.\n", n, sum);
    return 0;
}