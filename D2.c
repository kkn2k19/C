/*Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999...].*/


#include <stdio.h>

int main()
{
    int n, i;
    long int term = 9, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%ld + ", term);
        sum += term;
        term = term * 10 + 9;
    }

    printf("\nSum of the series up to %d terms: %ld\n", n, sum);

    return 0;
}