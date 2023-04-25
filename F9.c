/*
Write a program in C and take two single dimensional arrays and make a third array to
store the result of their summation. Print the arrays in the following way
*/

#include<stdio.h>
void main()
{
	int n, i,ar1[10],ar2[10],sum[10];
	printf("Enter the number of elements required: ");
	scanf("%d", &n);
	printf("Enter first array:-\n");
	
	for(i=0;i<=n-1;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&ar1[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<=n-1;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&ar2[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		sum[i]=ar1[i]+ar2[i];
	}
	printf("Sum of arrays:-");	
	for(i=0;i<=n-1;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);	
	}
}