/*Take 3 sides of a triangle and check whether the triangle is equilateral, isoceles or scalene. Provide necessary messages.*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf ("Provide all sides of a triangle:");
    scanf ("%d %d %d", &a, &b, &c);
    if (a==b && a==c && b==c)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf ("Scalene Triangle\n");
    }
    else 
    {
        printf("Isoceles Triangle\n");
    }
    return 0;
}