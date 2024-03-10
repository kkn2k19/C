/*
Write a C program to check whether a number is ODD or EVEN.
Test Data :
25
Expected Output :
ODD 
*/

#include <stdio.h>

int main ()
{
  int a;
  printf("Provide a number : ");
  scanf("%d", &a);
  if (a%2 == 0) {
    printf("EVEN\n");
  }
  else {
    printf("ODD\n");
  }
  return 0;
}
