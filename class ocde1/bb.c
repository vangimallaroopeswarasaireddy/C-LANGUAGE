//ch.sc.u4cse24050
#include <stdio.h>
void readMatrix(int A[10][10], int m, int n) {
    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}
void transposeMatrix(int A[10][10], int B[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }
}
void displayMatrix(int B[10][10], int m, int n) {
    printf("Transpose of the matrix (Matrix B):\n");
    for (int i = 0; i < n; i++) { // rows become columns
        for (int j = 0; j < m; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[10][10], B[10][10];
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    readMatrix(A, m, n);
    transposeMatrix(A, B, m, n);
    displayMatrix(B, m, n);
    return 0;
}