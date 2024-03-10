/*
Write a program to calculate Simple interest for a set of values representing Principal, no. of years and rate of interest.
*/

#include <stdio.h>

int main()
{
  float p, t, r;
  printf("Provide Principal : ");
  scanf("%f", &p);
  printf("Provide Time in Years : ");
  scanf("%f", &t);
  printf("Provide Rate of Interest per annum : ");
  scanf("%f", &r);
  float si = (p*r*t)/100;
  printf("Simple Interest : %f", si);
  return 0;
}
