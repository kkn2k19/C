/*
Write a program that reads two numbers and divide the first number by second number. If
the division not possible print "Division not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0
Input two numbers:
x: 21
y: 5
Expected Output: Division not possible
*/

#include <stdio.h>

int main () 
{
  int a, b;
  printf("Enter two numbers : ");
  scanf("%d,%d", a, b);
  if (a%b == 0) {
    printf("RESULT : %2f\n", a/b);
  }
  else {
    printf("Division not possible.\n");
  }
  return 0;
}
