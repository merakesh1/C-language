#include<stdio.h>

void display(int []);

void display(int arr[]){
    printf("%d",arr+1);
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    display(arr);

    int a=10;
    display(a);
}