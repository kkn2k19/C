//Write a function to calculate force of attraction on a body of mass m exerted by Earth. (g = 9.8m/s^2)

#include <stdio.h>

int main () 
{
  int m, G, F, M, R;
  printf("Enter mass of body : ");
  scanf("%d", &m);
  G = 6.67 * pow(10, -11);
  M = 5.98 * pow(10, 24);
  R = 6.37 * pow(10, 6);
  F = GMm/(R*R);
  printf("Force of Attraction on body by Earth : %d.\n", F);
}
