//Write a program to print first n natural numbers using do - while loop.

#include <stdio.h>

int main() 
{
  int i;
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= n);
  return 0;
}
