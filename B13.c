/*Write a program to input three numbers (positive or negative). If they are unequal then
display the greatest number otherwise, display they are equal. The program also displays
whether the numbers entered by the user are 'All positive', 'All negative' or 'Mixed
numbers'.
Sample Input: 56, -15, 12
Sample Output:
The greatest number is 56
Entered numbers are mixed numbers.*/

#include <stdio.h>

int main ()
{
    int a, b, c, greatest;
    printf("Provide 3 numbers: ");
    scanf ("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        greatest = a;
    } else if (b > a && b > c) {
        greatest = b;
    } else {
        greatest = c;
    }

    if (a < 0 && b < 0 && c < 0) {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all negative\n");
    } else if (a > 0 && b > 0 && c > 0) {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all positive\n");
    } else {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all mixed\n");
    }
    return 0;
}