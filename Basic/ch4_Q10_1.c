//Write a program to check whether a given number is prime or not using for loop.

#include <stdio.h>

int main () 
{
  int i;
  int n;
  int c = 0;
  printf("Enter n : ");
  scanf ("%d", &n);
  for (i = 2; i < n; i++) {
    if (n%i == 0) {
      c++;
      break;
    }
  }
  if (c == 0) {
    printf("%d is a Prime Number.\n", n);
  }
  else {
    printf("%d is not a Prime Number.\n", n);
  }
  return 0;
}
