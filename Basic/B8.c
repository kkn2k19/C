/*
Write a program in C to calculate and print the Electricity bill of a given customer. The
customer id., name and unit consumed by the user should be taken from the keyboard and
display the total amount to pay to the customer. The charge are as follow :
Unit                                         Charge/unit
upto 199                                       @1.20
200 and above but less than 400                @1.50
400 and above but less than 600                @1.80
600 and above                                  @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
Raman Chatterjee
800

Expected Output :
Customer IDNO :1001
Customer Name : Raman Chatterjee
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00
*/

#include <stdio.h>

int main () 
{
  int id;
  char name[15];
  int unit;
  printf("Provide Consumer ID : ");
  scanf("%d", &id);
  printf("Provide Consumer Name : ");
  gets(name);
  printf("Provide Unit Consumed : ");
  scanf("%d", &unit);
  float bill;
  if (unit <= 199) {
    bill = 1.20*unit;
  }
  else if (unit >= 200 && unit < 400) {
    bill = 1.50*unit;
  }
  else if (unit >= 400 && unit < 600) {
    bill = 1.80*unit;
  }
  else {
    bill = 2.00*unit;
  }
  float sc;         //SUR_CHARGE
  if (bill >= 400) {
    sc = 0.15*bill;
  }
  else if (bill >= 100 && bill < 400) {
    sc = 0;
  }
  else {
    sc = 0;
    bill = 100;
  }
  printf("Consumer ID : %d\n", id);
  printf("Consumer Name : ");
  puts(name);
  printf("\nUnit Consumed : %d\n", unit);
  printf("Amount : %f\n", bill);
  printf("Sur Charge : %f\n", sc);
  printf("Net Amount Payable : %f\n", bill+sc);
  return 0;
}
