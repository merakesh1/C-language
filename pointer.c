#include<stdio.h>

void main(){
    //declaration or creation of pointer

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
    
    int arr[]={11,13,17,19,23};
    int *ptr=arr;
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

    int i;
    for(i=0;i<5;i++){
        *(ptr+i)=2*i;
    }

    for(i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
}