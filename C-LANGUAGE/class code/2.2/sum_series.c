#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    float x, sum = 0;
    int n, i, coeff = 1;

    printf("Enter a real number x: ");
    scanf("%f", &x);
    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += coeff * x;
        coeff += 2;
    }

    printf("Sum of first %d terms of the series = %.2f\n", n, sum);
    return 0;
}