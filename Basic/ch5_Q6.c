//Write a recursive function to calculate the sum of first n natural numbers.

#include <stdio.h>

int main () 
{
  int n, k;
  printf("Enter n : ");
  scanf("%d", &n);
  k = sum(n);
  printf("Sum of first %d natural numbers : %d.\n", n, k);
  return 0;
}

int sum (int n) 
{
  int s = 0;
  if (n==1)
  {
    return n;
  }
  else {
    s = n + sum(n-1);
    return s;
  }
}
