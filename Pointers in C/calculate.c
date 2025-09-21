#include <stdio.h>
//ch.sc.u4cse24050
// Function to sum elements of an array using pointer
int sumArray(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Access elements via pointer arithmetic
    }

    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int total = sumArray(arr, size);

    printf("Sum of array elements is: %d\n", total);

    return 0;
}