/*
Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.
*/

NOT COMPLETED YET!!!!


#include <stdio.h>

int main () 
{
  int i, j;
  int n1, n2, n3;
  int arr[3][10];
  n1 = 2;
  n2 = 7;
  n3 = 9;
  printf("Multiplication Tables : \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 10; j++) {
      if (i == 0){
      arr[i][j] = (j+1)*2;
      }
      else if (i == 1) {
        arr[i][j] = (j+1)*7;
      }
      else {
        arr[i][j] = (j+2)*9;
      }
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 10; j++) {
      if (i == 0){
        printf("%2d x %2d = %2d\n", 2, (j+1), arr[i][j];
      }
      else if (i == 1) {
        printf("%2d x %2d = %2d\n", 7, (j+1), arr[i][j];;
      }
      else {
        printf("%2d x %2d = %2d\n", 9, (j+1), arr[i][j];;
      }
    }
  }
}
