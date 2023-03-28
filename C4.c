/*Write a program in C to generate all the prime numbers from M to N.(M<N)
Test Data :
Enter M and N: 10 23
Expected Output :
[11] [13] [17] [19] [23].*/

#include <stdio.h>

int main()
{
    int i, c, M, N;
    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);

    printf("Prime numbers between %d and %d are: ", M, N);

    for (i = M; i <= N; i++) 
    {
        c=0;
        for (i=1; i<=N; i++)
        {
            if (N%i==0)
            {
                c++;
            }
            if (c==2)
            {
                printf("%d", N);
            }
        }
    }
    return 0;
}
