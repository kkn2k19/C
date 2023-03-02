/*Write a C program to check whether a number is ODD or EVEN.
Test Data :
25
Expected Output :
ODD 
*/

#include <stdio.h>

int main ()
{
    int a, b;
    printf("Provide a integer value: ");
    scanf("%d", &a);
    b=a%2;
    if (b==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}