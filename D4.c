/*
Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, i, j, fact;
    float sum = 1.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 2, j = 1; j <= n; i += 2, j++)
    {
        fact = 1;
        for(int k = 1; k <= i; k++)
        {
            fact *= k;
        }
        if(j % 2 == 0)
            sum -= (pow(x, i) / fact);
        else
            sum += (pow(x, i) / fact);
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}