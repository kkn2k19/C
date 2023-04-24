/*
Write a program in C to display the n terms of the series and their sum.
[1+2+3+5+7+11+13+17+19….. nth term].
*/

#include <stdio.h>

int main() {
    int n, count = 0, i = 2, j = 1, sum = 1, flag;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The series is: 1");

    while (count < n - 1) {
        flag = 0;

        for (int k = 2; k <= i / 2; k++) {
            if (i % k == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf(" + %d", i);
            sum += i;
            count++;
        }

        i++;
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
