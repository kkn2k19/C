/*An air-conditioned bus charges fare from the passengers based on the distance travelled as
per the tariff given below:
Distance Travelled Fare
Up to 10 km Fixed charge ₹80
11 km to 20 km ₹6/km
21 km to 30 km ₹5/km
31 km and above ₹4/km*/

#include <stdio.h>

int main ()
{
    int distance, fare1, fare2, fare3;
    printf("provide distance travelled: ");
    scanf ("%d", &distance);
    if (distance<=10){
        printf("fare : Rs.80");
    }
    else if (distance>=11 && distance<=20){
        fare1 = distance * 6;
        printf("fare : %d", fare1); 
    }
    else if (distance >= 21 && distance <=30){
        fare2= distance * 5;
        printf("fare : %d", fare2);
    }
    else if (distance >=31) {
        fare3 = distance * 4;
        printf("fare : %d", fare3);
    }
    return 0;
}