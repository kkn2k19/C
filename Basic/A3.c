/*
WAP in C to accept two integer numbers with proper message. Perform different
operations using the following operators : + , - , *, / , %
Expected Output:
First Number = 15
Second Number = 4
Summation = 19 
Subtraction = 11
Multiplication = 60 
Division = 3
Remainder = 3 (Note: Assuming 15 & 4 have been taken as input)
*/

#include <stdio.h>

int main () 
{
  int a = 15;
  int b = 4;
  printf("First Number = %d\n", a);
  printf("Second Number = %d\n", b);
  printf("Summation = %d\n", a+b);
  printf("Subtraction = %d\n", a-b);
  printf("Multiplication = %d\n", a*b);
  printf("Division = %d\n", a/b);
  printf("Remainder = %d\n", a%b);
  return 0;
}
