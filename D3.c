/*
Write a program in C to accept an Integer number as input and perform the following
operations on that integer number
a. Print the total number of digits present in that inputted number
b. Print summation of all the digits present in that inputted number
c. Reverse the inputted number and print it
d. Check whether the inputted number is a Palindrome number or not.
e. Check whether the inputted number is an Armstrong number or not.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit, count = 0, sum = 0, rev = 0, arm = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Counting the number of digits
    temp = num;
    while(temp != 0)
    {
        count++;
        temp /= 10;
    }
    printf("Total number of digits: %d\n", count);

    // Summation of all the digits
    temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("Sum of all digits: %d\n", sum);

    // Reversing the number
    temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    printf("Reverse of the number: %d\n", rev);

    // Checking for palindrome number
    if(num == rev)
        printf("The number is a palindrome number.\n");
    else
        printf("The number is not a palindrome number.\n");

    // Checking for Armstrong number
    temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        arm += pow(digit, count);
        temp /= 10;
    }
    if(num == arm)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}


