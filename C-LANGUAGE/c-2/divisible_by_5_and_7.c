#include <stdio.h>
// CH.SC.U4CSE24050

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is divisible by both 5 and 7
    if (num % 5 == 0 && num % 7 == 0) {
        printf("%d is divisible by both 5 and 7.\n", num);
    } else {
        printf("%d is not divisible by both 5 and 7.\n", num);
    }

    return 0;
}