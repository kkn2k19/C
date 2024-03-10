/*
Use the library functions to calculate the area of a square with side a.
*/

#include <stdio.h>
void area (int s);

int main () 
{
  int s;
  printf("Enter Side Length : ");
  scanf("%d", &s);
  area(s);
  return 0;
}

void area (int s) 
{
  int Area = s*s;
  printf("Area : %d\n", Area);
}
