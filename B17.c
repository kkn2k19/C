/*An employee wants to deposit certain sum of money under 'Term Deposit' scheme in
Syndicate Bank. The bank has provided the tariff of the scheme, which is given below:
No. of Days Rate of Interest
Up to 180 days 5.5%
181 to 364 days 7.5%
Exact 365 days 9.0%
More than 365 days 8.5%
Write a program to calculate the maturity amount taking the sum and number of days as
inputs.*/

#include <stdio.h>

int main() {
    float principal, maturity_amount, interest_rate;
    int days;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days <= 180) {
        interest_rate = 0.055;
    }
    else if (days <= 364) {
        interest_rate = 0.075;
    }
    else if (days == 365) {
        interest_rate = 0.09;
    }
    else {
        interest_rate = 0.085;
    }

    maturity_amount = principal + (principal * interest_rate * days) / 365;

    printf("Maturity amount = %f\n", maturity_amount);

    return 0;
}
