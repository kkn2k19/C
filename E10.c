/*
10. Draw the triangle up to nth term
1
22
333
4444
*/

#include <stdio.h>
void main()
{
   int i,j,rows;

   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d",i);
	printf("\n");
   }
}