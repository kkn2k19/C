#include <stdio.h>
#include <string.h> // For strlen, strcmp, strcpy, strcat

// Manual implementation of string functions
int myStrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int myStrcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

void myStrcpy(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void myStrcat(char s1[], char s2[])
{
    int i = 0, j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    printf("=== String Functions ===\n");

    // strlen
    printf("Manual strlen(str1): %d\n", myStrlen(str1));
    printf("Library strlen(str1): %lu\n\n", strlen(str1));

    // strcmp
    printf("Manual strcmp(str1, str2): %d\n", myStrcmp(str1, str2));
    printf("Library strcmp(str1, str2): %d\n\n", strcmp(str1, str2));

    // strcpy
    myStrcpy(str3, str1);
    printf("Manual strcpy result: %s\n", str3);

    strcpy(str3, str2);
    printf("Library strcpy result: %s\n\n", str3);

    // strcat
    myStrcat(str1, str2);
    printf("Manual strcat result: %s\n", str1);

    strcpy(str1, "Hello"); // reset
    strcat(str1, str2);
    printf("Library strcat result: %s\n\n", str1);

    // 2D Array Example (Matrix Addition)
    printf("=== Matrix Addition ===\n");
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// === String Functions ===
// Manual strlen(str1): 5
// Library strlen(str1): 5

// Manual strcmp(str1, str2): -15
// Library strcmp(str1, str2): -1

// Manual strcpy result: Hello
// Library strcpy result: World

// Manual strcat result: HelloWorld
// Library strcat result: HelloWorld

// === Matrix Addition ===
// 6 8
// 10 12