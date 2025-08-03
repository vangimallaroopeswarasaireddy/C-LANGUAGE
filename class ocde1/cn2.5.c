#include <stdio.h>
int main() {
    //ch.sc.u4cse24050
    float radius;
    scanf("%f", &radius);
    float area = 3.1416 * radius * radius;
    float circumference = 2 * 3.1416 * radius;
    printf("%.2f\n", area);
    printf("%.2f\n", circumference);
    return 0;
}