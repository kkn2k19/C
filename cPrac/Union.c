#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 220.5;
    printf("Float: %.2f\n", d.f);

    strcpy(d.str, "Hello");
    printf("String: %s\n", d.str);

    // Note: previous values get overwritten

    return 1;
}