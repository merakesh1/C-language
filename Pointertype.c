#include<stdio.h>
void main(){
    int x=10;
    int *ptr=&x;
    *ptr=20;
    printf("value of x is :%d\n",x);
    printf("value of x is :%d\n",*ptr);
}