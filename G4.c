/*
Write a program in C to find sum of Right diagonal, Left diagonal elements of a matrix.
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
  int i, j, n, a[10][10], s=0;
  printf("Input size of the matrix : \n");
  scanf("%d", &n);
  printf("Input elements in the matrix: \n");
  for (i=0; i<n; i++){
    for (j=0; j<n; j++){
      printf("Enter element - [%d],[%d] : ", i, j);
      scanf("%d", &a[i][j]);
  }
}
printf("The Original matrix is : \n");
for (i=0; i<n; i++){
  for (j=0; j<n; j++){
    printf("%d ", a[i][j]);
  }
  printf("\n");
}
for (i=0; i<n; i++){
  for(j=0; j<n; j++){
    if (i==j){
      s=s+a[i][j];
    }
  }
}
printf("Addition of right diagonal elements is : %d\n", s);
int t=0;
for (i=0; i<n; i++){
  t=t+a[i][n-i-1];
}
printf("Addition of left diagonal elements is : %d\n", t);

}