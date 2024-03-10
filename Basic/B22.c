/*
A company announces revised Dearness Allowance (DA) and Special Allowances (SA) 
for their employees as per the tariff given below: 
Basic                     Dearness Allowance (DA)                       Special Allowance (SA) 
Up to ₹ 10,000                    10%                                             5% 
₹ 10,001 - ₹ 20,000               12%                                             8% 
₹ 20,001 - ₹ 30,000               15%                                             10% 
₹ 30,001 and above                20%                                             12% 
Write a program to accept name and Basic Salary (BS) of an employee. Calculate and 
display gross salary. 
Gross Salary = Basic + Dearness Allowance + Special Allowance 
*/

#include <stdio.h>

int main () 
{
  char name[20];
  printf("Enter Name : ");
  gets(name);
  int b;
  float d, s;
  printf("Basic Salary : ");
  scanf("%d", &b);
  if (b <= 10000) {
    d = 0.1*b;
    s = 0.05*b;
  }
  else if (b >= 10001 && b <= 20000) {
    d = 0.12*b;
    s = 0.08*b;
  }
  else if (b >= 20001 && b <= 30000) {
    d = 0.15*b;
    s = 0.10*b;
  }
  else {
    d = 0.2*b;
    s = 0.12*b;
  }
  printf("Name : ");
  puts(name);
  printf("Gross Salary : %f\n", b+d+s);
  return 0;
}
