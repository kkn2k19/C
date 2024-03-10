/*
Write a C program that accepts a real number x and prints out the corresponding value of
sin(1/x) using 4-decimal places.
 
Test Data:
Input value of x: .6235
Value of sin(1/x) is 0.9995

Input value of x: 0
Value of sin(1/x) is “Not Possible”
*/

#include <stdio.h>

int main () 
{
  float x;
  printf("Input value of x : ");
  scanf("%f", &x);
  printf("Value of sin(1/x) is %4f\n", sin(1/x));
  return 0;
}
