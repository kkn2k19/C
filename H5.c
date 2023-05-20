/*
Write a program in C to take one Matrix of size M X N as input and Sparse Percentage
value as input. Pass that Matrix in a function, named as isSparseMatrix(). This function
will check whether it is a sparse matrix or not depending on Sparse Percentage value.If
that matrix holds more percentage of ZERO values than Sparse Percentage value then
that matrix is known as sparse matrix. Print the Original with Percentage of ZERO
value.
*/

#include <stdio.h>

int isSparseMatrix(int matrix[][100], int rows, int columns, int sparsePercentage) {
    int totalElements = rows * columns;
    int zeroCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    int zeroPercentage = (zeroCount * 100) / totalElements;
    if (zeroPercentage > sparsePercentage) {
        return 1;  // Sparse matrix
    } else {
        return 0;  // Not a sparse matrix
    }
}
int main() {
    int rows, columns, sparsePercentage;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the sparse percentage value: ");
    scanf("%d", &sparsePercentage);
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int isSparse = isSparseMatrix(matrix, rows, columns, sparsePercentage);
    printf("\nPercentage of Zero Values: %d%%\n", isSparse);
    if (isSparse) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }
    return 0;
}
