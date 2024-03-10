/*
Write a program in C to find the sum of the series [1-X^2/2!+X^4/4!-.........].

Test Data:
Input the Value of x :2
Input the number of terms: 5

Expected Output :
Number of terms = 5
value of x = 2.000000
the sum = -0.415873
*/

#include <stdio.h>

int fact(int a){
    int i;
    int f=1;
    for (i=1; i<=a; i++){
        f=f*i;
    }
    return f;
}

int main()
{
    float x;
    printf("Input the Value of x : ");
    scanf("%f", &x);
    int n;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    int i;
    float sum=1;
    for (i=1; i<n; i++){                //n-1 terms as 1st term is 1
        if (i%2==0){
            sum=sum+(pow(x, 2*i)/fact(2*i));
        }
        else {
            sum=sum-(pow(x, 2*i)/fact(2*i));
        }
    }
    printf("Number of terms = %d\n", n);
    printf("value of x = %f\n", x);
    printf("the sum = %f\n", sum);
    return 0;
}
