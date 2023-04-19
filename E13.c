/*13. Write a program in C to print the Pascal's
Triangle.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/

#include<stdio.h> 
int main() { 
 int rows, coef=1, space, i, j; 
 printf("Enter number of rows: "); 
 scanf("%d", &rows); 
 for (i=0; i<rows; i++) { 
       for (space=1; space <= rows-i; space++) 
            printf(" "); 
       for (j=0; j<=i; j++) { 
           if (j==0 || i==0) 
              coef = 1; 
           else 
              coef=coef*(i-j+1)/j; 
          printf("%4d", coef); 
       } 
   printf("\n"); 
  } 
return 0; 
} 