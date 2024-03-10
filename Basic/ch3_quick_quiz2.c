/*
Write a program to find grade of a student given his marks based on below :
90 - 100   ---   A
80 - 90    ---   B
70 - 80    ---   C
60 - 70    ---   D
<60        ---   F
*/

#include <stdio.h>

int main ()
{
  int marks;
  printf("Provide marks : ");
  scanf("%d", &marks);
  switch (marks){
    case (marks > 90 && marks <= 100):
    printf("Grade : A\n");
    break;
    case (marks > 80 && marks <= 90):
    printf("Grade : B\n");
    break;
    case (marks > 70 && marks <= 80):
    printf("Grade : C\n");
    break;
    case (marks > 60 && marks <= 70):
    printf("Grade : D\n");
    break;
    case (marks >= 0 && marks <= 60):
    printf("Grade : F\n");
    break;
    default case : 
    printf("Provide marks between 0 to 100\n");
  }
  return 0;
}
