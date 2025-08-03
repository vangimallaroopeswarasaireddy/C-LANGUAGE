//33	C program to find out the ASCII value of a character.	27-06-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is %d.\n", ch, (int)ch);
    
    return 0;
}