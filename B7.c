/*Write a C program to remove any negative sign in front of a number.
Input a value (negative):*/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a integer number: ");
    scanf("%d", &x);
    if (x < 0) {
        x = -1 * x;
    }
    printf("%d\n", x);
    return 0;
}