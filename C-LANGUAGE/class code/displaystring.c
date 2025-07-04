    //display string 
#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    char str[100]; // Declare a character array to hold the string
    printf("Enter a string: "); // Prompt the user for input
    fgets(str, sizeof(str), stdin); // Read the string input from standard input
    printf("You entered: %s\n", str); // Display the entered string
    return 0; // Return success
}