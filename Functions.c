#include<stdio.h>

void nameCreator(char[],char[]); //creation or declaration
void dobCreator(int,int,int);

void nameCreator(char firstname[],char lastname[]) //initialization or definition(Parameters or variables)
{
    //1000 lines of code
    printf("%s %s\n",firstname,lastname);
}

void dobCreator(int day,int month,int year)
{
    //1000 lines of code
    printf("%d-%d-%d\n",day,month,year);
}

void display(int count){
    count=20;
    printf("count is :%d\n",count);
}

void display1(int arr[]){
    arr[0]=10;
    printf("arr[0] is :%d\n",arr[0]);    
}


void main(){
    nameCreator("Rakesh","Kumar"); //calling or execution call (arguments or values)
    dobCreator(10,10,2000);

    nameCreator("bushra","fatima");
    dobCreator(11,11,2001);

    int count =1;
    printf("count in main before:%d\n",count);
    display(1);
    printf("count in main after :%d\n",count);

    int arr[]={10,20,30,40,50};

    printf("arr[0] in main before :%d\n",arr[0]);
    display1(arr);
    printf("arr[0] in main after :%d\n",arr[0]);

    display(10);
}