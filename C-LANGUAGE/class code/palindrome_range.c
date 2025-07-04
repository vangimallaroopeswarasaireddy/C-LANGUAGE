#include <stdio.h>

int isPalindrome(int n) {// Function to check if a number is a palindrome
    int reversed = 0, original = n, rem;// Variables to store the reversed number, original number, and remainder
    while (n != 0) {// Loop to reverse the number
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end;// Declare variables for start and end of the range
    // This program finds palindrome numbers in a given range
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);// Read the start and end of the range
    printf("Palindrome numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++)// Loop through each number in the range
        if (isPalindrome(i)) printf("%d ", i);
    printf("\n");
    return 0;
}