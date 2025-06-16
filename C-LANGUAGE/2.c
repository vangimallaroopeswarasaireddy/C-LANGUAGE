#include <stdio.h>

int main() {
    int m;
    
    printf("Enter an integer: ");
    scanf("%d", &m);
    if (m % 2 == 0) {
        printf("%d is even.\n", m); 
    } 
    return 0;
}