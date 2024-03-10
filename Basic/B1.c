/*
WAP to take the total marks of a particular student and provide the Grade according to the
following table
 Total Marks       Grade
 Less than 40       Fail
 From 40 to 49       D
 From 50 to 59       C
 From 60 to 69       B
 From 70 to 79       A
 From 80 to 89       E
 From 90 to 100      O 
*/

#include <stdio.h>

int main () 
{
  int marks;
  printf("Enter marks : ");
  scanf("%d", &marks);
  if (marks >= 0 && marks < 40) {
    printf("Grade : Fail");
  }
  else if (marks >= 40 && marks <= 49) {
    printf("Grade : D");
  }
  else if (marks >= 50 && marks <= 59) {
    printf("Grade : C");
  }
  else if (marks >= 60 && marks <= 69) {
    printf("Grade : B");
  }
  else if (marks >= 70 && marks <= 79) {
    printf("Grade : A");
  }
  else if (marks >= 80 && marks <= 89) {
    printf("Grade : E");
  }
  else if (marks >= 90 && marks <= 100) {
    printf("Grade : O");
  }
  else {
    printf("Provide marks in between 0 & 100\n");
  }
  return 0;
}
