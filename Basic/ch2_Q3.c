/*
Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>

int main()
{
  int n;
  printf("Provide a number : ");
  scanf("%d", &n);
  if (n%97==0) {
    printf("%d is Divisible by 97.\n", n);
  }
  else {
    printf("%d is not Divisible by 97.\n", n);
  }
}
