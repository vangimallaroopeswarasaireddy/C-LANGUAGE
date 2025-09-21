/*1. Introduction to Pointers
//ch.sc.u4cse24050
A pointer is a special variable that stores the memory address of another variable instead of storing the actual value.

Definition: A pointer is a variable that contains the address of another variable.

Syntax:*/
//data_type *pointer_name;
//example:
#include <stdio.h>
int main() {
    int var = 20;   // actual variable declaration
    int *ptr;      // pointer variable declaration

    ptr = &var;    // store address of var in pointer variable

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr (Address of var): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr); // dereferencing the pointer

    return 0;
}
//Flow Diagram (Text Form):
/*
+-------+        +-------------+
|   x   | -----> | ptr = &x    |
+-------+        +-------------+
 value=5          stores address of x
 */