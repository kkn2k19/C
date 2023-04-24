/*
Write a C program to find the Armstrong number for a given range of number.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, i, num, digit, sum;

    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++)
    {
        num = i;
        sum = 0;

        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }

    return 0;
}