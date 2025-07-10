#include <stdio.h>
//ch.sc.u4cse24050
int main() {
    int count = 0;
    char ch;
    printf("Enter characters:\n");
    while ((ch = getchar()) != EOF) {
        if (ch == 'a')
            count++;
    }
    printf("Number of times 'a' was entered: %d\n", count);
    return 0;
}