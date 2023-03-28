/*Write a c program to check whether a given number is a perfect number or not.
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
Input the number : 6
Expected Output :
The positive divisor : 1 2 3
The sum of the divisor is : 6
So, the number is perfect.*/


#include <stdio.h>

int main ()
{
    int i, n, s;
    printf("Provide a Number : ");
    scanf ("%d", &n);
    printf("The Positive Divisor : ");

    for (i=1; i<=n; i++)
    {
        s=0;
        if (n%i==0)
        {
            printf("%d ", i);
            s=s+i;
        }
    }
    printf("\nThe sum of all the Divisors is : %d\n", s);
    if (n==s)
    {
        printf("The number is a perfect number.\n");
    }
    else 
    {
        printf ("The number is not a perfect number.\n");
    }
}