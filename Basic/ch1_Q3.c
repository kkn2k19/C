/*
Write a program to convert celcius (Centigrade degrees temperature to Farenheit.) 
*/

#include <stdio.h>

int main()
{
  float c;
  printf("Provide Temperature in Celcius : ");
  scanf("%f", &c);
  float f = (c*9/5)+32;
  printf("Temperature in Farenheit : %f\n", f);
}
