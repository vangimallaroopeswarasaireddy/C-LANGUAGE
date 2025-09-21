/*
Pointers and Arrays
//ch.sc.u4cse24050
Syntax:data_type *ptr = array_name;
1.The array name represents the base address of the array.

2.Pointers can traverse array elements by incrementing.

Example Program:
*/
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // pointer to array base

    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }

    return 0;
}
//Flow Diagram:
//arr → [10][20][30][40][50]
//p   → points to base address (arr[0])
