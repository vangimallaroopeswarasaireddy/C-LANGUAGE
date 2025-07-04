#include <stdio.h>

int main() {
    char *names[] = {"Alice", "Bob", "Charlie", "David"};
    
    for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
