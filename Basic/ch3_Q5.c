/*
Write a program to determine whether a character entered by the user is lowercase or not.
*/

#include <stdio.h>

int main () 
{
  char ch;
  printf("Enter a Character : ");
  scanf("%c", &ch);
  if (ch >= 'a' || ch <= 'z') {
    printf("LowerCase Character.\n");
  }
  else {
    printf("Not a lowercase character.\n");
  }
  return 0;
}
