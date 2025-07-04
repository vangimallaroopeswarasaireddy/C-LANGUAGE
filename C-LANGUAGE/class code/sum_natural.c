#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;// Calculate the sum of the first n natural numbers using the formula n(n+1)/2
    // The formula is derived from the arithmetic series sum formula
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}