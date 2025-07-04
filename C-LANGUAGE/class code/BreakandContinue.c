//CH.SC.U4CSE24050
#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) { //loop from 0 to 9
        if (i == 3) { //if i is equal to 3
            continue;
         } //skip the rest of the loop and continue with the next iteration
        if (i == 4) { //if i is equal to 4
            break; //exit the loop
        }
        
        printf("%d ", i); //print the value of i
    }
    return 0; //return 0 to indicate successful completion
}