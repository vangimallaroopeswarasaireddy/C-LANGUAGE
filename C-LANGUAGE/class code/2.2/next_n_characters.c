#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    char ch;
    int n, i;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume any leftover newline
    printf("Enter an integer n: ");
    scanf("%d", &n);

    printf("Next %d characters after '%c' are:\n", n, ch);
    for (i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    printf("\n");
    return 0;
}