#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, n = 0;// Variables to store the input number, its original value, remainder, and digit count
    // This program checks if a number is an Armstrong number
    int sum = 0;
    printf("Enter a number: ");// Prompt the user for input
    scanf("%d", &num);
    original = num;// Store the original number for comparison later
    for (int temp = num; temp != 0; temp /= 10, n++);// Count the number of digits in the number
    for (int temp = num; temp != 0; temp /= 10) {// Loop through each digit of the number
        rem = temp % 10;
        sum += pow(rem, n);
    }
    if (sum == original)// Check if the sum of the digits raised to the power of n equals the original number
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    return 0;
}
