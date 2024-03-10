/*
Write  a program using a function which calculates the sum  and average of two numbers. 
Use pointers and print the values of sum and average in main().
*/

#include <stdio.h>

int main() 
{
  int a, b;
  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);
  int s = sum(a,b);
  int av = average(a,b);
  printf("SUM : %d\n", *(&s));
  printf("AVERAGE : %d\n", *(&av));
  return 0;
}

int sum (int a, int b) 
{
  int s;
  s = a + b;
  return s;
}

int average (int a, int b)
{
  int av;
  av = (a + b)/2;
  return av;
}
