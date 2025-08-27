#include <stdio.h>

void main()
{
    int i;
    int n = 5;
    for (i = 0; i < n; i++)
    {
        printf("Hello i\t");
    }
    printf("\n");
    int j = 0;
    while (j < n)
    {
        printf("Hello j\t");
        j += 1;
    }
    printf("\n");
    int k = 0;
    do
    {
        printf("Hello k\t");
        k += 1;
    } while (k < n);
}