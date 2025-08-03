//ch.sc.u4cse24050
#include <stdio.h>

/**
 * This program reads two float numbers and prints them as doubles.
 * It demonstrates C's implicit type conversion from float to double.
 */
int main() {
    float num1, num2;
    double resnum1, resnum2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    resnum1 = num1;
    resnum2 = num2;
    printf("%f\n", resnum1);
    printf("%f", resnum2);
    return 0;
}