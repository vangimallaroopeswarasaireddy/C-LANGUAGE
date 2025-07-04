#include <stdio.h>
//CH.SC.U4CSE24050 
int main() {
    int i;// Variable to store an integer
    float f;// Variable to store a float
    char c;// Variable to store a character

    printf("Enter int, float, char: ");
    scanf("%d %f %c", &i, &f, &c);// Read input values for integer, float, and character

    printf("Integer: %d\nFloat: %.2f\nChar: %c\n", i, f, c);// Print the values with formatting
    return 0;
}
