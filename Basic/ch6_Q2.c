/*
Write a program having a variable i. Print the address of i.
Pass this variable to a function and print its address. Are these addresses same? why?
*/

#include <stdio.h>
void address (int k);

int main()
{
  int k;
  printf("Enter a number : ");
  scanf("%d", &k);
  printf("Address of %d in main function : %d\n", k, &k);
  address(k);
  return 0;
}

void address (int k)
{
  printf("Address of %d in function call : %d\n", k, &k);
}


//values are not same as both are different function so they  take different place in memory.
