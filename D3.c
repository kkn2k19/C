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

int main()
{
    int n, i, d, c = 0, s = 0, r = 0, a = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

for (i=n; i>0; i=i/10){
    d=i%10;
    c=c+1;
    s=s+d;
    r=(r*10)+d;
}
    
    printf("Total number of digits: %d\n", c);
    printf("Sum of all digits: %d\n", s);
    printf("Reverse of the number: %d\n", r);
    if(n == r)
        printf("The number is a palindrome number.\n");
    else
        printf("The number is not a palindrome number.\n");

    for(i=n; i>0; i=i/10)
    {
        d = i % 10;
        a = a+pow(d, c);
    }
    if(n == a)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
