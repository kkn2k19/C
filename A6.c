/*Write a c program to convert specified days into years, weeks and days. (Note : Ignore Leap year) test --- no. of days = 1329 */

#include <stdio.h>

int main ()
{
    int n,y,w,d;
    n = 1329;
    y = n/365;
    w = (n%365)/7;
    d = (n%365)%7;
    printf ("Years : %d\nWeeks : %d\nDays : %d", y,w,d);
    return 0;
}