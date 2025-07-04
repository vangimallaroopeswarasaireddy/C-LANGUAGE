#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to skip any whitespace

    // Check if the character is a digit (between '0' and '9')
    if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    return 0;
}