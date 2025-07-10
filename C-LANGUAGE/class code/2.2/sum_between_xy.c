#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int x, y, sum = 0, i;
    printf("Enter two integers x and y: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        // Swap x and y if x is greater than y
        int temp = x;
        x = y;
        y = temp;
    }

    for (i = x; i <= y; i++) {
        sum += i;
    }

    printf("Sum of all integers between %d and %d (inclusive) = %d\n", x, y, sum);
    return 0;
}