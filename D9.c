/*
Write a program in C to display the n terms of series and their sum.
[1-12+123-1234+12345 nth term].
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sign = 1;
    int term = 1;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The series is: ");

    for (int i = 1; i <= n; i++) {
        printf("%d", term);
        sum += sign * term;
        term = term * 10 + (i + 1);
        sign = -sign;

        if (i < n) {
            printf(sign > 0 ? " + " : " - ");
        }
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
