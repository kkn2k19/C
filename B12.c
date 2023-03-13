/*Write a program in C to read any Month Number in integer and display Month name in the
word.*/

#include <stdio.h>

int main()
{
   int month;
   printf("Enter the month number: ");
   scanf("%d", &month);
   
   switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("Augest\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Entered number is not in the month please provide between 1 to 12\n");

    }
    return 0;
}