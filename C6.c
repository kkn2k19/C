/*Write a program in C to take a number & find its factorial.
Test Data :
Enter a number: 5
Expected Output :
Factorial of 5 is =120*/

#include <stdio.h>

int main()
{
    int n, i, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = 1;
    for (i = 1; i <= n; ++i)
    {
        f=f*i;
    }
    printf("Factorial of %d = %d", n, f);
    return 0;
}
