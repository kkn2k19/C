/*
5. Draw the triangle up to nth term
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include <stdio.h>

void main()
{
   int i,j,n;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
	printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",j);
      for(j=i-1;j>=1;j--)
	  printf("%d",j);
     printf("\n");
   }
}