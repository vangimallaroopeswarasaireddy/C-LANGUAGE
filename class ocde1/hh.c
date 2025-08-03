//ch.sc.u4cse24050
#include <stdio.h>
void acceptMatrix(int mat[10][10], int rows, int cols, char name) {
    printf("Enter elements of Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void displayMatrix(int mat[10][10], int rows, int cols, char name) {
    printf("Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int addMatrices(int A[10][10], int B[10][10], int C[10][10], int m1, int n1, int m2, int n2) {
    if (m1 != m2 || n1 != n2) {
        printf("Addition not possible: Dimensions do not match.\n");
        return 0;
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return 1;
}
int multiplyMatrices(int A[10][10], int B[10][10], int C[10][10], int m1, int n1, int m2, int n2) {
    if (n1 != m2) {
        printf("Multiplication not possible: Columns of A must match rows of B.\n");
        return 0;
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return 1;
}
int main() {
    int A[10][10], B[10][10], C[10][10];
    int m1, n1, m2, n2;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &m2, &n2);
    acceptMatrix(A, m1, n1, 'A');
    acceptMatrix(B, m2, n2, 'B');
    displayMatrix(A, m1, n1, 'A');
    displayMatrix(B, m2, n2, 'B');
    if (addMatrices(A, B, C, m1, n1, m2, n2)) {
        printf("Result of A + B:\n");
        displayMatrix(C, m1, n1, 'C');
    }
    if (multiplyMatrices(A, B, C, m1, n1, m2, n2)) {
        printf("Result of A x B:\n");
        displayMatrix(C, m1, n2, 'C');
    }
    return 0;
}