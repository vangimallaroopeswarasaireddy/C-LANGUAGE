/*    Accept two numbers in variables x and y from the user and perform the following operations 
Options 
Actions 
1. Equality 
Check if x is equal to y 
2. Less Than 
Check if x is less than y 
3. Quotient and Remainder 
Divide x by y and display the quotient and remainder 
4. Range 
Accept a number and check if it lies between x and y (both inclusive) 
5. Swap
Interchange x and y */
//ch.sc.u4cse24050
#include <stdio.h>

int main() {
    int x, y, choice, num, temp; 
    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);
        printf("\nOptions:\n");
        printf("1. Equality\n");
        printf("2. Less Than\n");
        printf("3. Quotient and Remainder\n");
        printf("4. Range\n");
        printf("5. Swap\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {case 1:if (x == y)
                    printf("x and y are equal.\n");
                else
                    printf("x and y are not equal.\n");
                break; 
            case 2:if (x < y)
                    printf("x is less than y.\n");
                else
                    printf("x is not less than y.\n");
                break;
            case 3:if (y != 0) {
                    printf("Quotient: %d\n", x / y);
                    printf("Remainder: %d\n", x % y);
                } else {
                    printf("Cannot divide by zero.\n");
                }
                break;
            case 4:printf("Enter a number to check if it lies between x and y (inclusive): ");
                scanf("%d", &num);
                if ((num >= x && num <= y) || (num >= y && num <= x))
                    printf("%d lies between %d and %d.\n", num, x, y);
                else
                    printf("%d does not lie between %d and %d.\n", num, x, y);
                break;
            case 5:temp = x; x = y;y = temp;
                printf("Values swapped. Now x = %d and y = %d\n", x, y);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    return 0;
}

