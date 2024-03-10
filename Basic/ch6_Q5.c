/*
Write a program to print the value of a variable i by using "Pointer to Pointer" type of variable.
*/

#include <stdio.h>

int main ()
{
  int **k;
  printf("Enter n : ");
  scanf("%d", &k);
  printf("VALUE : %d", *(&k));
  return 0;
}
