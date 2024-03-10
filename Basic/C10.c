/*
Write a program in C to display the first n terms of Fibonacci series.
Fibonacci series is : 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series up to to 10 terms :
0 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of terms : ");
    scanf("%d", &n);
    int i;
    int a=0;
    int b=1;
    int res;
    for (i=1; i<=n; i++) {
        printf("%d ", a);
        res=a+b;
        a=b;
        b=res;
    }
    return 0;
}
