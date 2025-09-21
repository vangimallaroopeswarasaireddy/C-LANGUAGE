#include <stdio.h>
//ch.sc.u4cse24050
// Function to calculate string length using pointer
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {  // Loop until null terminator
        length++;
        str++;  // Move pointer to next character
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    
    int len = stringLength(myString);  // Pass pointer to the first char
    
    printf("Length of the string \"%s\" is: %d\n", myString, len);

    return 0;
}