/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below : 

INCOME SLAB                TAX
2.5L - 5.0L                5%
5.0L - 10.0L              20%
Above 10L                 30%

Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main() 
{
  float income, tax;
  printf("Provide your income : ");
  scanf("%f", &income);
  if (income < 250000) {
    tax = 0;
  }
  else if (income >= 250000 && income < 500000) {
    tax = income*0.05;
  }
  else if (income >= 500000 && income <= 100000) {
    tax = income*0.20;
  }
  else {
    tax = income*0.30;
  }
  printf("Tax Payable : %f\n", tax);
  return 0;
}
