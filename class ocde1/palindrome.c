//ch.sc.u4cse24050
// C program to check if a given string is a palindrome or not
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from the string
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);
    j = 0;

    // Reverse the string
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string

    // Check if the original string is equal to the reversed string
    if (strcmp(str, rev) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}