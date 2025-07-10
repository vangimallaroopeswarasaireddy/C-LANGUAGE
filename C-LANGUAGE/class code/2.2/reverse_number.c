#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int n, num, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    num = n;
    if (num < 0) num = -num; // Handle negative numbers

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (n < 0)
        printf("Reverse = -%d\n", reverse);
    else
        printf("Reverse = %d\n", reverse);

    return 0;
}