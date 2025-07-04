#include <stdio.h>
// CH.SC.U4CSE24050
// This program checks if the first entered number is between the other two numbers

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if 'a' is strictly between 'b' and 'c'
    if ((a > b && a < c) || (a > c && a < b)) {
        printf("%d is between %d and %d\n", a, b, c);
    } else {
        printf("%d is not between %d and %d\n", a, b, c);
    }

    return 0;
}