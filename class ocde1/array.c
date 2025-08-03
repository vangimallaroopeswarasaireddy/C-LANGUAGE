//49	Pre-define an Array and print it	10-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    // Define an array with predefined values
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}