#include <stdio.h>

void main()
{
    int marks;
    scanf("%d", &marks);
    char grade;
    if (marks >= 90)
        grade = 'A';
    else if (marks >= 75)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else
        grade = 'F';

    printf("Grade : %c", grade);
}