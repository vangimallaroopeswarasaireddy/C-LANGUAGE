//37	C program to update two variables i,j using for loop for 5 times with i=i+1,j=j+2.	03-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int i = 0, j = 0;

    // Update i and j using a for loop
    for (int k = 0; k < 5; k++) {
        i += 1; // Increment i by 1
        j += 2; // Increment j by 2
    }

    // Print the updated values of i and j
    printf("After 5 iterations:\n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);

    return 0;
}