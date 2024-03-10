#include <stdio.h>

void main(){
    int x=2, y=5;
    int exp1 = (x*y/x);
    int exp2 = (x*(y/x));
    printf("%d,%d", exp1, exp2);
}
