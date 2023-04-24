/*
Write a program in C to display the n terms of harmonic series and their sum.
[x - x^3 + x^5 + ......nth term].
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float x, term, sum = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The series is: ");

    for (i = 1; i <= n; i++)
    {
        term = pow(-1, i+1)  pow(x, 2i-1);
        printf("%f ", term);
        sum += term;
    }

    printf("\nThe sum of the series is: %f", sum);

    return 0;
}