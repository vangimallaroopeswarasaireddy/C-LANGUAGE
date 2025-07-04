#include <stdio.h>

int main() {
    int num, reversed = 0, original, rem;// Variables to store the input number, its reversed version, original value, and remainder
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {// Loop to reverse the number
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }
    if (original == reversed)// Check if the original number is equal to the reversed number
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}