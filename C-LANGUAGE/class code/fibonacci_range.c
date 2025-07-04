#include <stdio.h>

int main() {
    int start, end;
    int a = 0, b = 1, next;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Fibonacci series in the range [%d, %d]:\n", start, end);

    // Print Fibonacci numbers in the given range
    while (a <= end) {
        if (a >= start) {
            printf("%d ", a);
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}