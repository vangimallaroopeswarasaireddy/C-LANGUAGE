//48	Use #define MAX in array program using break continue and goto also.	09-07-25
//ch.sc.u4cse24050
#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX], n;
    // Prompt the user to enter the number of elements
    printf("Enter the number of elements (max %d): ", MAX);
    scanf("%d", &n);
    // Check if n exceeds MAX
    if (n > MAX) {
        printf("Error: Number of elements exceeds maximum limit of %d.\n", MAX);
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