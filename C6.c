/*Write a program in C to take a number & find its factorial.
Test Data :
Enter a number: 5
Expected Output :
Factorial of 5 is =120*/

#include <stdio.h>

int main()
{
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If the input number is negative
    if (num < 0)
    {
        printf("Error: Factorial of negative number doesn't exist.");
    }
    else
    {
        for (i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }

    return 0;
}
