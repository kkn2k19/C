/*Write a C program to read temperature in centigrade and display a suitable message
according to temperature state below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot. 
*/

#include <stdio.h>

int main ()
{
    int T;
    printf("Provide Temp.: ");
    scanf("%d", &T);
    if (T<0)
    {
        printf("Freezing whether");
    }
    else if (T>=0 && T<10)
    {
        printf("Very Cold Whether");
    }
            else if (T>=10 && T<20)
            {
                printf("Cold whether\n");
            }
                    else if (T>=20 && T<30)
                    {
                        printf ("Normal in Temp.\n");
                    }
                            else if (T>=30 && T<40)
                            {
                                printf("Its Hot\n");
                            }
                                    else
                                    {
                                        printf("Its Very Hot Weather\n");
                                    }
    return 0;
}