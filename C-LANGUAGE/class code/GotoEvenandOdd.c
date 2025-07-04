#include <stdio.h>
//ch.sc.u4cse24050
// This program checks if a number is even or odd using goto statements
int main() {
    int num;// Variable to store the input number
    printf("Enter a number: ");// Prompt the user for input
    scanf("%d", &num);// Read the input number

    if (num % 2 == 0)       // Check if the number is even
        goto even;// If even, jump to the even label
    else
        goto odd;   // If odd, jump to the odd label

even:// Label for even numbers
    printf("Even number\n");// Print message for even numbers
    return 0;

odd:// Label for odd numbers
    printf("Odd number\n");// Print message for odd numbers
    return 0;
}
