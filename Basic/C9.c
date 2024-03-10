/*
Write a program in C to take a number & find all its PRIME FACTORS.
*/

#include <stdio.h>
void prime_check(int n);

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int i;
    int arr[n];
    printf("All Factors of %d are : ", n);
    for (i=2; i<n; i++) {
        if ((n%i)==0) {
            printf("[%d] ", i);
        }
    }
    printf("\nPrime Factors of %d are : ", n);
    for (i=2; i<n; i++) {
        if ((n%i)==0) {
            prime_check(i);
        }
    }
    return 0;
}

void prime_check(int n) {
    int i;
    int flag=0;
    for (i=2; i<n; i++) {
        if ((n%i)==0) {
            flag=1;
            break;
        }
    }
    if (flag==0) {
        printf("[%d] ", n);
    }
}
