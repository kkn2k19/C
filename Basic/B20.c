/*
A Mega Shop has different floors which display varieties of dresses as mentioned 
below: 
1. Ground floor : Kids Wear 
2. First floor : Ladies Wear 
3. Second floor : Designer Sarees 
4. Third Floor : Men's Wear 
The user enters floor number and gets the information regarding different items of the 
Mega shop. After shopping, the customer pays the amount at the billing counter and the 
shopkeeper prints the bill 
*/

#include <stdio.h>

int main() {
    int floor_number;
    float amount_paid, bill_amount, change;

    printf("Welcome to Mega Shop!\n");
    printf("Please enter the floor number:\n");
    printf("1. Ground floor : Kids Wear\n");
    printf("2. First floor : Ladies Wear\n");
    printf("3. Second floor : Designer Sarees\n");
    printf("4. Third Floor : Men's Wear\n");
    scanf("%d", &floor_number);

    printf("Items available on floor %d:\n", floor_number);
    switch (floor_number) {
        case 1:
            printf("- T-shirts\n- Shorts\n- Dresses\n");
            break;
        case 2:
            printf("- Sarees\n- Kurtis\n- Leggings\n");
            break;
        case 3:
            printf("- Designer sarees\n- Lehengas\n- Salwar suits\n");
            break;
        case 4:
            printf("- Shirts\n- Trousers\n- Jeans\n");
            break;
        default:
            printf("Invalid floor number.\n");
            return 0;
    }

    printf("Please enter the amount paid by the customer: ");
    scanf("%f", &amount_paid);

    // Assuming the bill amount is equal to the amount paid
    bill_amount = amount_paid;

    change = amount_paid - bill_amount;

    printf("Bill:\n");
    printf("Amount paid: %.2f\n", amount_paid);
    printf("Bill amount: %.2f\n", bill_amount);
    printf("Change: %.2f\n", change);

    return 0;
}
