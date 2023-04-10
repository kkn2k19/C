/*Write a program in C to take a number & find all its PRIME FACTORS.
Test Data :
Enter a number: 36
Expected Output :
All Factors of 36 are =[2] [3][4] [6][9][12][18]
Prime Factors of 36 are =[2] [3]*/


# include <stdio.h>

int main ()
{
    int i, n, p;
    printf("Provide a number : ");
    scanf ("%d", &n);
    printf("All Factors of %d are =", n);

    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            printf("%d", i);
        }
    }
    printf("Prime Factors of %d are =", n);
    for (i=1; i<n-1; i++)
    {
        if (n%i==0){
            c=0;
        }
    }
    for (j=1; j<=i; j++){
        if (i%j==0){
            c++;
        }
    }
    if (c==2){
        printf("%d", i);
    }
    return 0;
}
