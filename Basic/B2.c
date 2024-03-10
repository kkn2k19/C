/*
WAP to take the Sale amount as input and provide the commission according to the
following table
Sale Amount                 Commission
Less than 500                 Rs. 35
From 500 to 2000         10% of Sale Amount
From 2001 to 5000        15% of Sale Amount
More than 5000           20% of Sale Amount
*/

#include <stdio.h>

int main () 
{
  float sa; 
  float com; 
  printf("Provide Sale Amount : ");
  scanf("%f", &sa);
  if (sa < 500) {
    com = 35;
  }
  else if (sa >= 500 && sa <= 2000) {
    com = 0.1*sa;
  } 
  else if (sa >= 2001 && sa <= 5000) {
    com = 0.15*sa;
  }
  else {
    com = 0.2*sa;
  }
  printf("Commission : %f\n", com);
  return 0;
}
