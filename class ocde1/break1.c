//Program using auto,continue and break-3
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int i, j;
    auto int k = 0; // 'auto' is optional in C, but included for clarity

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == j) {
                continue; // Skip the rest of the loop when i equals j
            }
            k += i * j; // Accumulate product of i and j
        }
    }

    printf("The value of k is: %d\n", k);
    return 0;
}