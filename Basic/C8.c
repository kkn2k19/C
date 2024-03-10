/*
Write a c program to check whether a given number is a perfect number or not.
*/

#include <stdio.h>

int main ()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int i;
    int sum=0;
    printf("The Positive Divisor : ");
    for (i=1; i<n; i++) {
        if ((n%i)==0) {
            printf("%d ", i);
            sum=sum+i;
        }
    }
    printf("\nThe Sum of the Divisor is : %d\n", sum);
    if (n==sum) {
        printf("%d is a Perfect Number.\n", n);
    }
    else {
        printf("%d is not a Perfect Number.\n", n);
    }
    return 0;
}
