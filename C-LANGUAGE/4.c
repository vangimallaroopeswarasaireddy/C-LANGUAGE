#include <stdio.h>

int main() {
    float amount, discount, netAmount;

    printf("Enter the purchase amount: ");
    scanf("%f", &amount);

    if (amount > 5000) {
        discount = 15 * amount / 100; 
    } else {
        discount = 10 * amount / 100; 
    }

    netAmount = amount - discount;

    printf("Discount: %.2f\n", discount);
    printf("Amount to be paid after discount: %.2f\n", netAmount);

    return 0;
}
