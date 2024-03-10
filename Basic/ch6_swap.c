//this function is capable of swapping the values passed to it. if a = 3 and b = 4 before a call to swap(a,b), a = 4 and b=3 after calling swap.

NOT COMPLETED YET!!!


#include <stdio.h>
int swap(int a, int b);

int main () 
{
  int a = 3;
  int b = 4;
  swap (a, b);
  return 0;
}

int swap (int *x, int *y) 
{
  int temp;
  temp = *y;
  *x = *y;
  *y = temp;
  printf("a = %d\nb = %d\n", *x, *y);
}
