#include <stdio.h>
// CH.SC.U4CSE24050
int main() {
    float squareFeet;
    printf("OUTPUT: ");
    scanf("%f", &squareFeet);
    float acres = squareFeet / 43560;
    printf("%.2f\n", acres);
    return 0;
}