#include <stdio.h>

/* void display(int); //creation or declaration

void display(int count){ //initialization or definition(Parameters or variables)
    int i;
    for (i = 0; i < count; i++){
        printf("%d\n", i);
    }
} */

int add(int a, int b){
    return a+b;
}

void sub(int a, int b){
    printf("diff is: %d\n",a-b);
    return;
}

void main(){
    printf("start\n");
    // display(5); //calling or execution call (arguments or values)
    int num1, num2;
    printf("Enter a value1: ");
    scanf("%d",&num1);
    printf("Enter a value2: ");
    scanf("%d",&num2);
    int sum=add(num1,num2);
    printf("sum is :%d\n",sum);
    sub(num1,num2);
    printf("end\n");
    return;
}

