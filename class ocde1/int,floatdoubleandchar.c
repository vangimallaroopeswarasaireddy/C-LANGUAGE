// size int,float double and char
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    // Declare variables of different types
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Print the size of each type
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of char: %zu bytes\n", sizeof(charVar));

    return 0;
}