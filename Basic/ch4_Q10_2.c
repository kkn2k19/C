//Write a program to check whether a given number is prime or not using while loop.

#include <stdio.h>

int main () 
{
  int i;
  int n;
  int c = 0;
  printf("Enter n : ");
  scanf ("%d", &n);
  i = 2;
  while (i < n) {
    if (n%i == 0) {
      c++;
      break;
    }
    i++;
  }
  if (c == 0) {
    printf("%d is a Prime Number.\n", n);
  }
  else {
    printf("%d is not a Prime Number.\n", n);
  }
  return 0;
}
