#include <stdio.h>//ch.sc.u4cse24050
#define ROWS 2
#define COLS 3// Function to transpose a matrix using pointers
void transposeMatrix(int *mat, int *transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(transposed + j * rows + i) = *(mat + i * cols + j);
        }
    }
}
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transposed[COLS][ROWS];  // Note the swapped dimensions
    transposeMatrix(&matrix[0][0], &transposed[0][0], ROWS, COLS);
    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}