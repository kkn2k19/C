/* Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/

#include <stdio.h>

int main()
{
  int r, h;
  printf("Provide Radius : ");
  scanf("%d", &r);
  printf("Provide Height : ");
  scanf("%d", &h);
  float volume = 3.14*r*r*h;
  printf("Volume of Cylinder : %f\n", volume);
  return 0;
}
