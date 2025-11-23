#include <stdio.h>

void calculateDiagonalSums(int mat[][10], int n) {

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        // Main diagonal elements have i == j
        mainDiagonalSum += mat[i][i];

        // Secondary diagonal elements have i + j == n - 1
        secondaryDiagonalSum += mat[i][n - 1 - i];
    }

    printf("Sum of Main Diagonal Elements: %d\n", mainDiagonalSum);
    printf("Sum of Secondary Diagonal Elements: %d\n", secondaryDiagonalSum);
}

int main() {
    int n;
    printf("AMRITA and 125113019\n");
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    // Declare a matrix with a maximum size (e.g., 10x10)
    int matrix[10][10]; 

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateDiagonalSums(matrix, n);

    return 0;
}
