#include <stdio.h>

int main ()
{
    float temp, result;
    int option;

    printf("select a option: \n");
    printf("1. Fahrenheit to Celsius : \n");
    printf("2. Celsius to Fahrenheit : \n");
    scanf("%d", &option);
    switch(option){
        case 1: 
        printf("Enter temp. in Fahrenheit : ");
        scanf("%f", &temp);
        result = (5.0/9.0)*(temp - 32.0);
        printf("%f Fahrenheit = %f Celsius", temp, result);
        break;

        case 2:
        printf("Enter temp. in Celsius : ");
        scanf("%f", &temp);
        result = 1.8*temp +32.0;
        printf("%f Celsius = %f Fahrenheit", temp, result);
        break;
        
        default:
        printf("Wrong Input, Please Select 1 or 2");
    }
    return 0;
}