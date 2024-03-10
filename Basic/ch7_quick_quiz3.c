/*
Create a 2D array by taking input from the user. Write a display function to print the content of this 2D array on the screen.
*/

#include <stdio.h>

int main ()
{
  int a, b, r, c;
  int arr[30][30];
  printf("Enter size of rows and columns of array : ");
  scanf("%d %d", &r, &c);
  printf("Enter elements of the array : \n");
  for (a = 0; a < r; a++) {
    for (b = 0; b < c; b++) {
      printf("Element - [%d][%d] : ", a, b);
      scanf("%d", &arr[a][b]);
    }
  }
  printf("Array entered : \n");
  for (a = 0; a < r; a++) {
    for (b = 0; b < c; b++) {
      printf("%d ", arr[a][b]);
    }
    printf("\n");
  }
  return 0;
}
