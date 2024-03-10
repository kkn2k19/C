/*
Write a program in C to display the multiplication table vertically from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int i, j;
    for (i=1; i<=n; i++) {
        for (j=1; j<=10; j++) {
            printf("%d X %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}
