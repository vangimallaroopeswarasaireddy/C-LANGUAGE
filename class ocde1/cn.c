#include <stdio.h>
/**
 *This program multiplies two floating-point numbers and prints the result.
 * * The program reads two float values from the standard input, calculates their product,
 * and prints the resulting value formatted to four decimal places.
 */
int main() {
    // Declare float variables to store the two input numbers and their product.
    // The problem suggests using the float data type .
    float val1, val2, outcome;
    // Read two space-separated floating-point numbers from the user.
    scanf("%f %f", &val1, &val2);
    // Calculate the product of the two numbers.
    outcome = val1 * val2;
    // Print the result formatted to exactly four decimal places, as required by the output format .
    printf("%.4f", outcome);
    // Return 0 to indicate successful program execution.
    return 0;
}