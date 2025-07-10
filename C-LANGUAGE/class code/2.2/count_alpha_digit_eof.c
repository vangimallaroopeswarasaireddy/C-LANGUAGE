#include <stdio.h>
//ch.sc.u4cse24050

int main() {
    int alpha_count = 0, digit_count = 0;
    char ch;
    printf("Enter characters:\n");
    while ((ch = getchar()) != EOF) {
        if ((ch >= 'A' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
            alpha_count++;
        else if (ch >= '0' && ch <= '9')
            digit_count++;
    }
    printf("Number of alphabets entered: %d\n", alpha_count);
    printf("Number of digits entered: %d\n", digit_count);
    return 0;
}