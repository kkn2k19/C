/*
Write a program in C to generate all the prime numbers from M to N.(M<N)
Test Data :
Enter M and N: 10 23
Expected Output :
[11] [13] [17] [19] [23].
*/

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m and n : ");
    scanf("%d%d", &m, &n);
    int i;
    int j;
    int flag;
    for(i=m; i<=n; i++){
        flag=0;
        for (j=2; j<i; j++) {
            if ((i%j)==0) {
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("[%d] ", i);
        }
    }
    return 0;
}
