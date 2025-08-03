/*
    Write a program to accept n numbers in an array and display the largest and smallest number. Using these values, calculate the range of elements in the array. Refer to the sample code given above and make appropriate modifications. 
*/
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int max, min, range;
    // Accept size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Accept array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize max and min
    max = min = arr[0];
    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    // Calculate range
    range = max - min;
    // Display results
    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);
    printf("Range: %d\n", range);

    return 0;
}