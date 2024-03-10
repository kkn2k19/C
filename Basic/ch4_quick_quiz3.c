//write a program to print first n natural numbers using for loop.

#include <stdio.h>

int main () 
{
  int i;
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  return 0;
}
