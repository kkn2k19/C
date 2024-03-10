/*
Which of the following is invalid in C?
(i)   int a; b=a;
(ii)  int v = 3^3;
(iii) char dt = '21 Dec 2020';
*/

#include <stdio.h>

int main()
{
    int a; b=a;
    printf("%d %d", a, b);
    int v = 3^3;
    printf("%d", v);
    char dt = '21 Dec 2020';
    printf("%c", dt);
}


here option 1 is wrong as b is not declared.
