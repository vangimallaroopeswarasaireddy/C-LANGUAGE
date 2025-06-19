/*    Accept a character from the user and display its ASCII value. 
ch.sc.u4cse24050*/
#include <stdio.h>
int main() {
    char ch; //declare variable for character
    int ascii_value; //declare variable for ASCII value
    printf("Enter a character: \n");
    scanf("%c", &ch); //read character input
    ascii_value = (int)ch; //convert character to ASCII value
    printf("ASCII value of '%c' is %d\n", ch, ascii_value); //output ASCII value
    return 0;
}