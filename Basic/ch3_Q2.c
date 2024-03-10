/*
Write a program to find out whether a student is pass or fail; if it requires total 40% and atleast 33% in each subject to pass. 
Assume 3 subjects and take marks as an input from the user.
*/

#include <stdio.h>

int main () {
  float marks1, marks2, marks3;
  printf("Provide marks of all 3 subjects : ");
  scanf("%f %f %f", &marks1, &marks2, &marks3);
  if (((marks1 + marks2 + marks3)/300)*100) >= 40 {
    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33) {
      printf("Pass.\n");
    }
    else {
      printf("Fail.\n");
    }
  }
  else {
    printf("Fail.\n");
  }
  return 0;
}
