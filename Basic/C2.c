/*
Write a program in C to display n terms of natural number and their sum and average.
Test Data :
7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
The Average of Natural Number upto 7 terms : 4.000
*/

#include <stdio.h>

int main () 
{
  int n;
  int i;
  int sum = 0;
  float avg = 0.0;
  printf("Provide n : ");
  scanf("%d", &n);
  printf("The first %d natural number is : ", n);
  for (i = 0; i < n; i++) {
    printf("%d ", i+1);
    sum = sum + (i+1);
  }
  avg = sum/7.0;
  printf("The sum of Natural Number upto %d terms : %d\n", n, sum);
  printf("The Average of Natural Number upto %d terms : %f\n", n, avg);
  return 0;
}
