/*Write a program in C to find sum of rows and columns of a Matrix.*/

#include<stdio.h>
#include<stdlib.h>

void main(){
  int i, j, n, a[10][10], s=0;
  printf("Input size of the square matrix : \n");
  scanf("%d", &n);
  printf("Input elements in the first matrix: \n");
  for (i=0; i<n; i++){
    for (j=0; j<n; j++){
      printf("Enter element - [%d],[%d] : ", i, j);
      scanf("%d", &a[i][j]);
  }
}
printf("The Matrix is : \n");
for (i=0; i<n; i++){
  for (j=0; j<n; j++){
    printf("%d ", a[i][j]);
  }
  printf("\n");
}
printf("The sum of rows and columns of the matrix is : %d\n");
for (i=0; i<n; i++){
  s=0;
  for (j=0; j<n; j++){
    printf("%d ", a[i][j]);
    s=s+a[i][j];
  }
  printf(" = %d", s);
  printf("\n");
}
printf("-- --");
printf("\n");
for (i=0; i<n; i++){
    s=0;
    for(j=0; j<n; j++){
        s=s+a[j][i];
    }
    printf("%d ", s);
}
}