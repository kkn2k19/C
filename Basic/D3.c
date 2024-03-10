/*
Write a program in C to accept an Integer number as input and perform the following
operations on that integer number
a. Print the total number of digits present in that inputted number
b. Print summation of all the digits present in that inputted number
c. Reverse the inputted number and print it
d. Check whether the inputted number is a Palindrome number or not.
e. Check whether the inputted number is an Armstrong number or not.

Enter a number : 153
Expected Output :
Total No. digits : 3
Sum of all digits : 9
Reverse of 153 is : 351
153 is not a Palindrome Number
153 is an Armstrong Number

Enter a number : 121
Expected Output :
Total No. digits : 3
Sum of all digits : 4
Reverse of 121 is : 121
121 is a Palindrome Number
121 is not an Armstrong Number
*/

#include <stdio.h>

int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i;
    i=n;
    int d;      // digit
    int c=0;   //digit counter
    int sum=0;  // sum of digits
    int r=0;     // reverse sum
    while (i>0) {
        d=i%10;
        c++;
        sum=sum+d;
        r=r*10+d;
        i=i/10;
    }
    printf("Total no. of digits : %d\n", c);
    printf("Sum of all digits : %d\n", sum);
    printf("Reverse of %d is : %d\n", n, r);
    if (n==r) {
        printf("%d is a Palindrome Number.\n", n);
    }
    else {
        printf("%d is not a Palindrome Number.\n", n);
    }
    int arm_sum=0;
    i=n;
    while (i>0) {
        d=i%10;
        arm_sum=arm_sum+pow(d, c);
        i=i/10;
    }
    if (n == arm_sum) {
        printf("%d is an Armstrong Number.\n", n);
    }
    else {
        printf("%d is not an Armstrong Number.\n", n);
    }
    return 0;
}
