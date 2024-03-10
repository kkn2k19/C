/*
Write a C program to check whether a triangle can be formed by the given value for the
angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid.
*/

#include <stdio.h>

int main () 
{
  int a, b, c;
  printf("Provide all angles of triangle : ");
  scanf ("%d%d%d", &a, &b, &c);
  if (a + b + c == 180) {
    if(a < 90 && b < 90 && c < 90) {
      printf("Acute Angled Triangle.\n");
    }
    else if (a == 90 || b == 90 || c == 90){
      printf("Right Angled Triangle.\n");
    }
    else {
      printf("Obtuse Angle Triangle.\n");
    }
  }
   else {
      printf("Triangle not possible.\n");
   }
  return 0;
}
