/*
Pointer to Function
//ch.sc.u4cse24050
Syntax:return_type (*ptr)(parameters);
1. A pointer to a function can be used to call the function it points to.
2. It allows for dynamic function calls and is useful in callback scenarios.
Example Program:
*/
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*func_ptr)(int, int);
    func_ptr = add;
    printf("Sum = %d\n", func_ptr(5, 10));
    return 0;
}
