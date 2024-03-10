/*
Write a program containing a function which reverses the array passed to it.
*/

#include <stdio.h>

int main ()
{
  int i;
  int n;
  int arr1[30], arr2[30];
  printf("Enter size of array : ");
  scanf("%d", &n);
  printf("Enter elements of the array : \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }
  printf("Array : ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr1[i]);
  }
  reverse(arr1, arr2, n);
}

void reverse (int arr1[], int arr2[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    arr2[i] = arr1[n-i-1];
  }
  printf("\nReversed Array : \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr2[i]);
  }
}
