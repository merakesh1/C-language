#include <stdio.h>

struct Student{
    char name[50]; //-> 50bytes
    int roll; //-> 4bytes
    float marks; //-> 4bytes
    int mobile; //-> 4bytes
    char gender; //-> 1byte
};

void main(){
    struct Student student1={
        "bushra",
        201,
        234,
        987980,
        'F'
    };
    struct Student student2={
        "Rakesh",
        202,
        221,
        6403838,
        'M'
    };
    struct Student student3;
    student3.roll=121;

    printf("Name is :%s\n",student2.name);
    printf("Roll is :%d\n",student1.roll);
    printf("Marks is :%f\n",student1.marks);
    printf("Mobile is :%d\n",student1.mobile);
    printf("Gender is :%c\n",student1.gender);
}