//A program to demonstrate pointers

#include <stdio.h>

int main () 
{
  int i = 8;
  int*j;
  j = &i;
  printf("Address of i = %u\n", &i);           //6422044
  printf("Address of i = %u\n", j);            //6422044
  printf("Address of j = %u\n", &j);           //6422032
  printf("value of i = %d\n", i);              //8
  printf("value of i = %d\n", *(&i));          //8
  printf("value of i = %d\n", *j);             //8
  return 0;
}

//This program sums it all. If you understand it, you have got the idea of pointers.
