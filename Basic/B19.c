/*
'Kumar Electronics' has announced the following seasonal discounts on purchase of certain
items.
Purchase Amount                       Discount on Laptop                     Discount on Desktop PC
Up to ₹ 25000                                 0.0%                                   5.0%
₹ 25,001 to ₹ 50,000                           5%                                    7.5%
₹ 50,001 to ₹ 1,00,000                        7.5%                                  10.0%
More than ₹ 1,00,000                         10.0%                                  15.0%
Write a program to input name, amount of purchase and the type of purchase (`L' for
Laptop and 'D' for Desktop) by a customer. Compute and print the net amount to be paid
by a customer along with his name.
(Net amount = Amount of purchase - discount) 
*/

#include <stdio.h>

int main () 
{
  char name[20];
  printf("Enter name : ");
  gets(name);
  float a;
  printf("Enter Amount : ");
  scanf("%f", &a);
  char type;
  printf("Type of Purchase (L or D) : ");
  scanf("%c", type);
  float dis;
  switch (type){
    case 'L' : 
             if (a <= 25000) {
               dis = 0;
             }
             else if (a >= 25001 && a <= 50000) {
               dis = 0.05*a;
             }
             else if (a >= 50001 && a <= 100000) {
               dis = 0.075*a;
             }
             else {
               dis = 0.1*a;
             }
             break;
    case 'D' : 
             if (a <= 25000) {
               dis = 0.05*a;
             }
             else if (a >= 25001 && a <= 50000) {
               dis = 0.075*a;
             }
             else if (a >= 50001 && a <= 100000) {
               dis = 0.1*a;
             }
             else {
               dis = 0.15*a;
             }
             break;
    default :
            printf("Please provide type in Block letters.\n");
  }
  printf("Customer Name : ");
  puts(name);
  printf("Net Amount : %f\n", a - dis);
  return 0;
}
