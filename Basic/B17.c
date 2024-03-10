/*
An employee wants to deposit certain sum of money under 'Term Deposit' scheme in
Syndicate Bank. The bank has provided the tariff of the scheme, which is given below:
No. of Days                         Rate of Interest
Up to 180 days                            5.5%
181 to 364 days                           7.5%
Exact 365 days                            9.0%
More than 365 days                        8.5%

Write a program to calculate the maturity amount taking the sum and number of days as
inputs. 
*/

#include <stdio.h>

int main () 
{
  float a;
  int d;
  int i;
  printf("Provide Amount : ");
  scanf("%f", &a);
  printf("Provide no. of days : ");
  scanf("%d", &d);
  if (d <= 180) {
    i = 0.055*a;
  }
  else if (d >= 181 && d <= 364) {
    i = 0.075*a;
  }
  else if (d == 365) {
    i = 0.09*a;
  }
  else {
    i = 0.085*a;
  }
  printf("Maturity Amount : %f\n", a+i);
  return 0;
}
