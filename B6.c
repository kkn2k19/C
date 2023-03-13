/*Write a C program that accepts a real number x and prints out the corresponding value of
sin(1/x) using 4-decimal places.*/

#include <stdio.h>
 int main ()
 {
    int main() {
    double x, result;
    printf("Enter your x: ");
    scanf("%lf", &x);
    result = sin(1/x);
    printf("Value of sin(1/x) is %.4lf\n", result);
    return 0;
    
 }
