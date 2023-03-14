/*Using a switch case statement, write a menu driven program to convert a given
temperature from Fahrenheit to Celsius and vice-versa. For an incorrect choice, an
appropriate message should be displayed.
Hint: c = 5/9*(f-32) and f=1.8*c+32*/

#include <stdio.h>

int main() {
    float temp, result;
    int choice;
    
    printf("Select an option:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = 5.0/9.0 * (temp - 32.0);
            printf("%.2f Fahrenheit = %.2f Celsius", temp, result);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = 1.8 * temp + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit", temp, result);
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.");
    }
    
    return 0;
}
