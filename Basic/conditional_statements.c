#include <stdio.h>

void main(){
    int age = 16;
    if (age>=18){
        printf ("Adult");
    }
    else if (age>13 && age<18){
        printf ("Teenager");
    }
    else {
        printf("Not Adult");
    }
}