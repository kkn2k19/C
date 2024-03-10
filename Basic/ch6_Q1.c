//Write a program to print the address of a variable. use this address to get the value of this variable.

#include <stdio.h>

int main () 
{
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  printf("Address of %d : %d\n", n, &n);
  printf("Value of %d : %d", n, *(&n));
  return 0;
}
