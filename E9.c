/*
9. Draw the triangle up to nth term
4444
333
22
1
*/

#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}