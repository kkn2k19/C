/*
Write a program in C to take a number and check whether it is Prime or not.

Enter a number: 25
Expected Output :
25 is NOT PRIME

Enter a number: 11
Expected Output :
11 is  PRIME
*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter n : ");
    scanf("%d", &n);
    int flag=0;
    if (n==1){
        printf("%d is neither Prime nor Composite.\n", n);
        return;
    }else {
        for (i=2; i<n; i++){
                if ((n%i)==0) {
                    flag=1;
                    break;
                }
        }
        if (flag==0) {
                printf("%d is a Prime Number.\n", n);
        }
        else {
                printf("%d is not a Prime Number.\n", n);
        }
        return 0;
    }
}
