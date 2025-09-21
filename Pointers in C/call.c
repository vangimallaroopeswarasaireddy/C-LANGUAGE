#include <stdio.h>
//ch.sc.u4cse24050
// Swap using call by value - won't affect original variables
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap using call by reference - affects original variables via pointers
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d\n", x, y);
    // Values remain unchanged because swapByValue works on copies

    printf("\nBefore swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y);
    // Values swapped because swapByReference works on original variables

    return 0;
}