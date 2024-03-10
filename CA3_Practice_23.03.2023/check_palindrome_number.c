#include <stdio.h>

int main ()
{
    int i, n, r, d;
    printf("Provide a number : ");
    scanf("%d", &n);
    r=0;                            
    for (i=n; i>0; i=i/10)
    {
        d=i%10;
        r=r*10+d;
    }
    if (n==r)
    {
        printf("%d is a palindrome number.", n);
    }
    else {
        printf("%d is not a palindrome number.", n);
    }
    return 0;
}