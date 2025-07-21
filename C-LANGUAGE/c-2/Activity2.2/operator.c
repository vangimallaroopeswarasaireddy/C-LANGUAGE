#include <stdio.h>
//ch.sc.u4cse24050
//Write a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result. 
int main() {
    int num1, num2;
    char operator;
    float result;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

