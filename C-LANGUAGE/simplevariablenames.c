#include <stdio.h>

int main() {

    int quantity;
    short month;
    long cardNumber;
    float price;
    char grade;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter month (as a number): ");
    scanf("%hd", &month);

    printf("Enter credit card number: ");
    scanf("%ld", &cardNumber);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter grade (A/B/C...): ");
    scanf(" %c", &grade);

    printf("The quantity is %d\n", quantity);
    printf("The month is %d\n", month);
    printf("Credit card number is %ld\n", cardNumber);
    printf("The price is %.2f\n", price);
    printf("The grade is %c\n", grade);

    return 0;
}
