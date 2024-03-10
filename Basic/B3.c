/*
Take the three sides of a Triangle and check whether the triangle is equilateral, isosceles or
scalene. Provide necessary messages.
*/

#include <stdio.h>

int main () 
{
  int a, b, c;
  printf("Enter Sides of a Triangle : ");
  scanf("%d,%d,%d", &a, &b, &c);
  if (a+b > c && b+c > a && c+a > b) {
    if (a == b && b == c && c == a) {
      printf("Equilateral Triangle.\n");
    }
    else if (a != b && b != c && c != a) {
      printf("Scalene Triangle.\n");
    }
    else {
      printf("Isoceles Triangle.\n");
    }
  }
  else {
    printf("Triangle not possible.\n");
  }
  return 0;
}
