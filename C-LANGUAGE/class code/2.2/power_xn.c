#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int x, n, i;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d to the power %d is %lld\n", x, n, result);
    return 0;
}