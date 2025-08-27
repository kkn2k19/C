#include <stdio.h>

void fun()
{
    static int count = 0;
    count++;
    printf("%d ", count);
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
