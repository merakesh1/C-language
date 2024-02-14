#include <stdio.h>
#include <string.h>
void main()
{
    struct address
    {
        char Country[20];
        char city[20];
        int pinCode;
    };

    struct student
    {
        char name[20];
        int rollNo;
        struct address addr;
        struct DateOfBirth{
            int date;
            int month;
            int year;
        }dob;
    };

    struct student student1;
    struct student student2;
    struct student student3;
    struct student student4;
    struct student student5;
    struct student student6;
    struct student student7;

    strcpy(student1.name, "Rakesh");
    student1.rollNo = 21;
    student1.addr.pinCode = 450934;
    strcpy(student1.addr.Country, "India");
    strcpy(student1.addr.city, "Hyderabad");
    student1.dob.date = 13;
    student1.dob.month = 10;
    student1.dob.year = 2000;

    printf("Name is :%s\n", student1.name);
    printf("Roll no. is :%d\n", student1.rollNo);
    printf("Country is :%s\n", student1.addr.Country);
    printf("City is :%s\n", student1.addr.city);
    printf("Pin code is :%d\n", student1.addr.pinCode);
    printf("Date of birth is :%d-%d-%d\n", student1.dob.date, student1.dob.month, student1.dob.year);
}
