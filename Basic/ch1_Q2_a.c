/* Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/

#include <stdio.h>

int main()
{
  int r;
  printf("Provide Radius of Circle : ");
  scanf("%d", &r);
  float area = 3.14*r*r;
  printf("Area of Circle : %f\n", area);
  return 0;
}
