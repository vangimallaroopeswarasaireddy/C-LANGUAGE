#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int n, i;
    long long a = 1, b = 1, next;

    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("First %d Fibonacci numbers:\n", n);
    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2)
            printf("1 ");
        else {
            next = a + b;
            printf("%lld ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}