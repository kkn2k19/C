/*
Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
*/

#include <stdio.h>

int main() 
{
  int year;
  printf("Provide year : ");
  scanf("%d", &year);
  if (year % 4 == 0){
    if (year % 100 == 0){
      if(year % 400 == 0){
        printf("Leap Year.\n");
      }
      else {
        printf("Not a Leap Year.\n");
      }
    }
    else {
      printf("Leap Year.\n");
    }
  }
  else {
    printf("Not a Leap Year.\n");
  }
  return 0;
}
