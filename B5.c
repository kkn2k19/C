/*Write a program that reads two numbers and divide the first number by second number. 
If the division not possible print "Division not possible."*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Provide 2 integer numbers: ");
    scanf ("%d%d", &a, &b);
    c= a%b;
    if (c==0)
    {
        printf ("when %d is divided by %d the value is : %d", a,b, a/b);
    }
    else 
    {
        printf ("Division not possible");
    }
    return 0;
}