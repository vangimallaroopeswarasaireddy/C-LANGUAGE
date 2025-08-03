//50	Get input of array from user and print it	10-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int arr[100], n;
    // Prompt the user to enter the number of elements
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    // Check if n exceeds the array size
    if (n > 100) {
        printf("Error: Number of elements exceeds maximum limit of 100.\n");
        return 1; // Exit with error code
    }
    // Input elements into the array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Print the elements of the array
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}