/*
Write a c program to find out the sum of an A.P. series.
*/

#include <stdio.h>

int main() {
    int a, n, d, sum;

    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &a);

    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n);

    printf("Input the common difference of A.P. series: ");
    scanf("%d", &d);

    sum = (n * (2 * a + (n - 1) * d)) / 2;

    printf("The Sum of the A.P. series are:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d", a);
        if (i < n) {
            printf(" + ");
        }
        a += d;
    }

    printf(" = %d\n", sum);

    return 0;
}
