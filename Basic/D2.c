/*
Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999...].
Test Data :
Input the number of terms :5
Expected Output :
9 + 99 + 999 + 9999 + 99999
Sum of Series up to 5 terms : 111105
*/

#include <stdio.h>

int main ()
{
    int n ;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    int i;
    int a=9;
    int sum=0;
    for (i=1; i<=n; i++) {
        printf("%d", a);
        sum=sum+a;
        a=a*10+9;
        if (i==n){
            break;
        }
        printf(" + ");
    }
    printf("\nSum of Series upto %d terms : %d\n", n, sum);
    return 0;
}
