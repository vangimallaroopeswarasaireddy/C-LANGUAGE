//Program for Jumping out of nested loop using goto
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int i, j;
    int k = 1000; // 'auto' is optional in C, but included for clarity

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == j) {
                goto end_loop; // Jump out of the nested loop when i equals j
            }
            k += i * j; // Accumulate product of i and j
        }
    }
    end_loop:
    printf("The value of k is: %d\n", k);
}