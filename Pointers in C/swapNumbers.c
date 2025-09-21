#include <stdio.h>
//ch.sc.u4cse24050
// Function to swap two numbers using call by reference
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapNumbers(&x, &y);  // Pass addresses of x and y

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}