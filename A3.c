/* write a program in c to accept two integer numbers with proper message.
Perform different operations using the following operators : '+,-,*,/,%'

Expected output:
    First Number- 15
    Second Number- 4
    Summation- 19
    Subtraction- 11
    Multiplication- 60
    Division- 3
    Remainder- 3
    */

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    a=15;
    b=4;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("Summation=%d\nSubtraction=%d\nMultiplication=%d\nDivision=%d\nRemainder=%d", c,d,e,f,g);

}