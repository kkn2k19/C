/*A company announces revised Dearness Allowance (DA) and Special Allowances (SA)
for their employees as per the tariff given below:
Basic Dearness Allowance (DA) Special Allowance (SA)
Up to ₹ 10,000 10% 5%
₹ 10,001 - ₹ 20,000 12% 8%
₹ 20,001 - ₹ 30,000 15% 10%
₹ 30,001 and above 20% 12%
Write a program to accept name and Basic Salary (BS) of an employee. Calculate and
display gross salary.
Gross Salary = Basic + Dearness Allowance + Special Allowance*/

#include <stdio.h>

int main() {
    char name[50];
    float basic_salary, da, sa, gross_salary;

    // Accept input from user
    printf("Enter name of the employee: ");
    scanf("%s", name);
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate DA and SA based on the given tariff
    if (basic_salary <= 10000) {
        da = basic_salary * 0.1;
        sa = basic_salary * 0.05;
    }
    else if (basic_salary <= 20000) {
        da = basic_salary * 0.12;
        sa = basic_salary * 0.08;
    }
    else if (basic_salary <= 30000) {
        da = basic_salary * 0.15;
        sa = basic_salary * 0.1;
    }
    else {
        da = basic_salary * 0.2;
        sa = basic_salary * 0.12;
    }

    // Calculate gross salary
    gross_salary = basic_salary + da + sa;

    // Display the result
    printf("Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Dearness Allowance: %.2f\n", da);
    printf("Special Allowance: %.2f\n", sa);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
