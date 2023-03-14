/*   Write a program in C to calculate and print the electricity bill of a given customer.
 The customer id, name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. 
 The charge are as follows: 
     Unit                                                        Charge/Unit     
     upto 199                                                    @1.20
     200 and above but less than 400                             @1.50
     400 and above but less than 600                             @1.80
     600 and above                                               @2.00
     If bill exceeds Rs.400 then a subcharge of 15% will be charged and the minimum bill should be of Rs.100/-  */

#include <stdio.h>

int main ()
{
    int uc, id;
    float rate, am, sa, na;
    char name;
    printf ("Provide the details: id no., customer name, unit consumed: ");
    scanf("%d%s%d", &id, &name, &uc);
    if (uc<=199)
    {
        rate = 1.20;
    }
    else if (uc>= 200 && uc<400)
    {
        rate = 1.50;
    }
            else if (uc>= 400 && uc<600)
            {
                rate = 1.80;
            }
                    else if (uc>= 600)
                    {
                        rate = 2.00;
                    }
    am=rate*uc;
    if (am>400)
    {
        sa= am*0.15;
    }
    else {
        sa=am*0;
    }
    na=am+sa;
    if (na<100)
    {
        na=100;
    }

    printf ("Electricity Bill for the id no.: %d.\nCustomer name: %c\nunit consumed: %d\nAmount Charged: %f\nSubcharge Amount: %f\nNet Payable Amount: %f", id,name,uc,am,sa,na);
    return 0;
}
