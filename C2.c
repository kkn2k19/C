/*Write a program in C to display n terms of natural number and their sum and average.*/

#include<stdio.h>

int main() {
   int i, n, sum = 0;
   float average;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("The first %d natural numbers are: ", n);
   for(i=1; i<=n; i++) 
   {
      printf("%d ", i);
      sum += i;
   }

   average = (float)sum / n;

   printf("\nThe sum of first %d natural numbers is: %d", n, sum);
   printf("\nThe average of first %d natural numbers is: %f", n, average);

   return 0;
}
