/*
Write a program in C to take a number & find its factorial.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int f=1;
    int i;
    for (i=1; i<=n; i++) {
        f=f*i;
    }
    printf("Factorial of %d : %d\n", n, f);
    return 0;
}
