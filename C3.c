/*Write a program in C to take a number and check whether it is Prime or not.*/

#include <stdio.h>

int main() {
    int num, i, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // check if the number is divisible by any number other than 1 and itself
    count = 0;
    for(i=2; i<=num/2; ++i) {
        if(num%i == 0) {
            count++;
        }
    }
    
    if(num == 1) {
        printf("1 is not a prime number.\n");
    }
    else {
        if(count == 2)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }
    return 0;
}
