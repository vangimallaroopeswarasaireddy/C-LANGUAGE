//ch.sc.u4cse24050
#include <stdio.h>
/**
 * This program adds two floating-point numbers.
 * It reads two floats from a single line, computes their sum,
 * and prints the result formatted to three decimal places.
 */
int main() {
    float var1, var2, res;
    scanf("%f %f", &var1, &var2);
    res = var1 + var2;
    printf("%.3f", res);
    return 0;
}