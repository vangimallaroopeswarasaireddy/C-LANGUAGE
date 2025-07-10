#include <stdio.h>
//ch.sc.u4 cse24050
int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = a + b;
            printf("Sum = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Difference = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Product = %d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Quotient = %d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                result = a % b;
                printf("Remainder = %d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}