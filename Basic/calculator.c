#include <stdio.h>

void main (){
    int num1, num2, operator;
    printf("Provide num1 : ");
    scanf("%d", &num1);
    printf("Provide num2 : ");
    scanf("%d", &num2);
    printf("select the operator : ");
    scanf("%c", &operator); // character is scanned like this only as it doesnot have next.Char()
                                             // syntax.

        switch (operator) {
            case '+':
                printf(a + b);
                break;
            case '-':
                printf(a - b);
                break;
            case '*':
                printf(a * b);
                break;
            case '/':
                printf(a / b);
                break;
            case '%':
                printf(a % b);
                break;
            default:
                printf("Wrong Operator.");
        }
    }
}
