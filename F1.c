/*
Write a program in C using a single dimension Array and perform the following
operations
a. Print the maximum and minimum number of the array
b. Count how many numbers are Even numbers of the array
c. Print all the prime numbers, present in that array
*/

#include <stdio.h>
 #include <conio.h>
 
int main()
{
    int a[1000],i,j,n,min,max;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    int c=0;
    for (i=1; i<=n; i++)
    {
        if (a[i]%2==0)
        c++;
    }
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
    printf("\nTotal No.of even number : %d", c);
    printf("\nPrime Numbers are : ");
    for (i=1; i<n; i++)
    {
        int d = 0;
        for (j=2; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                d=1;
                break;
            }
            if (d==0)
            printf(" %d", a[i]);
        }
    }
    return 0;
}