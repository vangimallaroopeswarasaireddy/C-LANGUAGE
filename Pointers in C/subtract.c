#include <stdio.h>
//ch.sc.u4cse24050
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declare a function pointer that points to functions taking two ints and returning an int
    int (*funcPtr)(int, int);

    // Point to add function
    funcPtr = add;
    printf("Addition: 5 + 3 = %d\n", funcPtr(5, 3));

    // Point to subtract function
    funcPtr = subtract;
    printf("Subtraction: 5 - 3 = %d\n", funcPtr(5, 3));

    return 0;
}