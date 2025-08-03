//36	C program to print integer entered by user.	27-06-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int num;
    
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Print the entered integer
    printf("You entered: %d\n", num);
    
    return 0;
}