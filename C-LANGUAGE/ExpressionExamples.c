#include <stdio.h>

int main() {
    int a = 5, b = 10, x = 3, n = 20;
    float r = 2.0, h = 5.0;
    float pi = 3.14;
    char ch = 'A';

    a = a + 3;
    printf("a + 3 = %d\n", a);

    b = b - 1;
    printf("b - 1 = %d\n", b);

    float result1 = 2 * a * a + 5 * b / 2;
    printf("2*a*a + 5b/2 = %.2f\n", result1);

    float result2 = (float)7 / 13 * (x - 5);
    printf("7/13(x - 5) = %.2f\n", result2);

    float percent = (float)5 / 100 * 56;
    printf("5%% of 56 = %.2f\n", percent);

    if (n >= 12 && n <= 70) {
        printf("n is between 12 and 70\n");
    }

    float volume = pi * r * r * h;
    printf("Pi*r*r*h = %.2f\n", volume);

    if (n % 7 != 0) {
        printf("n is not divisible by 7\n");
    }

    if (n % 2 == 0) {
        printf("n is even\n");
    }

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("ch is an alphabet\n");
    }
    return 0;
}
