/*
Write a program containing functions which counts the number of positive integers in an array.
*/

#include <stdio.h>

int main ()
{
  int n;
  int i;
  int k;
  int arr[30];
  printf("Enter size of array : ");
  scanf("%d", &n);
  printf("Enter elements of the array : \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  k = count(arr, n);
  printf("No. of Positive Integers : %d\n", k);
}

int count(int arr[], int n) {
  int i;
  int c = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] > 0) {
      c++;
    }
  }
  return c;
}
