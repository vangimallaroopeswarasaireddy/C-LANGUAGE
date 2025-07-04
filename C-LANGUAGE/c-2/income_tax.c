#include <stdio.h>
// CH.SC.U4CSE24050

int main() {
    float basic, tax = 0.0;
    printf("Enter annual basic salary: ");
    scanf("%f", &basic);

    // Calculate tax based on salary slabs
    if (basic < 150000) {
        tax = 0.0;
    } else if (basic <= 300000) {
        tax = 0.2 * basic;
    } else {
        tax = 0.3 * basic;
    }

    printf("Income tax = %.2f\n", tax);

    return 0;
}