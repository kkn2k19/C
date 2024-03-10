#include <stdio.h>
void main(){
        int x = 10, y = 5;
        int exp1 = (y * (x / y + x / y));
        int exp2 = (y * x / y + y * x / y);
        printf("%d\n%d", exp1, exp2);
}
