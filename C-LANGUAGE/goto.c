#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 10) 
            goto error;
        printf("i is not 10\n");
    }
    return 0;
error:
    printf("error, count cannot be 10.\n");
    return 0;
}
