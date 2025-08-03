#include <stdio.h>
// CH.SC.U4CSE24050
int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    int whole1 = (int)num1;
    int whole2 = (int)num2;
    int result = whole1 + whole2;
    printf("%d\n", result);
    return 0;
}