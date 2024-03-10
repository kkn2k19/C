//Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main () 
{
  int i; 
  int n;
  int sum = 0;
  printf("Enter n : ");
  scanf("%d", &n);
  i = 1;
  while (i <= n) {
    sum = sum + i;
    i++;
  }
  printf("Sum of first %d natural numbers = %d\n", n, sum);
}
