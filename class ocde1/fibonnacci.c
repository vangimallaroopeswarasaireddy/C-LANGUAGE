//C program to print Fibonnacci series in a given range.
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms are 0 and 1
        } else {
            next = first + second; // Next term is the sum of the previous two
            first = second; // Update first to the previous second
            second = next; // Update second to the current next
        }
        printf("%llu ", next); // Print the current term
    }
    
    printf("\n");
    return 0;
}