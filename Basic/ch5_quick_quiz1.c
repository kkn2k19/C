/*
Write a program with three functions 
1. Good Morning function which prints "Good Morning".
2. Good Afternoon function which prints "Good Afternoon".
3. Good Night function which prints "Good Night".

main() should call all of these in order 
1 -> 2 -> 3
*/

#include <stdio.h>
void gm();
void ga();
void gn();

int main () 
{
  gm();
  ga();
  gn();
  return 0;
}

void gm() 
{
  printf("GOOD MORNING\n");
}

void ga()
{
  printf("GOOD AFTERNOON\n");
}

void gn() 
{
  printf("GOOD NIGHT\n");
}
