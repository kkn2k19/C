/*
Write a C program to convert specified days into years, weeks and days.
(Note: Ignore leap year.)
Test Data :
 Number of days : 1329
Expected Output :
 Years: 3
 Weeks: 33
 Days: 3
*/

#include <stdio.h>

int main ()  
{
  int d;
  printf("Number of days : ");
  scanf("%d", &d);
  int y = d/365;
  int w = (d%365)/7;
  int days = (d%365)%7;
  printf("Years : %d\nWeeks : %d\nDays : %d\n", y, w, days);
  return 0;
}
