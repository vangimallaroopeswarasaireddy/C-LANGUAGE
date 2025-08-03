/*
Write a program to accept a decimal number and convert it to binary, octal and hexadecimal. Write separate functions.
*/
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert to binary
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    // Convert to octal
    printf("Octal: %o\n", num);

    // Convert to hexadecimal
    printf("Hexadecimal: %X\n", num);

    return 0;
}