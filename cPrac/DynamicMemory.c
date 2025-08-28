#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    // malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
        arr[i] = i + 1;

    printf("Malloc values: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // realloc
    arr = (int *)realloc(arr, (n + 2) * sizeof(int));
    arr[n] = 100;
    arr[n + 1] = 200;

    printf("\nAfter realloc: ");
    for (i = 0; i < n + 2; i++)
        printf("%d ", arr[i]);

    free(arr); // free memory
    return 0;
}

// Enter size: 5
// Malloc values: 1 2 3 4 5 
// After realloc: 1 2 3 4 5 100 200