#include<stdio.h>
#include<string.h>
void main(){
    char greet1[30]="i am rakesh";
    // printf("greet1 is :%s",greet1);

    /* char *ptr=strchr(greet1,'k');
    printf("\nptr is :%s",ptr); */

    /* printf("enter your greet1 :");
    fgets(greet1,30,stdin);
    scanf("%20[^\n]",name);
    printf("your greet1 is :%s",greet1);
    printf("length is :%d\n",strlen(greet1));

    char greet2[30];
    strcpy(greet2,greet1);
    printf("greet2 is :%s",greet2);

    strcat(greet2," and i am girl");
    printf("greet2 is :%s",greet2);

    int result=strcmp(greet1,greet2);

    printf("result is :%d",result); */

    int a=10;
    int *ptr = &a;
    printf("value of a is :%d\n",ptr);
    printf("value of a is :%d",*ptr); 