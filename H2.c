/*
Write a menu driven program using functions with argument passing mechanism to
perform the following operations on a particular number
a. Print all the factors of that number
b. Print all the prime factors of that number
c. Print the factorial of that number
d. Check whether that number is Prime or Not.
e. Check whether that number is a Fibonacci number or not.
f. Count the number of digits present in that Number
g. Check that number is a armstrong number or not
h. Check that number is a perfect number or not
*/

#include <stdio.h>
#include <math.h>

void printFactors(int number) {
    printf("Factors of %d: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int isPrime(int number) {
    if (number <= 1) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
void printPrimeFactors(int number) {
    printf("Prime factors of %d: ", number);
    for (int i = 2; i <= number; i++) {
        if (number % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}
int isFibonacci(int number) {
    int a = 0, b = 1, c;
    while (a < number) {
        c = a + b;
        a = b;
        b = c;
    }
    if (a == number) {
        return 1; 
    }
    return 0;  
}
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = countDigits(number);
    while (number != 0) {
        int remainder = number % 10;
        sum += pow(remainder, digits);
        number /= 10;
    }
    if (sum == originalNumber) {
        return 1;  // Armstrong number
    }
    return 0;  // Not an Armstrong number
}
int isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        return 1;  // Perfect number
    }
    return 0;  // Not a perfect number
}
int main() {
    int number;
    char choice;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\nMenu:");
    printf("\na. Print all factors of the number");
    printf("\nb. Print all prime factors of the number");
    printf("\nc. Print the factorial of the number");
    printf("\nd. Check whether the number is prime or not");
    printf("\ne. Check whether the number is a Fibonacci number or not");
    printf("\nf. Count the number of digits present in the number");
    printf("\ng. Check whether the number is an Armstrong number or not");
    printf("\nh. Check whether the number is a perfect number or not");
    printf("\nEnter your choice (a-h): ");
    scanf(" %c", &choice);
    switch (choice) {
        case 'a':
            printFactors(number);
            break;
        case 'b':
            printPrimeFactors(number);
            break;
        case 'c':
            printf("Factorial of %d: %d\n", number, factorial(number));
            break;
        case 'd':
            if (isPrime(number)) {
                printf("%d is a prime number.\n", number);
            } else {
                printf("%d is not a prime number.\n", number);
            }
            break;
        case 'e':
            if (isFibonacci(number)) {
                printf("%d is a Fibonacci number.\n", number);
            } else {
                printf("%d is not a Fibonacci number.\n", number);
            }
            break;
        case 'f':
            printf("Number of digits in %d: %d\n", number, countDigits(number));
            break;
        case 'g':
            if (isArmstrong(number)) {
                printf("%d is an Armstrong number.\n", number);
            } else {
                printf("%d is not an Armstrong number.\n", number);
            }
            break;
        case 'h':
            if (isPerfect(number)) {
                printf("%d is a perfect number.\n", number);
            } else {
                printf("%d is not a perfect number.\n", number);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}
