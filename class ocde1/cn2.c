//ch.sc.u4cse24050
#include <stdio.h>
/**
 * This program calculates the total electricity bill based on the formula:
 * Total Bill Amount = unitconsumed ^ costperunit.
 * The program reads two integers and calculates the power of the first
 * number to the second.
 */
int main() {
    int unitconsumed, costperunit;
    scanf("%d", &unitconsumed);
    scanf("%d", &costperunit);
    long long totalBillAmount = 1;
    for (int i = 0; i < costperunit; i++) {
        totalBillAmount *= unitconsumed;
    }
    printf("%lld", totalBillAmount);
    return 0;
}