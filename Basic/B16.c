/*
Write a program to accept a number and check whether the number is divisible by 3 as
well as 5. Otherwise, decide:
(a) Is the number divisible by 3 and not by 5?
(b) Is the number divisible by 5 and not by 3?
(c) Is the number neither divisible by 3 nor by 5?
The program displays the message accordingly. 
*/

#include <stdio.h>

int main () 
{
  int a;
  printf("Provide a Number : ");
  scanf("%d", &a);
  if (a%3 == 0 && a%5 == 0) {
    printf("%d is divisible by both 3 as well as 5\n", a);
  }
  else if (a%5 == 0) {
    printf("%d is divisible by 5 and not by 3\n", a);
  }
  else if (a%3 == 0) {
    printf("%d is divisible by 3 and not by 5\n", a);
  }
  else {
    printf("%d is not divisible by both 3 as well as 5\n", a);
  }
  return 0;
}
