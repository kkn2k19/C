/*
Write a C program to calculate area of a rectangle 
  (a) Using hard coded inputs 
  (b) Using Inputs supplied by the user.
*/

#include <stdio.h>

int main ()
{
  int l, b;
  printf("Provide Length and Breadth of Rectangle : ");
  scanf("%d %d", &l, &b);
  float area = l*b;
  printf("Area of Rectangle : %f\n", area);
}
