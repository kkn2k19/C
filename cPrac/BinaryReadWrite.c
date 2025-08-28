#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main()
{
    struct Student s1 = {"Karan", 21}, s2;
    FILE *fp;

    fp = fopen("student.bin", "wb");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.bin", "rb");
    fread(&s2, sizeof(s2), 1, fp);
    printf("Student: %s %d\n", s2.name, s2.age);
    fclose(fp);

    return 0;
}
