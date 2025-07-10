#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int n, num, count = 0, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    num = n;
    if (num == 0) {
        count = 1;
        sum = 0;
    } else {
        if (num < 0) num = -num; // Handle negative numbers
        while (num > 0) {
            digit = num % 10;
            sum += digit;
            count++;
            num /= 10;
        }
    }

    printf("Digits = %d, Sum = %d\n", count, sum);
    return 0;
}