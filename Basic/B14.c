/*
An air-conditioned bus charges fare from the passengers based on the distance travelled as
per the tariff given below:
Distance Travelled                         Fare
Up to 10 km                         Fixed charge ₹80
11 km to 20 km                            ₹6/km
21 km to 30 km                            ₹5/km
31 km and above                           ₹4/km 
Design a program to input distance travelled by the passenger. Calculate and display the
fare to be paid.
*/

#include <stdio.h>

int main () 
{
  int d;
  int f;
  printf("Provide Distance Travelled : ");
  scanf("%f", &d);
  if (d <= 10) {
    f = 80;
  }
  else if (d >= 11 && d <= 20) {
    f = 6*d;
  }
  else if (d >= 21 && d <= 30) {
    f = 5*d;
  }
  else {
    f = 4*d;
  }
  printf("Fare Amount : %d", f);
  return 0;
}
