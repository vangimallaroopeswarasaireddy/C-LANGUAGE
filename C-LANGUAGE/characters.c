#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    printf("Enter characters (end with *):\n");

    scanf(" %c", &ch);  

    while (ch != '*') {
        count++;
        scanf(" %c", &ch); 
    }
    printf("Number of characters entered before *: %d\n", count);
    return 0;
}
