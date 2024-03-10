#include <stdio.h>

int main ()
{
    int i, n, s, d;
    printf("Provide a number : ");
    scanf("%d", &n);
    s=0;                            
    for (i=n; i>0; i=i/10)
    {
        d=i%10;
        s=s+d;                  
    }                              
    printf("the sum of the digits of the number %d is %d", n, s);
    return 0;
}