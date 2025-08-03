//ch.sc.u4cse24050
#include <stdio.h>
#include <math.h>
/**
 * Calculates the min and max possible lengths for the right side of a step ladder.
 * The ladder forms a triangle with sides LS, RS, and base B.
 * The two extremes are calculated using the Pythagorean theorem.
 */
int main() {
    float b, ls, rs_min, rs_max;
    scanf("%f %f", &b, &ls);
    rs_min = sqrt((ls * ls) - (b * b));
    rs_max = sqrt((ls * ls) + (b * b));
    printf("%.5f %.5f", rs_min, rs_max);
    return 0;
}