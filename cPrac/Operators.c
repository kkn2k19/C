#include <stdio.h>

int main()
{
    int a = 10, b = 3, c;

    printf("🔹 Arithmetic Operators\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // integer division
    printf("a %% b = %d\n\n", a % b);

    printf("🔹 Relational Operators\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    printf("🔹 Logical Operators\n");
    printf("(a > 5 && b < 5) = %d\n", (a > 5 && b < 5));
    printf("(a > 5 || b > 5) = %d\n", (a > 5 || b > 5));
    printf("!(a > b) = %d\n\n", !(a > b));

    printf("🔹 Assignment Operators\n");
    c = a;
    printf("c = %d\n", c);
    c += b;
    printf("c += b → %d\n", c);
    c -= b;
    printf("c -= b → %d\n", c);
    c *= b;
    printf("c *= b → %d\n", c);
    c /= b;
    printf("c /= b → %d\n", c);
    c %= b;
    printf("c %%= b → %d\n\n", c);

    printf("🔹 Increment/Decrement\n");
    int x = 5;
    printf("x = %d\n", x);
    printf("++x = %d\n", ++x); // pre-increment
    printf("x++ = %d\n", x++); // post-increment
    printf("Now x = %d\n", x);
    printf("--x = %d\n", --x); // pre-decrement
    printf("x-- = %d\n", x--); // post-decrement
    printf("Now x = %d\n\n", x);

    printf("🔹 Bitwise Operators\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    printf("🔹 Ternary Operator\n");
    int max = (a > b) ? a : b;
    printf("Max of %d and %d is %d\n\n", a, b, max);

    printf("🔹 Operator Precedence Example\n");
    int res = a + b * 2; // * has higher precedence
    printf("a + b * 2 = %d\n", res);
    res = (a + b) * 2; // () changes order
    printf("(a + b) * 2 = %d\n", res);

    return 0;
}

// 🔹 Arithmetic Operators
// a + b = 13
// a - b = 7
// a * b = 30
// a / b = 3
// a % b = 1

// 🔹 Relational Operators
// a > b  = 1
// a < b  = 0
// a >= b = 1
// a <= b = 0
// a == b = 0
// a != b = 1

// 🔹 Logical Operators
// (a > 5 && b < 5) = 1
// (a > 5 || b > 5) = 1
// !(a > b) = 0

// 🔹 Assignment Operators
// c = 10
// c += b → 13
// c -= b → 10
// c *= b → 30
// c /= b → 10
// c %= b → 1

// 🔹 Increment/Decrement
// x = 5
// ++x = 6
// x++ = 6
// Now x = 7
// --x = 6
// x-- = 6
// Now x = 5

// 🔹 Bitwise Operators
// a & b = 2
// a | b = 11
// a ^ b = 9
// ~a = -11
// a << 1 = 20
// a >> 1 = 5

// 🔹 Ternary Operator
// Max of 10 and 3 is 10

// 🔹 Operator Precedence Example
// a + b * 2 = 16
// (a + b) * 2 = 26