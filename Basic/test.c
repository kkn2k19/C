#include <stdio.h>
void main(){
    int x, y, z;
    x=y=z=2;
    x+=y;
    y-=z;
    z/=(x+y);
    printf("%d %d %d", x, y, z);
}
