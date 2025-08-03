//C program to check if given number is Armstrong or not.in c 
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; // Cube of the digit
        originalNum /= 10;
    }
    
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
