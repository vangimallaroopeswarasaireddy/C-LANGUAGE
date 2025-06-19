/*    Accept a character from the keyboard and display its previous and next character in order. Ex. If the character entered is ‘d’, display “The previous character is c”, “The next character is e”. 
ch.sc.u4cse24050 */
#include <stdio.h>
int main() {
    char ch; //declare variables
    char prev_char; //declare variables
    char next_char; //declare variables
    printf("Enter a character: \n");
    scanf(" %c", &ch); //read character input
    prev_char = ch - 1; //calculate previous character
    next_char = ch + 1; //calculate next character
    printf("The previous character is %c\n", prev_char); //output previous character
    printf("The next character is %c\n", next_char); //output next character
    return 0;
}