/*Write a C program to read the coordinates (x,y) in Cartesian system.
Find the quadrant to which it belongs (Quadrant-I, Quadrant-II, Quadrant-III, Quadrant-IV).*/

#include <stdio.h>

int main ()
{
    int x,y;
    printf ("Give value of x and y:");
    scanf("%d%d", &x, &y);
    if (x>0 && y>0)
    {
        printf("Quadrant-I");
    }
    else if (x<0 && y>0)
    {
        printf("Quadrant-II");
    }
            else if (x<0 && y<0)
            {
                printf("Quadrant-III");
            }
                    else if (x>0 && y<0)
                    {
                        printf("Quadrant-IV");
                    }
    return 0;
}