#include <stdio.h>
//ch.sc.u4cse24050
// Function to find the largest element using pointers
int findLargest(int *arr, int size) {
    int max = *arr;  // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main() {
    int arr[] = {12, 45, 2, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);

    printf("Largest element in the array is: %d\n", largest);

    return 0;
}