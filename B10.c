/*Write a C program to check whether a triangle can be formed by the given value for the
angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid*/

#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Provide All angles of a triangles in integer values: ");
    scanf("%d%d%d", &a,&b,&c);
    if ((a+b+c)==180)
    {
        printf("Yes triangle possible.");
    }
    else 
    {
        printf("triangle not possible.");
    }
    return 0;
}