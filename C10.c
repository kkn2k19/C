/*Write a program in C to display the first n terms of Fibonacci series.
Fibonacci series is : 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34*/


#include <stdio.h>

int main()
{
    int i, n, f;
    printf("Provide a number : ");
    scanf("%d", &n);
    f=1;
    for (i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("Factorial of %d = %d", n, f);
    return 0;
}