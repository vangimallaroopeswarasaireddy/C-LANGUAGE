/*57	Program for printing the sum of column and sum of rows for the array:
__________
|8 3 9 0 10|
|3 5 17 1 1|
|2 8 6 23 1|
|15 7 3 2 9|
|6 14 2 6 0|	16-07-25*/
//ch.sc.u4cse24050
#include <stdio.h>
#define SIZE 5
int main() {
    int arr[SIZE][SIZE] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    
    // Arrays to hold the sum of rows and columns
    int rowSum[SIZE] = {0};
    int colSum[SIZE] = {0};

    // Calculate the sum of each row and column
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of rows:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Print the sum of each column
    printf("Sum of columns:\n");
    for (int j = 0; j < SIZE; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}