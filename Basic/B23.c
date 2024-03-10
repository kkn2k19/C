/*
Mr. Kumar is an LIC agent. He offers discount to his policy holders on the annual 
premium. However, he also gets commission on the sum assured as per the given tariff. 
Sum Assured                                 Discount                                   Commission 
Up to ₹ 1,00,000                               5%                                          2% 
₹ 1,00,001 and up to ₹ 2,00,000                8%                                          3% 
₹ 2,00,001 and up to ₹ 5,00,000               10%                                          5% 
More than ₹ 5,00,000                          15%                                         7.5% 

Write a program to input the sum assured and first annual premium. Calculate the discount 
of the policy holder and the commission of the agent. The program displays all the details 
as:

Sum assured: 
Premium: 
Discount on the first premium: 
Commission of the agent:
*/

#include <stdio.h>

int main() {
    float sumAssured, premium, discount, commission;
    
    printf("Enter sum assured: ");
    scanf("%f", &sumAssured);
    
    printf("Enter first annual premium: ");
    scanf("%f", &premium);
    
    if (sumAssured <= 100000) {
        discount = 0.05 * premium;
        commission = 0.02 * sumAssured;
    } else if (sumAssured <= 200000) {
        discount = 0.08 * premium;
        commission = 0.03 * sumAssured;
    } else if (sumAssured <= 500000) {
        discount = 0.1 * premium;
        commission = 0.05 * sumAssured;
    } else {
        discount = 0.15 * premium;
        commission = 0.075 * sumAssured;
    }
    
    printf("\nSum assured: %.2f", sumAssured);
    printf("\nPremium: %.2f", premium);
    printf("\nDiscount on the first premium: %.2f", discount);
    printf("\nCommission of the agent: %.2f", commission);
    
    return 0;
}
