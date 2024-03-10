/*
Try problem 3 using call by value and verify that it doesn't change the value of the said variable.
*/

#include <stdio.h>
int ten_times(int n);

int main ()
{
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  ten_times(n);
  printf("n after function call : %d", n);  //here n remains same.
  return 0;
}

int ten_times(n)
{
  printf("Ten time of %d : %d\n", n, 10*n);
}
