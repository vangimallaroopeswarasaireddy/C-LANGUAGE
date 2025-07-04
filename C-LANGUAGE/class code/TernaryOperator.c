#include <stdio.h>
//CH.SC.U4CSE24050 
int main() {
    int a = 10, b = 20;// Initialize two integers a and b
    // Use the ternary operator to find the maximum of a and b
    int max = (a > b) ? a : b;// If a is greater than b, max is a; otherwise, max is b
    printf("Max = %d\n", max);// Print the maximum value
    return 0;
}
