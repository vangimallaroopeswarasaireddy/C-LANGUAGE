#include <stdio.h>

int main() {
    int count = 0, n = 1;
    int marks;
     
    while (n <= 5) {
        printf("Enter marks for student %d: ", n);
        scanf("%d", &marks);
         
        if (marks >= 40) {
            count = count + 1;
        }
        n = n + 1;
    }
    printf("Number of students who passed: %d\n", count);
    return 0;
}