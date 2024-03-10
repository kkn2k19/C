/*
Write a C program to find HCF (Highest Common Factor) of two numbers.
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Provide 2 numbers : ");
    scanf("%d %d", &a, &b);
    int i;
    int hcf;
    for (i=1; i<=a && i<=b; i++){
        if ((a%i==0) && (b%i==0)) {
            hcf=i;
        }
    }
    printf("HCF of %d and %d is : %d\n", a, b, hcf);
}
