/*Write a program in C to take a number and check whether it is Prime or not.*/

#include <stdio.h>

int main() 
{
    int n, i, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    c=0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("The number %d is a prime number.", n);
    }
    else
    {
        printf("The number %d is not a prime number.", n);
    }
    return 0;
}
