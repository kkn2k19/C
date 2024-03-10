/*
Create an array of 10 numbers.
verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main ()
{
  int i;
  int arr[30];
  int n = 10;
  int *p = &arr;            // &arr or &arr[0] is same both is first element address.
  printf("Enter elements of Array : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nArray : \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\nArray elements address : \n");
  for (i = 0; i < n; i++) {
    printf("%d ", &arr[i]);
  }
  p = p+2;
  printf("\np = %d\n", p);          //YES IT IS POINTING TO 3RD ELEMENT OF THE ARRAY.
  return 0;
}
