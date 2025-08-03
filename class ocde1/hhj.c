//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int A[10][10], B[11][11];
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    // Accept matrix A
    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int totalSum = 0;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            B[i][j] = A[i][j];
            rowSum += A[i][j];
        }
        B[i][n] = rowSum;
        totalSum += rowSum;
    }
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        B[m][j] = colSum;
    }
    B[m][n] = totalSum;
    printf("\nResultant (%d x %d) Matrix:\n", m + 1, n + 1);
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}