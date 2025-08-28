#include <stdio.h>
#include <string.h>

typedef struct
{
    int roll;
    char name[20];
    float marks;
} Student; // alias created

int main()
{
    Student s1;
    s1.roll = 101;
    strcpy(s1.name, "Karan");
    s1.marks = 84.4;

    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);

    return 1;
}