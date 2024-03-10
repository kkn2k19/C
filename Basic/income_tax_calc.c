/*For the given conditions --
   income < 5L ---  0% tax
   income between 5-10L----- 20% tax
   income > 10L ----  30% tax*/


   #include <stdio.h>

   void main(){
    int income; float tax;
    printf ("Provide income value : ");
    scanf ("%d", &income);
    if (income < 500000){
        tax = 0;
    }
    else if (income>= 500000 && income<1000000){
        tax = 0.2f * income;
    }
    else {
        tax = 0.3f*income;
    }
    printf("Your tax = %f", tax);
   }