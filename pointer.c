#include <stdio.h>

//creation - without body
void display(int);

//initailization- giving body to the fuction
void display(int num){
    printf("value of num is :%d\n",num);
}

//creation or declaration
int add(int , int); 

//initialization
int add(int num1, int num2){
    return num1+num2;
}

int avg (int , int , int);

int avg(int a, int b, int c){
    return (a+b+c)/3;  
}

void main()
{
    /* int a=10;
    int *ptr;
    ptr=&a; */

    /* int *ptr=1098765; */

    int (*nani)(int, int, int);

    nani=&avg;

    int result=(*nani)(10,20,30);

    printf("avg is :%d\n",result);

    int a=10;

    char letter='c';

    float b=10.5;

    printf("sizeof a is :%d\n",sizeof(a));

    printf("sizeof letter is :%d\n",sizeof(letter));

    printf("sizeof b is :%d\n",sizeof(b));

    printf("sizeof expression is :%d\n",sizeof(1+2+32+56+8782));

    int *ptr=&a;
    printf("sizeof pointer is :%d\n",sizeof(ptr));

    struct bushra{
        char sirname[10];
        int age;
        float marks;
    };

    printf("sizeof struct is :%d\n",sizeof(struct bushra));

    union bushra1{
        short age;
        char sirname[10];
        float marks;
    };

    printf("sizeof union is :%d\n",sizeof(union bushra1));



    /* int (*sum)(int, int);
    
    sum=&add;

    int result=(*sum)(89,15);

    printf("sum is :%d\n",result); */

    /* void (*bushra)(int);

    bushra=&display;

    (*bushra)(10); */

    // display(10);


    // declaration or creation of pointer

    /* int *num1_pointer;

    int num1=20;

    // num1=50;

    num1_pointer=&num1;

    // *num1_pointer=50;

    printf("value of num1 is :%d\n",num1);
    printf("value of num1_pointer is :%d\n",num1_pointer);
    printf("value of num1 using indirection operator is :%d\n",*num1_pointer); */

    /* int num1=20;
    int num2=30;
    int sum=0;

    int *sum_ptr=&sum;

    int *num1_ptr=&num1;

    int *num2_ptr=&num2;

    // *sum_ptr=*num1_ptr + *num2_ptr; */

    /* *sum_ptr=num1+num2;

    printf("sum is :%d\n",sum); */

    /* int arr[]={11,13,17,19,23};
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    } */

    /* int arr[] = {11, 13, 17, 19, 23};
    int *ptr = arr; */
    // printf("%d\n",ptr);

    /* int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",ptr+i);
    } */

    /* int i;
    for(i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    } */

    /* int i;
    for(i=0;i<5;i++){
        *(ptr+i)=2*i;
    }

    for(i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    } */

    /*  int a=5,b=10,c;
     int *p=&a,*q=&b;
     printf("%d\n",p);
     printf("%d\n",p-6); */

    /* char a='c';
    char *p=&a;

    printf("%d\n",p);
    printf("%d\n",p+1);

    float b=10.5;
    float *q=&b;

    printf("%d\n",q);
    printf("%d\n",q+1);

    long c=123;
    long *r=&c;

    printf("%d\n",r);
    printf("%d\n",r+1);

    double d=10.5;
    double *s=&d;

    printf("%d\n",s);
    printf("%d\n",s+1); */

    /* int i=250;
    int *bushra=&i;
    int *temp;
    printf("addresss in bushra before : %d\n",bushra);

    temp=bushra;

    bushra=bushra+3;

    printf("addresss in bushra after : %d\n",bushra);

    printf("copied address : %d\n",temp); */
/* 
    int i = 250;
    int *bushra = &i;
    int *temp;


    temp = bushra;

    printf("addresss in bushra before : %d\n", bushra);

    bushra = bushra + 3;

    printf("addresss in bushra after : %d\n", bushra);
    printf("copied address : %d\n", temp);

    printf("pointre substraction: %d -%d = %d\n", bushra, temp, bushra + temp); */

}