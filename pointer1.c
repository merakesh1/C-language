#include<stdio.h>
//function creation
int add(int, int);

//initialize function
int add(int num1, int num2){
    return num1+num2;
}

void main(){
    int a,b,result;
    int (*add_pointer)(int,int);
    printf("Enter values of a, b: ");
    scanf("%d %d",&a,&b);
    add_pointer=&add;
    result=(*add_pointer)(a,b);
    printf("sum is :%d\n",result);
}