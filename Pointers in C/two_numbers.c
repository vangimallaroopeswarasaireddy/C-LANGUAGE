//ch.sc.u4cse24050
#include <stdio.h>

// Swap function using call by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // Passing addresses of x and y

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
