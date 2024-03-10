#include <stdio.h>

void main (){
  printf("Provide the prices of all items : ");
  float pen, pencil, eraser;
  scanf("%f %f %f", &pen, &pencil, &eraser);
  float total = pen + pencil + eraser;
  float nettotal = total + (total*0.18);
  printf("Total bill without tax : %f\nTotal bill with 18% tax : %f", total, nettotal);
}
