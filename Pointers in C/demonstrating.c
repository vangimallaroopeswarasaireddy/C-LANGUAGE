#include <stdio.h>
//ch.sc.u4cse24050
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer points to the first element of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using pointer arithmetic:\n");

    for (int i = 0; i < n; i++) {
        // Access array elements by incrementing the pointer
        printf("Element %d = %d\n", i, *(ptr + i));
    }

    printf("\nDemonstrating increment and decrement of pointer:\n");

    ptr = arr;  // Reset pointer to start of array

    printf("Value at ptr = %d\n", *ptr);  // 10
    ptr++;  // Move to next element
    printf("Value at ptr after ptr++ = %d\n", *ptr);  // 20
    ptr += 2;  // Move pointer two elements ahead
    printf("Value at ptr after ptr += 2 = %d\n", *ptr);  // 40
    ptr--;  // Move pointer back by one element
    printf("Value at ptr after ptr-- = %d\n", *ptr);  // 30

    return 0;
}