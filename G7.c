/*
WAP to take one integer number and convert that number to its equivalent binary number
and octal number.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, k, n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    int a = n;
    int binary[32];
    i=0;
    while (a>0){
        binary[i]=a%2;
        a=a/2;
        i++;
    }
    printf("Binary Equivalent : ");
    for (j = i-1; j>=0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    int octal[10];
    j=0;
    while(n>0){
        octal[j]= n%8;
        n=n/8;
        j++;
    }
    printf("Octal Equivalent : ");
    for(k=j-1; k>=0; k++){
        printf("%d", octal[k]);
    }
}