/*Write a program to accept a number and check whether the number is divisible by 3 as
well as 5. Otherwise, decide:
(a) Is the number divisible by 3 and not by 5?
(b) Is the number divisible by 5 and not by 3?
(c) Is the number neither divisible by 3 nor by 5?
The program displays the message accordingly.*/

#include <stdio.h>

int main ()
{
    int num;
    printf("provide a integer number : ");
    scanf("%d", &num);
    if ((num%3==0) && (num%5==0)){
        printf("number is divisible by both 3 as well as 5.\n");
    }
    else if ((num%3==0) && (num%5!=0)){
        printf("number is divisible by 3 and not divisible by 5.\n");
    }
    else if ((num%3!=0) && (num%5==0)){
        printf("number is divisible by 5 and not divisible by 3.\n");
    } else {
        printf("number is not divisible by both 3 as well as 5.\n");
    }
    return 0;
}