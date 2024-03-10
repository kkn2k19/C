//Write a program using functions to find average of three numbers.

#include <stdio.h>
void average (int a, int b, int c);

int main () 
{
  int a, b, c;
  printf("Enter three numbers : ");
  scanf("%d %d %d", &a, &b, &c);
  average(a, b, c);
  return 0;
}

void average (int a, int b, int c) 
{
  int average = (a+b+c)/3;
  printf("Average : %d\n", average);
}
