/*'Kumar Electronics' has announced the following seasonal discounts on purchase of certain
items.
Purchase Amount Discount on Laptop Discount on Desktop PC
Up to ₹ 25000 0.0% 5.0%
₹ 25,001 to ₹ 50,000 5% 7.5%
₹ 50,001 to ₹ 1,00,000 7.5% 10.0%
More than ₹ 1,00,000 10.0% 15.0%
Write a program to input name, amount of purchase and the type of purchase (`L' for
Laptop and 'D' for Desktop) by a customer. Compute and print the net amount to be paid
by a customer along with his name.
(Net amount = Amount of purchase - discount)*/

#include <stdio.h>

int main() {
    char name[100], type;
    float amount, discount, net_amount;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the amount of purchase: ");
    scanf("%f", &amount);

    printf("Enter the type of purchase (L for Laptop, D for Desktop): ");
    scanf(" %c", &type);

    if (amount <= 25000) {
        if (type == 'L') {
            discount = 0.0;
        } else {
            discount = 5.0;
        }
    } else if (amount <= 50000) {
        if (type == 'L') {
            discount = 5.0;
        } else {
            discount = 7.5;
        }
    } else if (amount <= 100000) {
        if (type == 'L') {
            discount = 7.5;
        } else {
            discount = 10.0;
        }
    } else {
        if (type == 'L') {
            discount = 10.0;
        } else {
            discount = 15.0;
        }
    }

    net_amount = amount - (amount * (discount / 100.0));

    printf("Name: %s\n", name);
    printf("Net amount to be paid: %.2f\n", net_amount);

    return 0;
}
