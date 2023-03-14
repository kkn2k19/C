/*Write a C program that accepts a real number x and prints out the corresponding value of
sin(1/x) using 4-decimal places.*/

#include <stdio.h>
 int main ()
 {
    double x, b;
    printf("Enter value of x : ");
    scanf("%lf", &x);
    b= sin(1/x);
    printf("Value of sin(1/x) is %.4lf\n", b);
    return 0;
 }
