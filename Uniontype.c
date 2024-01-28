#include <stdio.h>

union Student{
    char name[10]; //-> 10bytes
    int roll; //-> 4bytes
    float marks; //-> 4bytes
    int mobile; //-> 4bytes
    char gender; //-> 1byte
};

void main(){
    union Student student1={
        name:"bushra",
        gender:'F'
    };
    printf("Name is :%s\n",student1.name);
    printf("Roll no. is :%d\n",student1.roll);
    printf("Marks is :%f\n",student1.marks);
}