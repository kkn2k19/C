/*Given below is a hypothetical table showing rate of income tax for an India citizen, who is
below or up to 60 years.
Taxable income (TI) in ₹                                                               Income Tax in ₹
Up to ₹ 2,50,000                                                                       Nil
More than ₹ 2,50,000 and less than or equal to ₹ 5,00,000                             (TI - 1,60,000) * 10%
More than ₹ 5,00,000 and less than or equal to ₹ 10,00,000                            (TI - 5,00,000) * 20% + 34,000
More than ₹ 10,00,000                                                                 (TI - 10,00,000) * 30% + 94,000
Write a program to input the age and taxable income of a person. If the age is more than 60
years then display the message "Wrong Category". If the age is less than or equal to 60 years
then compute and display the income tax payable along with the name of tax payer, as per the
table given above.*/

#include <stdio.h>

int main() {
    int age; char name;
    float taxable_income, income_tax;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 60) {
        printf("Wrong category.\n");
        return 0;
    }

    printf("Enter your taxable income: ");
    scanf("%f", &taxable_income);

    if (taxable_income <= 250000) {
        income_tax = 0;
    }
    else if (taxable_income <= 500000) {
        income_tax = (taxable_income - 160000) * 0.1;
    }
    else if (taxable_income <= 1000000) {
        income_tax = (taxable_income - 500000) * 0.2 + 34000;
    }
    else {
        income_tax = (taxable_income - 1000000) * 0.3 + 94000;
    }

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Taxable income: %.2f\n", taxable_income);
    printf("Income tax payable: %.2f\n", income_tax);

    return 0;
}
