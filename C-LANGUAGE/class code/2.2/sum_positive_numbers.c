#include <stdio.h>
// ch.sc.u4cse24050
int main() {
    int num, sum = 0;
    printf("Enter positive numbers (enter a non-positive number to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num <= 0)
            break;
        sum += num;
    }
    printf("Sum of positive numbers = %d\n", sum);
    return 0;
}