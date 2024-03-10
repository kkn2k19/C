//Write a function to convert celsius temperature into farenheit.

#include <stdio.h>
void temp_convert (float t);

int main () 
{
  float c;
  printf("Enter Temp. in Celsius : ");
  scanf("%f", &c);
  temp_convert(c);
  return 0;
}

void temp_convert(float c) 
{
  float f = (c*1.8) + 32;
  printf("Temp. in Farenheit : %f\n", f);
}
