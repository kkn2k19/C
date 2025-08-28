#include <stdio.h>

int main()
{
    FILE *fp;
    int age;
    char name[20];

    // write to file
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "Name : %s Age : %d\n", name, age);
    fclose(fp);

    // read from file
    fp = fopen("data.txt", "r");
    fscanf(fp, "Name : %s Age : %d\n", name, &age);
    printf("Read: %s %d\n", name, age);
    fclose(fp);

    return 1;
}