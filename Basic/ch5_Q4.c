//Write a program using recursion to calculate nth element of fibonacci series.

#include <stdio.h>
int fib_nth_term(int n);

int main () 
{
  int n, t; 
  printf("Enter n : ");
  scanf("%d", &n);
  t = fib_nth_term(n);
  printf("%dth term : %d", n, t);
  return 0;
}

int fib_nth_term(int n) {
  int k;
  if (n==0 || n==1)
  {
    return n;
  }
  else {
    k = fib_nth_term(n-1) + fib_nth_term(n-2);
    return k;
  }
}
