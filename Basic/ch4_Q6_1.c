//Write a program to sum first ten natural numbers using for loop.

#include <stdio.h>

int main () 
{
  int i; 
  int n;
  int sum = 0;
  printf("Enter n : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++){
    sum = sum + i;
  }
  printf("Sum of first %d natural numbers = %d\n", n, sum);
}
