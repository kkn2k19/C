#include <stdio.h>

// swap using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// sample functions for function pointer demo
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    // ✅ Pointer Arithmetic
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = arr; // new name instead of reusing p
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p1 + i)); // 10 20 30 40 50
    printf("\n");

    // ✅ Swap using pointers
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After Swap: x=%d y=%d\n", x, y);

    // ✅ Pointer to pointer
    int a = 42;
    int *p2 = &a;
    int **q = &p2;
    printf("Pointer to Pointer Value: %d\n", **q);

    // ✅ String traversal using pointer
    char str[] = "Hello";
    char *p3 = str;
    printf("String Traversal: ");
    while (*p3 != '\0')
    {
        printf("%c ", *p3);
        p3++;
    }
    printf("\n");

    // ✅ Function Pointers
    int (*fptr)(int, int);
    fptr = add;
    printf("Add: %d\n", fptr(10, 5));
    fptr = sub;
    printf("Sub: %d\n", fptr(10, 5));

    return 0;
}

// 10 20 30 40 50 
// After Swap: x=10 y=5
// Pointer to Pointer Value: 42
// String Traversal: H e l l o 
// Add: 15
// Sub: 5