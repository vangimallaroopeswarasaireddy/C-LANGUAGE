#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int n, i;
    printf("Enter an integer n: ");
    scanf("%d", &n);

    printf("Even numbers up to %d are:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}