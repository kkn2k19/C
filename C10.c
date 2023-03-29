/*Write a program in C to display the first n terms of Fibonacci series.
Fibonacci series is : 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34*/


#include <stdio.h>

int main ()
{
  int a, b, i, n, result;
  printf("provide number : ");
  scanf("%d", &n);
  a=0;
  b=1;
  for (i=1; i<=n; i++)
  {
    printf("%d", a);
    result = a+b;
    a=b;
    b=result;
  }
  return 0;
}
