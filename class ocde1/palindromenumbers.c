//32	C program to display palindrome numbers in a given range.
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int start, end, num, reversedNum, remainder;

    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);
    
    for (num = start; num <= end; num++) {
        int originalNum = num;
        reversedNum = 0;

        // Reverse the number
        while (originalNum != 0) {
            remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }

        // Check if the number is a palindrome
        if (reversedNum == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}