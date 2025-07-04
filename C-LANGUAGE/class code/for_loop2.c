//ch.sc.u4cse24050
//1.code 
/*#include <stdio.h>
int main() {
    int i; // declare variable for loop counter
    while (i < 10) { // loop condition
        printf("Value of i: %d\n", i); // print current value of i
        i++; // increment i by 1
    }
}
*/

/*#include <stdio.h>
int main() {
    int i=1;
    for ( ; i <+ 5; i++) { 
        printf("i: %d\n", i);
    }
}*/
/*#include <stdio.h>
int main() {    
    int i = 1; 
    for (i=1;  ;i++) { 
        printf("i: %d\n", i); 
    }
    return 0;
}*/
/*#include <stdio.h>
int main() {
    int i, j, k;
    for (i =0, j=0, k=0; i < 5; i++) {
        printf("i: %d, j: %d, k: %d\n", i, j, k);
        j+=2;
        k+=3;
    }
}*/
/*#include <stdio.h>
void main() {
    int i;
    for (i=0; i<10; i++) {
        int i=20; 
        printf("i: %d\n", i);
    }
}
  */
/*
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>  
void main() {
    for (int i = 1; i <= 3; i++) {
        printf("i: %d\n", i);
        for (int j = 1; j <= 2; j++) {
         printf("j: %d\n", j);
        }
    }
}