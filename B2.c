/*Write a program to take the sale amount as input and provide the commmission according to the following table
          Sale Amount              Commission
          Less than 500            Rs. 35
          From 500 to 2000         10% of Sale Amount
          From 2001 to 5000        15% of Sale Amount
          More than 5000           20% of Sale Amount*/

#include <stdio.h>

int main ()
{
    int sa, com1, com2, com3;
    printf("Provide the Sale Amount : ");
    scanf("%d", &sa);
    if (sa < 500)
    {
        printf ("Commission : Rs. 35");
    }
    else if (sa >= 500 && sa <=2000)
    {
        com1 = 0.1*sa;
        printf ("Commission : %d", com1);
    }
            else if (sa >= 2001 && sa<= 5000)
            {
                com2 = 0.15*sa;
                printf ("Commission : %d", com2);
            }
                    else if (sa>5000)
                    {
                        com3 = 0.2*sa;
                        printf ("Commission : %d", com3);
                    }
    return 0;
}