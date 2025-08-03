/*42	Pattern Printing:
1
11
111
1111	04-07-25*/
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n;
    // Prompt the user to enter the number of rows
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);
    // Loop to print the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1"); // Print '1' for each position in the row
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}