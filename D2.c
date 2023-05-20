/*Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999...].*/


#include <stdio.h>

int main()
{
    int n, i;
    int a = 9, s = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d", a);
        if (i<n)
        printf(" + ");
        s += a;
        a = a * 10 + 9;
    }

    printf("\nSum of the series up to %d terms: %d\n", n, s);

    return 0;
}
