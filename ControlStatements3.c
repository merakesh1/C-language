#include <stdio.h>
void main()
{
    int age = 21;
    switch (age)
    {
    case 21:{
        printf("you are in junior cadet\n");
        break;
    }
    case 22:{
        printf("you are in youth cadet\n");
        break;
    }
    case 23:{
        printf("you are in senior cadet\n");
        break;
    }
    default:
        printf("you are not a cadet\n");
    }
    printf("End of program\n");
}