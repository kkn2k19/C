#include <stdio.h>

int main()
{
    int a = 7;
    int b = 3;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("%d %d", a, b);
}

// 3 7