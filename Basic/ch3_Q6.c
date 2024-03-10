/*
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main() 
{
  int a, b, c, d;
  printf("Enter four numbers : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a > b && a > c && a > d) {
    printf("%d is greatest.\n", a);
  }
  else if (b > a && b > c && b > d) {
    printf("%d is greatest.\n", b);
  }
  else if (c > a && c > b && c > d) {
    printf("%d is greatest.\n", c);
  }
  else {
    printf("%d is greatest.\n", d);
  }
  return 0;
}
