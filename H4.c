/*
Write a program in C to take one Matrix of size N X N as input. Pass that Matrix in a
function, named as makeDiagonalZero(). This function will assign 0 to all diagonal
elements of the matix. Print the Original & modified Matrix.
*/

#include <stdio.h>

void makeDiagonalZero(int matrix[][100], int size) {
    for (int i = 0; i < size; i++) {
        matrix[i][i] = 0;  // Assigning 0 to diagonal elements
    }
}

int main() {
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int matrix[100][100];
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    makeDiagonalZero(matrix, size);
    printf("\nModified Matrix (Diagonal Elements as 0):\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}