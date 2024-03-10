#include <stdio.h>

int main ()
{
    int i, n, r, d;
    printf("Provide a number : ");
    scanf("%d", &n);
    r=0;                            //for sum of digits case just put (s=0) in place of r
    for (i=n; i>0; i=i/10)
    {
        d=i%10;
        r=r*10+d;                   // for sum of digits cas put s=s+d;  where reverse of a number is same as
    }                              // original number then it is palindrome number
    printf("the reverse of the number %d is %d", n, r);
    return 0;
}