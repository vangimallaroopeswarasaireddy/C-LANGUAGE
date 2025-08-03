//ch.sc.u4cse24050
#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

// Function to accept matrix
void acceptMatrix(int A[SIZE][SIZE], int n) {
    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int A[SIZE][SIZE], int n) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

// Check if symmetric
bool isSymmetric(int A[SIZE][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i])
                return false;
        }
    }
    return true;
}

// Calculate trace
int trace(int A[SIZE][SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }
    return sum;
}

// Check upper triangular
bool isUpperTriangular(int A[SIZE][SIZE], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i][j] != 0)
                return false;
        }
    }
    return true;
}

// Check lower triangular
bool isLowerTriangular(int A[SIZE][SIZE], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i][j] != 0)
                return false;
        }
    }
    return true;
}

// Check identity matrix
bool isIdentityMatrix(int A[SIZE][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0))
                return false;
        }
    }
    return true;
}

// Main menu-driven function
int main() {
    int A[SIZE][SIZE], n, choice;

    printf("Enter the order of the square matrix (max 10): ");
    scanf("%d", &n);

    acceptMatrix(A, n);
    displayMatrix(A, n);

    do {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Check if Symmetric\n");
        printf("2. Display Trace\n");
        printf("3. Check if Upper Triangular\n");
        printf("4. Check if Lower Triangular\n");
        printf("5. Check if Identity Matrix\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isSymmetric(A, n))
                    printf("The matrix is Symmetric.\n");
                else
                    printf("The matrix is NOT Symmetric.\n");
                break;
            case 2:
                printf("Trace of the matrix = %d\n", trace(A, n));
                break;
            case 3:
                if (isUpperTriangular(A, n))
                    printf("The matrix is Upper Triangular.\n");
                else
                    printf("The matrix is NOT Upper Triangular.\n");
                break;
            case 4:
                if (isLowerTriangular(A, n))
                    printf("The matrix is Lower Triangular.\n");
                else
                    printf("The matrix is NOT Lower Triangular.\n");
                break;
            case 5:
                if (isIdentityMatrix(A, n))
                    printf("The matrix is an Identity Matrix.\n");
                else
                    printf("The matrix is NOT an Identity Matrix.\n");
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}