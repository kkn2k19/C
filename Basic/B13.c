/*
Write a program to input three numbers (positive or negative). If they are unequal then
display the greatest number otherwise, display they are equal. The program also displays
whether the numbers entered by the user are 'All positive', 'All negative' or 'Mixed
numbers'.
Sample Input: 56, -15, 12
Sample Output:
The greatest number is 56
Entered numbers are mixed numbers. 
*/

#include <stdio.h>

int main () 
{
  int a, b, c;
  int gr;           //greatest
  printf("Provide Three Numbers negative or positive : ");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) {
    gr = a;
  }
  else if (b > a && b > c) {
    gr = b;
  }
  else {
    gr = c;
  }
  printf("Greatest : %d\n", gr);
  if (a > 0 && b > 0 && c > 0) {
    printf("All are Positive.\n");
  }
  else if (a < 0 && b < 0 && c < 0) {
    printf("All are negative.\n");
  }
  else {
    printf("Mixed numbers.\n");
  }
  return 0;
}
