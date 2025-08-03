#include <stdio.h>
// ch.sc.u4cse24050
/**
 * This program finds the package size that maximizes leftover cupcakes.
 * The logic is that for a total of N cupcakes, the package size A that
 * maximizes the remainder (N % A) is (N / 2) + 1.
 */
int main() {
    // Declare an integer variable 'N' to store the total number of cupcakes.
    int n;

    // Read the single integer input from the user[cite: 234].
    scanf("%d", &n);

    // Calculate the package size 'A' that maximizes the leftovers.
    // The formula is (N / 2) + 1.
    int packageSize = (n / 2) + 1;

    // Print the calculated package size[cite: 236].
    printf("%d", packageSize);

    // Return 0 to indicate successful execution.
    return 0;
}