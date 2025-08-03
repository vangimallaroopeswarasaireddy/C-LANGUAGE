/*
    Write a program to accept n numbers in an array and calculate the average. Refer to the sample code given above and make appropriate modifications. 
*/
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    float sum = 0, average;
    // Accept size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Accept array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum while reading
    }
    // Calculate average
    average = sum / n;
    // Display result
    printf("Average of the elements: %.2f\n", average);
    return 0;
}
