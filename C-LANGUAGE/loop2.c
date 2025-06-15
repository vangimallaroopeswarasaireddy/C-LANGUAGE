#include <stdio.h>
int main() {
    int count = 0;
    int marks;

    for(int n = 1; n <= 5; n++) {
        printf("Enter marks for student %d: ", n);
        scanf("%d", &marks);

        if (marks >= 40) {
            count++;
        }
    }
    printf("Number of students who passed: %d\n", count);
    return 0;
}