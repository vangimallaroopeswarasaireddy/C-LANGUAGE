//62	Write a program to get an multi-dimensional array from user for 5 students with 3 subject for each of them and print the topper and his avg mark	25-07-25
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int marks[5][3]; // 5 students, 3 subjects
    int total[5] = {0}; // To store total marks for each student
    float average[5]; // To store average marks for each student
    int topperIndex = 0; // Index of the topper
    int maxTotal = 0; // Maximum total marks

    // Input marks for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Student %d in 3 subjects: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j]; // Calculate total marks
        }
        average[i] = total[i] / 3.0; // Calculate average marks
        if (total[i] > maxTotal) {
            maxTotal = total[i];
            topperIndex = i; // Update topper index
        }
    }

    // Print the topper and their average marks
    printf("Topper: Student %d with total marks %d and average %.2f\n", 
           topperIndex + 1, total[topperIndex], average[topperIndex]);

    return 0;
}