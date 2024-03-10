//Write a program to calculate the sum of the numbers occuring in the multiplication table of 8. (Condition 8x1 to 8x10).

#include <stdio.h>

int main ()
{
  int i;
  int n = 8;
  for (i = 1; i <= 10; i++) {
    printf("%2d x %2d = %3d\n", n, i, n*i);
  }
  return 0;
}
