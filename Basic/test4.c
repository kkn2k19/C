#include <stdio.h>

void main (){
        int x = 200, y = 50, z = 100;
        if (x > y && y < z) {
            printf("Hello");
        }
        if (z < y && z < x) {
            printf("Java");
        }
        if ((y + 200) < x && (y + 150) < z) {
            printf("Hello Java");
        }
}
