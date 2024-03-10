/*
Write a program to create an array of 10 integers and store multiplication table of a number given by user in it.
*/

#include <stdio.h>

int main ()
{
  int i;
  int arr[30];
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  for (i = 0; i < 10; i++) {
    arr[i] = n*(i+1);
  }
  printf("Table of %d : \n", n);
  for (i = 0; i < 10; i++) {
    printf("%d x %d : %d\n", n, i+1, arr[i]);
  }
  return 0;
}
