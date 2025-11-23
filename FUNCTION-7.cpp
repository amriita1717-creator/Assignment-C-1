#include <stdio.h>

// Function to input elements of a matrix
void inputMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
	printf("AMRITA and 125113019\n");
    int A[10][10], B[10][10], result[10][10];
    int rows, cols;

    // Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input elements for matrix A
    printf("\nInput for Matrix A:\n");
    inputMatrix(A, rows, cols);

    // Input elements for matrix B
    printf("\nInput for Matrix B:\n");
    inputMatrix(B, rows, cols);

    // Add the matrices
    addMatrices(A, B, result, rows, cols);

    // Display the matrices and the result
    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    printf("\nResultant Matrix (A + B):\n");
    displayMatrix(result, rows, cols);

    return 0;
}
