//Write a program to print natural numbers from 10 to 20 when initial loop counter i is initialized to 0.

#include <stdio.h>

int main() 
{
  int i = 0;
  while (i <= 10) {
    printf("%d\n", i+10);
    i++;
  }
}
