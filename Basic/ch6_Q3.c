/*
  Write a program to change the value of a variable to ten times of its current value.
  Write a function and pass the value by reference.
*/

#include <stdio.h>
int ten_times(int *i);

int main ()
{
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int i;
  i = &n;
  ten_times(i);
  return 0;
}

int ten_times(int *i)
{
  int j;
  j = *i;
  printf("Ten time of %d : %d\n", *i, 10*j);
}
