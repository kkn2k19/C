/*
Write a program in C to insert New value in the array (sorted list).
*/

#include <stdio.h>

int main()
{
   int arr1[100],i,n,p,inval;
       printf("\n\nInsert New value in the sorted array :\n");
       printf("-----------------------------------------\n");
    printf("Input the size of array : ");
    scanf("%d", &n);
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&inval);
   printf("The exist array list is :\n");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);
   for(i=0;i<n;i++)
   {
   	
    if(inval<arr1[i])
     {
       p = i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }
   for(i=n+1;i>=p;i--)
      arr1[i]= arr1[i-1];
      arr1[p]=inval;
      printf("\n\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}