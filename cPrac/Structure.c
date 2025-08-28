#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1;

    s1.roll = 1;
    strcpy(s1.name, "Karan");
    s1.marks = 92.5;

    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);

    return 1;
}

// Roll: 1
// Name: Karan
// Marks: 92.50