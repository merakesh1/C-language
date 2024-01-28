#include<stdio.h>

void main(){
    /* printf("statement1\n");
    printf("statement2\n");
    if(10>20){
        printf("statement3\n");
    }
    else if(10<20){
        printf("condition is true-1");
    }
    else if(10==10){
        printf("condition is true-2");
    }
    else{
        printf("condition is false");
    }
    printf("statement4\n");
    printf("statement5\n"); */

    /* printf("begin\n");
    char color='u';
    if(color=='G'){
        printf("go!\n");
    }
    else if(color=='Y'){
        printf("slow down\n");
    }
    else if(color=='R'){
        printf("stop\n");
    }
    printf("end\n"); */

    int age=18;
    char gender='M';

    if(gender=='M'){
        if(age>18){
            printf("you can vote\n");
        }
        else{
            printf("you cannot vote\n");
        }
    }
    else if(gender=='F'){
        if(age>20){
            printf("you can vote\n");
        }
        else{
            printf("you cannot vote\n");
        }
    }
    else{
        if(age>10){
            printf("you can vote\n");
        }
        else{
            printf("you cannot vote\n");
        }
    }
    printf("end\n");
}