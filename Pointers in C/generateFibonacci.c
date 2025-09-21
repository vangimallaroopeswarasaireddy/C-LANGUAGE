#include <stdio.h>
//ch.sc.u4cse24050
// Function to generate Fibonacci series using pointer to an array
void generateFibonacci(int *arr, int n) {
    if (n <= 0) return;

    arr[0] = 0;
    if (n > 1) {
        arr[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        *(arr + i) = *(arr + i - 1) + *(arr + i - 2);
    }
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    int fib[n];  // Array to store Fibonacci numbers

    generateFibonacci(fib, n);  // Call function to fill the array

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(fib + i));  // Print using pointer arithmetic
    }
    printf("\n");

    return 0;
}
