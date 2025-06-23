#include <stdio.h> 

int main() {
    int num1, num2, num3; // Declare three integer variables to store the numbers

    printf("Enter the first number: "); // Prompt the user for the first number
    scanf("%d", &num1); // Read the first number from the user

    printf("Enter the second number: "); // Prompt the user for the second number
    scanf("%d", &num2); // Read the second number from the user

    printf("Enter the third number: "); // Prompt the user for the third number
    scanf("%d", &num3); // Read the third number from the user

    // Logic to find the maximum number
    if (num1 >= num2 && num1 >= num3) { // Check if num1 is greater than or equal to both num2 and num3
        printf("The maximum number is: %d\n", num1); // If true, num1 is the maximum
    } else if (num2 >= num1 && num2 >= num3) { // Check if num2 is greater than or equal to both num1 and num3
        printf("The maximum number is: %d\n", num2); // If true, num2 is the maximum
    } else { // If neither num1 nor num2 is the maximum, then num3 must be
        printf("The maximum number is: %d\n", num3); // num3 is the maximum
    }

    return 0; // Indicate successful program execution
}
