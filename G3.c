/*
Write a program in C to find transpose of a given matrix.
*/

#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Input the rows and columns of the matrix: ");
  scanf("%d %d", &r, &c);
  printf("\nInput elements in the first matrix:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element - [%d],[%d]: ", i, j);
    scanf("%d", &a[i][j]);
  }
  printf("\nThe Original matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}