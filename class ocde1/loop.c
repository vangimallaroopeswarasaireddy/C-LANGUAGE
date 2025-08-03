//38	C program to demonstrate that a variable declared locally within a for loop does not affect a globally declared variable of the same name.	03-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int j = 20; // Local variable
int i = 10;
    // Print initial values of global and local variables
    printf("Before loop:\n");
    printf("Global i = %d\n", i);
    printf("Local j = %d\n", j);

    // For loop with a local variable named 'i'
    for (int i = 0; i < 5; i++) {
        j += i; // Update local variable j
        printf("Inside loop, iteration %d: Local i = %d, Local j = %d\n", i, i, j);
    }
    // Print values after the loop
    printf("After loop:\n");
    printf("Global i = %d\n", i); // Global variable remains unchanged
    printf("Local j = %d\n", j);   // Local variable j is updated
    return 0;
}