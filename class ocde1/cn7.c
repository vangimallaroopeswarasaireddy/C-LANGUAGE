//ch.sc.u4cse24050
#include <stdio.h>
/**
 * This program calculates the total number of train tickets booked.
 * It reads three integer values representing three separate bookings
 * and prints their sum.
 */
int main() {
    int num1, num2, num3;
    int sum;
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    printf("%d", sum);
    return 0;
}