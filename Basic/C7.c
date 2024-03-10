/*
Write a program in C to take a number & find all the factors of it.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int i;
    printf("Factors of %d : ", n);
    for (i=1; i<=n; i++) {
        if ((n%i)==0) {
            printf("[%d] ", i);
        }
    }
    return 0;
}
