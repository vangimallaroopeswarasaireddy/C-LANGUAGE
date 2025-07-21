#include <stdio.h>
int main() {
    float m; 
    float n;
    printf("Enter the first number m: ");
    scanf("%f", &m);

    printf("Enter the second number n: ");
    scanf("%f", &n);

    if (m > n) {
        printf("The maximum number is: %f\n", m); 
    } 
	else {
        printf("The maximum number is: %f\n", n); 
    }

    return 0;
}
