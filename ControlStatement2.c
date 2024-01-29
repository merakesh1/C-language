#include<stdio.h>

void main(){
    int i;
    int arr[]={10,20,30,40,50};
    /* for(initialization;condition;increment/decrement){
    } */

    /* for(i=0;i<5;i++){
        printf("i value is %d\n",i);
        printf("-----------------------------------------\n");
    }
    printf("i value is %d\n",i); */

    /* i=0;
    while(i<5){
        printf("i value is %d\n",i);
        printf("-----------------------------------------\n");
        i=i+5;
    } */

    /* for (i=5;i>=0;i--){
        if(i%2==0){
            printf("%d and it is even\n",i);
        }
        else{
            printf("%d and it is odd\n",i);
        }
        printf("-----------------------------------------\n");
    } */

    /* for(i=0;i<10;i++){
        printf("i value is %d\n",i);
        if(i==5){
            printf("i is equal to 5\n");
            break;
        }
    }
    printf("-----------------------------------------\n");
    printf("i value is %d\n",i); */

    /* for(i=10;i>0;i--){
        if(i%2!=0){
            continue;
        }
        printf("i value is %d\n",i);
    } */

    /* for(i=0;i<5;i++){
        printf("element inside %d is arr[%d] is %d\n",i,i,arr[i]);
    } */

    /* int sum=0;
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("sum is %d\n",sum);  */
    /* int searchValue=50;
    int flag=0;
    for(i=0;i<5;i++){
        if(searchValue==arr[i]){
            printf("element found at index: %d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("element not found\n");
    } */
    /* int j;
    for(i=5;i>0;i--){
        for(j=0;j<i;j++){
            printf(" * ");
        }
        printf("\n");
    } */

    i=0;
    do
    {
        printf("i value is %d\n",i);
        i++;
    } while (i<5);
    
}