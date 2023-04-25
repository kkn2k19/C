#include<stdio.h>

int main()
{
printf("Enter the number of rows to show the star pattern:  ");
int n, x,  y,  s = 1, k;
scanf("%d",&n);
for(x = 0; x <= n; x++)
{
for(y = n; y > x; y--)
{
printf(" ");
}
printf("*");
if (x > 0)
{
for(k = 1; k <= s;  k++)
{
printf(" ");
}
s += 2;
printf("*");
}
printf("\n");
}
}
