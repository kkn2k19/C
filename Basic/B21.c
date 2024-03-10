/*
Using a switch case statement, write a menu driven program to convert a given 
temperature from Fahrenheit to Celsius and vice-versa. For an incorrect choice, an 
appropriate message should be displayed. 
Hint: c = 5/9*(f-32) and f=1.8*c+32 
*/

#include <stdio.h>

int main () 
{
  float f;
  float c;
  int option;
  printf("Press 1 for Conversion of Celsius to Fahrenheit,\n2 for Conversion of Fahrenheit to Celsius. : ");
  scanf("%d", option);
  switch(option) {
    case 1 : 
           printf("%f Celsius to %f Fahrenheit.\n", c, 1.8*c+32);
           break;
    case 2 : 
           printf("%f Fahrenheit to %f Celsius.\n", f, 5/9*(f-32));
           break;
    default : 
           printf("Please Provide 1 or 2 only.\n");
  }
  return 0;
}
