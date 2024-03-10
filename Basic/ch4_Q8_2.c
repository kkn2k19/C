//Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main () 
{
  int i;
  int f = 1;
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  if (n == 0 || n == 1) 
  {
    printf("factorial : 1\n");
  }
  else {
    i = 1;
    while (i <= n) {
      f = f*i;
      i++;
    }
    printf("Factorial : %d\n", f);
  }
  return 0;
}
