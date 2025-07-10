#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    float x, sum = 0, term = 1;
    int n, i;

    printf("Enter a real number x: ");
    scanf("%f", &x);
    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = 1;
        for (int j = 1; j <= i; j++) {
            term *= x;
        }
        sum += term;
    }

    printf("Sum of first %d terms of the series = %.2f\n", n, sum);
    return 0;
}