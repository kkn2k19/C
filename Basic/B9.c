/*
Write a C program to read temperature in centigrade and display a suitable message
according to temperature state below :
Temp < 0     then   Freezing weather
Temp 0-10    then   Very Cold weather
Temp 10-20   then   Cold weather
Temp 20-30   then   Normal in Temp
Temp 30-40   then   Its Hot
Temp >=40    then   Its Very Hot

Test Data : 42
Expected Output : Its very hot
*/

#include <stdio.h>

int main () 
{
  float t;
  printf("Provide Temp. in Centigrade : ");
  scanf("%f", &t);
  if (t < 0) {
    printf("Freezing Weather\n");
  }
  else if (t >= 0 && t < 10) {
    printf("Very Cold Weather\n");
  }
  else if (t >= 10 && t < 20) {
    printf("Cold Weather\n");
  }
  else if (t >= 20 && t < 30) {
    printf("Normal in Temp.\n");
  }
  else if (t >= 30 && t < 40) {
    printf("Its Hot\n");
  }
  else {
    printf("Its very Hot\n");
  }
  return 0;
}
