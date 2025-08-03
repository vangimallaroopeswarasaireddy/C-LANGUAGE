//52	C program to find the largest number in array:{10,12,16,4,8}	11-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int arr[] = {10, 22, 16, 4, 12}; // Predefined array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int max = arr[0]; // Initialize max with the first element

    // Loop through the array to find the largest number
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger number is found
        }
    }

    // Print the largest number
    printf("The largest number in the array is: %d\n", max);
    
    return 0;
}