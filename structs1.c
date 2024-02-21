#include <stdio.h>
#include <string.h>

void main()
{
    typedef struct milestone
    {
        unsigned short int id;
        char name[100];
        float planned_cost, actual_cost, planned_duration, actual_duration;
        unsigned short int num_employees;
        _Bool completed;
    } milestone_t;

    milestone_t m1;

    strcpy(m1.name, "bhusra");
    printf("%s\n", m1.name);
}