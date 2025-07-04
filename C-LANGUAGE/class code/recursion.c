//Reverse an input number using recursion   
#include <stdio.h>
//CH.SC.U4CSE24050

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {// Main function to test the reverseNumber function
    // This program reverses an input number using recursion
    int num, reversed;
    printf("Enter a number: ");// Prompt the user for input
    scanf("%d", &num);
// Read the input number
    reversed = reverseNumber(num, 0);
// Call the recursive function to reverse the number
    printf("Reversed number: %d\n", reversed);// Display the reversed number
    return 0;
}
