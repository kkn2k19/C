/*
Write a program in C to display all Prime Fibonacci numbers within a Fibonacci series of
nth Term.
*/

#include <stdio.h>

int isPrime(int num) // function to check if a number is prime or not
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i, first = 0, second = 1, next, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime Fibonacci numbers in the series up to %dth term are: ", n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", first);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;

        if (isPrime(next) && next < n) // check if the next number is prime and less than n
        {
            printf("%d ", next);
            count++;
        }
    }

    if (count == 0) // if no prime Fibonacci numbers are found
    {
        printf("None");
    }

    return 0;
}