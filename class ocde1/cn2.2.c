#include <stdio.h>
 //CH.SC.U4CSE24050
int main() {
float spacenum;
printf("OUTPUT: ");
scanf("%f", &spacenum);
int intPart = (int) spacenum;
int rightmost = intPart % 10;
printf("%d\n", rightmost);
return 0;
}