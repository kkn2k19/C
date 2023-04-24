/*
Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Harmonic Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("1/%d + ", i);
        sum += 1.0/i;
    }

    printf("\nSum of the Harmonic Series up to %d terms: %f\n", n, sum);

    return 0;
}