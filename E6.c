#include <stdio.h>

void main()
{
   int i,j,n;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
	printf(" ");
	printf("*");
	
	if(i>1){
	  for(j=1;j<=2*i-3;j++)
       printf(" ");
       printf("*");
	}

     printf("\n");
   }
}
