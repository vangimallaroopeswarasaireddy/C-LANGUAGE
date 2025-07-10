#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int n, num, digits[20], count = 0, i;
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Zero\n");
        return 0;
    }

    num = n;
    if (num < 0) num = -num; // Handle negative numbers

    // Extract digits in reverse order
    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }

    // Print digits in correct order
    if (n < 0) printf("Minus-");
    for (i = count - 1; i >= 0; i--) {
        printf("%s", words[digits[i]]);
        if (i != 0) printf("-");
    }
    printf("\n");
    return 0;
}