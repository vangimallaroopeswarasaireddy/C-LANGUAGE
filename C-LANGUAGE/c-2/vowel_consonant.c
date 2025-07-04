#include <stdio.h>
// CH.SC.U4CSE24050

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to skip whitespace

    // Check if character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}