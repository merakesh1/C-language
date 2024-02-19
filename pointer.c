#include <stdio.h>
#include <stddef.h>

void display(int num){
    printf("value of num is :%d\n",num);
}

// creation - without body
/* void display(int);

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
} */

void main()
{
    /* int a=10;
    int *ptr;
    ptr=&a; */

    /* int *ptr=1098765; */

    /*     int (*nani)(int, int, int);

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

        printf("sizeof union is :%d\n",sizeof(union bushra1)); */

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

        printf("pointer substraction: %d -%d = %d\n", bushra, temp, bushra + temp); */

    /* int arr[]={23,4,5,2,28,90,3,4,2,4,5,2,6,8,5,4,98,28};

    int length=sizeof(arr)/sizeof(arr[0]);

    int i;

    for (i = 0; i < length; i++){
        printf("%d\n",arr[i]);
    } */

    /* int a=10;
    int b=20;

    //constant pointer
    int *const ptr=&a;

    // ptr=&a;

    printf("value of ptr before change is :%d\n",ptr);

    // ptr=&b;

    printf("value of ptr after change is :%d\n",ptr);

    //pointer to constant

    const int *ptr1;

    ptr1=&a;

    // *ptr1=30;

    printf("value of ptr1 is :%d\n",ptr1);

    ptr1=&b;

    printf("value of ptr1 is :%d\n",ptr1); */

    /* int *const ptr;

    const int *ptr1;

    const int *const ptr2;

    type of pointer *const name of pointer;

    const type of pointer *name of pointer;

    const type of pointer *const name of pointer; */

    /*  int a=10;
     int b=20;
     const int *const ptr=&a;

     printf("value of ptr is :%d\n",ptr);

     printf("value of a is :%d\n",*ptr);

     *ptr=30;

     ptr=&b; */

    /* int a=10;
    char b;
    int * ptr;
    ptr=&a;
    int *temp;

    char letter='a';
    char *ptr1=&letter;
    temp=ptr;

    printf("value of temp is :%d\n",temp); */

    // void *name of pointer;

    /* int a=10;

    int *ptr;

    float *ptr1;

    void *ptr2;

    // ptr=ptr1;

    ptr=&a;

    // *ptr=30;

    ptr2=ptr;

    int *newPointer=(int *)ptr2;

    printf("value of a is :%d\n",a);

    *newPointer=30;

    printf("value of a is :%d\n",a);
 */

    /* void *ptr = NULL; //void pointer
    int *p  = NULL;// integer pointer
    char *cp = NULL;//character pointer
    float *fp = NULL;//float pointer

    printf("size of int pointer value = %d\n\n",p);

    int a=10;
    p=&a;

    printf("value of int pointer = %d\n\n",p);

    //size of void pointer
    printf("size of void pointer = %d\n\n",sizeof(ptr));
    //size of integer pointer
    printf("size of integer pointer = %d\n\n",sizeof(p));
    //size of character pointer
    printf("size of character pointer = %d\n\n",sizeof(cp));
    //size of float pointer
    printf("size of float pointer = %d\n\n",sizeof(fp));   */

    /* int a = 90;
    void *ptr;
    ptr = &a;
    /* int *copy=(int *)ptr;
    *copy=40;
    //(*(int *)ptr)=40;
    printf("value of a : %d\n", a);
    printf("Value which is pointed by ptr pointer : %d", ptr); */

    /* float a[4] = {6.1, 2.3, 7.8, 9.0};
    void *ptr;
    ptr = a;
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%f\n", *((float *)ptr));
        // printf("%f\n", *ptr);
        ptr = ptr + 4;
    } */

    /* int a = 56;    // initialization of a integer variable 'a'.
    float b = 4.5; // initialization of a float variable 'b'.
    char c = 'k';  // initialization of a char variable 'c'.
    void *ptr;     // declaration of void pointer.
    // assigning the address of variable 'a'.
    ptr = &a;
    printf("value of 'a' is : %d", *((int *)ptr));
    printf("pointer value is : %d", ptr);
    // assigning the address of variable 'b'.
    ptr = &b;
    printf("\nvalue of 'b' is : %f", *((float *)ptr));
    printf("pointer value is : %d", ptr);

    // assigning the address of variable 'c'.
    ptr = &c;
    printf("\nvalue of 'c' is : %c", *((char *)ptr));
    printf("pointer value is : %d", ptr); */

    /* int a=10;
    int *ptr=(int *)0; //0th memory location
    float *ptr1=(float *)0;
    char *ptr2=(char *)0;
    char *ptr4='\0';
    int *ptr5=NULL;
    printf("value of ptr is :%d\n",ptr);
    printf("value of ptr1 is :%d\n",ptr1);
    printf("value of ptr2 is :%d\n",ptr2);
    printf("value of ptr4 is :%d\n",ptr4);
    printf("value of ptr5 is :%d\n",ptr5); */

    /* int *ptr=NULL;
    printf("value of ptr is :%d\n",ptr); */

    int *ptr=NULL;

    int a=10;
    ptr=&a;

    if(ptr!=NULL){
        printf("value of a is :%d\n",*ptr);
    }
    else{
        printf("Ptr -> NULL");
    }

    printf("address of main function:%d\n",&main);
    printf("address of display function:%d\n",&display);

}