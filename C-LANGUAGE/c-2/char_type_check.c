#include <stdio.h>
// CH.SC.U4CSE24050

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to skip whitespace

    // Check if character is a digit
    if (ch >= 48 && ch <= 57) {
        printf("'%c' is a digit.\n", ch);
    }
    // Check if character is uppercase alphabet
    else if (ch >= 65 && ch <= 90) {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    // Check if character is lowercase alphabet
    else if (ch >= 97 && ch <= 122) {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else {
        printf("'%c' is not a digit or an alphabet character.\n", ch);
    }

    return 0;
}