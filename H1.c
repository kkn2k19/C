/*
Write a menu driven program to implement a Basic Calculator and perform the following
operations. (You will have to use the functions with argument passing mechanism)
a. Summation b. Subtraction c. Multiplication d. Division
*/

#include <stdio.h>

double sum(double num1, double num2) {
    return num1 + num2;
}
double subtract(double num1, double num2) {
    return num1 - num2;
}
double multiply(double num1, double num2) {
    return num1 * num2;
}
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}
int main() {
    double num1, num2;
    char choice;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("\nMenu:");
    printf("\na. Summation");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\nEnter your choice (a-d): ");
    scanf(" %c", &choice);
    switch (choice) {
        case 'a':
            printf("Sum: %.2lf\n", sum(num1, num2));
            break;
        case 'b':
            printf("Difference: %.2lf\n", subtract(num1, num2));
            break;
        case 'c':
            printf("Product: %.2lf\n", multiply(num1, num2));
            break;
        case 'd':
            printf("Quotient: %.2lf\n", divide(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}


