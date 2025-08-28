#include <stdio.h>
#include <string.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Student
{
    int roll;
    char name[20];
    struct Address addr; // Nested structure
};

int main()
{
    struct Student s1;

    s1.roll = 101;
    strcpy(s1.name, "Karan");
    strcpy(s1.addr.city, "Dhanbad");
    s1.addr.pincode = 826004;

    printf("Roll: %d\nName: %s\nCity: %s\nPincode: %d\n",
           s1.roll, s1.name, s1.addr.city, s1.addr.pincode);

    return 0;
}
