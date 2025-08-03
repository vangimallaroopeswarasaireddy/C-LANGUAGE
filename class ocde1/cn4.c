//ch.sc.u4cse24050
#include <stdio.h>
/**
 * This program calculates the quotient and remainder of a division.
 * It reads two integers, the amount given and the bill amount, and
 * prints the result of their division in the specified format.
 */
int main() {
    int amtgiven, billamt;
    scanf("%d", &amtgiven);
    scanf("%d", &billamt);
    printf("Quotient:%d\n", amtgiven / billamt);
    printf("Remainder:%d", amtgiven % billamt);
    return 0;
}