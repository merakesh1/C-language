//malloc - memory allocation
//calloc - continuous memory allocation
//free - memory deallocation
//realloc - memory reallocation

//malloc - it allocates single container with respective size in heap memory
//calloc - it allocates multiple containers with respective size in heap memory
//free - it deallocates allocated memory from heap memory
//realloc - it is used to change the size of allocated memory

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr1;
    ptr1=(int*)malloc(1000*sizeof(int));
    printf("%d",*ptr1);

    int n,i,*ptr,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    // int arr[n];

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("could not allocate memory");
        return;
    }

    for(i=0;i<n;i++){
        printf("\nEnter element arr[%d]: ",i);
        scanf("%d",ptr+i);
    }

    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }

    printf("avg = %d",sum/n);

    free(ptr);

}