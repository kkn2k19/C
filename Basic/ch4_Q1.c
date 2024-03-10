//Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main () 
{
  int i;
  int n;
  printf("Enter n : ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("%d x %d = %d\n", n, i, n*i);
  }
  return 0;
}
