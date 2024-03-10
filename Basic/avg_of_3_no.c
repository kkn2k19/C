#include <stdio.h>

void main (){
printf("Provide 3 integer values :");
int a, b, c;
scanf ("%d %d %d", &a, &b, &c);
int avg = (a+b+c)/3;
printf("Average of 3 Given numbers is : %d", avg);
}
