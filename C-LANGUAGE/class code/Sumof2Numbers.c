#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    int a, b, sum;// Variables to store the two numbers and their sum
    // Prompt user for input
    printf("Enter two numbers: ");// Prompt the user to enter two numbers
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);  // Calculate and display the sum of the two numbers
    return 0;
}
