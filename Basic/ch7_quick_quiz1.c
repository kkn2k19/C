//Write a program to accept marks of five students in an array and print them to the screen.

#include <stdio.h>

int main ()
{
  int n;
  int k;
  int arr[30];
  printf("Enter Size of the array : ");
  scanf("%d", &n);
  printf("Enter elements of the array : ");
  for (k = 0; k < n; k++)
  {
    scanf("%d", &arr[k]);
  }
  printf("\nArray Entered : ");
  for (k = 0; k < n; k++)
  {
    printf("%d ", arr[k]);
  }
  return 0;
}
