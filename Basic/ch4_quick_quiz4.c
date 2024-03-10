//Write a program to print n natural numbers in reverse order.

#include <stdio.h>

int main() 
{
  int i;
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  i = n;
  while (i > 0) {
    printf("%d\n", i);
    i--;
  }
  return 0;
}
