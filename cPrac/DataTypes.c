#include <stdio.h>

void main()
{
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of char: %zu\n", sizeof(char));

    unsigned int u = 4294967295; // max of unsigned int (4 bytes)
    int s = -1;
    printf("Unsigned: %u\n", u);
    printf("Signed: %d\n", s);

    char ch = 'A';
    printf("Character: %c, ASCII: %d\n", ch, ch);
}

// Size of int: 4
// Size of float: 4
// Size of double: 8
// Size of char: 1

// Unsigned: 4294967295
// Signed: -1

// Character: A, ASCII: 65