    //display a group of strings 
#include <stdio.h>
//CH.SC.U4CSE24050
int main() {
    char str1[100], str2[100], str3[100]; // Declare character arrays to hold the strings
    printf("Enter first string: "); // Prompt the user for the first string
    fgets(str1, sizeof(str1), stdin); // Read the first string input from standard input

    printf("Enter second string: "); // Prompt the user for the second string
    fgets(str2, sizeof(str2), stdin); // Read the second string input from standard input

    printf("Enter third string: "); // Prompt the user for the third string
    fgets(str3, sizeof(str3), stdin); // Read the third string input from standard input

    // Display the entered strings
    printf("You entered:\n%s%s%s", str1, str2, str3);
    return 0; // Return success
}