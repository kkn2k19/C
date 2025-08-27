#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5;
    int b = 7;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 1;
}