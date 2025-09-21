#include <stdio.h>
//ch.sc.u4cse24050
#define ROWS 2
#define COLS 3

// Function to add two matrices using pointers
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        *(result + i) = *(mat1 + i) + *(mat2 + i);
    }
}

int main() {
    int matrix1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[ROWS][COLS] = {
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], ROWS, COLS);

    printf("Result of matrix addition:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}