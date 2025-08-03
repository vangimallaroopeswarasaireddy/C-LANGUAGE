//ch.sc.u4cse24050
#include <stdio.h>
#include <math.h>
int main() {
int a, b, c;
float s, area;
printf("OUTPUT: ");
scanf("%d %d %d", &a, &b, &c);
if (a > 0 && b > 0 && c > 0 && a <= 15 && b <= 15 && c <= 15) {
}
s = (a + b + c) / 2.0;
area = sqrt(s * (s-a) * (s-b) * (s-c));
printf("%.2f", area);
return 0;
}